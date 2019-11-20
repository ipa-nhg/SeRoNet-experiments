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
#ifndef ROSUR_MSGS_UR_MSGS_IOSTATES_CORE_H_
#define ROSUR_MSGS_UR_MSGS_IOSTATES_CORE_H_

#include "ROSUr_msgs/Ur_msgs_IOStatesData.hh"
#include "ROSUr_msgs/Ur_msgs_Digital.hh"
#include "ROSUr_msgs/Ur_msgs_Analog.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSUr_msgs {
	
class Ur_msgs_IOStatesCore {
protected:
	// data structure
	ROSUr_msgsIDL::Ur_msgs_IOStates idl_Ur_msgs_IOStates;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSUr_msgsIDL::Ur_msgs_IOStates DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Ur_msgs_IOStatesCore();
	Ur_msgs_IOStatesCore(const DATATYPE &data);
	// default destructor
	virtual ~Ur_msgs_IOStatesCore();
	
	const DATATYPE& get() const { return idl_Ur_msgs_IOStates; }
	operator const DATATYPE&() const { return idl_Ur_msgs_IOStates; }
	DATATYPE& set() { return idl_Ur_msgs_IOStates; }

	static inline std::string identifier(void) { return "ROSUr_msgs::Ur_msgs_IOStates"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Digital_in_states
	/**
	 * Getter methods for element idl_Ur_msgs_IOStates.digital_in_states of type vector<ROSUr_msgs::Ur_msgs_Digital>
	 */
	inline std::vector<ROSUr_msgs::Ur_msgs_Digital> getDigital_in_statesCopy() const { 
		return std::vector<ROSUr_msgs::Ur_msgs_Digital>(idl_Ur_msgs_IOStates.digital_in_states.begin(), idl_Ur_msgs_IOStates.digital_in_states.end());
	}
	inline ROSUr_msgs::Ur_msgs_Digital getDigital_in_statesElemAtPos(const size_t &pos) const {
		return ROSUr_msgs::Ur_msgs_Digital(idl_Ur_msgs_IOStates.digital_in_states[pos]);
	}
	inline size_t getDigital_in_statesSize() const { return idl_Ur_msgs_IOStates.digital_in_states.size(); }
	inline bool isDigital_in_statesEmpty() const { return idl_Ur_msgs_IOStates.digital_in_states.empty(); }
	/**
	 * Setter methods for idl_Ur_msgs_IOStates.digital_in_states of type vector<ROSUr_msgs::Ur_msgs_Digital>
	 */
	inline Ur_msgs_IOStatesCore& setDigital_in_states(const std::vector<ROSUr_msgs::Ur_msgs_Digital> &digital_in_states) { 
		idl_Ur_msgs_IOStates.digital_in_states.assign(digital_in_states.begin(), digital_in_states.end());
		return *this;
	}
	inline bool setDigital_in_statesElemAtPos(const size_t &pos, const ROSUr_msgs::Ur_msgs_Digital &elem) {
		if(pos < idl_Ur_msgs_IOStates.digital_in_states.size()) {
			idl_Ur_msgs_IOStates.digital_in_states[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertDigital_in_statesVectorAtPos(const size_t &pos, const std::vector<ROSUr_msgs::Ur_msgs_Digital> &data) {
		if(pos < idl_Ur_msgs_IOStates.digital_in_states.size()) {
			idl_Ur_msgs_IOStates.digital_in_states.insert(idl_Ur_msgs_IOStates.digital_in_states.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeDigital_in_states(const size_t &size) { idl_Ur_msgs_IOStates.digital_in_states.resize(size); }
	inline bool eraseDigital_in_statesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Ur_msgs_IOStates.digital_in_states.size() ) {
			idl_Ur_msgs_IOStates.digital_in_states.erase(idl_Ur_msgs_IOStates.digital_in_states.begin()+pos, idl_Ur_msgs_IOStates.digital_in_states.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearDigital_in_states() { idl_Ur_msgs_IOStates.digital_in_states.clear(); }
	
	// getter and setter for element Digital_out_states
	/**
	 * Getter methods for element idl_Ur_msgs_IOStates.digital_out_states of type vector<ROSUr_msgs::Ur_msgs_Digital>
	 */
	inline std::vector<ROSUr_msgs::Ur_msgs_Digital> getDigital_out_statesCopy() const { 
		return std::vector<ROSUr_msgs::Ur_msgs_Digital>(idl_Ur_msgs_IOStates.digital_out_states.begin(), idl_Ur_msgs_IOStates.digital_out_states.end());
	}
	inline ROSUr_msgs::Ur_msgs_Digital getDigital_out_statesElemAtPos(const size_t &pos) const {
		return ROSUr_msgs::Ur_msgs_Digital(idl_Ur_msgs_IOStates.digital_out_states[pos]);
	}
	inline size_t getDigital_out_statesSize() const { return idl_Ur_msgs_IOStates.digital_out_states.size(); }
	inline bool isDigital_out_statesEmpty() const { return idl_Ur_msgs_IOStates.digital_out_states.empty(); }
	/**
	 * Setter methods for idl_Ur_msgs_IOStates.digital_out_states of type vector<ROSUr_msgs::Ur_msgs_Digital>
	 */
	inline Ur_msgs_IOStatesCore& setDigital_out_states(const std::vector<ROSUr_msgs::Ur_msgs_Digital> &digital_out_states) { 
		idl_Ur_msgs_IOStates.digital_out_states.assign(digital_out_states.begin(), digital_out_states.end());
		return *this;
	}
	inline bool setDigital_out_statesElemAtPos(const size_t &pos, const ROSUr_msgs::Ur_msgs_Digital &elem) {
		if(pos < idl_Ur_msgs_IOStates.digital_out_states.size()) {
			idl_Ur_msgs_IOStates.digital_out_states[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertDigital_out_statesVectorAtPos(const size_t &pos, const std::vector<ROSUr_msgs::Ur_msgs_Digital> &data) {
		if(pos < idl_Ur_msgs_IOStates.digital_out_states.size()) {
			idl_Ur_msgs_IOStates.digital_out_states.insert(idl_Ur_msgs_IOStates.digital_out_states.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeDigital_out_states(const size_t &size) { idl_Ur_msgs_IOStates.digital_out_states.resize(size); }
	inline bool eraseDigital_out_statesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Ur_msgs_IOStates.digital_out_states.size() ) {
			idl_Ur_msgs_IOStates.digital_out_states.erase(idl_Ur_msgs_IOStates.digital_out_states.begin()+pos, idl_Ur_msgs_IOStates.digital_out_states.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearDigital_out_states() { idl_Ur_msgs_IOStates.digital_out_states.clear(); }
	
	// getter and setter for element Flag_states
	/**
	 * Getter methods for element idl_Ur_msgs_IOStates.flag_states of type vector<ROSUr_msgs::Ur_msgs_Digital>
	 */
	inline std::vector<ROSUr_msgs::Ur_msgs_Digital> getFlag_statesCopy() const { 
		return std::vector<ROSUr_msgs::Ur_msgs_Digital>(idl_Ur_msgs_IOStates.flag_states.begin(), idl_Ur_msgs_IOStates.flag_states.end());
	}
	inline ROSUr_msgs::Ur_msgs_Digital getFlag_statesElemAtPos(const size_t &pos) const {
		return ROSUr_msgs::Ur_msgs_Digital(idl_Ur_msgs_IOStates.flag_states[pos]);
	}
	inline size_t getFlag_statesSize() const { return idl_Ur_msgs_IOStates.flag_states.size(); }
	inline bool isFlag_statesEmpty() const { return idl_Ur_msgs_IOStates.flag_states.empty(); }
	/**
	 * Setter methods for idl_Ur_msgs_IOStates.flag_states of type vector<ROSUr_msgs::Ur_msgs_Digital>
	 */
	inline Ur_msgs_IOStatesCore& setFlag_states(const std::vector<ROSUr_msgs::Ur_msgs_Digital> &flag_states) { 
		idl_Ur_msgs_IOStates.flag_states.assign(flag_states.begin(), flag_states.end());
		return *this;
	}
	inline bool setFlag_statesElemAtPos(const size_t &pos, const ROSUr_msgs::Ur_msgs_Digital &elem) {
		if(pos < idl_Ur_msgs_IOStates.flag_states.size()) {
			idl_Ur_msgs_IOStates.flag_states[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertFlag_statesVectorAtPos(const size_t &pos, const std::vector<ROSUr_msgs::Ur_msgs_Digital> &data) {
		if(pos < idl_Ur_msgs_IOStates.flag_states.size()) {
			idl_Ur_msgs_IOStates.flag_states.insert(idl_Ur_msgs_IOStates.flag_states.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeFlag_states(const size_t &size) { idl_Ur_msgs_IOStates.flag_states.resize(size); }
	inline bool eraseFlag_statesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Ur_msgs_IOStates.flag_states.size() ) {
			idl_Ur_msgs_IOStates.flag_states.erase(idl_Ur_msgs_IOStates.flag_states.begin()+pos, idl_Ur_msgs_IOStates.flag_states.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearFlag_states() { idl_Ur_msgs_IOStates.flag_states.clear(); }
	
	// getter and setter for element Analog_in_states
	/**
	 * Getter methods for element idl_Ur_msgs_IOStates.analog_in_states of type vector<ROSUr_msgs::Ur_msgs_Analog>
	 */
	inline std::vector<ROSUr_msgs::Ur_msgs_Analog> getAnalog_in_statesCopy() const { 
		return std::vector<ROSUr_msgs::Ur_msgs_Analog>(idl_Ur_msgs_IOStates.analog_in_states.begin(), idl_Ur_msgs_IOStates.analog_in_states.end());
	}
	inline ROSUr_msgs::Ur_msgs_Analog getAnalog_in_statesElemAtPos(const size_t &pos) const {
		return ROSUr_msgs::Ur_msgs_Analog(idl_Ur_msgs_IOStates.analog_in_states[pos]);
	}
	inline size_t getAnalog_in_statesSize() const { return idl_Ur_msgs_IOStates.analog_in_states.size(); }
	inline bool isAnalog_in_statesEmpty() const { return idl_Ur_msgs_IOStates.analog_in_states.empty(); }
	/**
	 * Setter methods for idl_Ur_msgs_IOStates.analog_in_states of type vector<ROSUr_msgs::Ur_msgs_Analog>
	 */
	inline Ur_msgs_IOStatesCore& setAnalog_in_states(const std::vector<ROSUr_msgs::Ur_msgs_Analog> &analog_in_states) { 
		idl_Ur_msgs_IOStates.analog_in_states.assign(analog_in_states.begin(), analog_in_states.end());
		return *this;
	}
	inline bool setAnalog_in_statesElemAtPos(const size_t &pos, const ROSUr_msgs::Ur_msgs_Analog &elem) {
		if(pos < idl_Ur_msgs_IOStates.analog_in_states.size()) {
			idl_Ur_msgs_IOStates.analog_in_states[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertAnalog_in_statesVectorAtPos(const size_t &pos, const std::vector<ROSUr_msgs::Ur_msgs_Analog> &data) {
		if(pos < idl_Ur_msgs_IOStates.analog_in_states.size()) {
			idl_Ur_msgs_IOStates.analog_in_states.insert(idl_Ur_msgs_IOStates.analog_in_states.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeAnalog_in_states(const size_t &size) { idl_Ur_msgs_IOStates.analog_in_states.resize(size); }
	inline bool eraseAnalog_in_statesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Ur_msgs_IOStates.analog_in_states.size() ) {
			idl_Ur_msgs_IOStates.analog_in_states.erase(idl_Ur_msgs_IOStates.analog_in_states.begin()+pos, idl_Ur_msgs_IOStates.analog_in_states.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearAnalog_in_states() { idl_Ur_msgs_IOStates.analog_in_states.clear(); }
	
	// getter and setter for element Analog_out_states
	/**
	 * Getter methods for element idl_Ur_msgs_IOStates.analog_out_states of type vector<ROSUr_msgs::Ur_msgs_Analog>
	 */
	inline std::vector<ROSUr_msgs::Ur_msgs_Analog> getAnalog_out_statesCopy() const { 
		return std::vector<ROSUr_msgs::Ur_msgs_Analog>(idl_Ur_msgs_IOStates.analog_out_states.begin(), idl_Ur_msgs_IOStates.analog_out_states.end());
	}
	inline ROSUr_msgs::Ur_msgs_Analog getAnalog_out_statesElemAtPos(const size_t &pos) const {
		return ROSUr_msgs::Ur_msgs_Analog(idl_Ur_msgs_IOStates.analog_out_states[pos]);
	}
	inline size_t getAnalog_out_statesSize() const { return idl_Ur_msgs_IOStates.analog_out_states.size(); }
	inline bool isAnalog_out_statesEmpty() const { return idl_Ur_msgs_IOStates.analog_out_states.empty(); }
	/**
	 * Setter methods for idl_Ur_msgs_IOStates.analog_out_states of type vector<ROSUr_msgs::Ur_msgs_Analog>
	 */
	inline Ur_msgs_IOStatesCore& setAnalog_out_states(const std::vector<ROSUr_msgs::Ur_msgs_Analog> &analog_out_states) { 
		idl_Ur_msgs_IOStates.analog_out_states.assign(analog_out_states.begin(), analog_out_states.end());
		return *this;
	}
	inline bool setAnalog_out_statesElemAtPos(const size_t &pos, const ROSUr_msgs::Ur_msgs_Analog &elem) {
		if(pos < idl_Ur_msgs_IOStates.analog_out_states.size()) {
			idl_Ur_msgs_IOStates.analog_out_states[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertAnalog_out_statesVectorAtPos(const size_t &pos, const std::vector<ROSUr_msgs::Ur_msgs_Analog> &data) {
		if(pos < idl_Ur_msgs_IOStates.analog_out_states.size()) {
			idl_Ur_msgs_IOStates.analog_out_states.insert(idl_Ur_msgs_IOStates.analog_out_states.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeAnalog_out_states(const size_t &size) { idl_Ur_msgs_IOStates.analog_out_states.resize(size); }
	inline bool eraseAnalog_out_statesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Ur_msgs_IOStates.analog_out_states.size() ) {
			idl_Ur_msgs_IOStates.analog_out_states.erase(idl_Ur_msgs_IOStates.analog_out_states.begin()+pos, idl_Ur_msgs_IOStates.analog_out_states.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearAnalog_out_states() { idl_Ur_msgs_IOStates.analog_out_states.clear(); }
};

} /* namespace ROSUr_msgs */
#endif /* ROSUR_MSGS_UR_MSGS_IOSTATES_CORE_H_ */
