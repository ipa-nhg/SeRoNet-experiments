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
#ifndef ROSUR_MSGS_UR_MSGS_ROBOTSTATERTMSG_DATA_H_
#define ROSUR_MSGS_UR_MSGS_ROBOTSTATERTMSG_DATA_H_


#include <vector>

namespace ROSUr_msgsIDL 
{
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_q_target_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_qd_target_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_qdd_target_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_i_target_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_m_target_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_q_actual_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_qd_actual_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_i_actual_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_tool_acc_values_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_tcp_force_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_tool_vector_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_tcp_speed_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_motor_temperatures_type;
	typedef std::vector<double> Ur_msgs_RobotStateRTMsg_joint_modes_type;
	struct Ur_msgs_RobotStateRTMsg
	{
		double time;
		Ur_msgs_RobotStateRTMsg_q_target_type q_target;
		Ur_msgs_RobotStateRTMsg_qd_target_type qd_target;
		Ur_msgs_RobotStateRTMsg_qdd_target_type qdd_target;
		Ur_msgs_RobotStateRTMsg_i_target_type i_target;
		Ur_msgs_RobotStateRTMsg_m_target_type m_target;
		Ur_msgs_RobotStateRTMsg_q_actual_type q_actual;
		Ur_msgs_RobotStateRTMsg_qd_actual_type qd_actual;
		Ur_msgs_RobotStateRTMsg_i_actual_type i_actual;
		Ur_msgs_RobotStateRTMsg_tool_acc_values_type tool_acc_values;
		Ur_msgs_RobotStateRTMsg_tcp_force_type tcp_force;
		Ur_msgs_RobotStateRTMsg_tool_vector_type tool_vector;
		Ur_msgs_RobotStateRTMsg_tcp_speed_type tcp_speed;
		double digital_input_bits;
		Ur_msgs_RobotStateRTMsg_motor_temperatures_type motor_temperatures;
		double controller_timer;
		double test_value;
		double robot_mode;
		Ur_msgs_RobotStateRTMsg_joint_modes_type joint_modes;
  	};
};

#endif /* ROSUR_MSGS_UR_MSGS_ROBOTSTATERTMSG_DATA_H_ */
