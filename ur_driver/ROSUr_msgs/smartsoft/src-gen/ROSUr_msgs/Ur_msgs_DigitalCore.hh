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
#ifndef ROSUR_MSGS_UR_MSGS_DIGITAL_CORE_H_
#define ROSUR_MSGS_UR_MSGS_DIGITAL_CORE_H_

#include "ROSUr_msgs/Ur_msgs_DigitalData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSUr_msgs {
	
class Ur_msgs_DigitalCore {
protected:
	// data structure
	ROSUr_msgsIDL::Ur_msgs_Digital idl_Ur_msgs_Digital;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSUr_msgsIDL::Ur_msgs_Digital DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Ur_msgs_DigitalCore();
	Ur_msgs_DigitalCore(const DATATYPE &data);
	// default destructor
	virtual ~Ur_msgs_DigitalCore();
	
	const DATATYPE& get() const { return idl_Ur_msgs_Digital; }
	operator const DATATYPE&() const { return idl_Ur_msgs_Digital; }
	DATATYPE& set() { return idl_Ur_msgs_Digital; }

	static inline std::string identifier(void) { return "ROSUr_msgs::Ur_msgs_Digital"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Pin
	inline unsigned char getPin() const { return idl_Ur_msgs_Digital.pin; }
	inline Ur_msgs_DigitalCore& setPin(const unsigned char &pin) { idl_Ur_msgs_Digital.pin = pin; return *this; }
	
	// getter and setter for element State
	inline bool getState() const { return idl_Ur_msgs_Digital.state; }
	inline Ur_msgs_DigitalCore& setState(const bool &state) { idl_Ur_msgs_Digital.state = state; return *this; }
};

} /* namespace ROSUr_msgs */
#endif /* ROSUR_MSGS_UR_MSGS_DIGITAL_CORE_H_ */
