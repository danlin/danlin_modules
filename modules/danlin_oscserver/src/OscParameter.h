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

class OscParameter : public ChangeBroadcaster {
public:
    OscParameter(String address)
    	: oscAddress(address)
    {

    }
    ~OscParameter()
    {
        removeAllChangeListeners();
    }

    bool addressMatch(String regex)
    {
    	return std::regex_match(oscAddress.toRawUTF8(), std::regex(regex.toRawUTF8()));
    }
    String getAddress() const
    {
    	return oscAddress;
    }

    virtual var getValue() = 0;
    virtual void setValue(var value) = 0;
    virtual var getDefaultValue() = 0;
    virtual void appendOscMessageToStream(osc::OutboundPacketStream stream) = 0;
private:
    String oscAddress;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(OscParameter)
};

#endif  // OSCPARAMETER_H_INCLUDED
