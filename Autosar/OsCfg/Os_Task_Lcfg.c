#define OS_TASK_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_Task_Lcfg.h"
#include "Os_Task.h"

#include "Os_AccessCheck_Lcfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Core_Lcfg.h"
#include "Os_Common.h"
#include "Os_Core.h"
#include "Os_Ioc.h"
#include "Os_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Scheduler_Types.h"
#include "Os_Stack_Lcfg.h"
#include "Os_TaskInt.h"
#include "Os_Thread.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"

#include "Os_Hal_Context_Lcfg.h"

static Os_TaskType OsCfg_Task_Core0_10ms_Task_Dyn;
static Os_TaskType OsCfg_Task_Default_Init_Task_Core0_Dyn;
static Os_TaskType OsCfg_Task_IdleTask_OsCore0_Dyn;

static Os_TaskType OsCfg_Task_Core1_10ms_Task_Dyn;
static Os_TaskType OsCfg_Task_Default_Init_Task_Core1_Dyn;
static Os_TaskType OsCfg_Task_IdleTask_OsCore1_Dyn;

static Os_TaskType OsCfg_Task_Core2_10ms_Task_Dyn;
static Os_TaskType OsCfg_Task_Default_Init_Task_Core2_Dyn;
static Os_TaskType OsCfg_Task_IdleTask_OsCore2_Dyn;

static Os_TaskType OsCfg_Task_Core3_10ms_Task_Dyn;
static Os_TaskType OsCfg_Task_Default_Init_Task_Core3_Dyn;
static Os_TaskType OsCfg_Task_IdleTask_OsCore3_Dyn;


const Os_TaskConfigType OsCfg_Task_Core0_10ms_Task = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Core0_10ms_Task,
		/*.Context                 =*/&OsCfg_Hal_Context_Core0_10ms_Task_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Core0_10ms_Task,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Core0_10ms_Task_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Core0_10ms_Task_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)1u,
	/*TaskId                       =*/Core0_10ms_Task,
	/*RunningPriority              =*/(Os_TaskPrioType)1u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OS_APPMODE_NONE,
	/*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/TRUE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

const Os_TaskConfigType OsCfg_Task_Default_Init_Task_Core0 = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Default_Init_Task_Core0,
		/*.Context                 =*/&OsCfg_Hal_Context_Default_Init_Task_Core0_Dyn,
		/*Stack                    =*/&OsCfg_Stack_OsCore0_Task_Prio300,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_Init_Task_Core0_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Default_Init_Task_Core0_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)0u,
	/*TaskId                       =*/Default_Init_Task_Core0,
	/*RunningPriority              =*/(Os_TaskPrioType)0u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OSDEFAULTAPPMODE,
	/*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/FALSE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

const Os_TaskConfigType OsCfg_Task_IdleTask_OsCore0 = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_IdleTask_OsCore0,
		/*.Context                 =*/&OsCfg_Hal_Context_IdleTask_OsCore0_Dyn,
		/*Stack                    =*/&OsCfg_Stack_OsCore0_Task_Prio4294967295,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_IdleTask_OsCore0_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore0,
		/*Core                     =*/&OsCfg_Core_OsCore0,
		/*IntApiState              =*/&OsCfg_Core_OsCore0_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_IdleTask_OsCore0_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)2u,
	/*TaskId                       =*/IdleTask_OsCore0,
	/*RunningPriority              =*/(Os_TaskPrioType)2u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OS_APPMODE_ANY,
	/*AccessingApplications        =*/(OS_APPID2MASK(SystemApplication_OsCore0)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/FALSE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

/******************************************************Core1***************************************************/
const Os_TaskConfigType OsCfg_Task_Core1_10ms_Task = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Core1_10ms_Task,
		/*.Context                 =*/&OsCfg_Hal_Context_Core1_10ms_Task_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Core1_10ms_Task,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Core1_10ms_Task_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core1,
		/*Core                     =*/&OsCfg_Core_OsCore1,
		/*IntApiState              =*/&OsCfg_Core_OsCore1_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Core1_10ms_Task_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)1u,
	/*TaskId                       =*/Core1_10ms_Task,
	/*RunningPriority              =*/(Os_TaskPrioType)1u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OS_APPMODE_NONE,
	/*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/TRUE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

const Os_TaskConfigType OsCfg_Task_Default_Init_Task_Core1 = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Default_Init_Task_Core1,
		/*.Context                 =*/&OsCfg_Hal_Context_Default_Init_Task_Core1_Dyn,
		/*Stack                    =*/&OsCfg_Stack_OsCore1_Task_Prio300,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_Init_Task_Core1_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core1,
		/*Core                     =*/&OsCfg_Core_OsCore1,
		/*IntApiState              =*/&OsCfg_Core_OsCore1_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Default_Init_Task_Core1_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)0u,
	/*TaskId                       =*/Default_Init_Task_Core1,
	/*RunningPriority              =*/(Os_TaskPrioType)0u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OSDEFAULTAPPMODE,
	/*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/FALSE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

const Os_TaskConfigType OsCfg_Task_IdleTask_OsCore1 = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_IdleTask_OsCore1,
		/*.Context                 =*/&OsCfg_Hal_Context_IdleTask_OsCore1_Dyn,
		/*Stack                    =*/&OsCfg_Stack_OsCore1_Task_Prio4294967295,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_IdleTask_OsCore1_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore1,
		/*Core                     =*/&OsCfg_Core_OsCore1,
		/*IntApiState              =*/&OsCfg_Core_OsCore1_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_IdleTask_OsCore1_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)2u,
	/*TaskId                       =*/IdleTask_OsCore1,
	/*RunningPriority              =*/(Os_TaskPrioType)2u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OS_APPMODE_ANY,
	/*AccessingApplications        =*/(OS_APPID2MASK(SystemApplication_OsCore1)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/FALSE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};


/******************************************************Core1***************************************************/
const Os_TaskConfigType OsCfg_Task_Core2_10ms_Task = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Core2_10ms_Task,
		/*.Context                 =*/&OsCfg_Hal_Context_Core2_10ms_Task_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Core2_10ms_Task,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Core2_10ms_Task_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core2,
		/*Core                     =*/&OsCfg_Core_OsCore2,
		/*IntApiState              =*/&OsCfg_Core_OsCore2_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Core2_10ms_Task_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)1u,
	/*TaskId                       =*/Core2_10ms_Task,
	/*RunningPriority              =*/(Os_TaskPrioType)1u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OS_APPMODE_NONE,
	/*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/TRUE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

const Os_TaskConfigType OsCfg_Task_Default_Init_Task_Core2 = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Default_Init_Task_Core2,
		/*.Context                 =*/&OsCfg_Hal_Context_Default_Init_Task_Core2_Dyn,
		/*Stack                    =*/&OsCfg_Stack_OsCore2_Task_Prio300,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_Init_Task_Core2_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core2,
		/*Core                     =*/&OsCfg_Core_OsCore2,
		/*IntApiState              =*/&OsCfg_Core_OsCore2_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Default_Init_Task_Core2_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)0u,
	/*TaskId                       =*/Default_Init_Task_Core2,
	/*RunningPriority              =*/(Os_TaskPrioType)0u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OSDEFAULTAPPMODE,
	/*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/FALSE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

const Os_TaskConfigType OsCfg_Task_IdleTask_OsCore2 = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_IdleTask_OsCore2,
		/*.Context                 =*/&OsCfg_Hal_Context_IdleTask_OsCore2_Dyn,
		/*Stack                    =*/&OsCfg_Stack_OsCore2_Task_Prio4294967295,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_IdleTask_OsCore2_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore2,
		/*Core                     =*/&OsCfg_Core_OsCore2,
		/*IntApiState              =*/&OsCfg_Core_OsCore2_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_IdleTask_OsCore2_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)2u,
	/*TaskId                       =*/IdleTask_OsCore2,
	/*RunningPriority              =*/(Os_TaskPrioType)2u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OS_APPMODE_ANY,
	/*AccessingApplications        =*/(OS_APPID2MASK(SystemApplication_OsCore2)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/FALSE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};




/******************************************************Core1***************************************************/
const Os_TaskConfigType OsCfg_Task_Core3_10ms_Task = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Core3_10ms_Task,
		/*.Context                 =*/&OsCfg_Hal_Context_Core3_10ms_Task_Dyn,
		/*Stack                    =*/&OsCfg_Stack_Core3_10ms_Task,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Core3_10ms_Task_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core3,
		/*Core                     =*/&OsCfg_Core_OsCore3,
		/*IntApiState              =*/&OsCfg_Core_OsCore3_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Core3_10ms_Task_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)1u,
	/*TaskId                       =*/Core3_10ms_Task,
	/*RunningPriority              =*/(Os_TaskPrioType)1u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OS_APPMODE_NONE,
	/*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/TRUE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

const Os_TaskConfigType OsCfg_Task_Default_Init_Task_Core3 = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_Default_Init_Task_Core3,
		/*.Context                 =*/&OsCfg_Hal_Context_Default_Init_Task_Core3_Dyn,
		/*Stack                    =*/&OsCfg_Stack_OsCore3_Task_Prio300,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Default_Init_Task_Core3_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_OsApplication_NonTrusted_Core3,
		/*Core                     =*/&OsCfg_Core_OsCore3,
		/*IntApiState              =*/&OsCfg_Core_OsCore3_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_Default_Init_Task_Core3_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)0u,
	/*TaskId                       =*/Default_Init_Task_Core3,
	/*RunningPriority              =*/(Os_TaskPrioType)0u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OSDEFAULTAPPMODE,
	/*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/FALSE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};

const Os_TaskConfigType OsCfg_Task_IdleTask_OsCore3 = 
{
	//.Thread
	{
		/*.ContextConfig           =*/&OsCfg_Hal_Context_IdleTask_OsCore3,
		/*.Context                 =*/&OsCfg_Hal_Context_IdleTask_OsCore3_Dyn,
		/*Stack                    =*/&OsCfg_Stack_OsCore3_Task_Prio4294967295,
		/*Dyn                      =*/OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_IdleTask_OsCore3_Dyn),
		/*OwnerApplication         =*/&OsCfg_App_SystemApplication_OsCore3,
		/*Core                     =*/&OsCfg_Core_OsCore3,
		/*IntApiState              =*/&OsCfg_Core_OsCore3_Dyn.IntApiState,
		/*TimerPortConfig          =*/NULL_PTR,
		/*MpAccessRightsInitial    =*/NULL_PTR,
		/*AccessRights             =*/&OsCfg_AccessCheck_NoAccess,
		/*Trace                    =*/NULL_PTR,
		/*FpuContext               =*/&OsCfg_Hal_FpuContext_IdleTask_OsCore3_Dyn,
		/*InitialCallContext       =*/OS_CALLCONTEXT_TASK,
		/*PreThreadHook            =*/Os_TaskCallPreTaskHook,
		/*InitDuringStartUp        =*/TRUE,
		/*UsesFpu                  =*/TRUE
	},
	/*HomePriority                 =*/(Os_TaskPrioType)2u,
	/*TaskId                       =*/IdleTask_OsCore3,
	/*RunningPriority              =*/(Os_TaskPrioType)2u,
	/*MaxActiveations              =*/(Os_ActivationCntType)1u,
	/*AutostartModes               =*/OS_APPMODE_ANY,
	/*AccessingApplications        =*/(OS_APPID2MASK(SystemApplication_OsCore3)),
	/*NumSchEventsRoundRobin       =*/0u,
	/*RoundRobinEnable             =*/FALSE,
	/*IsExtended                   =*/FALSE,
	/*StackSharing                 =*/OS_TASKSCHEDULE_ALLOWED
};


const Os_TaskConfigType* const OsCfg_TaskRefs[13] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Core0_10ms_Task),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Core1_10ms_Task),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Core2_10ms_Task),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Core3_10ms_Task),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task_Core0),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task_Core1),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task_Core2),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task_Core3),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore0),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore1),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore2),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore3),
	NULL_PTR
};