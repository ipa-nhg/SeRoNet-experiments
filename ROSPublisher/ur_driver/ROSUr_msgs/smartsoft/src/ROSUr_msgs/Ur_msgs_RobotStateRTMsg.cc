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

#include "ROSUr_msgs/Ur_msgs_RobotStateRTMsg.hh"

using namespace ROSUr_msgs;

Ur_msgs_RobotStateRTMsg::Ur_msgs_RobotStateRTMsg()
:	Ur_msgs_RobotStateRTMsgCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Ur_msgs_RobotStateRTMsg::Ur_msgs_RobotStateRTMsg(const double &time, const std::vector<double> &q_target, const std::vector<double> &qd_target, const std::vector<double> &qdd_target, const std::vector<double> &i_target, const std::vector<double> &m_target, const std::vector<double> &q_actual, const std::vector<double> &qd_actual, const std::vector<double> &i_actual, const std::vector<double> &tool_acc_values, const std::vector<double> &tcp_force, const std::vector<double> &tool_vector, const std::vector<double> &tcp_speed, const double &digital_input_bits, const std::vector<double> &motor_temperatures, const double &controller_timer, const double &test_value, const double &robot_mode, const std::vector<double> &joint_modes)
:	Ur_msgs_RobotStateRTMsgCore() // base constructor sets default values as defined in the model
{
	setTime(time);
	setQ_target(q_target);
	setQd_target(qd_target);
	setQdd_target(qdd_target);
	setI_target(i_target);
	setM_target(m_target);
	setQ_actual(q_actual);
	setQd_actual(qd_actual);
	setI_actual(i_actual);
	setTool_acc_values(tool_acc_values);
	setTcp_force(tcp_force);
	setTool_vector(tool_vector);
	setTcp_speed(tcp_speed);
	setDigital_input_bits(digital_input_bits);
	setMotor_temperatures(motor_temperatures);
	setController_timer(controller_timer);
	setTest_value(test_value);
	setRobot_mode(robot_mode);
	setJoint_modes(joint_modes);
}
 */

Ur_msgs_RobotStateRTMsg::Ur_msgs_RobotStateRTMsg(const Ur_msgs_RobotStateRTMsgCore &ur_msgs_RobotStateRTMsg)
:	Ur_msgs_RobotStateRTMsgCore(ur_msgs_RobotStateRTMsg)
{  }

Ur_msgs_RobotStateRTMsg::Ur_msgs_RobotStateRTMsg(const DATATYPE &ur_msgs_RobotStateRTMsg)
:	Ur_msgs_RobotStateRTMsgCore(ur_msgs_RobotStateRTMsg)
{  }

Ur_msgs_RobotStateRTMsg::~Ur_msgs_RobotStateRTMsg()
{  }
