/*
  ==============================================================================

    OscServer.h
    Created: 30 Nov 2014 10:28:31am
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#ifndef OSCSERVER_H_INCLUDED
#define OSCSERVER_H_INCLUDED

using namespace std;

#include <sstream>

class OscMessage : public juce::Message {
public:
  OscMessage(osc::ReceivedPacket packet, bool isOutgoing = false)
      : packet(packet), isOutgoing(isOutgoing), isIncomming(isOutgoing) {}
  ~OscMessage() {}
  osc::ReceivedPacket packet;
  bool isOutgoing;
  bool isIncomming;
};

class OscMessageListener : public juce::MessageListener {
  virtual void handleOscMessage(osc::ReceivedPacket packet) = 0;

  void handleMessage(const juce::Message &message) override {
    const OscMessage &receivedOscMessage =
        dynamic_cast<const OscMessage &>(message);
    handleOscMessage(receivedOscMessage.packet);
  }
};

class OscMessageLogger : public juce::MessageListener {
  virtual void logOscMessage(juce::String message) = 0;

  void handleMessage(const juce::Message &message) override {
    const OscMessage &oscMessage = dynamic_cast<const OscMessage &>(message);
    // std::cout << oscMessage.packet << std::endl;
    std::ostringstream stream;
    stream << oscMessage.packet;
    if (oscMessage.isIncomming) {
      logOscMessage("<-" + juce::String(stream.str()));
    } else {
      logOscMessage("-> " + juce::String(stream.str()));
    }
  }
};

class OscServer : public juce::Thread {
  static const int bufferSize = 4098;

public:
  OscServer(OscMessageListener *listener);
  ~OscServer();

  // UDP Setup
  void setLocalPortNumber(int portNumber);
  int getLocalPortNumber();
  const juce::String &getLocalHostname();

  void setRemoteHostname(juce::String hostname);
  juce::String getRemoteHostname();
  void setRemotePortNumber(int portNumber);
  int getRemotePortNumber();

  // UDP Server
  void listen();
  void stopListening();

  // Server Thread
  void run();

  // UDP Sender
  bool sendMessage(osc::OutboundPacketStream stream);

  // Logger
  void setLogger(OscMessageLogger *newLogger) { logger = newLogger; }
  void removeLogger() { logger = nullptr; }

private:
  OscMessageListener *listener;
  OscMessageLogger *logger;

  int receivePortNumber;
  juce::ScopedPointer<juce::DatagramSocket> receiveDatagramSocket;

  juce::String remoteHostname;
  int remotePortNumber;
  juce::ScopedPointer<juce::DatagramSocket> remoteDatagramSocket;
  bool remoteChanged;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(OscServer)
};

#endif // OSCSERVER_H_INCLUDED