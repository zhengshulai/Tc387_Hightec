#define OS_ISR_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_Isr_Lcfg.h"
#include "Os_Isr.h"

#include "Os_AccessCheck_Lcfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Thread.h"
#include "Os_Timer.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"
#include "Os_XSignal_Lcfg.h"
#include "Os_XSignal.h"

#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Interrupt_Lcfg.h"


static Os_IsrType OsCfg_Isr_OsIsr_STM0_Ch0_Dyn;
static Os_IsrType OsCfg_Isr_XSignalIsr_OsCore0_Dyn;

static Os_IsrType OsCfg_Isr_OsIsr_STM1_Ch0_Dyn;
static Os_IsrType OsCfg_Isr_XSignalIsr_OsCore1_Dyn;

static Os_IsrType OsCfg_Isr_OsIsr_STM2_Ch0_Dyn;
static Os_IsrType OsCfg_Isr_XSignalIsr_OsCore2_Dyn;

static Os_IsrType OsCfg_Isr_OsIsr_STM3_Ch0_Dyn;
static Os_IsrType OsCfg_Isr_XSignalIsr_OsCore3_Dyn;



/**********************************************************Core0**********************************************************/
const Os_IsrHwConfigType OsCfg_Isr_OsIsr_STM0_Ch0_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_OsIsr_STM0_Ch0,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_OsIsr_STM0_Ch0,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_TimerIsrConfigType OsCfg_Isr_OsIsr_STM0_Ch0 =
{
	//Isr
	{
		//Thread
		{
			/*.ContextConfig           =*/&OsCfg_Hal_Context_OsIsr_STM0_Ch0,
			/*.Context                 =*/&OsCfg_Hal_Context_OsCore0_Isr_Level2_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore0_Isr_Core,
			/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_STM0_Ch0_Dyn),
			/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore0,
			/*Core                     =*/&OsCfg_Core_OsCore0,
			/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
			/*TimerPortConfig          =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_OsCore0_Isr_Level2_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE			
		},
		/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_STM0_Ch0_HwConfig,
		/*IsrId                        =*/OsIsr_STM0_Ch0,
		/*IsEnabledOnInitialization    =*/FALSE
	},
	/*Counter     =*/OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core0)
};

const Os_IsrHwConfigType OsCfg_Isr_XSignalIsr_OsCore0_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_XSignalIsr_OsCore0,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_XSignalIsr_OsCore0,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_XSigIsrConfigType OsCfg_Isr_XSignalIsr_OsCore0 =
{
	//Isr
	{
		//Thread
		{
			/*.ContextConfig           =*/&OsCfg_Hal_Context_XSignalIsr_OsCore0,
			/*.Context                 =*/&OsCfg_Hal_Context_OsCore0_Isr_Level1_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore0_Isr_Core,
			/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_XSignalIsr_OsCore0_Dyn),
			/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore0,
			/*Core                     =*/&OsCfg_Core_OsCore0,
			/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
			/*TimerPortConfig          =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_OsCore0_Isr_Level1_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE			
		},
		/*SourceConfig                 =*/&OsCfg_Isr_XSignalIsr_OsCore0_HwConfig,
		/*IsrId                        =*/XSignalIsr_OsCore0,
		/*IsEnabledOnInitialization    =*/FALSE
	},
	/*FunctionTable     =*/&OsCfg_Isr_XSignalIsr_OsCore0_FuncTable,
	/*RecvPortRefs      =*/OsCfg_Isr_XSignalIsr_OsCore0_PortRefs,
	/*RecvPortCount     =*/(Os_ObjIdxType)3,
	/*HwConfig          =*/&OsCfg_Hal_XSig_XSignalIsr_OsCore0
};



/**********************************************************Core1**********************************************************/
const Os_IsrHwConfigType OsCfg_Isr_OsIsr_STM1_Ch0_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_OsIsr_STM1_Ch0,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_OsIsr_STM1_Ch0,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_TimerIsrConfigType OsCfg_Isr_OsIsr_STM1_Ch0 =
{
	//Isr
	{
		//Thread
		{
			/*.ContextConfig           =*/&OsCfg_Hal_Context_OsIsr_STM1_Ch0,
			/*.Context                 =*/&OsCfg_Hal_Context_OsCore1_Isr_Level2_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore1_Isr_Core,
			/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_STM1_Ch0_Dyn),
			/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore1,
			/*Core                     =*/&OsCfg_Core_OsCore1,
			/*IntApiState              =*/&OsCfg_Core_OsCore1_Dyn.IntApiState,
			/*TimerPortConfig          =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_OsCore1_Isr_Level2_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE			
		},
		/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_STM1_Ch0_HwConfig,
		/*IsrId                        =*/OsIsr_STM1_Ch0,
		/*IsEnabledOnInitialization    =*/FALSE
	},
	/*Counter     =*/OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core1)
};

const Os_IsrHwConfigType OsCfg_Isr_XSignalIsr_OsCore1_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_XSignalIsr_OsCore1,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_XSignalIsr_OsCore1,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_XSigIsrConfigType OsCfg_Isr_XSignalIsr_OsCore1 =
{
	//Isr
	{
		//Thread
		{
			/*.ContextConfig           =*/&OsCfg_Hal_Context_XSignalIsr_OsCore1,
			/*.Context                 =*/&OsCfg_Hal_Context_OsCore1_Isr_Level1_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore1_Isr_Core,
			/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_XSignalIsr_OsCore1_Dyn),
			/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore1,
			/*Core                     =*/&OsCfg_Core_OsCore1,
			/*IntApiState              =*/&OsCfg_Core_OsCore1_Dyn.IntApiState,
			/*TimerPortConfig          =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_OsCore1_Isr_Level1_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE			
		},
		/*SourceConfig                 =*/&OsCfg_Isr_XSignalIsr_OsCore1_HwConfig,
		/*IsrId                        =*/XSignalIsr_OsCore1,
		/*IsEnabledOnInitialization    =*/FALSE
	},
	/*FunctionTable     =*/&OsCfg_Isr_XSignalIsr_OsCore1_FuncTable,
	/*RecvPortRefs      =*/OsCfg_Isr_XSignalIsr_OsCore1_PortRefs,
	/*RecvPortCount     =*/(Os_ObjIdxType)3,
	/*HwConfig          =*/&OsCfg_Hal_XSig_XSignalIsr_OsCore1
};


/**********************************************************Core2**********************************************************/
const Os_IsrHwConfigType OsCfg_Isr_OsIsr_STM2_Ch0_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_OsIsr_STM2_Ch0,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_OsIsr_STM2_Ch0,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_TimerIsrConfigType OsCfg_Isr_OsIsr_STM2_Ch0 =
{
	//Isr
	{
		//Thread
		{
			/*.ContextConfig           =*/&OsCfg_Hal_Context_OsIsr_STM2_Ch0,
			/*.Context                 =*/&OsCfg_Hal_Context_OsCore2_Isr_Level2_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore2_Isr_Core,
			/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_STM2_Ch0_Dyn),
			/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore2,
			/*Core                     =*/&OsCfg_Core_OsCore2,
			/*IntApiState              =*/&OsCfg_Core_OsCore2_Dyn.IntApiState,
			/*TimerPortConfig          =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_OsCore2_Isr_Level2_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE			
		},
		/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_STM2_Ch0_HwConfig,
		/*IsrId                        =*/OsIsr_STM2_Ch0,
		/*IsEnabledOnInitialization    =*/FALSE
	},
	/*Counter     =*/OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core2)
};

const Os_IsrHwConfigType OsCfg_Isr_XSignalIsr_OsCore2_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_XSignalIsr_OsCore2,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_XSignalIsr_OsCore2,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_XSigIsrConfigType OsCfg_Isr_XSignalIsr_OsCore2 =
{
	//Isr
	{
		//Thread
		{
			/*.ContextConfig           =*/&OsCfg_Hal_Context_XSignalIsr_OsCore2,
			/*.Context                 =*/&OsCfg_Hal_Context_OsCore2_Isr_Level1_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore2_Isr_Core,
			/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_XSignalIsr_OsCore2_Dyn),
			/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore2,
			/*Core                     =*/&OsCfg_Core_OsCore2,
			/*IntApiState              =*/&OsCfg_Core_OsCore2_Dyn.IntApiState,
			/*TimerPortConfig          =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_OsCore2_Isr_Level1_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE			
		},
		/*SourceConfig                 =*/&OsCfg_Isr_XSignalIsr_OsCore2_HwConfig,
		/*IsrId                        =*/XSignalIsr_OsCore2,
		/*IsEnabledOnInitialization    =*/FALSE
	},
	/*FunctionTable     =*/&OsCfg_Isr_XSignalIsr_OsCore2_FuncTable,
	/*RecvPortRefs      =*/OsCfg_Isr_XSignalIsr_OsCore2_PortRefs,
	/*RecvPortCount     =*/(Os_ObjIdxType)3,
	/*HwConfig          =*/&OsCfg_Hal_XSig_XSignalIsr_OsCore2
};



/**********************************************************Core3**********************************************************/
const Os_IsrHwConfigType OsCfg_Isr_OsIsr_STM3_Ch0_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_OsIsr_STM3_Ch0,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_OsIsr_STM3_Ch0,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_TimerIsrConfigType OsCfg_Isr_OsIsr_STM3_Ch0 =
{
	//Isr
	{
		//Thread
		{
			/*.ContextConfig           =*/&OsCfg_Hal_Context_OsIsr_STM3_Ch0,
			/*.Context                 =*/&OsCfg_Hal_Context_OsCore3_Isr_Level2_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore3_Isr_Core,
			/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_STM3_Ch0_Dyn),
			/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore3,
			/*Core                     =*/&OsCfg_Core_OsCore3,
			/*IntApiState              =*/&OsCfg_Core_OsCore3_Dyn.IntApiState,
			/*TimerPortConfig          =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_OsCore3_Isr_Level2_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE			
		},
		/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_STM3_Ch0_HwConfig,
		/*IsrId                        =*/OsIsr_STM3_Ch0,
		/*IsEnabledOnInitialization    =*/FALSE
	},
	/*Counter     =*/OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core3)
};

const Os_IsrHwConfigType OsCfg_Isr_XSignalIsr_OsCore3_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_XSignalIsr_OsCore3,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_XSignalIsr_OsCore3,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_XSigIsrConfigType OsCfg_Isr_XSignalIsr_OsCore3 =
{
	//Isr
	{
		//Thread
		{
			/*.ContextConfig           =*/&OsCfg_Hal_Context_XSignalIsr_OsCore3,
			/*.Context                 =*/&OsCfg_Hal_Context_OsCore3_Isr_Level1_Dyn,
			/*Stack                    =*/&OsCfg_Stack_OsCore3_Isr_Core,
			/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_XSignalIsr_OsCore3_Dyn),
			/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore3,
			/*Core                     =*/&OsCfg_Core_OsCore3,
			/*IntApiState              =*/&OsCfg_Core_OsCore3_Dyn.IntApiState,
			/*TimerPortConfig          =*/NULL_PTR,
			/*MpAccessRightsInitial    =*/NULL_PTR,
			/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
			/*Trace                    =*/NULL_PTR,
			/*FpuContext               =*/&OsCfg_Hal_FpuContext_OsCore3_Isr_Level1_Dyn,
			/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
			/*PreThreadHook            =*/NULL_PTR,
			/*InitDuringStartUp        =*/FALSE,
			/*UsesFpu                  =*/TRUE			
		},
		/*SourceConfig                 =*/&OsCfg_Isr_XSignalIsr_OsCore3_HwConfig,
		/*IsrId                        =*/XSignalIsr_OsCore3,
		/*IsEnabledOnInitialization    =*/FALSE
	},
	/*FunctionTable     =*/&OsCfg_Isr_XSignalIsr_OsCore3_FuncTable,
	/*RecvPortRefs      =*/OsCfg_Isr_XSignalIsr_OsCore3_PortRefs,
	/*RecvPortCount     =*/(Os_ObjIdxType)3,
	/*HwConfig          =*/&OsCfg_Hal_XSig_XSignalIsr_OsCore3
};


const Os_IsrConfigType* const OsCfg_IsrRefs[9] = 
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM0_Ch0),
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM1_Ch0),
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM2_Ch0),
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM3_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore1),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore2),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore3),
	NULL_PTR
};