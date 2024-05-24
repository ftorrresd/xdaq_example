#include "mypackage/HelloWorld.h"

XDAQ_INSTANTIATOR_IMPL(mypackage::HelloWorld)
mypackage::HelloWorld::HelloWorld(xdaq::ApplicationStub * s): xdaq::Application(s)
{
 LOG4CPLUS_INFO(this->getApplicationLogger(), "Hello World!");
} 
