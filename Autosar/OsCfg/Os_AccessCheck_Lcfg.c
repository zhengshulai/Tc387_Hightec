#define OS_ACCESSCHECK_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_AccessCheck_Cfg.h"
#include "Os_AccessCheck_Lcfg.h"
#include "Os_AccessCheck.h"

#include "Os_Common.h"


const Os_AccessCheckConfigType OsCfg_AccessCheck_NoAccess = 
{
	/*Regions             =*/NULL_PTR,
	/*RegionsCount        =*/(Os_AccessCheckIdx)0,		
};
