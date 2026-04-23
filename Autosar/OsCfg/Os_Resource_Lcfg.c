#define OS_RESOURCE_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Resource_Lcfg.h"
#include "Os_Resource.h"

#include "Os_Application_Lcfg.h"
#include "Os_Core_Lcfg.h"
#include "Os_Common.h"

#include "Os_Hal_Interrupt_Lcfg.h"



static Os_ResourceType OsCfg_Resource_OsResource_Dyn;
static Os_ResourceType OsCfg_Resource_RES_SCHEDULER_OsCore0_Dyn;
static Os_ResourceType OsCfg_Resource_RES_SCHEDULER_OsCore1_Dyn;
static Os_ResourceType OsCfg_Resource_RES_SCHEDULER_OsCore2_Dyn;
static Os_ResourceType OsCfg_Resource_RES_SCHEDULER_OsCore3_Dyn;


const Os_ResourceConfigType OsCfg_Resource_OsResource = 
{
	//Lock
    {
		/*Dyn                      =*/OS_RESOURCE_CASTDYN_RESOURCE_2_LOCK(OsCfg_Resource_OsResource_Dyn),
		/*AccessingApplications    =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(SystemApplication_OsCore0)),
		/*Type                     =*/OS_LOCKTYPE_RESOURCE_STANDARD
	},
	/*Core             =*/&OsCfg_Core_OsCore0,
	/*ResourceId       =*/OsResource,
	/*CeilingPriority  =*/0
};

const Os_ResourceConfigType OsCfg_Resource_RES_SCHEDULER_OsCore0 = 
{
	//Lock
    {
		/*Dyn                      =*/OS_RESOURCE_CASTDYN_RESOURCE_2_LOCK(OsCfg_Resource_RES_SCHEDULER_OsCore0_Dyn),
		/*AccessingApplications    =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(SystemApplication_OsCore0)),
		/*Type                     =*/OS_LOCKTYPE_RESOURCE_STANDARD
	},
	/*Core             =*/&OsCfg_Core_OsCore0,
	/*ResourceId       =*/RES_SCHEDULER_OsCore0,
	/*CeilingPriority  =*/0
};

const Os_ResourceConfigType OsCfg_Resource_RES_SCHEDULER_OsCore1 = 
{
	//Lock
    {
		/*Dyn                      =*/OS_RESOURCE_CASTDYN_RESOURCE_2_LOCK(OsCfg_Resource_RES_SCHEDULER_OsCore1_Dyn),
		/*AccessingApplications    =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(SystemApplication_OsCore1)),
		/*Type                     =*/OS_LOCKTYPE_RESOURCE_STANDARD
	},
	/*Core             =*/&OsCfg_Core_OsCore1,
	/*ResourceId       =*/RES_SCHEDULER_OsCore1,
	/*CeilingPriority  =*/0
};

const Os_ResourceConfigType OsCfg_Resource_RES_SCHEDULER_OsCore2 = 
{
	//Lock
    {
		/*Dyn                      =*/OS_RESOURCE_CASTDYN_RESOURCE_2_LOCK(OsCfg_Resource_RES_SCHEDULER_OsCore2_Dyn),
		/*AccessingApplications    =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(SystemApplication_OsCore2)),
		/*Type                     =*/OS_LOCKTYPE_RESOURCE_STANDARD
	},
	/*Core             =*/&OsCfg_Core_OsCore2,
	/*ResourceId       =*/RES_SCHEDULER_OsCore2,
	/*CeilingPriority  =*/0
};

const Os_ResourceConfigType OsCfg_Resource_RES_SCHEDULER_OsCore3 = 
{
	//Lock
    {
		/*Dyn                      =*/OS_RESOURCE_CASTDYN_RESOURCE_2_LOCK(OsCfg_Resource_RES_SCHEDULER_OsCore3_Dyn),
		/*AccessingApplications    =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore3)),
		/*Type                     =*/OS_LOCKTYPE_RESOURCE_STANDARD
	},
	/*Core             =*/&OsCfg_Core_OsCore3,
	/*ResourceId       =*/RES_SCHEDULER_OsCore3,
	/*CeilingPriority  =*/0
};

const Os_ResourceConfigType* const OsCfg_ResourceRefs[6] = 
{
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_OsResource),
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_RES_SCHEDULER_OsCore0),
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_RES_SCHEDULER_OsCore1),
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_RES_SCHEDULER_OsCore2),
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_RES_SCHEDULER_OsCore3),
	NULL_PTR
};