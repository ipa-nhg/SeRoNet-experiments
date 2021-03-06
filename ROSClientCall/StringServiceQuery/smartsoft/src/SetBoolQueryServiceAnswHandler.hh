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
#ifndef _SETBOOLQUERYSERVICEANSWHANDLER_USER_HH
#define _SETBOOLQUERYSERVICEANSWHANDLER_USER_HH
		
#include "SetBoolQueryServiceAnswHandlerCore.hh"

class SetBoolQueryServiceAnswHandler : public SetBoolQueryServiceAnswHandlerCore
{
protected:
public:
	SetBoolQueryServiceAnswHandler(IQueryServer *server);
	virtual ~SetBoolQueryServiceAnswHandler() = default;
	virtual void handleQuery(const QueryId &id, const ROSRos_core::Std_srvs_SetBoolRequest& request);
};
#endif
