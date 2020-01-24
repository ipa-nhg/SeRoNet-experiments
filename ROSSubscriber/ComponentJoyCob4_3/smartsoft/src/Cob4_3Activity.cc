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
#include "Cob4_3Activity.hh"
#include "ComponentJoyCob4_3.hh"

#include <iostream>

Cob4_3Activity::Cob4_3Activity(SmartACE::SmartComponent *comp) 
:	Cob4_3ActivityCore(comp)
{
	std::cout << "constructor Cob4_3Activity\n";
}
Cob4_3Activity::~Cob4_3Activity() 
{
	std::cout << "destructor Cob4_3Activity\n";
}


void Cob4_3Activity::on_joyIn(const CommBasicObjects::CommJoystick &input)
{
	// upcall triggered from InputPort joyIn
	// - use a local mutex here, because this upcal is called asynchroneously from outside of this task
	// - do not use longer blocking calls here since this upcall blocks the InputPort joyIn
	// - if you need to implement a long-running procedure, do so within the on_execute() method and in
	//   there, use the method joyInGetUpdate(input) to get a copy of the input object
	//std::unique_lock<std::mutex> lck (mtx);
	//ComponentJoyCob4_3RosPortCallbacks comp;
	if (input.getButtons()!=0 or input.get_x()!=0 or input.get_y()!=0 or input.get_y2()!=0){
		sensor_msgs::Joy joy_msg;
		joy_msg.axes.resize(6);
		joy_msg.axes[0]=-input.get_x();
		joy_msg.axes[1]=-input.get_y();
		joy_msg.axes[3]=-input.get_x2();
		joy_msg.axes[4]=input.get_y2();

		joy_msg.buttons.resize(17);
		for(size_t btn=0; btn < 8; ++btn) {
			joy_msg.buttons[btn]=input.get_button(btn);
		}

		COMP -> rosPorts -> publish_ros_msgs(joy_msg);
	}

}

int Cob4_3Activity::on_entry()
{
	// do initialization procedures here, which are called once, each time the task is started
	// it is possible to return != 0 (e.g. when initialization fails) then the task is not executed further
	return 0;
}
int Cob4_3Activity::on_execute()
{
	// this method is called from an outside loop,
	// hence, NEVER use an infinite loop (like "while(1)") here inside!!!
	// also do not use blocking calls which do not result from smartsoft kernel
	
	// to get the incoming data, use this methods:
	Smart::StatusCode status;
	CommBasicObjects::CommJoystick joyInObject;
	status = this->joyInGetUpdate(joyInObject);
	if(status != Smart::SMART_OK) {
		std::cerr << status << std::endl;
		// return 0;
	} else {
		std::cout << "received: " << joyInObject << std::endl;
	}

	std::cout << "Hello from Cob4_3Activity " << std::endl;

	// it is possible to return != 0 (e.g. when the task detects errors), then the outer loop breaks and the task stops
	return 0;
}
int Cob4_3Activity::on_exit()
{
	// use this method to clean-up resources which are initialized in on_entry() and needs to be freed before the on_execute() can be called again
	return 0;
}
