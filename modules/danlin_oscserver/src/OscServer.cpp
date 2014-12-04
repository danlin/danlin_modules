/*
  ==============================================================================

    OscServer.cpp
    Created: 30 Nov 2014 10:28:31am
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#include "OscServer.h"

using namespace danlin;

OscServer::OscServer(OscMessageListener* listener)
    : juce::Thread("OscServer")
    , listener(listener)
{
    receivePortNumber = 8050;
    remoteHostname =  "localhost";
    remotePortNumber = 9050;
    remoteChanged = false;
}

OscServer::~OscServer()
{
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

void OscServer::setLocalPortNumber(int portNumber)
{
    receivePortNumber = portNumber;
}

int OscServer::getLocalPortNumber()
{
    return receivePortNumber;
}

const juce::String& OscServer::getLocalHostname() {
    if (receiveDatagramSocket) {
        receiveDatagramSocket->getHostName();
    }
    return juce::String::empty;
}

void OscServer::setRemoteHostname(juce::String hostname)
{
    remoteHostname = hostname;
    remoteChanged = true;
}

juce::String OscServer::getRemoteHostname()
{
    return remoteHostname;
}

void OscServer::setRemotePortNumber(int portNumber)
{
    remotePortNumber = portNumber;
    remoteChanged = true;
}

int OscServer::getRemotePortNumber()
{
    return remotePortNumber;
}

void OscServer::listen()
{
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

void OscServer::run()
{
    std::cout << "osc server initialize" << std::endl;
    receiveDatagramSocket = new juce::DatagramSocket(receivePortNumber);

    juce::MemoryBlock buffer(bufferSize, true);
    while (! threadShouldExit()) {
        if (receiveDatagramSocket->getPort()) {
            if (! receiveDatagramSocket->bindToPort(receivePortNumber)) {
                std::cout << "error while bind to port" << std::endl;
                return;
            }
        }
        if (receiveDatagramSocket->waitUntilReady(true, 100)) {
            int size = receiveDatagramSocket->read(buffer.getData(), buffer.getSize(), false);
            if (threadShouldExit()) {
                std::cout << "osc server shutdown" << std::endl;
                return;
            }
            try {
                osc::ReceivedPacket packet((const char*)buffer.getData(), size);
                if (listener != nullptr) {
                    juce::MessageManagerLock mml (Thread::getCurrentThread());
                    if (! mml.lockWasGained()) {
                        std::cout << "another thread is trying to kill us!" << std::endl;
                        return;
                    }
                    listener->postMessage(new ReceivedOscMessage(packet));
                }
            }
            catch (osc::Exception& e) {
                std::cout << "error while parsing packet" << std::endl;
            }
        }
    }
    std::cout << "osc server shutdown" << std::endl;
}

bool OscServer::sendMessage(osc::OutboundPacketStream stream)
{
    if (!remoteDatagramSocket || remoteChanged) {
        remoteChanged = false;
        remoteDatagramSocket = new juce::DatagramSocket(0);
        remoteDatagramSocket->connect(remoteHostname, remotePortNumber);
    }

    if (remoteDatagramSocket->waitUntilReady(false, 100)) {
        if (remoteDatagramSocket->write(stream.Data(), stream.Size()) > 0) {
            return true;
        }
    }

    return false;
}