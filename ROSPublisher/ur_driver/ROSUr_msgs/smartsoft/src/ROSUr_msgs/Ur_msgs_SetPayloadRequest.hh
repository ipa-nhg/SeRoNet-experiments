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
#ifndef ROSUR_MSGS_UR_MSGS_SETPAYLOADREQUEST_H_
#define ROSUR_MSGS_UR_MSGS_SETPAYLOADREQUEST_H_

#include "ROSUr_msgs/Ur_msgs_SetPayloadRequestCore.hh"

namespace ROSUr_msgs {
		
class Ur_msgs_SetPayloadRequest : public Ur_msgs_SetPayloadRequestCore {
	public:
		// default constructors
		Ur_msgs_SetPayloadRequest();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Ur_msgs_SetPayloadRequest(const float &payload);
		
		Ur_msgs_SetPayloadRequest(const Ur_msgs_SetPayloadRequestCore &ur_msgs_SetPayloadRequest);
		Ur_msgs_SetPayloadRequest(const DATATYPE &ur_msgs_SetPayloadRequest);
		virtual ~Ur_msgs_SetPayloadRequest();
		
		// use framework specific getter and setter methods from core (base) class
		using Ur_msgs_SetPayloadRequestCore::get;
		using Ur_msgs_SetPayloadRequestCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Ur_msgs_SetPayloadRequest &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSUr_msgs */
#endif /* ROSUR_MSGS_UR_MSGS_SETPAYLOADREQUEST_H_ */
