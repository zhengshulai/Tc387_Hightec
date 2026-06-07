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

static Os_IsrType OsCfg_Isr_OsIsr_Tlf35584_TxIsr_Dyn;
static Os_IsrType OsCfg_Isr_OsIsr_Tlf35584_RxIsr_Dyn;
static Os_IsrType OsCfg_Isr_OsIsr_Tlf35584_ErrIsr_Dyn;

static Os_IsrType OsCfg_Isr_OsIsr_Tle9180_TxIsr_Dyn;
static Os_IsrType OsCfg_Isr_OsIsr_Tle9180_RxIsr_Dyn;
static Os_IsrType OsCfg_Isr_OsIsr_Tle9180_ErrIsr_Dyn;

static Os_IsrType OsCfg_Isr_OsIsr_CURR_G0CH0_Dyn;
static Os_IsrType OsCfg_Isr_OsIsr_VBEMF_G2CH3_Dyn;
static Os_IsrType OsCfg_Isr_OsIsr_VHVDC_G1CH3_Dyn;

static Os_IsrType OsCfg_Isr_OsIsr_Gpt12_Encoder_Dyn;
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


const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tlf35584_TxIsr_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_Tlf35584_TxIsr,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_Tlf35584_TxIsr,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_Tlf35584_TxIsr =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Tlf35584_TxIsr,
		/*.Context                 =*/&OsCfg_Hal_Context_Tlf35584_TxIsr_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Tlf35584_TxIsr,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_Tlf35584_TxIsr_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Tlf35584_TxIsr_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_Tlf35584_TxIsr_HwConfig,
	/*IsrId                        =*/Tlf35584_TxIsr,
	/*IsEnabledOnInitialization    =*/FALSE
};

const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tlf35584_RxIsr_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_Tlf35584_RxIsr,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_Tlf35584_RxIsr,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_Tlf35584_RxIsr =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Tlf35584_RxIsr,
		/*.Context                 =*/&OsCfg_Hal_Context_Tlf35584_RxIsr_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Tlf35584_RxIsr,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_Tlf35584_RxIsr_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Tlf35584_RxIsr_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_Tlf35584_RxIsr_HwConfig,
	/*IsrId                        =*/Tlf35584_RxIsr,
	/*IsEnabledOnInitialization    =*/FALSE
};

const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tlf35584_ErrIsr_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_Tlf35584_ErrIsr,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_Tlf35584_ErrIsr,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_Tlf35584_ErrIsr =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Tlf35584_ErrIsr,
		/*.Context                 =*/&OsCfg_Hal_Context_Tlf35584_ErrIsr_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Tlf35584_ErrIsr,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_Tlf35584_ErrIsr_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Tlf35584_ErrIsr_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_Tlf35584_ErrIsr_HwConfig,
	/*IsrId                        =*/Tlf35584_ErrIsr,
	/*IsEnabledOnInitialization    =*/FALSE
};


//tle9180-----------------
const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tle9180_TxIsr_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_Tle9180_TxIsr,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_Tle9180_TxIsr,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_Tle9180_TxIsr =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Tle9180_TxIsr,
		/*.Context                 =*/&OsCfg_Hal_Context_Tle9180_TxIsr_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Tle9180_TxIsr,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_Tle9180_TxIsr_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Tle9180_TxIsr_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_Tle9180_TxIsr_HwConfig,
	/*IsrId                        =*/Tle9180_TxIsr,
	/*IsEnabledOnInitialization    =*/FALSE
};

const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tle9180_RxIsr_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_Tle9180_RxIsr,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_Tle9180_RxIsr,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_Tle9180_RxIsr =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Tle9180_RxIsr,
		/*.Context                 =*/&OsCfg_Hal_Context_Tle9180_RxIsr_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Tle9180_RxIsr,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_Tle9180_RxIsr_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Tle9180_RxIsr_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_Tle9180_RxIsr_HwConfig,
	/*IsrId                        =*/Tle9180_RxIsr,
	/*IsEnabledOnInitialization    =*/FALSE
};

const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tle9180_ErrIsr_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_Tle9180_ErrIsr,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_Tle9180_ErrIsr,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_Tle9180_ErrIsr =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Tle9180_ErrIsr,
		/*.Context                 =*/&OsCfg_Hal_Context_Tle9180_ErrIsr_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Tle9180_ErrIsr,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_Tle9180_ErrIsr_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Tle9180_ErrIsr_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_Tle9180_ErrIsr_HwConfig,
	/*IsrId                        =*/Tle9180_ErrIsr,
	/*IsEnabledOnInitialization    =*/FALSE
};

const Os_IsrHwConfigType OsCfg_Isr_OsIsr_CURR_G0CH0_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_CURR_G0CH0,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_CURR_G0CH0,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_CURR_G0CH0 =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_CURR_G0CH0,
		/*.Context                 =*/&OsCfg_Hal_Context_CURR_G0CH0_Dyn,
		/*Stack                    =*/&OsCfg_Stack_CURR_G0CH0,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_CURR_G0CH0_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_CURR_G0CH0_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_CURR_G0CH0_HwConfig,
	/*IsrId                        =*/CURR_G0CH0,
	/*IsEnabledOnInitialization    =*/FALSE
};

const Os_IsrHwConfigType OsCfg_Isr_OsIsr_VBEMF_G2CH3_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_VBEMF_G2CH3,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_VBEMF_G2CH3,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_VBEMF_G2CH3 =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_VBEMF_G2CH3,
		/*.Context                 =*/&OsCfg_Hal_Context_VBEMF_G2CH3_Dyn,
		/*Stack                    =*/&OsCfg_Stack_VBEMF_G2CH3,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_VBEMF_G2CH3_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_VBEMF_G2CH3_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_VBEMF_G2CH3_HwConfig,
	/*IsrId                        =*/VBEMF_G2CH3,
	/*IsEnabledOnInitialization    =*/FALSE
};

const Os_IsrHwConfigType OsCfg_Isr_OsIsr_VHVDC_G1CH3_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_VHVDC_G1CH3,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_VHVDC_G1CH3,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_VHVDC_G1CH3 =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_VHVDC_G1CH3,
		/*.Context                 =*/&OsCfg_Hal_Context_VHVDC_G1CH3_Dyn,
		/*Stack                    =*/&OsCfg_Stack_VHVDC_G1CH3,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_VHVDC_G1CH3_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_VHVDC_G1CH3_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_VHVDC_G1CH3_HwConfig,
	/*IsrId                        =*/VHVDC_G1CH3,
	/*IsEnabledOnInitialization    =*/FALSE
};

const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Gpt12_Encoder_HwConfig = 
{
	/*HwConfig                 =*/&OsCfg_Hal_IntIsr_Gpt12_Encoder,
	/*MapConfig                =*/&OsCfg_Hal_IntIsrMap_Gpt12_Encoder,
	/*IsMapped                 =*/FALSE,
	/*IsPostActionRequired     =*/FALSE
};

const Os_IsrConfigType OsCfg_Isr_OsIsr_Gpt12_Encoder =
{
	//Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Gpt12_Encoder,
		/*.Context                 =*/&OsCfg_Hal_Context_Gpt12_Encoder_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Gpt12_Encoder,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Isr_OsIsr_Gpt12_Encoder_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Gpt12_Encoder_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_ISR2,
		/*PreThreadHook            =*/NULL_PTR,
		/*InitDuringStartUp        =*/FALSE,
		/*UsesFpu                  =*/TRUE			
	},
	/*SourceConfig                 =*/&OsCfg_Isr_OsIsr_Gpt12_Encoder_HwConfig,
	/*IsrId                        =*/Gpt12_Encoder,
	/*IsEnabledOnInitialization    =*/FALSE
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


const Os_IsrConfigType* const OsCfg_IsrRefs[19] = 
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM0_Ch0),
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM1_Ch0),
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM2_Ch0),
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM3_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore1),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore2),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore3),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_Tlf35584_TxIsr),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_Tlf35584_RxIsr),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_Tlf35584_ErrIsr),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_Tle9180_TxIsr),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_Tle9180_RxIsr),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_Tle9180_ErrIsr),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_CURR_G0CH0),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_VBEMF_G2CH3),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_VHVDC_G1CH3),
	OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_OsIsr_Gpt12_Encoder),
	NULL_PTR
};