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

#ifndef COMPONENTROSBASEINIT_OPC_UA_BACKEND_PORTFACTORY_HH_
#define COMPONENTROSBASEINIT_OPC_UA_BACKEND_PORTFACTORY_HH_

// include the main component-definition class
#include "ComponentROSBaseInitPortFactoryInterface.hh"

#include <thread>
#include <chrono>

// include SeRoNetSDK library
#include <SeRoNetSDK/SeRoNet/Utils/Task.hpp>
#include <SeRoNetSDK/SeRoNet/Utils/Component.hpp>

class ComponentROSBaseInitOpcUaBackendPortFactory: public ComponentROSBaseInitPortFactoryInterface
{
private:
	// internal component instance
	SeRoNet::Utils::Component *componentImpl;
	
	// component thread
	std::thread component_thread;
	
	// internal component thread method
	int task_execution();
public:
	ComponentROSBaseInitOpcUaBackendPortFactory();
	virtual ~ComponentROSBaseInitOpcUaBackendPortFactory();

	virtual void initialize(ComponentROSBaseInit *component, int argc, char* argv[]) override;
	virtual int onStartup() override;

	
	virtual Smart::IQueryServerPattern<ROSRos_core::Std_srvs_TriggerRequest, ROSRos_core::Std_srvs_TriggerResponse> * createTriggerQueryServiceAnsw(const std::string &serviceName) override;
	
	virtual int onShutdown(const std::chrono::steady_clock::duration &timeoutTime=std::chrono::seconds(2)) override;
	virtual void destroy() override;
};

#endif /* COMPONENTROSBASEINIT_SERONET_SDK_PORTFACTORY_HH_ */
