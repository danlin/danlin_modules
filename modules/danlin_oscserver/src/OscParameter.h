/*
  ==============================================================================

    OscParameter.h
    Created: 22 Jan 2015 11:11:46pm
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#ifndef OSCPARAMETER_H_INCLUDED
#define OSCPARAMETER_H_INCLUDED

#include <regex>

class OscParameter;

class OscParameterMessage : public Message {
public:
    OscParameterMessage(OscParameter *parameter)
    : parameter(parameter) {}
    ~OscParameterMessage() {}
    OscParameter *parameter;
};

class OscParameterListener : public MessageListener {
    virtual void handleOscParameterMessage(OscParameter *parameter) = 0;
    
    void handleMessage(const Message &message) override {
        const OscParameterMessage &receivedOscParameterMessage = dynamic_cast<const OscParameterMessage&>(message);
        handleOscParameterMessage(receivedOscParameterMessage.parameter);
    }
};

class OscParameter : public ChangeBroadcaster {
public:
    OscParameter(String address)
    	: oscAddress(address)
    {

    }
    virtual ~OscParameter()
    {
        removeAllChangeListeners();
        listeners.clear();
    }

    bool addressMatch(String regex)
    {
    	return std::regex_match(oscAddress.toRawUTF8(), std::regex(regex.toRawUTF8()));
    }
    String getAddress() const
    {
    	return oscAddress;
    }

    virtual var getValue() {
        return oscValue;
    }
    virtual void setValue(var value) {
        if (!oscValue.equals(value)) {
            oscValue = value;
            sendChangeMessage();
            sendParameterMessage();
        }
    }
    
    void sendParameterMessage() {
        for (int index = 0; index <= listeners.size(); index++) {
            listeners[index]->postMessage(new OscParameterMessage(this));
        }
    }
    
    void addOscParameterListener (OscParameterListener* const listenerToAdd)
    {
        jassert (listenerToAdd != nullptr);
        
        if (listenerToAdd != nullptr)
            listeners.addIfNotAlreadyThere (listenerToAdd);
    }
    
    void removeOscParameterListener (OscParameterListener* const listenerToRemove)
    {
        jassert (listenerToRemove != nullptr);
        
        listeners.removeFirstMatchingValue (listenerToRemove);
    }
    virtual var getDefaultValue() = 0;
    virtual void appendOscMessageToStream(osc::OutboundPacketStream &stream) = 0;
private:
    Array<OscParameterListener*> listeners;
    var oscValue;
    String oscAddress;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(OscParameter)
};

#endif  // OSCPARAMETER_H_INCLUDED
