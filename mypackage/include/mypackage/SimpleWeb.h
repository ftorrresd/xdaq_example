#ifndef _mypackage_SimpleWeb_h
#define _mypackage_SimpleWeb_h
#include "xdaq/Application.h"
#include "xgi/framework/UIManager.h" 

#include "xgi/framework/Method.h"
#include "cgicc/HTMLClasses.h"
namespace mypackage {
class SimpleWeb: public xdaq::Application, public xgi::framework::UIManager {
 public:

 XDAQ_INSTANTIATOR();

 SimpleWeb(xdaq::ApplicationStub * s) throw (xdaq::exception::Exception);
 void Default(xgi::Input * in, xgi::Output * out ) throw (xgi::exception::Exception);
 void dispatch(xgi::Input * in, xgi::Output * out ) throw (xgi::exception::Exception);


 bool is_ready = false;

};
}
#endif
