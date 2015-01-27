/*
  ==============================================================================

    OscServer.cpp
    Created: 30 Nov 2014 10:28:31am
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#include "OscServer.h"

OscServer::OscServer(OscMessageListener *listener)
    : Thread("OscServer"), listener(listener) {
  logger = nullptr;
  receivePortNumber = 8050;
  remoteHostname = "localhost";
  remotePortNumber = 9050;
  remoteChanged = true;
  bridgeHostname = "localhost";
  bridgePortNumber = 8000;
  bridgeChanged = true;
}

OscServer::~OscServer() {
  signalThreadShouldExit();
  if (receiveDatagramSocket) {
    receiveDatagramSocket->close();
  }
  if (remoteDatagramSocket) {
    remoteDatagramSocket->close();
  }
  stopThread(500);
  receiveDatagramSocket = nullptr;
  remoteDatagramSocket = nullptr;
}

void OscServer::setLocalPortNumber(int portNumber) {
  receivePortNumber = portNumber;
}

int OscServer::getLocalPortNumber() { return receivePortNumber; }

const String &OscServer::getLocalHostname() {
  if (receiveDatagramSocket) {
    receiveDatagramSocket->getHostName();
  }
  return String::empty;
}

void OscServer::setRemoteHostname(String hostname) {
  remoteHostname = hostname;
  remoteChanged = true;
}

String OscServer::getRemoteHostname() { return remoteHostname; }

void OscServer::setRemotePortNumber(int portNumber) {
  remotePortNumber = portNumber;
  remoteChanged = true;
}

int OscServer::getRemotePortNumber() { return bridgePortNumber; }

void OscServer::setBridgeHostname(String hostname) {
    bridgeHostname = hostname;
    bridgeChanged = true;
}

String OscServer::getBridgeHostname() { return bridgeHostname; }

void OscServer::setBridgePortNumber(int portNumber) {
    bridgePortNumber = portNumber;
    bridgeChanged = true;
}

int OscServer::getBridgePortNumber() { return bridgePortNumber; }

bool OscServer::isBridgeEnabled() { return bridgeEnabled; }
void OscServer::setBridgeEnabled(bool enable) { bridgeEnabled = enable; }

void OscServer::listen() {
  if (isThreadRunning()) {
    signalThreadShouldExit();
    if (receiveDatagramSocket) {
      receiveDatagramSocket->close();
    }
    stopThread(500);
    receiveDatagramSocket = nullptr;
  }
  startThread(1);
}

void OscServer::stopListening() {
  if (isThreadRunning()) {
    signalThreadShouldExit();
    if (receiveDatagramSocket) {
      receiveDatagramSocket->close();
    }
    stopThread(500);
    receiveDatagramSocket = nullptr;
  }
}

void OscServer::run() {
  receiveDatagramSocket = new DatagramSocket(receivePortNumber);

  MemoryBlock buffer(bufferSize, true);
  while (!threadShouldExit()) {
    if (receiveDatagramSocket->getPort()) {
      if (!receiveDatagramSocket->bindToPort(receivePortNumber)) {
        return;
      }
    }
    if (receiveDatagramSocket->waitUntilReady(true, 100)) {
      int size = receiveDatagramSocket->read(buffer.getData(), buffer.getSize(),
                                             false);
      if (threadShouldExit()) {
        return;
      }
      try {
        osc::ReceivedPacket packet((const char *)buffer.getData(), size);
        if (listener != nullptr) {
          MessageManagerLock mml(Thread::getCurrentThread());
          if (!mml.lockWasGained()) {
            return;
          }
          if (logger != nullptr) {
            logger->postMessage(new OscMessage(packet));
          }
          listener->postMessage(new OscMessage(packet));
          routePackage(buffer);
        }
      } catch (osc::Exception &e) {
        std::cout << "error while parsing packet" << std::endl;
      }
    }
  }
}

bool OscServer::routePackage(MemoryBlock packet) {
    if (bridgeEnabled) {
        if (!bridgeDatagramSocket || bridgeChanged) {
            bridgeChanged = false;
            bridgeDatagramSocket = new DatagramSocket(0);
            bridgeDatagramSocket->connect(bridgeHostname, bridgePortNumber);
        }

        if (bridgeDatagramSocket->waitUntilReady(false, 100)) {
            if (bridgeDatagramSocket->write(packet.getData(), packet.getSize()) > 0) {
                return true;
            }
        }
    }
    return false;
}

bool OscServer::sendMessage(osc::OutboundPacketStream stream) {
  if (!stream.IsReady()) {
    return false;
  }

  if (!remoteDatagramSocket || remoteChanged) {
    remoteChanged = false;
    remoteDatagramSocket = new DatagramSocket(0);
    remoteDatagramSocket->connect(remoteHostname, remotePortNumber);
  }

  if (remoteDatagramSocket->waitUntilReady(false, 100)) {
    if (remoteDatagramSocket->write(stream.Data(), stream.Size()) > 0) {
      return true;
    }
  }

  return false;
}