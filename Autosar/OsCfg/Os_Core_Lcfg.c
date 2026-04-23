
#include "Std_Types.h"

#include "Os_Core_Cfg.h"
#include "Os_Core_Lcfg.h"
#include "Os_Core.h"


#include "Os_Application_Lcfg.h"
#include "Os_Barrier_Lcfg.h"
#include "Os_Common.h"
#include "Os_Hook.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Resource_Lcfg.h"
#include "Os_Scheduler_Lcfg.h"
#include "Os_Spinlock_Lcfg.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"
#include "Os.h"

#include "Os_Hal_Core_Cfg.h"
#include "Os_Hal_Core_Lcfg.h"
#include "Os_Hal_Kernel_Lcfg.h"


static Os_CoreAsrStatusType OsCfg_Core_OsCore0_Status_Dyn;
static Os_CoreAsrStatusType OsCfg_Core_OsCore1_Status_Dyn;
static Os_CoreAsrStatusType OsCfg_Core_OsCore2_Status_Dyn;
static Os_CoreAsrStatusType OsCfg_Core_OsCore3_Status_Dyn;

static Os_ThreadClassType OsCfg_Core_OsCore0_ThreadClass;
static Os_ThreadClassType OsCfg_Core_OsCore1_ThreadClass;
static Os_ThreadClassType OsCfg_Core_OsCore2_ThreadClass;
static Os_ThreadClassType OsCfg_Core_OsCore3_ThreadClass;

static Os_CoreBootBarrierType OsCfg_Core_OsCore0_BootBarrier_Dyn;
static Os_CoreBootBarrierType OsCfg_Core_OsCore1_BootBarrier_Dyn;
static Os_CoreBootBarrierType OsCfg_Core_OsCore2_BootBarrier_Dyn;
static Os_CoreBootBarrierType OsCfg_Core_OsCore3_BootBarrier_Dyn;


Os_CoreAsrType OsCfg_Core_OsCore0_Dyn;
Os_CoreAsrType OsCfg_Core_OsCore1_Dyn;
Os_CoreAsrType OsCfg_Core_OsCore2_Dyn;
Os_CoreAsrType OsCfg_Core_OsCore3_Dyn;


static const Os_HookConfigRefType OsCfg_Core_OsCore0_HookRefs[3] = 
{
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore0),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore0),
	NULL_PTR
};
static const Os_AppConfigRefType OsCfg_Core_OsCore0_AppRefs[2] = 
{
	(Os_AppConfigRefType)&OsCfg_App_OsApplication_NonTrusted_Core0,
	NULL_PTR
};
static const Os_IocConfigRefType OsCfg_Core_OsCore0_IocRefs[1] = 
{
	NULL_PTR
};
static const Os_BarrierBaseConfigRefType OsCfg_Core_OsCore0_BarrierRefs[1] = 
{
	NULL_PTR
};
static const Os_ResourceConfigRefType OsCfg_Core_OsCore0_ResourceRefs[3] = 
{
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_OsResource),
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_RES_SCHEDULER_OsCore0),
	NULL_PTR
};
static const Os_StackConfigRefType OsCfg_Core_OsCore0_StackRefs[8] = 
{
	(Os_StackConfigRefType)&OsCfg_Stack_Core0_10ms_Task,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore0_Error,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore0_Init,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore0_Isr_Core,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore0_Kernel,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore0_Task_Prio300,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore0_Task_Prio4294967295,
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_Core_OsCore0_IsrRefs[3] =
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM0_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore0),
	NULL_PTR
};
const Os_CoreAsrConfigType OsCfg_Core_OsCore0 = 
{
	//Core
	{
		/*Status                      =*/OS_CORE_CASTSTATUS_COREASRSTATUS_2_CORESTATUS(OsCfg_Core_OsCore0_Status_Dyn),
		/*HwConfig                    =*/&OsCfg_Hal_Core_OsCore0,
		/*InterruptSourceRefs         =*/OsCfg_Hal_Core_OsCore0_InterruptSourceRefs,
		/*InterruptSourceCount        =*/(Os_ObjIdxType)0u,
		/*Id                          =*/OS_CORE_ID_0,
		/*Trace                       =*/NULL_PTR,
		/*IsAsrCore                   =*/TRUE,
		/*IsAutostart                 =*/TRUE,
		/*IsMasterStartAllowed        =*/TRUE,
		/*HasPrivilegedHardwareAccess =*/TRUE
	},
	/*Dyn                    =*/&OsCfg_Core_OsCore0_Dyn,
	/*Scheduler              =*/&OsCfg_Scheduler_OsCore0,
	/*IdleTask               =*/&OsCfg_Task_IdleTask_OsCore0,
	/*KernelApp              =*/&OsCfg_App_SystemApplication_OsCore0,
	/*KernelStack            =*/&OsCfg_Stack_OsCore0_Kernel,
	/*PreStartTask           =*/NULL_PTR,
	/*StartupHookRef         =*/NULL_PTR,
	/*ShutdownHookRef        =*/NULL_PTR,
	/*ErrorHookRef           =*/&OsCfg_Hook_ErrorHook_OsCore0,
	/*ProtectionHookRef      =*/NULL_PTR,
	/*InitHookRef            =*/&OsCfg_Hook_Os_CoreInitHook_OsCore0,
	/*HookRefs               =*/OsCfg_Core_OsCore0_HookRefs,
	/*HookCount              =*/(Os_ObjIdxType)2u,
	/*AppRefs                =*/OsCfg_Core_OsCore0_AppRefs,
	/*AppCount               =*/(Os_ObjIdxType)1u,
	/*ResourceRefs           =*/OsCfg_Core_OsCore0_ResourceRefs,
	/*ResourceCount          =*/(Os_ObjIdxType)2u,
	/*HwConfig               =*/&OsCfg_Hal_CoreAsr_OsCore0,
	/*MemoryProtection       =*/NULL_PTR,
	/*TimingProtection       =*/NULL_PTR,
	/*StackRefs              =*/OsCfg_Core_OsCore0_StackRefs,	
	/*StackCount             =*/(Os_ObjIdxType)7u,
	/*CoreIdx                =*/OS_COREASRCOREIDX_0,
	/*XSignal                =*/&OsCfg_XSig_OsCore0,
	/*IocRefs                =*/OsCfg_Core_OsCore0_IocRefs,
	/*IocCount               =*/(Os_ObjIdxType)0u,
	/*Barrier                =*/&OsCfg_Barrier_OsCore0,
	/*BarrierRefs            =*/OsCfg_Core_OsCore0_BarrierRefs,
	/*BarrierCount           =*/(Os_ObjIdxType)0u,
	/*ThreadClass            =*/&OsCfg_Core_OsCore0_ThreadClass,
	/*IsrRefs                =*/OsCfg_Core_OsCore0_IsrRefs,
	/*IsrCount               =*/(Os_ObjIdxType)2u
};


/*********************************************Core1*************************************/


static const Os_HookConfigRefType OsCfg_Core_OsCore1_HookRefs[3] = 
{
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore1),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore1),
	NULL_PTR
};
static const Os_AppConfigRefType OsCfg_Core_OsCore1_AppRefs[2] = 
{
	(Os_AppConfigRefType)&OsCfg_App_OsApplication_NonTrusted_Core1,
	NULL_PTR
};
static const Os_IocConfigRefType OsCfg_Core_OsCore1_IocRefs[1] = 
{
	NULL_PTR
};
static const Os_BarrierBaseConfigRefType OsCfg_Core_OsCore1_BarrierRefs[1] = 
{
	NULL_PTR
};
static const Os_ResourceConfigRefType OsCfg_Core_OsCore1_ResourceRefs[2] = 
{
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_RES_SCHEDULER_OsCore1),
	NULL_PTR
};
static const Os_StackConfigRefType OsCfg_Core_OsCore1_StackRefs[8] = 
{
	(Os_StackConfigRefType)&OsCfg_Stack_Core1_10ms_Task,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore1_Error,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore1_Init,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore1_Isr_Core,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore1_Kernel,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore1_Task_Prio300,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore1_Task_Prio4294967295,
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_Core_OsCore1_IsrRefs[3] =
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM1_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore1),
	NULL_PTR
};
const Os_CoreAsrConfigType OsCfg_Core_OsCore1 = 
{
	//Core
	{
		/*Status                      =*/OS_CORE_CASTSTATUS_COREASRSTATUS_2_CORESTATUS(OsCfg_Core_OsCore1_Status_Dyn),
		/*HwConfig                    =*/&OsCfg_Hal_Core_OsCore1,
		/*InterruptSourceRefs         =*/OsCfg_Hal_Core_OsCore1_InterruptSourceRefs,
		/*InterruptSourceCount        =*/(Os_ObjIdxType)0u,
		/*Id                          =*/OS_CORE_ID_1,
		/*Trace                       =*/NULL_PTR,
		/*IsAsrCore                   =*/TRUE,
		/*IsAutostart                 =*/FALSE,
		/*IsMasterStartAllowed        =*/FALSE,
		/*HasPrivilegedHardwareAccess =*/FALSE
	},
	/*Dyn                    =*/&OsCfg_Core_OsCore1_Dyn,
	/*Scheduler              =*/&OsCfg_Scheduler_OsCore1,
	/*IdleTask               =*/&OsCfg_Task_IdleTask_OsCore1,
	/*KernelApp              =*/&OsCfg_App_SystemApplication_OsCore1,
	/*KernelStack            =*/&OsCfg_Stack_OsCore1_Kernel,
	/*PreStartTask           =*/NULL_PTR,
	/*StartupHookRef         =*/NULL_PTR,
	/*ShutdownHookRef        =*/NULL_PTR,
	/*ErrorHookRef           =*/&OsCfg_Hook_ErrorHook_OsCore1,
	/*ProtectionHookRef      =*/NULL_PTR,
	/*InitHookRef            =*/&OsCfg_Hook_Os_CoreInitHook_OsCore1,
	/*HookRefs               =*/OsCfg_Core_OsCore1_HookRefs,
	/*HookCount              =*/(Os_ObjIdxType)2u,
	/*AppRefs                =*/OsCfg_Core_OsCore1_AppRefs,
	/*AppCount               =*/(Os_ObjIdxType)1u,
	/*ResourceRefs           =*/OsCfg_Core_OsCore1_ResourceRefs,
	/*ResourceCount          =*/(Os_ObjIdxType)1u,
	/*HwConfig               =*/&OsCfg_Hal_CoreAsr_OsCore1,
	/*MemoryProtection       =*/NULL_PTR,
	/*TimingProtection       =*/NULL_PTR,
	/*StackRefs              =*/OsCfg_Core_OsCore1_StackRefs,	
	/*StackCount             =*/(Os_ObjIdxType)7u,
	/*CoreIdx                =*/OS_COREASRCOREIDX_1,
	/*XSignal                =*/&OsCfg_XSig_OsCore1,
	/*IocRefs                =*/OsCfg_Core_OsCore1_IocRefs,
	/*IocCount               =*/(Os_ObjIdxType)0u,
	/*Barrier                =*/&OsCfg_Barrier_OsCore1,
	/*BarrierRefs            =*/OsCfg_Core_OsCore1_BarrierRefs,
	/*BarrierCount           =*/(Os_ObjIdxType)0u,
	/*ThreadClass            =*/&OsCfg_Core_OsCore1_ThreadClass,
	/*IsrRefs                =*/OsCfg_Core_OsCore1_IsrRefs,
	/*IsrCount               =*/(Os_ObjIdxType)2u
};



/*********************************************Core2*************************************/


static const Os_HookConfigRefType OsCfg_Core_OsCore2_HookRefs[3] = 
{
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore2),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore2),
	NULL_PTR
};
static const Os_AppConfigRefType OsCfg_Core_OsCore2_AppRefs[2] = 
{
	(Os_AppConfigRefType)&OsCfg_App_OsApplication_NonTrusted_Core2,
	NULL_PTR
};
static const Os_IocConfigRefType OsCfg_Core_OsCore2_IocRefs[1] = 
{
	NULL_PTR
};
static const Os_BarrierBaseConfigRefType OsCfg_Core_OsCore2_BarrierRefs[1] = 
{
	NULL_PTR
};
static const Os_ResourceConfigRefType OsCfg_Core_OsCore2_ResourceRefs[2] = 
{
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_RES_SCHEDULER_OsCore2),
	NULL_PTR
};
static const Os_StackConfigRefType OsCfg_Core_OsCore2_StackRefs[8] = 
{
	(Os_StackConfigRefType)&OsCfg_Stack_Core2_10ms_Task,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore2_Error,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore2_Init,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore2_Isr_Core,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore2_Kernel,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore2_Task_Prio300,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore2_Task_Prio4294967295,
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_Core_OsCore2_IsrRefs[3] =
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM2_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore2),
	NULL_PTR
};
const Os_CoreAsrConfigType OsCfg_Core_OsCore2 = 
{
	//Core
	{
		/*Status                      =*/OS_CORE_CASTSTATUS_COREASRSTATUS_2_CORESTATUS(OsCfg_Core_OsCore2_Status_Dyn),
		/*HwConfig                    =*/&OsCfg_Hal_Core_OsCore2,
		/*InterruptSourceRefs         =*/OsCfg_Hal_Core_OsCore2_InterruptSourceRefs,
		/*InterruptSourceCount        =*/(Os_ObjIdxType)0u,
		/*Id                          =*/OS_CORE_ID_2,
		/*Trace                       =*/NULL_PTR,
		/*IsAsrCore                   =*/TRUE,
		/*IsAutostart                 =*/FALSE,
		/*IsMasterStartAllowed        =*/FALSE,
		/*HasPrivilegedHardwareAccess =*/FALSE
	},
	/*Dyn                    =*/&OsCfg_Core_OsCore2_Dyn,
	/*Scheduler              =*/&OsCfg_Scheduler_OsCore2,
	/*IdleTask               =*/&OsCfg_Task_IdleTask_OsCore2,
	/*KernelApp              =*/&OsCfg_App_SystemApplication_OsCore2,
	/*KernelStack            =*/&OsCfg_Stack_OsCore2_Kernel,
	/*PreStartTask           =*/NULL_PTR,
	/*StartupHookRef         =*/NULL_PTR,
	/*ShutdownHookRef        =*/NULL_PTR,
	/*ErrorHookRef           =*/&OsCfg_Hook_ErrorHook_OsCore2,
	/*ProtectionHookRef      =*/NULL_PTR,
	/*InitHookRef            =*/&OsCfg_Hook_Os_CoreInitHook_OsCore2,
	/*HookRefs               =*/OsCfg_Core_OsCore2_HookRefs,
	/*HookCount              =*/(Os_ObjIdxType)2u,
	/*AppRefs                =*/OsCfg_Core_OsCore2_AppRefs,
	/*AppCount               =*/(Os_ObjIdxType)1u,
	/*ResourceRefs           =*/OsCfg_Core_OsCore2_ResourceRefs,
	/*ResourceCount          =*/(Os_ObjIdxType)1u,
	/*HwConfig               =*/&OsCfg_Hal_CoreAsr_OsCore2,
	/*MemoryProtection       =*/NULL_PTR,
	/*TimingProtection       =*/NULL_PTR,
	/*StackRefs              =*/OsCfg_Core_OsCore2_StackRefs,	
	/*StackCount             =*/(Os_ObjIdxType)7u,
	/*CoreIdx                =*/OS_COREASRCOREIDX_2,
	/*XSignal                =*/&OsCfg_XSig_OsCore2,
	/*IocRefs                =*/OsCfg_Core_OsCore2_IocRefs,
	/*IocCount               =*/(Os_ObjIdxType)0u,
	/*Barrier                =*/&OsCfg_Barrier_OsCore2,
	/*BarrierRefs            =*/OsCfg_Core_OsCore2_BarrierRefs,
	/*BarrierCount           =*/(Os_ObjIdxType)0u,
	/*ThreadClass            =*/&OsCfg_Core_OsCore2_ThreadClass,
	/*IsrRefs                =*/OsCfg_Core_OsCore2_IsrRefs,
	/*IsrCount               =*/(Os_ObjIdxType)2u
};



/*********************************************Core3*************************************/


static const Os_HookConfigRefType OsCfg_Core_OsCore3_HookRefs[3] = 
{
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore3),
	OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore3),
	NULL_PTR
};
static const Os_AppConfigRefType OsCfg_Core_OsCore3_AppRefs[2] = 
{
	(Os_AppConfigRefType)&OsCfg_App_OsApplication_NonTrusted_Core3,
	NULL_PTR
};
static const Os_IocConfigRefType OsCfg_Core_OsCore3_IocRefs[1] = 
{
	NULL_PTR
};
static const Os_BarrierBaseConfigRefType OsCfg_Core_OsCore3_BarrierRefs[1] = 
{
	NULL_PTR
};
static const Os_ResourceConfigRefType OsCfg_Core_OsCore3_ResourceRefs[2] = 
{
	OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_RES_SCHEDULER_OsCore3),
	NULL_PTR
};
static const Os_StackConfigRefType OsCfg_Core_OsCore3_StackRefs[8] = 
{
	(Os_StackConfigRefType)&OsCfg_Stack_Core3_10ms_Task,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore3_Error,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore3_Init,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore3_Isr_Core,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore3_Kernel,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore3_Task_Prio300,
	(Os_StackConfigRefType)&OsCfg_Stack_OsCore3_Task_Prio4294967295,
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_Core_OsCore3_IsrRefs[3] =
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM3_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore3),
	NULL_PTR
};
const Os_CoreAsrConfigType OsCfg_Core_OsCore3 = 
{
	//Core
	{
		/*Status                      =*/OS_CORE_CASTSTATUS_COREASRSTATUS_2_CORESTATUS(OsCfg_Core_OsCore3_Status_Dyn),
		/*HwConfig                    =*/&OsCfg_Hal_Core_OsCore3,
		/*InterruptSourceRefs         =*/OsCfg_Hal_Core_OsCore3_InterruptSourceRefs,
		/*InterruptSourceCount        =*/(Os_ObjIdxType)0u,
		/*Id                          =*/OS_CORE_ID_3,
		/*Trace                       =*/NULL_PTR,
		/*IsAsrCore                   =*/TRUE,
		/*IsAutostart                 =*/FALSE,
		/*IsMasterStartAllowed        =*/FALSE,
		/*HasPrivilegedHardwareAccess =*/FALSE
	},
	/*Dyn                    =*/&OsCfg_Core_OsCore3_Dyn,
	/*Scheduler              =*/&OsCfg_Scheduler_OsCore3,
	/*IdleTask               =*/&OsCfg_Task_IdleTask_OsCore3,
	/*KernelApp              =*/&OsCfg_App_SystemApplication_OsCore3,
	/*KernelStack            =*/&OsCfg_Stack_OsCore3_Kernel,
	/*PreStartTask           =*/NULL_PTR,
	/*StartupHookRef         =*/NULL_PTR,
	/*ShutdownHookRef        =*/NULL_PTR,
	/*ErrorHookRef           =*/&OsCfg_Hook_ErrorHook_OsCore3,
	/*ProtectionHookRef      =*/NULL_PTR,
	/*InitHookRef            =*/&OsCfg_Hook_Os_CoreInitHook_OsCore3,
	/*HookRefs               =*/OsCfg_Core_OsCore3_HookRefs,
	/*HookCount              =*/(Os_ObjIdxType)2u,
	/*AppRefs                =*/OsCfg_Core_OsCore3_AppRefs,
	/*AppCount               =*/(Os_ObjIdxType)1u,
	/*ResourceRefs           =*/OsCfg_Core_OsCore3_ResourceRefs,
	/*ResourceCount          =*/(Os_ObjIdxType)1u,
	/*HwConfig               =*/&OsCfg_Hal_CoreAsr_OsCore3,
	/*MemoryProtection       =*/NULL_PTR,
	/*TimingProtection       =*/NULL_PTR,
	/*StackRefs              =*/OsCfg_Core_OsCore3_StackRefs,	
	/*StackCount             =*/(Os_ObjIdxType)7u,
	/*CoreIdx                =*/OS_COREASRCOREIDX_3,
	/*XSignal                =*/&OsCfg_XSig_OsCore3,
	/*IocRefs                =*/OsCfg_Core_OsCore3_IocRefs,
	/*IocCount               =*/(Os_ObjIdxType)0u,
	/*Barrier                =*/&OsCfg_Barrier_OsCore3,
	/*BarrierRefs            =*/OsCfg_Core_OsCore3_BarrierRefs,
	/*BarrierCount           =*/(Os_ObjIdxType)0u,
	/*ThreadClass            =*/&OsCfg_Core_OsCore3_ThreadClass,
	/*IsrRefs                =*/OsCfg_Core_OsCore3_IsrRefs,
	/*IsrCount               =*/(Os_ObjIdxType)2u
};

static const Os_SpinlockConfigRefType OsCfg_SystemSpinlockRefs[1] = 
{
	NULL_PTR
};

Os_CoreBootBarrierType* const OsCfg_CoreBootBarrierRefs[5] = 
{
	&OsCfg_Core_OsCore0_BootBarrier_Dyn,
	&OsCfg_Core_OsCore1_BootBarrier_Dyn,
	&OsCfg_Core_OsCore2_BootBarrier_Dyn,
	&OsCfg_Core_OsCore3_BootBarrier_Dyn,
	NULL_PTR
};

const Os_SystemConfigType OsCfg_System = 
{
	//VersionInfo
	{
		/*vendorID           =*/OS_VENDOR_ID,
		/*moduleID           =*/OS_MODULE_ID,
		/*sw_major_version   =*/OS_SW_MAJOR_VERSION,
		/*sw_minor_version   =*/OS_SW_MINOR_VERSION,
		/*sw_patch_version   =*/OS_SW_PATCH_VERSION	
	},
	/*NumberOfAsrCores       =*/OS_COREASRCOREIDX_COUNT,
	/*SpinlockRefs           =*/OsCfg_SystemSpinlockRefs,
	/*SpinlockCount          =*/(Os_ObjIdxType)0,
	/*HwConfig               =*/&OsCfg_Hal_System,
	/*MemoryProtection       =*/NULL_PTR,
	/*InterruptSourceRefs    =*/OsCfg_Hal_System_InterruptSourceRefs,
	/*InterruptSourceCount   =*/(Os_ObjIdxType)8,
	/*Core2Thread            =*/&OsCfg_Hal_Core2Thread
};