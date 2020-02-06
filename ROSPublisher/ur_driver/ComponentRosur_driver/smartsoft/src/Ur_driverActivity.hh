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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef _UR_DRIVERACTIVITY_HH
#define _UR_DRIVERACTIVITY_HH
#include <mutex>

#include "Ur_driverActivityCore.hh"
#include <sensor_msgs/JointState.h>

class Ur_driverActivity  : public Ur_driverActivityCore
{
private:
public:
	Ur_driverActivity(SmartACE::SmartComponent *comp);
	virtual ~Ur_driverActivity();
	std::mutex mtx;
	ROSCommon_msgs::Sensor_msgs_JointState joint_statesOutDataObject;
	virtual int on_entry();
	virtual int on_execute();
	virtual int on_exit();
	void joint_states_sub_cb (const sensor_msgs::JointState::ConstPtr &msg);
};

#endif
