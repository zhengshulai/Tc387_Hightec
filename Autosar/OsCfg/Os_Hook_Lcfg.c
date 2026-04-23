#define OS_HOOK_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Hook_Lcfg.h"
#include "Os_Hook.h"

#include "Os_AccessCheck_Lcfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Core.h"
#include "Os_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Thread.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"
#include "OsInt.h"

#include "Os_Hal_Context_Lcfg.h"


static Os_HookType OsCfg_Hook_Os_CoreInitHook_OsCore0_Dyn;
static Os_HookType OsCfg_Hook_Os_ErrorHook_OsCore0_Dyn;

static Os_HookType OsCfg_Hook_Os_CoreInitHook_OsCore1_Dyn;
static Os_HookType OsCfg_Hook_Os_ErrorHook_OsCore1_Dyn; 

static Os_HookType OsCfg_Hook_Os_CoreInitHook_OsCore2_Dyn;
static Os_HookType OsCfg_Hook_Os_ErrorHook_OsCore2_Dyn; 

static Os_HookType OsCfg_Hook_Os_CoreInitHook_OsCore3_Dyn;
static Os_HookType OsCfg_Hook_Os_ErrorHook_OsCore3_Dyn; 

/***************************************************Core0***************************************************************/
const Os_HookInitHookConfigType OsCfg_Hook_Os_CoreInitHook_OsCore0 = 
{
	//Hook
	{
		//Thread
		{
			/*ContextConfig            =*/&OsCfg_Hal_Context_Os_CoreInitHook_OsCore0,
			/*Context                  =*/&OsCfg_Hal_Context_Os_CoreInitHook_OsCore0_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore0_Init,
			/*Dyn                      =*/OS_HOOK_CASTDYN_HOOK_2_THREAD(OsCfg_Hook_Os_CoreInitHook_OsCore0_Dyn),
			/*OnwerApplication         =*/&OsCfg_App_SystemApplication_OsCore0,
			/*Core                     =*/&OsCfg_Core_OsCore0,
		    /*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
			/*TimeProtConfig           =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_Os_CoreInitHook_OsCore0_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_INITHOOK,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/TRUE,
			/*UsesFpu                  =*/TRUE
		},
		/*HookTypeFlag        =*/OS_HOOKFLAG_INITHOOK,
		/*NestingMask         =*/OS_HOOKNESTINGMASK_INITHOOK,
		/*Id                  =*/(Os_HookIdType)0u,
		/*TaskReturn          =*/Os_HookTaskReturn_BeginScheduling
	},
	/*Callback   =*/&Os_CoreInitHook
};

const Os_HookStatusHookConfigType OsCfg_Hook_ErrorHook_OsCore0 = 
{
	//Hook
	{
		//Thread
		{
			/*ContextConfig            =*/&OsCfg_Hal_Context_ErrorHook_OsCore0,
			/*Context                  =*/&OsCfg_Hal_Context_ErrorHook_OsCore0_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore0_Error,
			/*Dyn                      =*/OS_HOOK_CASTDYN_HOOK_2_THREAD(OsCfg_Hook_Os_ErrorHook_OsCore0_Dyn),
			/*OnwerApplication         =*/&OsCfg_App_SystemApplication_OsCore0,
			/*Core                     =*/&OsCfg_Core_OsCore0,
		    /*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
			/*TimeProtConfig           =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_ErrorHook_OsCore0_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ERRORHOOK,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE
		},
		/*HookTypeFlag        =*/OS_HOOKFLAG_ERRORHOOK,
		/*NestingMask         =*/OS_HOOKNESTINGMASK_ERRORHOOK,
		/*Id                  =*/(Os_HookIdType)1u,
		/*TaskReturn          =*/Os_HookTaskReturn_WithSchedule
	},
	/*Callback   =*/&ErrorHook
};



/***************************************************Core1***************************************************************/
const Os_HookInitHookConfigType OsCfg_Hook_Os_CoreInitHook_OsCore1 = 
{
	//Hook
	{
		//Thread
		{
			/*ContextConfig            =*/&OsCfg_Hal_Context_Os_CoreInitHook_OsCore1,
			/*Context                  =*/&OsCfg_Hal_Context_Os_CoreInitHook_OsCore1_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore1_Init,
			/*Dyn                      =*/OS_HOOK_CASTDYN_HOOK_2_THREAD(OsCfg_Hook_Os_CoreInitHook_OsCore1_Dyn),
			/*OnwerApplication         =*/&OsCfg_App_SystemApplication_OsCore1,
			/*Core                     =*/&OsCfg_Core_OsCore1,
		    /*IntApiState              =*/&OsCfg_Core_OsCore1_Dyn.IntApiState,
			/*TimeProtConfig           =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_Os_CoreInitHook_OsCore1_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_INITHOOK,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/TRUE,
			/*UsesFpu                  =*/TRUE
		},
		/*HookTypeFlag        =*/OS_HOOKFLAG_INITHOOK,
		/*NestingMask         =*/OS_HOOKNESTINGMASK_INITHOOK,
		/*Id                  =*/(Os_HookIdType)2u,
		/*TaskReturn          =*/Os_HookTaskReturn_BeginScheduling
	},
	/*Callback   =*/&Os_CoreInitHook
};

const Os_HookStatusHookConfigType OsCfg_Hook_ErrorHook_OsCore1 = 
{
	//Hook
	{
		//Thread
		{
			/*ContextConfig            =*/&OsCfg_Hal_Context_ErrorHook_OsCore1,
			/*Context                  =*/&OsCfg_Hal_Context_ErrorHook_OsCore1_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore1_Error,
			/*Dyn                      =*/OS_HOOK_CASTDYN_HOOK_2_THREAD(OsCfg_Hook_Os_ErrorHook_OsCore1_Dyn),
			/*OnwerApplication         =*/&OsCfg_App_SystemApplication_OsCore1,
			/*Core                     =*/&OsCfg_Core_OsCore1,
		    /*IntApiState              =*/&OsCfg_Core_OsCore1_Dyn.IntApiState,
			/*TimeProtConfig           =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_ErrorHook_OsCore1_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ERRORHOOK,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE
		},
		/*HookTypeFlag        =*/OS_HOOKFLAG_ERRORHOOK,
		/*NestingMask         =*/OS_HOOKNESTINGMASK_ERRORHOOK,
		/*Id                  =*/(Os_HookIdType)3u,
		/*TaskReturn          =*/Os_HookTaskReturn_WithSchedule
	},
	/*Callback   =*/&ErrorHook
};



/***************************************************Core2***************************************************************/
const Os_HookInitHookConfigType OsCfg_Hook_Os_CoreInitHook_OsCore2 = 
{
	//Hook
	{
		//Thread
		{
			/*ContextConfig            =*/&OsCfg_Hal_Context_Os_CoreInitHook_OsCore2,
			/*Context                  =*/&OsCfg_Hal_Context_Os_CoreInitHook_OsCore2_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore2_Init,
			/*Dyn                      =*/OS_HOOK_CASTDYN_HOOK_2_THREAD(OsCfg_Hook_Os_CoreInitHook_OsCore2_Dyn),
			/*OnwerApplication         =*/&OsCfg_App_SystemApplication_OsCore2,
			/*Core                     =*/&OsCfg_Core_OsCore2,
		    /*IntApiState              =*/&OsCfg_Core_OsCore2_Dyn.IntApiState,
			/*TimeProtConfig           =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_Os_CoreInitHook_OsCore2_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_INITHOOK,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/TRUE,
			/*UsesFpu                  =*/TRUE
		},
		/*HookTypeFlag        =*/OS_HOOKFLAG_INITHOOK,
		/*NestingMask         =*/OS_HOOKNESTINGMASK_INITHOOK,
		/*Id                  =*/(Os_HookIdType)4u,
		/*TaskReturn          =*/Os_HookTaskReturn_BeginScheduling
	},
	/*Callback   =*/&Os_CoreInitHook
};

const Os_HookStatusHookConfigType OsCfg_Hook_ErrorHook_OsCore2 = 
{
	//Hook
	{
		//Thread
		{
			/*ContextConfig            =*/&OsCfg_Hal_Context_ErrorHook_OsCore2,
			/*Context                  =*/&OsCfg_Hal_Context_ErrorHook_OsCore2_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore2_Error,
			/*Dyn                      =*/OS_HOOK_CASTDYN_HOOK_2_THREAD(OsCfg_Hook_Os_ErrorHook_OsCore2_Dyn),
			/*OnwerApplication         =*/&OsCfg_App_SystemApplication_OsCore2,
			/*Core                     =*/&OsCfg_Core_OsCore2,
		    /*IntApiState              =*/&OsCfg_Core_OsCore2_Dyn.IntApiState,
			/*TimeProtConfig           =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_ErrorHook_OsCore2_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ERRORHOOK,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE
		},
		/*HookTypeFlag        =*/OS_HOOKFLAG_ERRORHOOK,
		/*NestingMask         =*/OS_HOOKNESTINGMASK_ERRORHOOK,
		/*Id                  =*/(Os_HookIdType)5u,
		/*TaskReturn          =*/Os_HookTaskReturn_WithSchedule
	},
	/*Callback   =*/&ErrorHook
};




/***************************************************Core3***************************************************************/
const Os_HookInitHookConfigType OsCfg_Hook_Os_CoreInitHook_OsCore3 = 
{
	//Hook
	{
		//Thread
		{
			/*ContextConfig            =*/&OsCfg_Hal_Context_Os_CoreInitHook_OsCore3,
			/*Context                  =*/&OsCfg_Hal_Context_Os_CoreInitHook_OsCore3_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore3_Init,
			/*Dyn                      =*/OS_HOOK_CASTDYN_HOOK_2_THREAD(OsCfg_Hook_Os_CoreInitHook_OsCore3_Dyn),
			/*OnwerApplication         =*/&OsCfg_App_SystemApplication_OsCore3,
			/*Core                     =*/&OsCfg_Core_OsCore3,
		    /*IntApiState              =*/&OsCfg_Core_OsCore3_Dyn.IntApiState,
			/*TimeProtConfig           =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_Os_CoreInitHook_OsCore3_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_INITHOOK,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/TRUE,
			/*UsesFpu                  =*/TRUE
		},
		/*HookTypeFlag        =*/OS_HOOKFLAG_INITHOOK,
		/*NestingMask         =*/OS_HOOKNESTINGMASK_INITHOOK,
		/*Id                  =*/(Os_HookIdType)6u,
		/*TaskReturn          =*/Os_HookTaskReturn_BeginScheduling
	},
	/*Callback   =*/&Os_CoreInitHook
};

const Os_HookStatusHookConfigType OsCfg_Hook_ErrorHook_OsCore3 = 
{
	//Hook
	{
		//Thread
		{
			/*ContextConfig            =*/&OsCfg_Hal_Context_ErrorHook_OsCore3,
			/*Context                  =*/&OsCfg_Hal_Context_ErrorHook_OsCore3_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore3_Error,
			/*Dyn                      =*/OS_HOOK_CASTDYN_HOOK_2_THREAD(OsCfg_Hook_Os_ErrorHook_OsCore3_Dyn),
			/*OnwerApplication         =*/&OsCfg_App_SystemApplication_OsCore3,
			/*Core                     =*/&OsCfg_Core_OsCore3,
		    /*IntApiState              =*/&OsCfg_Core_OsCore3_Dyn.IntApiState,
			/*TimeProtConfig           =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_ErrorHook_OsCore3_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ERRORHOOK,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE
		},
		/*HookTypeFlag        =*/OS_HOOKFLAG_ERRORHOOK,
		/*NestingMask         =*/OS_HOOKNESTINGMASK_ERRORHOOK,
		/*Id                  =*/(Os_HookIdType)7u,
		/*TaskReturn          =*/Os_HookTaskReturn_WithSchedule
	},
	/*Callback   =*/&ErrorHook
};

const Os_HookConfigType* const OsCfg_HookRefs[9] = 
{
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore0),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore0),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore1),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore1),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore2),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore2),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore3),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore3),
	NULL_PTR
};