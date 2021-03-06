//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------

#ifndef STRINGSERVICEQUERY_PORTFACTORYINTERFACE_HH_
#define STRINGSERVICEQUERY_PORTFACTORYINTERFACE_HH_

// include communication objects
#include <ROSRos_core/Std_srvs_SetBoolRequest.hh>
#include <ROSRos_core/Std_srvs_SetBoolRequestACE.hh>
#include <ROSRos_core/Std_srvs_SetBoolResponse.hh>
#include <ROSRos_core/Std_srvs_SetBoolResponseACE.hh>

#include <chrono>

// include component's main class
#include "StringServiceQuery.hh"

// forward declaration
class StringServiceQuery;

class StringServiceQueryPortFactoryInterface {
public:
	StringServiceQueryPortFactoryInterface() { };
	virtual ~StringServiceQueryPortFactoryInterface() { };

	virtual void initialize(StringServiceQuery *component, int argc, char* argv[]) = 0;
	virtual int onStartup() = 0;

	
	virtual Smart::IQueryServerPattern<ROSRos_core::Std_srvs_SetBoolRequest, ROSRos_core::Std_srvs_SetBoolResponse> * createSetBoolQueryServiceAnsw(const std::string &serviceName) = 0;

	virtual int onShutdown(const std::chrono::steady_clock::duration &timeoutTime=std::chrono::seconds(2)) = 0;
	virtual void destroy() = 0;
};

#endif /* STRINGSERVICEQUERY_PORTFACTORYINTERFACE_HH_ */
