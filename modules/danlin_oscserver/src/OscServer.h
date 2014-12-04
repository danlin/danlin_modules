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

  // UDP Setup
  void setLocalPortNumber(int portNumber);
  int getLocalPortNumber();
  const juce::String& getLocalHostname();

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
private:
  OscMessageListener *listener;

  int receivePortNumber;
  juce::ScopedPointer<juce::DatagramSocket> receiveDatagramSocket;

  juce::String remoteHostname;
  int remotePortNumber;
  juce::ScopedPointer<juce::DatagramSocket> remoteDatagramSocket;
  bool remoteChanged;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OscServer)
};

#endif // OSCSERVER_H_INCLUDED