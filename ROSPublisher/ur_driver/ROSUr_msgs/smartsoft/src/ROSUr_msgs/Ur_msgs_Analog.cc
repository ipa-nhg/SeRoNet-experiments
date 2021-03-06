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

#include "ROSUr_msgs/Ur_msgs_Analog.hh"

using namespace ROSUr_msgs;

Ur_msgs_Analog::Ur_msgs_Analog()
:	Ur_msgs_AnalogCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Ur_msgs_Analog::Ur_msgs_Analog(const unsigned char &pin, const unsigned char &domain, const float &state)
:	Ur_msgs_AnalogCore() // base constructor sets default values as defined in the model
{
	setPin(pin);
	setDomain(domain);
	setState(state);
}
 */

Ur_msgs_Analog::Ur_msgs_Analog(const Ur_msgs_AnalogCore &ur_msgs_Analog)
:	Ur_msgs_AnalogCore(ur_msgs_Analog)
{  }

Ur_msgs_Analog::Ur_msgs_Analog(const DATATYPE &ur_msgs_Analog)
:	Ur_msgs_AnalogCore(ur_msgs_Analog)
{  }

Ur_msgs_Analog::~Ur_msgs_Analog()
{  }
