#ifndef _mypackage_version_h_
#define _mypackage_version_h_
#include "config/PackageInfo.h"
#define MYPACKAGE_VERSION_MAJOR 1
#define MYPACKAGE_VERSION_MINOR 1
#define MYPACKAGE_VERSION_PATCH 0
#undef MYPACKAGE_PREVIOUS_VERSIONS
#define MYPACKAGE_VERSION_CODE PACKAGE_VERSION_CODE(MYPACKAGE_VERSION_MAJOR,
MYPACKAGE_VERSION_MINOR, MYPACKAGE_VERSION_PATCH)
#ifndef MYPACKAGE_PREVIOUS_VERSIONS
#define MYPACKAGE_FULL_VERSION_LIST PACKAGE_VERSION_STRING(MYPACKAGE_VERSION_MAJOR,
MYPACKAGE_VERSION_MINOR, MYPACKAGE_VERSION_PATCH)
#else
#define MYPACKAGE_FULL_VERSION_LIST MYPACKAGE_PREVIOUS_VERSIONS ","
PACKAGE_VERSION_STRING(MYPACKAGE_VERSION_MAJOR, MYPACKAGE_VERSION_MINOR,
MYPACKAGE_VERSION_PATCH)
#endif
namespace mypackage
{
 const std::string project = "myproject";
 const std::string package = "mypackage";
 const std::string versions = MYPACKAGE_FULL_VERSION_LIST;
 const std::string summary = "Hello World Example";
 const std::string description = "A simple XDAQ application";
 const std::string authors = "Roland and Luciano";
 const std::string link = "http://xdaq.web.cern.ch";
 config::PackageInfo getPackageInfo(); 
 void checkPackageDependencies();
 std::set<std::string, std::less<std::string>> getPackageDependencies();
}
#endif
