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
#include "ROSUr_msgs/Ur_msgs_ToolDataMsgCore.hh"

// serialization/deserialization operators
//#include "ROSUr_msgs/Ur_msgs_ToolDataMsgACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace ROSUr_msgs 
{
	const char* Ur_msgs_ToolDataMsgCore::getCompiledHash()
	{
		return ROSUr_msgsIDL::REPO_HASH;
	}
	
	void Ur_msgs_ToolDataMsgCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Ur_msgs_ToolDataMsgCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Ur_msgs_ToolDataMsgCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Ur_msgs_ToolDataMsgCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.analog_input_range2);
		boost::hash_combine(seed, data.analog_input_range3);
		boost::hash_combine(seed, data.analog_input2);
		boost::hash_combine(seed, data.analog_input3);
		boost::hash_combine(seed, data.tool_voltage_48v);
		boost::hash_combine(seed, data.tool_output_voltage);
		boost::hash_combine(seed, data.tool_current);
		boost::hash_combine(seed, data.tool_temperature);
		boost::hash_combine(seed, data.tool_mode);
		
		return seed;
	}
	#endif
	
	// default constructor
	Ur_msgs_ToolDataMsgCore::Ur_msgs_ToolDataMsgCore()
	:	idl_Ur_msgs_ToolDataMsg()
	{  
		setAnalog_input_range2(0);
		setAnalog_input_range3(0);
		setAnalog_input2(0.0);
		setAnalog_input3(0.0);
		setTool_voltage_48v(0.0);
		setTool_output_voltage(0);
		setTool_current(0.0);
		setTool_temperature(0.0);
		setTool_mode(0);
	}
	
	Ur_msgs_ToolDataMsgCore::Ur_msgs_ToolDataMsgCore(const DATATYPE &data)
	:	idl_Ur_msgs_ToolDataMsg(data)
	{  }

	Ur_msgs_ToolDataMsgCore::~Ur_msgs_ToolDataMsgCore()
	{  }
	
	void Ur_msgs_ToolDataMsgCore::to_ostream(std::ostream &os) const
	{
	  os << "Ur_msgs_ToolDataMsg(";
	  os << getAnalog_input_range2() << " ";
	  os << getAnalog_input_range3() << " ";
	  os << getAnalog_input2() << " ";
	  os << getAnalog_input3() << " ";
	  os << getTool_voltage_48v() << " ";
	  os << getTool_output_voltage() << " ";
	  os << getTool_current() << " ";
	  os << getTool_temperature() << " ";
	  os << getTool_mode() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Ur_msgs_ToolDataMsgCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<analog_input_range2>" << getAnalog_input_range2() << "</analog_input_range2>";
		os << indent << "<analog_input_range3>" << getAnalog_input_range3() << "</analog_input_range3>";
		os << indent << "<analog_input2>" << getAnalog_input2() << "</analog_input2>";
		os << indent << "<analog_input3>" << getAnalog_input3() << "</analog_input3>";
		os << indent << "<tool_voltage_48v>" << getTool_voltage_48v() << "</tool_voltage_48v>";
		os << indent << "<tool_output_voltage>" << getTool_output_voltage() << "</tool_output_voltage>";
		os << indent << "<tool_current>" << getTool_current() << "</tool_current>";
		os << indent << "<tool_temperature>" << getTool_temperature() << "</tool_temperature>";
		os << indent << "<tool_mode>" << getTool_mode() << "</tool_mode>";
	}
	
	// restore from xml stream
	void Ur_msgs_ToolDataMsgCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_analog_input_range2("<analog_input_range2>");
		static const Smart::KnuthMorrisPratt kmp_analog_input_range3("<analog_input_range3>");
		static const Smart::KnuthMorrisPratt kmp_analog_input2("<analog_input2>");
		static const Smart::KnuthMorrisPratt kmp_analog_input3("<analog_input3>");
		static const Smart::KnuthMorrisPratt kmp_tool_voltage_48v("<tool_voltage_48v>");
		static const Smart::KnuthMorrisPratt kmp_tool_output_voltage("<tool_output_voltage>");
		static const Smart::KnuthMorrisPratt kmp_tool_current("<tool_current>");
		static const Smart::KnuthMorrisPratt kmp_tool_temperature("<tool_temperature>");
		static const Smart::KnuthMorrisPratt kmp_tool_mode("<tool_mode>");
		
		if(kmp_analog_input_range2.search(is)) {
			char analog_input_range2Item;
			is >> analog_input_range2Item;
			setAnalog_input_range2(analog_input_range2Item);
		}
		if(kmp_analog_input_range3.search(is)) {
			char analog_input_range3Item;
			is >> analog_input_range3Item;
			setAnalog_input_range3(analog_input_range3Item);
		}
		if(kmp_analog_input2.search(is)) {
			double analog_input2Item;
			is >> analog_input2Item;
			setAnalog_input2(analog_input2Item);
		}
		if(kmp_analog_input3.search(is)) {
			double analog_input3Item;
			is >> analog_input3Item;
			setAnalog_input3(analog_input3Item);
		}
		if(kmp_tool_voltage_48v.search(is)) {
			float tool_voltage_48vItem;
			is >> tool_voltage_48vItem;
			setTool_voltage_48v(tool_voltage_48vItem);
		}
		if(kmp_tool_output_voltage.search(is)) {
			unsigned char tool_output_voltageItem;
			is >> tool_output_voltageItem;
			setTool_output_voltage(tool_output_voltageItem);
		}
		if(kmp_tool_current.search(is)) {
			float tool_currentItem;
			is >> tool_currentItem;
			setTool_current(tool_currentItem);
		}
		if(kmp_tool_temperature.search(is)) {
			float tool_temperatureItem;
			is >> tool_temperatureItem;
			setTool_temperature(tool_temperatureItem);
		}
		if(kmp_tool_mode.search(is)) {
			unsigned char tool_modeItem;
			is >> tool_modeItem;
			setTool_mode(tool_modeItem);
		}
	}
	
	/*
	void Ur_msgs_ToolDataMsgCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		ROSUr_msgsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(ROSUr_msgsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see Ur_msgs_ToolDataMsgACE.hh)
		cdr << idl_Ur_msgs_ToolDataMsg;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Ur_msgs_ToolDataMsg);
		cdr << data_hash;
		// std::cout << "Ur_msgs_ToolDataMsgCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Ur_msgs_ToolDataMsgCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		ROSUr_msgsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see Ur_msgs_ToolDataMsgACE.hh)
		cdr >> idl_Ur_msgs_ToolDataMsg;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Ur_msgs_ToolDataMsg);
		assert(data_hash == own_hash);
		// std::cout << "Ur_msgs_ToolDataMsgCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSUr_msgs */
