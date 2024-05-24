#include "mypackage/SimpleWeb.h"
XDAQ_INSTANTIATOR_IMPL(mypackage::SimpleWeb)

mypackage::SimpleWeb::SimpleWeb(xdaq::ApplicationStub * s)
 throw (xdaq::exception::Exception): xdaq::Application(s), xgi::framework::UIManager(this)
{
 xgi::framework::deferredbind(this, this, &SimpleWeb::Default, "Default");
 xgi::framework::deferredbind(this, this, &SimpleWeb::dispatch, "dispatch");
}

void mypackage::SimpleWeb::Default(xgi::Input * in, xgi::Output * out )
 throw (xgi::exception::Exception)
{
 *out << cgicc::HTMLDoctype(cgicc::HTMLDoctype::eStrict) << std::endl;
 *out << cgicc::html().set("lang", "en").set("dir","ltr") << std::endl;
 *out << cgicc::title("Simple Web") << std::endl;
 *out << cgicc::a("Visit CERN website").set("href","http://cern.ch") << std::endl;
 std::string url = "/";
 url += getApplicationDescriptor()->getURN() + "/dispatch";

 *out << cgicc::a("swap state").set("href",url) << std::endl;
 *out << cgicc::p("is ready?") << std::endl;
 if (is_ready) {
	 *out << cgicc::p("yes") << std::endl;
 }
 else {
	 *out << cgicc::p("no") << std::endl;
 }

} 

void mypackage::SimpleWeb::dispatch(xgi::Input * in, xgi::Output * out )
 throw (xgi::exception::Exception)
{
 is_ready = !is_ready;

 Default(in, out);
} 
