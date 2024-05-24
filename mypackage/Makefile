BUILD_HOME:=$(shell pwd)/..
include $(XDAQ_ROOT)/build/mfAutoconf.rules
include $(XDAQ_ROOT)/build/mfDefs.$(XDAQ_OS)

Project=myproject
Package=mypackage

Sources= SimpleWeb.cc HelloWorld.cc 

DynamicLibrary=mypackage

UserCCFlags = -g -std=c++11

include $(XDAQ_ROOT)/build/Makefile.rules
include $(XDAQ_ROOT)/build/mfRPM.rules 
