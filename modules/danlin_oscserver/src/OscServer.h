/*
  ==============================================================================

    OscServer.h
    Created: 30 Nov 2014 10:28:31am
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#ifndef OSCSERVER_H_INCLUDED
#define OSCSERVER_H_INCLUDED

#include <sstream>
using namespace std;

class OscMessage : public Message {
public:
  OscMessage(osc::ReceivedPacket packet, bool isOutgoing = false)
      : packet(packet), isOutgoing(isOutgoing), isIncomming(isOutgoing) {}
  ~OscMessage() {}
  osc::ReceivedPacket packet;
  bool isOutgoing;
  bool isIncomming;
};

class OscMessageListener : public MessageListener {
  virtual void handleOscMessage(osc::ReceivedPacket packet) = 0;

  void handleMessage(const Message &message) override {
    const OscMessage &receivedOscMessage =
        dynamic_cast<const OscMessage &>(message);
    handleOscMessage(receivedOscMessage.packet);
  }
};

class OscMessageLogger : public MessageListener {
  virtual void logOscMessage(String message) = 0;

  void handleMessage(const Message &message) override {
    const OscMessage &oscMessage = dynamic_cast<const OscMessage &>(message);
    std::ostringstream stream;
    stream << oscMessage.packet;
    if (oscMessage.isIncomming) {
      logOscMessage("<-" + String(stream.str()));
    } else {
      logOscMessage("-> " + String(stream.str()));
    }
  }
};

class OscServer : public Thread {
  static const int bufferSize = 4098;

public:
  OscServer(OscMessageListener *listener);
  ~OscServer();

  // UDP Setup
  void setLocalPortNumber(int portNumber);
  int getLocalPortNumber();
  const String &getLocalHostname();

  void setRemoteHostname(String hostname);
  String getRemoteHostname();
  void setRemotePortNumber(int portNumber);
  int getRemotePortNumber();

  void setBridgeHostname(String hostname);
  String getBridgeHostname();
  void setBridgePortNumber(int portNumber);
  int getBridgePortNumber();
  bool isBridgeEnabled();
  void setBridgeEnabled(bool enable);

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
  ScopedPointer<DatagramSocket> receiveDatagramSocket;

  String remoteHostname;
  int remotePortNumber;
  ScopedPointer<DatagramSocket> remoteDatagramSocket;
  bool remoteChanged;

  String bridgeHostname;
  int bridgePortNumber;
  ScopedPointer<DatagramSocket> bridgeDatagramSocket;
  bool bridgeChanged;
  bool bridgeEnabled;
  bool routePackage(MemoryBlock packet);

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(OscServer)
};

#endif // OSCSERVER_H_INCLUDED