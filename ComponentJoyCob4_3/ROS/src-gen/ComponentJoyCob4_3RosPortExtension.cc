//--------------------------------------------------------------------------
// This file is generated by the SeRoNet Tooling. The SeRoNet Tooling is 
// developed by the SeRoNet Project consortium: 
// http://www.seronet-projekt.de
//
// The ROS Mixed-Port Component is developed by:
// Service Robotics Research Center of Ulm University of Applied Sciences
// Fraunhofer Institute for Manufacturing Engineering and Automation IPA
//
// This code-generator uses infrastructure of the SmartMDSD Toolchain on
// which the SeRoNet Tooling is based on.
//
// CAUTION: 
// This software is a preview for the purpose of technology demonstration. 
// It is experimental and comes with no support. Use at your own risk.
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------

#include "ComponentJoyCob4_3RosPortExtension.hh"

// statically create a global PlainOpcUaComponentJoyCob4_3Extension instance
static ComponentJoyCob4_3RosPortExtension ros_port_extension;

ComponentJoyCob4_3RosPortExtension::ComponentJoyCob4_3RosPortExtension()
:	ComponentJoyCob4_3Extension("ComponentJoyCob4_3RosPortExtension")
{
	nh = 0;
	callbacksPtr = 0;
}

ComponentJoyCob4_3RosPortExtension::~ComponentJoyCob4_3RosPortExtension()
{  }

void ComponentJoyCob4_3RosPortExtension::loadParameters(const SmartACE::SmartIniParameter &parameter)
{  }

void ComponentJoyCob4_3RosPortExtension::initialize(ComponentJoyCob4_3 *component, int argc, char* argv[])
{
	ros::init(argc, argv, "ComponentJoyCob4_3", ros::init_options::NoSigintHandler);
	nh = new ros::NodeHandle();
	
	callbacksPtr = new ComponentJoyCob4_3RosPortCallbacks();
	
	component->rosPorts = this;
	
	_joy_pub = nh->advertise<sensor_msgs::Joy>("/joy", 10);

}

void ComponentJoyCob4_3RosPortBaseClass::publish_ros_msgs (const sensor_msgs::Joy &msg){
	_joy_pub.publish(msg);
}

int ComponentJoyCob4_3RosPortExtension::onStartup()
{
	return startExtensionThread();
}

int ComponentJoyCob4_3RosPortExtension::extensionExecution()
{
	ros::spin();
	return 0;
}

int ComponentJoyCob4_3RosPortExtension::onShutdown(const std::chrono::steady_clock::duration &timeoutTime)
{
	ros::shutdown();
	return stopExtensionThread(timeoutTime);
}

void ComponentJoyCob4_3RosPortExtension::destroy()
{
	delete nh;
	delete callbacksPtr;
}