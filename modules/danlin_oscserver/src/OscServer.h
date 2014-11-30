/*
  ==============================================================================

    OscServer.h
    Created: 30 Nov 2014 10:28:31am
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#ifndef OSCSERVER_H_INCLUDED
#define OSCSERVER_H_INCLUDED

class ReceivedOscMessage : public juce::Message {
public:
  ReceivedOscMessage(osc::ReceivedPacket packet) : packet(packet) {}
  ~ReceivedOscMessage() {}
  osc::ReceivedPacket packet;
};

class OscMessageListener : public juce::MessageListener {
  virtual void handleOscMessage(osc::ReceivedPacket packet) = 0;

  void handleMessage(const juce::Message &message) override {
    const ReceivedOscMessage &receivedOscMessage =
        dynamic_cast<const ReceivedOscMessage &>(message);
    handleOscMessage(receivedOscMessage.packet);
  }
};

class OscServer : public juce::Thread {
  static const int bufferSize = 4098;

public:
  OscServer(OscMessageListener *listener);
  ~OscServer();
  void setLocalPortNumber(int portNumber);
  int getLocalPortNumber();
  void setRemoteHostname(juce::String hostname);
  juce::String getRemoteHostname();
  void setRemotePortNumber(int portNumber);
  int getRemotePortNumber();

  bool isConnected();
  bool connect();
  void listen();
  void run();

  bool sendMessage(osc::OutboundPacketStream stream);

private:
  OscMessageListener *listener;
  int localPortNumber = 8050;
  juce::String remoteHostname = "localhost";
  int remotePortNumber = 9050;
  juce::ScopedPointer<juce::DatagramSocket> serverDatagramSocket;
  juce::ScopedPointer<juce::DatagramSocket> clientDatagramSocket;
};

#endif // OSCSERVER_H_INCLUDED