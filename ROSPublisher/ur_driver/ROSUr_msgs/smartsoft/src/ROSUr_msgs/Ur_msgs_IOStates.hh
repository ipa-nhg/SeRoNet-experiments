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
#ifndef ROSUR_MSGS_UR_MSGS_IOSTATES_H_
#define ROSUR_MSGS_UR_MSGS_IOSTATES_H_

#include "ROSUr_msgs/Ur_msgs_IOStatesCore.hh"

namespace ROSUr_msgs {
		
class Ur_msgs_IOStates : public Ur_msgs_IOStatesCore {
	public:
		// default constructors
		Ur_msgs_IOStates();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Ur_msgs_IOStates(const std::vector<ROSUr_msgs::Ur_msgs_Digital> &digital_in_states, const std::vector<ROSUr_msgs::Ur_msgs_Digital> &digital_out_states, const std::vector<ROSUr_msgs::Ur_msgs_Digital> &flag_states, const std::vector<ROSUr_msgs::Ur_msgs_Analog> &analog_in_states, const std::vector<ROSUr_msgs::Ur_msgs_Analog> &analog_out_states);
		
		Ur_msgs_IOStates(const Ur_msgs_IOStatesCore &ur_msgs_IOStates);
		Ur_msgs_IOStates(const DATATYPE &ur_msgs_IOStates);
		virtual ~Ur_msgs_IOStates();
		
		// use framework specific getter and setter methods from core (base) class
		using Ur_msgs_IOStatesCore::get;
		using Ur_msgs_IOStatesCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Ur_msgs_IOStates &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSUr_msgs */
#endif /* ROSUR_MSGS_UR_MSGS_IOSTATES_H_ */
