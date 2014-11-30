/*
  ==============================================================================

    OscServer.cpp
    Created: 30 Nov 2014 10:28:31am
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#include "OscServer.h"

using namespace danlin;

OscServer::OscServer(OscMessageListener *listener)
    : Thread("OscServer"), listener(listener) {}

OscServer::~OscServer() {
  if (serverDatagramSocket) {
    serverDatagramSocket->close();
  }
  if (clientDatagramSocket) {
    clientDatagramSocket->close();
  }
  stopThread(100);
  serverDatagramSocket = nullptr;
  clientDatagramSocket = nullptr;
}

void OscServer::setLocalPortNumber(int portNumber) {
  localPortNumber = portNumber;
}

int OscServer::getLocalPortNumber() { return localPortNumber; }

void OscServer::setRemoteHostname(juce::String hostname) {
  remoteHostname = hostname;
}

juce::String OscServer::getRemoteHostname() { return remoteHostname; }

void OscServer::setRemotePortNumber(int portNumber) {
  remotePortNumber = portNumber;
}

int OscServer::getRemotePortNumber() { return remotePortNumber; }

bool OscServer::isConnected() { return clientDatagramSocket->isConnected(); }

bool OscServer::connect() {
  clientDatagramSocket = new juce::DatagramSocket(0);
  return clientDatagramSocket->connect(remoteHostname, remotePortNumber);
}

void OscServer::listen() { startThread(1); }

void OscServer::run() {
  serverDatagramSocket = new juce::DatagramSocket(localPortNumber);

  juce::MemoryBlock buffer(bufferSize, true);
  while (!threadShouldExit()) {
    if (serverDatagramSocket->waitUntilReady(true, 100)) {
      int size =
          serverDatagramSocket->read(buffer.getData(), buffer.getSize(), false);
      osc::ReceivedPacket packet((const char *)buffer.getData(), size);
      if (listener != nullptr)
        listener->postMessage(new ReceivedOscMessage(packet));
    }
  }
}

bool OscServer::sendMessage(osc::OutboundPacketStream stream) {
  if (clientDatagramSocket->isConnected()) {
    if (clientDatagramSocket->write(stream.Data(), stream.Size()) > 0) {
      return true;
    }
  }
  return false;
}