/*
  ==============================================================================

    OscProcessor.cpp
    Created: 22 Jan 2015 10:56:59pm
    Author:  Daniel Lindenfelser

  ==============================================================================
*/

#include "OscProcessor.h"

OscProcessor::OscProcessor()
    : oscServer(this)
{
}

OscProcessor::~OscProcessor()
{
    managedOscParameters.clear();
}

void OscProcessor::handleOscMessage(osc::ReceivedPacket packet)
{
    parseOscPacket(packet);
}

void OscProcessor::changeListenerCallback(ChangeBroadcaster* source)
{
    OscParameter* parameter = static_cast<OscParameter*>(source);
    if (parameter) {
        char buffer[1024];
        osc::OutboundPacketStream packet(buffer, 1024);
        parameter->appendOscMessageToStream(packet);
        oscServer.sendMessage(packet);
    }
}

void OscProcessor::addOscParameter(OscParameter* parameter, bool internal)
{
    if (parameter) {
        managedOscParameters.addIfNotAlreadyThere(parameter);
        if (!internal) {
            //parameter->addChangeListener(this);
        }
    }
}

void OscProcessor::removeOscParameter(OscParameter* p)
{
    managedOscParameters.removeObject(p);
}

void OscProcessor::removeOscParameter(String regex)
{
    Array<OscParameter*> toRemove;
    for (int index = 0; index < managedOscParameters.size(); index++) {
        if (managedOscParameters[index]->addressMatch(regex)) {
            toRemove.add(managedOscParameters[index]);
        }
    }
    for (int index = 0; index < toRemove.size(); index++) {
        managedOscParameters.removeObject(toRemove[index]);
    }
}

Array<OscParameter*> OscProcessor::getAllOscParameter(String regex)
{
    Array<OscParameter*> parameters;
    for (int index = 0; index < managedOscParameters.size(); index++) {
        if (managedOscParameters[index]->addressMatch(regex)) {
            parameters.add(managedOscParameters[index]);
        }
    }
    return parameters;
}

OscParameter* OscProcessor::getOscParameter(String address)
{
    for (int index = 0; index < managedOscParameters.size(); index++) {
        if (managedOscParameters[index]->getAddress() == address)
        {
            return managedOscParameters[index];
        }
    }
    return nullptr;
}

Array<OscParameter*> OscProcessor::getAllOscParameter()
{
    Array<OscParameter*> parameters;
    for (int index = 0; index < managedOscParameters.size(); index++) {
        parameters.add(managedOscParameters[index]);
    }
    return parameters;
}

void OscProcessor::dumpOscParameters() {
    for (int index = 0; index < managedOscParameters.size(); index++) {
        char buffer[1024];
        osc::OutboundPacketStream packet(buffer, 1024);
        managedOscParameters[index]->appendOscMessageToStream(packet);
        oscServer.sendMessage(packet);
    }
}

var OscProcessor::getOscParameterValue(String address)
{
    for (int index = 0; index < managedOscParameters.size(); index++) {
        if (managedOscParameters[index]->getAddress() == address) {
            return var(managedOscParameters[index]->getValue());
        }
    }
    return var::null;
}

void OscProcessor::setOscParameterValue(String address, var value)
{
    for (int index = 0; index < managedOscParameters.size(); index++) {
        if (managedOscParameters[index]->getAddress() == address) {
            managedOscParameters[index]->setValue(value);
            return;
        }
    }
}

void OscProcessor::addOscParameterListener(OscParameterListener* listener, OscParameter* parameter)
{
    parameter->addOscParameterListener(listener);
}

void OscProcessor::addOscParameterListener(OscParameterListener* listener, String regex)
{
    auto parameters = getAllOscParameter(regex);
    for (int index = 0; index < parameters.size(); index++) {
        parameters[index]->addOscParameterListener(listener);
    }
}

void OscProcessor::removeOscParameterListener(OscParameterListener* listener)
{
    auto parameters = getAllOscParameter();
    for (int index = 0; index < parameters.size(); index++) {
        parameters[index]->removeOscParameterListener(listener);
    }
}

void OscProcessor::parseOscPacket(osc::ReceivedPacket packet)
{
    if (packet.Size()) {
        if (packet.IsBundle()) {
            osc::ReceivedBundle bundle(packet);
            parseOscBundle(bundle);
        }
        else {
            osc::ReceivedMessage message(packet);
            parseOscMessage(message);
        }
    }
}

void OscProcessor::parseOscMessage(osc::ReceivedMessage message)
{
    String address(message.AddressPattern());
    OscParameter* parameter = getOscParameter(address);
    if (parameter) {
        osc::ReceivedMessage::const_iterator arg = message.ArgumentsBegin();
        while (arg != message.ArgumentsEnd())
        {
            if (arg->IsFloat()) {
                parameter->setValue(var(arg->AsFloat()));
            }
            else if (arg->IsBool()) {
                parameter->setValue(var(arg->IsBool()));
            }
            else if (arg->IsInt32()) {
                parameter->setValue(var(arg->AsInt32()));
            }
            else if (arg->IsChar()) {
                parameter->setValue(var(String(arg->AsChar())));
            }
            else if (arg->IsDouble()) {
                parameter->setValue(var(arg->AsDouble()));
            }
            else if (arg->IsString()) {
                parameter->setValue(var(String(arg->AsString())));
            }
            else if (arg->IsSymbol()) {
                parameter->setValue(var(String(arg->IsSymbol())));
            }
            arg++;
        }
    }
}

void OscProcessor::parseOscBundle(osc::ReceivedBundle bundle)
{
    osc::ReceivedBundleElementIterator initiator = bundle.ElementsBegin();
    for (int i = 0; i < bundle.ElementCount(); i++) {
        initiator++;
        if (initiator->IsBundle()) {
            osc::ReceivedBundle bundle(*initiator);
            parseOscBundle(bundle);
        }
        else {
            osc::ReceivedMessage message(*initiator);
            parseOscMessage(message);
        }
    }
}

OscServer* OscProcessor::getOscServer()
{
    return &oscServer;
}
