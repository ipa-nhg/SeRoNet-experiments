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
#ifndef _COB4_3ACTIVITY_HH
#define _COB4_3ACTIVITY_HH

#include "Cob4_3ActivityCore.hh"

class Cob4_3Activity  : public Cob4_3ActivityCore
{
private:
	virtual void on_joyIn(const CommBasicObjects::CommJoystick &input);
public:
	Cob4_3Activity(SmartACE::SmartComponent *comp);
	virtual ~Cob4_3Activity();
	
	virtual int on_entry();
	virtual int on_execute();
	virtual int on_exit();
};

#endif
