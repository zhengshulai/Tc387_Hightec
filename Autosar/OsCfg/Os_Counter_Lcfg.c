#define OS_COUNTER_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Counter_Cfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"

#include "Os_Application_Lcfg.h"
#include "Os_Cfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_PriorityQueue.h"
#include "Os_Timer.h"

#include "Os_Hal_Cfg.h"
#include "Os_Hal_Timer_Lcfg.h"

static Os_TimerHrtType OsCfg_Counter_SystemTimer_Core0_Dyn;
static Os_PriorityQueueType OsCfg_Counter_SystemTimer_Core0_JobQueue_Dyn;
static Os_PriorityQueueNodeType OsCfg_Counter_SystemTimer_Core0_JobQueueNodes_Dyn[2];

static Os_TimerHrtType OsCfg_Counter_SystemTimer_Core1_Dyn;
static Os_PriorityQueueType OsCfg_Counter_SystemTimer_Core1_JobQueue_Dyn;
static Os_PriorityQueueNodeType OsCfg_Counter_SystemTimer_Core1_JobQueueNodes_Dyn[2];

static Os_TimerHrtType OsCfg_Counter_SystemTimer_Core2_Dyn;
static Os_PriorityQueueType OsCfg_Counter_SystemTimer_Core2_JobQueue_Dyn;
static Os_PriorityQueueNodeType OsCfg_Counter_SystemTimer_Core2_JobQueueNodes_Dyn[2];

static Os_TimerHrtType OsCfg_Counter_SystemTimer_Core3_Dyn;
static Os_PriorityQueueType OsCfg_Counter_SystemTimer_Core3_JobQueue_Dyn;
static Os_PriorityQueueNodeType OsCfg_Counter_SystemTimer_Core3_JobQueueNodes_Dyn[2];



const Os_TimerHrtConfigType OsCfg_Counter_SystemTimer_Core0 = 
{
	//Counter
	{
		//Characteristics
		{
			/*MaxAlloedValue         =*/OSMAXALLOWEDVALUE_SystemTimer_Core0,
			/*MaxCountingValue       =*/OS_TIMERHRT_GETMAXCOUNTINGVALUE(OSMAXALLOWEDVALUE_SystemTimer_Core0),
			/*MaxDifferentialValue   =*/OS_TIMERHRT_GETMAXDIFFERENTIALVALUE(OSMAXALLOWEDVALUE_SystemTimer_Core0),
			/*MinCycle               =*/OSMINCYCLE_SystemTimer_Core0,
			/*TicksPerBase           =*/OSTICKSPERBASE_SystemTimer_Core0
		},
		//JobQueue
		{
			/*Queue                  =*/OsCfg_Counter_SystemTimer_Core0_JobQueueNodes_Dyn,
			/*Dyn                    =*/&OsCfg_Counter_SystemTimer_Core0_JobQueue_Dyn,
			/*QueueSize              =*/(Os_PriorityQueueNodeIdxType)1
		},
		/*DriveType              =*/OS_TIMERTYPE_HIGH_RESOLUTION,
		/*Core                   =*/&OsCfg_Core_OsCore0,
		/*OwnerApplication       =*/&OsCfg_App_SystemApplication_OsCore0,
		/*AccessingApplications  =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3))
	},
	/*Dyn      =*/&OsCfg_Counter_SystemTimer_Core0_Dyn,
	/*HwConfig =*/&OsCfg_Hal_TimerFrt_SystemTimer_Core0
};

const Os_TimerHrtConfigType OsCfg_Counter_SystemTimer_Core1 = 
{
	//Counter
	{
		//Characteristics
		{
			/*MaxAlloedValue         =*/OSMAXALLOWEDVALUE_SystemTimer_Core1,
			/*MaxCountingValue       =*/OS_TIMERHRT_GETMAXCOUNTINGVALUE(OSMAXALLOWEDVALUE_SystemTimer_Core1),
			/*MaxDifferentialValue   =*/OS_TIMERHRT_GETMAXDIFFERENTIALVALUE(OSMAXALLOWEDVALUE_SystemTimer_Core1),
			/*MinCycle               =*/OSMINCYCLE_SystemTimer_Core1,
			/*TicksPerBase           =*/OSTICKSPERBASE_SystemTimer_Core1
		},
		//JobQueue
		{
			/*Queue                  =*/OsCfg_Counter_SystemTimer_Core1_JobQueueNodes_Dyn,
			/*Dyn                    =*/&OsCfg_Counter_SystemTimer_Core1_JobQueue_Dyn,
			/*QueueSize              =*/(Os_PriorityQueueNodeIdxType)1
		},
		/*DriveType              =*/OS_TIMERTYPE_HIGH_RESOLUTION,
		/*Core                   =*/&OsCfg_Core_OsCore1,
		/*OwnerApplication       =*/&OsCfg_App_SystemApplication_OsCore1,
		/*AccessingApplications  =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3))
	},
	/*Dyn      =*/&OsCfg_Counter_SystemTimer_Core1_Dyn,
	/*HwConfig =*/&OsCfg_Hal_TimerFrt_SystemTimer_Core1
};

const Os_TimerHrtConfigType OsCfg_Counter_SystemTimer_Core2 = 
{
	//Counter
	{
		//Characteristics
		{
			/*MaxAlloedValue         =*/OSMAXALLOWEDVALUE_SystemTimer_Core2,
			/*MaxCountingValue       =*/OS_TIMERHRT_GETMAXCOUNTINGVALUE(OSMAXALLOWEDVALUE_SystemTimer_Core2),
			/*MaxDifferentialValue   =*/OS_TIMERHRT_GETMAXDIFFERENTIALVALUE(OSMAXALLOWEDVALUE_SystemTimer_Core2),
			/*MinCycle               =*/OSMINCYCLE_SystemTimer_Core2,
			/*TicksPerBase           =*/OSTICKSPERBASE_SystemTimer_Core2
		},
		//JobQueue
		{
			/*Queue                  =*/OsCfg_Counter_SystemTimer_Core2_JobQueueNodes_Dyn,
			/*Dyn                    =*/&OsCfg_Counter_SystemTimer_Core2_JobQueue_Dyn,
			/*QueueSize              =*/(Os_PriorityQueueNodeIdxType)1
		},
		/*DriveType              =*/OS_TIMERTYPE_HIGH_RESOLUTION,
		/*Core                   =*/&OsCfg_Core_OsCore2,
		/*OwnerApplication       =*/&OsCfg_App_SystemApplication_OsCore1,
		/*AccessingApplications  =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3))
	},
	/*Dyn      =*/&OsCfg_Counter_SystemTimer_Core2_Dyn,
	/*HwConfig =*/&OsCfg_Hal_TimerFrt_SystemTimer_Core2
};

const Os_TimerHrtConfigType OsCfg_Counter_SystemTimer_Core3 = 
{
	//Counter
	{
		//Characteristics
		{
			/*MaxAlloedValue         =*/OSMAXALLOWEDVALUE_SystemTimer_Core3,
			/*MaxCountingValue       =*/OS_TIMERHRT_GETMAXCOUNTINGVALUE(OSMAXALLOWEDVALUE_SystemTimer_Core3),
			/*MaxDifferentialValue   =*/OS_TIMERHRT_GETMAXDIFFERENTIALVALUE(OSMAXALLOWEDVALUE_SystemTimer_Core3),
			/*MinCycle               =*/OSMINCYCLE_SystemTimer_Core3,
			/*TicksPerBase           =*/OSTICKSPERBASE_SystemTimer_Core3
		},
		//JobQueue
		{
			/*Queue                  =*/OsCfg_Counter_SystemTimer_Core3_JobQueueNodes_Dyn,
			/*Dyn                    =*/&OsCfg_Counter_SystemTimer_Core3_JobQueue_Dyn,
			/*QueueSize              =*/(Os_PriorityQueueNodeIdxType)1
		},
		/*DriveType              =*/OS_TIMERTYPE_HIGH_RESOLUTION,
		/*Core                   =*/&OsCfg_Core_OsCore3,
		/*OwnerApplication       =*/&OsCfg_App_SystemApplication_OsCore3,
		/*AccessingApplications  =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3))
	},
	/*Dyn      =*/&OsCfg_Counter_SystemTimer_Core3_Dyn,
	/*HwConfig =*/&OsCfg_Hal_TimerFrt_SystemTimer_Core3
};

const Os_CounterConfigType* const OsCfg_CounterRefs[5] = 
{
	OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core0),
	OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core1),
	OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core2),
	OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core3),
	NULL_PTR
};