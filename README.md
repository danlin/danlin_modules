# danlin_modules

[![Flattr this git repo](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=danlin&url=https://github.com/danlin/danlin_modules&title=danlin_modules&language=cpp&tags=github&category=software)

## Font Awesome 

Font Awesome Font Icon Module

You can use this Module in a graphics context to render vector like icons. 
Look at http://fortawesome.github.io/Font-Awesome/ for more details about Font Awesome.
There are Macros for the Icons. See this page http://fortawesome.github.io/Font-Awesome/icons/ and use the Uppercase names as icon Macros. 


```
void paint (Graphics& g) override {
	DrawIcon(0, 0, 32, FA_ALIGN_CENTER);
}
```

## Oscpack

Oscpack OSC Packing / Unpacking

Oscpack is simply a set of C++ classes for packing and unpacking OSC packets.

Look at http://www.rossbencina.com/code/oscpack for more details about Oscpack

## Simple OscServer

Simple Osc Server based on Oscpack and Juce Datagram Sockets

```
class DemoServer : public OscMessageListener
{
public:
    DemoServer ()
    {
        oscServer = new OscServer (this);
        // listen on port 
        oscServer->setLocalPortNumber (8000);
        // start listening
        oscServer->listen ();
        // set remote hostname (we use our self)
        oscServer->setRemoteHostname ("127.0.0.1");
        // set remote port (send to listening port)
        oscServer->setRemotePortNumber (8000);
    }
    ~DemoServer ()
    {
        oscServer = nullptr;
    }
    // called by osc server on incomming osc messsages
    void handleOscMessage (osc::ReceivedPacket packet)
    {
        // just dump the message
        std::cout << packet << std::endl;
    }
    // send out a osc message
    void sendOscMessage ()
    {
        static const int bufferSize = 1024;
        String address = "/test/";
        char buffer[bufferSize];
        osc::OutboundPacketStream oscMessage (buffer, bufferSize);
        oscMessage << osc::BeginMessage (address.toRawUTF8 ()) << 0.0 << osc::EndMessage;
        oscServer->sendMessage (oscMessage);
    }
private:
    ScopedPointer<OscServer> oscServer;
};
```
