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
#ifndef ROSUR_MSGS_UR_MSGS_TOOLDATAMSG_CORE_H_
#define ROSUR_MSGS_UR_MSGS_TOOLDATAMSG_CORE_H_

#include "ROSUr_msgs/Ur_msgs_ToolDataMsgData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSUr_msgs {
	
class Ur_msgs_ToolDataMsgCore {
protected:
	// data structure
	ROSUr_msgsIDL::Ur_msgs_ToolDataMsg idl_Ur_msgs_ToolDataMsg;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSUr_msgsIDL::Ur_msgs_ToolDataMsg DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Ur_msgs_ToolDataMsgCore();
	Ur_msgs_ToolDataMsgCore(const DATATYPE &data);
	// default destructor
	virtual ~Ur_msgs_ToolDataMsgCore();
	
	const DATATYPE& get() const { return idl_Ur_msgs_ToolDataMsg; }
	operator const DATATYPE&() const { return idl_Ur_msgs_ToolDataMsg; }
	DATATYPE& set() { return idl_Ur_msgs_ToolDataMsg; }

	static inline std::string identifier(void) { return "ROSUr_msgs::Ur_msgs_ToolDataMsg"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Analog_input_range2
	inline char getAnalog_input_range2() const { return idl_Ur_msgs_ToolDataMsg.analog_input_range2; }
	inline Ur_msgs_ToolDataMsgCore& setAnalog_input_range2(const char &analog_input_range2) { idl_Ur_msgs_ToolDataMsg.analog_input_range2 = analog_input_range2; return *this; }
	
	// getter and setter for element Analog_input_range3
	inline char getAnalog_input_range3() const { return idl_Ur_msgs_ToolDataMsg.analog_input_range3; }
	inline Ur_msgs_ToolDataMsgCore& setAnalog_input_range3(const char &analog_input_range3) { idl_Ur_msgs_ToolDataMsg.analog_input_range3 = analog_input_range3; return *this; }
	
	// getter and setter for element Analog_input2
	inline double getAnalog_input2() const { return idl_Ur_msgs_ToolDataMsg.analog_input2; }
	inline Ur_msgs_ToolDataMsgCore& setAnalog_input2(const double &analog_input2) { idl_Ur_msgs_ToolDataMsg.analog_input2 = analog_input2; return *this; }
	
	// getter and setter for element Analog_input3
	inline double getAnalog_input3() const { return idl_Ur_msgs_ToolDataMsg.analog_input3; }
	inline Ur_msgs_ToolDataMsgCore& setAnalog_input3(const double &analog_input3) { idl_Ur_msgs_ToolDataMsg.analog_input3 = analog_input3; return *this; }
	
	// getter and setter for element Tool_voltage_48v
	inline float getTool_voltage_48v() const { return idl_Ur_msgs_ToolDataMsg.tool_voltage_48v; }
	inline Ur_msgs_ToolDataMsgCore& setTool_voltage_48v(const float &tool_voltage_48v) { idl_Ur_msgs_ToolDataMsg.tool_voltage_48v = tool_voltage_48v; return *this; }
	
	// getter and setter for element Tool_output_voltage
	inline unsigned char getTool_output_voltage() const { return idl_Ur_msgs_ToolDataMsg.tool_output_voltage; }
	inline Ur_msgs_ToolDataMsgCore& setTool_output_voltage(const unsigned char &tool_output_voltage) { idl_Ur_msgs_ToolDataMsg.tool_output_voltage = tool_output_voltage; return *this; }
	
	// getter and setter for element Tool_current
	inline float getTool_current() const { return idl_Ur_msgs_ToolDataMsg.tool_current; }
	inline Ur_msgs_ToolDataMsgCore& setTool_current(const float &tool_current) { idl_Ur_msgs_ToolDataMsg.tool_current = tool_current; return *this; }
	
	// getter and setter for element Tool_temperature
	inline float getTool_temperature() const { return idl_Ur_msgs_ToolDataMsg.tool_temperature; }
	inline Ur_msgs_ToolDataMsgCore& setTool_temperature(const float &tool_temperature) { idl_Ur_msgs_ToolDataMsg.tool_temperature = tool_temperature; return *this; }
	
	// getter and setter for element Tool_mode
	inline unsigned char getTool_mode() const { return idl_Ur_msgs_ToolDataMsg.tool_mode; }
	inline Ur_msgs_ToolDataMsgCore& setTool_mode(const unsigned char &tool_mode) { idl_Ur_msgs_ToolDataMsg.tool_mode = tool_mode; return *this; }
};

} /* namespace ROSUr_msgs */
#endif /* ROSUR_MSGS_UR_MSGS_TOOLDATAMSG_CORE_H_ */