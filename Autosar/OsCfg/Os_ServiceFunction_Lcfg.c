#define OS_SERVICEFUNCTION_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_ServiceFunction_Cfg.h"
#include "Os_ServiceFunction_Lcfg.h"
#include "Os_ServiceFunction.h"

#include "Os_Application_Lcfg.h"
#include "Os_Lcfg.h"
#include "Os_Common_Types.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os.h"

#include "Platform_Types.h"

#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Context.h"

const Os_ServiceTfConfigType* const OsCfg_TrustedFunctionRefs[1] = 
{
	NULL_PTR
};
const Os_ServiceNtfConfigType* const OsCfg_NonTrustedFunctionRefs[1] = 
{
	NULL_PTR
};
const Os_ServiceFtfConfigType* const OsCfg_FastTrustedFunctionRefs[1] = 
{
	NULL_PTR
};