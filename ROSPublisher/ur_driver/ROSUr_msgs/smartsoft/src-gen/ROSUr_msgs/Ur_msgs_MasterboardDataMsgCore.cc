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
#include "ROSUr_msgs/Ur_msgs_MasterboardDataMsgCore.hh"

// serialization/deserialization operators
//#include "ROSUr_msgs/Ur_msgs_MasterboardDataMsgACE.hh"

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
	const char* Ur_msgs_MasterboardDataMsgCore::getCompiledHash()
	{
		return ROSUr_msgsIDL::REPO_HASH;
	}
	
	void Ur_msgs_MasterboardDataMsgCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void Ur_msgs_MasterboardDataMsgCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Ur_msgs_MasterboardDataMsgCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t Ur_msgs_MasterboardDataMsgCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.digital_input_bits);
		boost::hash_combine(seed, data.digital_output_bits);
		boost::hash_combine(seed, data.analog_input_range0);
		boost::hash_combine(seed, data.analog_input_range1);
		boost::hash_combine(seed, data.analog_input0);
		boost::hash_combine(seed, data.analog_input1);
		boost::hash_combine(seed, data.analog_output_domain0);
		boost::hash_combine(seed, data.analog_output_domain1);
		boost::hash_combine(seed, data.analog_output0);
		boost::hash_combine(seed, data.analog_output1);
		boost::hash_combine(seed, data.masterboard_temperature);
		boost::hash_combine(seed, data.robot_voltage_48V);
		boost::hash_combine(seed, data.robot_current);
		boost::hash_combine(seed, data.master_io_current);
		boost::hash_combine(seed, data.master_safety_state);
		boost::hash_combine(seed, data.master_onoff_state);
		
		return seed;
	}
	#endif
	
	// default constructor
	Ur_msgs_MasterboardDataMsgCore::Ur_msgs_MasterboardDataMsgCore()
	:	idl_Ur_msgs_MasterboardDataMsg()
	{  
		setDigital_input_bits(0);
		setDigital_output_bits(0);
		setAnalog_input_range0(0);
		setAnalog_input_range1(0);
		setAnalog_input0(0.0);
		setAnalog_input1(0.0);
		setAnalog_output_domain0(0);
		setAnalog_output_domain1(0);
		setAnalog_output0(0.0);
		setAnalog_output1(0.0);
		setMasterboard_temperature(0.0);
		setRobot_voltage_48V(0.0);
		setRobot_current(0.0);
		setMaster_io_current(0.0);
		setMaster_safety_state(0);
		setMaster_onoff_state(0);
	}
	
	Ur_msgs_MasterboardDataMsgCore::Ur_msgs_MasterboardDataMsgCore(const DATATYPE &data)
	:	idl_Ur_msgs_MasterboardDataMsg(data)
	{  }

	Ur_msgs_MasterboardDataMsgCore::~Ur_msgs_MasterboardDataMsgCore()
	{  }
	
	void Ur_msgs_MasterboardDataMsgCore::to_ostream(std::ostream &os) const
	{
	  os << "Ur_msgs_MasterboardDataMsg(";
	  os << getDigital_input_bits() << " ";
	  os << getDigital_output_bits() << " ";
	  os << getAnalog_input_range0() << " ";
	  os << getAnalog_input_range1() << " ";
	  os << getAnalog_input0() << " ";
	  os << getAnalog_input1() << " ";
	  os << getAnalog_output_domain0() << " ";
	  os << getAnalog_output_domain1() << " ";
	  os << getAnalog_output0() << " ";
	  os << getAnalog_output1() << " ";
	  os << getMasterboard_temperature() << " ";
	  os << getRobot_voltage_48V() << " ";
	  os << getRobot_current() << " ";
	  os << getMaster_io_current() << " ";
	  os << getMaster_safety_state() << " ";
	  os << getMaster_onoff_state() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Ur_msgs_MasterboardDataMsgCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<digital_input_bits>" << getDigital_input_bits() << "</digital_input_bits>";
		os << indent << "<digital_output_bits>" << getDigital_output_bits() << "</digital_output_bits>";
		os << indent << "<analog_input_range0>" << getAnalog_input_range0() << "</analog_input_range0>";
		os << indent << "<analog_input_range1>" << getAnalog_input_range1() << "</analog_input_range1>";
		os << indent << "<analog_input0>" << getAnalog_input0() << "</analog_input0>";
		os << indent << "<analog_input1>" << getAnalog_input1() << "</analog_input1>";
		os << indent << "<analog_output_domain0>" << getAnalog_output_domain0() << "</analog_output_domain0>";
		os << indent << "<analog_output_domain1>" << getAnalog_output_domain1() << "</analog_output_domain1>";
		os << indent << "<analog_output0>" << getAnalog_output0() << "</analog_output0>";
		os << indent << "<analog_output1>" << getAnalog_output1() << "</analog_output1>";
		os << indent << "<masterboard_temperature>" << getMasterboard_temperature() << "</masterboard_temperature>";
		os << indent << "<robot_voltage_48V>" << getRobot_voltage_48V() << "</robot_voltage_48V>";
		os << indent << "<robot_current>" << getRobot_current() << "</robot_current>";
		os << indent << "<master_io_current>" << getMaster_io_current() << "</master_io_current>";
		os << indent << "<master_safety_state>" << getMaster_safety_state() << "</master_safety_state>";
		os << indent << "<master_onoff_state>" << getMaster_onoff_state() << "</master_onoff_state>";
	}
	
	// restore from xml stream
	void Ur_msgs_MasterboardDataMsgCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_digital_input_bits("<digital_input_bits>");
		static const Smart::KnuthMorrisPratt kmp_digital_output_bits("<digital_output_bits>");
		static const Smart::KnuthMorrisPratt kmp_analog_input_range0("<analog_input_range0>");
		static const Smart::KnuthMorrisPratt kmp_analog_input_range1("<analog_input_range1>");
		static const Smart::KnuthMorrisPratt kmp_analog_input0("<analog_input0>");
		static const Smart::KnuthMorrisPratt kmp_analog_input1("<analog_input1>");
		static const Smart::KnuthMorrisPratt kmp_analog_output_domain0("<analog_output_domain0>");
		static const Smart::KnuthMorrisPratt kmp_analog_output_domain1("<analog_output_domain1>");
		static const Smart::KnuthMorrisPratt kmp_analog_output0("<analog_output0>");
		static const Smart::KnuthMorrisPratt kmp_analog_output1("<analog_output1>");
		static const Smart::KnuthMorrisPratt kmp_masterboard_temperature("<masterboard_temperature>");
		static const Smart::KnuthMorrisPratt kmp_robot_voltage_48V("<robot_voltage_48V>");
		static const Smart::KnuthMorrisPratt kmp_robot_current("<robot_current>");
		static const Smart::KnuthMorrisPratt kmp_master_io_current("<master_io_current>");
		static const Smart::KnuthMorrisPratt kmp_master_safety_state("<master_safety_state>");
		static const Smart::KnuthMorrisPratt kmp_master_onoff_state("<master_onoff_state>");
		
		if(kmp_digital_input_bits.search(is)) {
			unsigned int digital_input_bitsItem;
			is >> digital_input_bitsItem;
			setDigital_input_bits(digital_input_bitsItem);
		}
		if(kmp_digital_output_bits.search(is)) {
			unsigned int digital_output_bitsItem;
			is >> digital_output_bitsItem;
			setDigital_output_bits(digital_output_bitsItem);
		}
		if(kmp_analog_input_range0.search(is)) {
			char analog_input_range0Item;
			is >> analog_input_range0Item;
			setAnalog_input_range0(analog_input_range0Item);
		}
		if(kmp_analog_input_range1.search(is)) {
			char analog_input_range1Item;
			is >> analog_input_range1Item;
			setAnalog_input_range1(analog_input_range1Item);
		}
		if(kmp_analog_input0.search(is)) {
			double analog_input0Item;
			is >> analog_input0Item;
			setAnalog_input0(analog_input0Item);
		}
		if(kmp_analog_input1.search(is)) {
			double analog_input1Item;
			is >> analog_input1Item;
			setAnalog_input1(analog_input1Item);
		}
		if(kmp_analog_output_domain0.search(is)) {
			char analog_output_domain0Item;
			is >> analog_output_domain0Item;
			setAnalog_output_domain0(analog_output_domain0Item);
		}
		if(kmp_analog_output_domain1.search(is)) {
			char analog_output_domain1Item;
			is >> analog_output_domain1Item;
			setAnalog_output_domain1(analog_output_domain1Item);
		}
		if(kmp_analog_output0.search(is)) {
			double analog_output0Item;
			is >> analog_output0Item;
			setAnalog_output0(analog_output0Item);
		}
		if(kmp_analog_output1.search(is)) {
			double analog_output1Item;
			is >> analog_output1Item;
			setAnalog_output1(analog_output1Item);
		}
		if(kmp_masterboard_temperature.search(is)) {
			float masterboard_temperatureItem;
			is >> masterboard_temperatureItem;
			setMasterboard_temperature(masterboard_temperatureItem);
		}
		if(kmp_robot_voltage_48V.search(is)) {
			float robot_voltage_48VItem;
			is >> robot_voltage_48VItem;
			setRobot_voltage_48V(robot_voltage_48VItem);
		}
		if(kmp_robot_current.search(is)) {
			float robot_currentItem;
			is >> robot_currentItem;
			setRobot_current(robot_currentItem);
		}
		if(kmp_master_io_current.search(is)) {
			float master_io_currentItem;
			is >> master_io_currentItem;
			setMaster_io_current(master_io_currentItem);
		}
		if(kmp_master_safety_state.search(is)) {
			unsigned char master_safety_stateItem;
			is >> master_safety_stateItem;
			setMaster_safety_state(master_safety_stateItem);
		}
		if(kmp_master_onoff_state.search(is)) {
			unsigned char master_onoff_stateItem;
			is >> master_onoff_stateItem;
			setMaster_onoff_state(master_onoff_stateItem);
		}
	}
	
	/*
	void Ur_msgs_MasterboardDataMsgCore::get(ACE_Message_Block *&msg) const
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
		// (see Ur_msgs_MasterboardDataMsgACE.hh)
		cdr << idl_Ur_msgs_MasterboardDataMsg;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Ur_msgs_MasterboardDataMsg);
		cdr << data_hash;
		// std::cout << "Ur_msgs_MasterboardDataMsgCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Ur_msgs_MasterboardDataMsgCore::set(const ACE_Message_Block *msg)
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
		// (see Ur_msgs_MasterboardDataMsgACE.hh)
		cdr >> idl_Ur_msgs_MasterboardDataMsg;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Ur_msgs_MasterboardDataMsg);
		assert(data_hash == own_hash);
		// std::cout << "Ur_msgs_MasterboardDataMsgCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSUr_msgs */