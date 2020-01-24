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
#ifndef _COMPONENTROSUR_DRIVER_HH
#define _COMPONENTROSUR_DRIVER_HH

#include <map>
#include <iostream>
#include "aceSmartSoft.hh"
#include "smartQueryServerTaskTrigger_T.h"
#include "ComponentRosur_driverCore.hh"

#include "ComponentRosur_driverPortFactoryInterface.hh"
#include "ComponentRosur_driverExtension.hh"

// forward declarations
class ComponentRosur_driverPortFactoryInterface;
class ComponentRosur_driverExtension;

// includes for PlainOpcUaComponentRosur_driverExtension
// include plain OPC UA device clients
// include plain OPC UA status servers

// includes for ComponentRosur_driverROSExtension
#include "ComponentRosur_driverRosPortBaseClass.hh"


// include communication objects
#include <ROSCommon_msgs/Sensor_msgs_JointState.hh>
#include <ROSCommon_msgs/Sensor_msgs_JointStateACE.hh>

// include tasks
#include "Ur_driverActivity.hh"
// include UpcallManagers

// include input-handler
// include input-handler

// include handler
#include "CompHandler.hh"


#include "SmartStateChangeHandler.hh"

#define COMP ComponentRosur_driver::instance()

class ComponentRosur_driver : public ComponentRosur_driverCore {
private:
	static ComponentRosur_driver *_componentRosur_driver;
	
	// constructor
	ComponentRosur_driver();
	
	// copy-constructor
	ComponentRosur_driver(const ComponentRosur_driver& cc);
	
	// destructor
	~ComponentRosur_driver() { };
	
	// load parameter from ini file
	void loadParameter(int argc, char* argv[]);
	
	// instantiate comp-handler
	CompHandler compHandler;
	
	// helper method that maps a string-name to an according TaskTriggerSubject
	Smart::TaskTriggerSubject* getInputTaskTriggerFromString(const std::string &client);
	
	// internal map storing the different port-creation factories (that internally map to specific middleware implementations)
	std::map<std::string, ComponentRosur_driverPortFactoryInterface*> portFactoryRegistry;
	
	// internal map storing various extensions of this component class
	std::map<std::string, ComponentRosur_driverExtension*> componentExtensionRegistry;
	
public:
	
	// define tasks
	Smart::TaskTriggerSubject* ur_driverActivityTrigger;
	Ur_driverActivity *ur_driverActivity;
	
	// define input-ports
	
	// define request-ports
	
	// define input-handler
	
	// define output-ports
	Smart::IPushServerPattern<ROSCommon_msgs::Sensor_msgs_JointState> *joint_statesOut;
	
	// define answer-ports
	
	// define request-handlers
	
	// definitions of PlainOpcUaComponentRosur_driverExtension
	
	// definitions of ComponentRosur_driverROSExtension
	ComponentRosur_driverRosPortBaseClass *rosPorts;
	
	
	// define default slave ports
	SmartACE::StateSlave *stateSlave;
	SmartStateChangeHandler *stateChangeHandler;
	SmartACE::WiringSlave *wiringSlave;
	
	
	/// this method is used to register different PortFactory classes (one for each supported middleware framework)
	void addPortFactory(const std::string &name, ComponentRosur_driverPortFactoryInterface *portFactory);
	
	SmartACE::SmartComponent* getComponentImpl();
	
	/// this method is used to register different component-extension classes
	void addExtension(ComponentRosur_driverExtension *extension);
	
	/// this method allows to access the registered component-extensions (automatically converting to the actuall implementation type)
	template <typename T>
	T* getExtension(const std::string &name) {
		auto it = componentExtensionRegistry.find(name);
		if(it != componentExtensionRegistry.end()) {
			return dynamic_cast<T*>(it->second);
		}
		return 0;
	}
	
	/// initialize component's internal members
	void init(int argc, char *argv[]);
	
	/// execute the component's infrastructure
	void run();
	
	/// clean-up component's resources
	void fini();
	
	/// call this method to set the overall component into the Alive state (i.e. component is then ready to operate)
	void setStartupFinished();
	
	/// connect all component's client ports
	Smart::StatusCode connectAndStartAllServices();
	
	/// start all assocuated Activities
	void startAllTasks();
	
	/// start all associated timers
	void startAllTimers();
	

	// return singleton instance
	static ComponentRosur_driver* instance()
	{
		if(_componentRosur_driver == 0) {
			_componentRosur_driver = new ComponentRosur_driver();
		}
		return _componentRosur_driver;
	}
	
	static void deleteInstance() {
		if(_componentRosur_driver != 0) {
			delete _componentRosur_driver;
		}
	}
	
	// connections parameter
	struct connections_struct
	{
		// component struct
		struct component_struct
		{
			// the name of the component
			std::string name;
			std::string initialComponentMode;
			std::string defaultScheduler;
			bool useLogger;
		} component;
		
		//--- task parameter ---
		struct Ur_driverActivity_struct {
			double minActFreq;
			double maxActFreq;
			std::string trigger;
			// only one of the following two params is 
			// actually used at run-time according 
			// to the system config model
			double periodicActFreq;
			// or
			std::string inPortRef;
			int prescale;
			// scheduling parameters
			std::string scheduler;
			int priority;
			int cpuAffinity;
		} ur_driverActivity;
		
		//--- upcall parameter ---
		
		//--- server port parameter ---
		struct Joint_statesOut_struct {
				std::string serviceName;
				std::string roboticMiddleware;
		} joint_statesOut;
	
		//--- client port parameter ---
		
		// -- parameters for PlainOpcUaComponentRosur_driverExtension
		
		// -- parameters for ComponentRosur_driverROSExtension
		
	} connections;
};
#endif