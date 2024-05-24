#ifndef _mypackage_HelloWorld_h_
#define _mypackage_HelloWorld_h_
#include "xdaq/Application.h"
namespace mypackage {
class HelloWorld: public xdaq::Application
{
 public:
 XDAQ_INSTANTIATOR();
 HelloWorld(xdaq::ApplicationStub * s);


};
}
#endif
