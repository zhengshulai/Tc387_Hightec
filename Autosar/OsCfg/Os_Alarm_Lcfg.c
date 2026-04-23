#define OS_ALARM_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_Alarm_Lcfg.h"
#include "Os_Alarm.h"

#include "Os_Application_Lcfg.h"
#include "Os_Cfg.h"
#include "Os_Common.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"
#include "Os_Task_Lcfg.h"
#include "Os_Timer.h"


static Os_AlarmType OsCfg_Alarm_Rte_Al_TE2_Core0_10ms_Task_0_10ms_Dyn;

static Os_AlarmType OsCfg_Alarm_Rte_Al_TE2_Core1_10ms_Task_0_10ms_Dyn;

static Os_AlarmType OsCfg_Alarm_Rte_Al_TE2_Core2_10ms_Task_0_10ms_Dyn;

static Os_AlarmType OsCfg_Alarm_Rte_Al_TE2_Core3_10ms_Task_0_10ms_Dyn;

const Os_AlarmSetEventConfigType OsCfg_Alarm_Rte_Al_TE2_Core0_10ms_Task_0_10ms = 
{
	//.Alarm
	{
		//.Job
		{
			/*.Dyn       =*/OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Core0_10ms_Task_0_10ms_Dyn),
			/*.Count     =*/OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core0),
			/*.Callback  =*/Os_AlarmActionSetEvent
		},
		//Autosarstart
		{
			/*AlarmTime          =*/0u,
			/*Cycle              =*/0u,
			/*ApplicationModes   =*/OS_APPMODE_NONE,
			/*AlarmMode          =*/OS_ALARMMODE_ABSOLUTE
		},
		/*AccessingApplications  =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
		/*OwnerApplication       =*/&OsCfg_App_OsApplication_NonTrusted_Core0		
	},
	/*Task  =*/&OsCfg_Task_Core0_10ms_Task,
	/*Mask  =*/Rte_Ev_Cyclic2_Core0_10ms_Task_0_10ms	
};





const Os_AlarmSetEventConfigType OsCfg_Alarm_Rte_Al_TE2_Core1_10ms_Task_0_10ms = 
{
	//.Alarm
	{
		//.Job
		{
			/*.Dyn       =*/OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Core1_10ms_Task_0_10ms_Dyn),
			/*.Count     =*/OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core1),
			/*.Callback  =*/Os_AlarmActionSetEvent
		},
		//Autosarstart
		{
			/*AlarmTime          =*/0u,
			/*Cycle              =*/0u,
			/*ApplicationModes   =*/OS_APPMODE_NONE,
			/*AlarmMode          =*/OS_ALARMMODE_ABSOLUTE
		},
		/*AccessingApplications  =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
		/*OwnerApplication       =*/&OsCfg_App_OsApplication_NonTrusted_Core1		
	},
	/*Task  =*/&OsCfg_Task_Core1_10ms_Task,
	/*Mask  =*/Rte_Ev_Cyclic2_Core1_10ms_Task_0_10ms
};






const Os_AlarmSetEventConfigType OsCfg_Alarm_Rte_Al_TE2_Core2_10ms_Task_0_10ms = 
{
	//.Alarm
	{
		//.Job
		{
			/*.Dyn       =*/OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Core2_10ms_Task_0_10ms_Dyn),
			/*.Count     =*/OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core2),
			/*.Callback  =*/Os_AlarmActionSetEvent
		},
		//Autosarstart
		{
			/*AlarmTime          =*/0u,
			/*Cycle              =*/0u,
			/*ApplicationModes   =*/OS_APPMODE_NONE,
			/*AlarmMode          =*/OS_ALARMMODE_ABSOLUTE
		},
		/*AccessingApplications  =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
		/*OwnerApplication       =*/&OsCfg_App_OsApplication_NonTrusted_Core2		
	},
	/*Task  =*/&OsCfg_Task_Core2_10ms_Task,
	/*Mask  =*/Rte_Ev_Cyclic2_Core2_10ms_Task_0_10ms
};



const Os_AlarmSetEventConfigType OsCfg_Alarm_Rte_Al_TE2_Core3_10ms_Task_0_10ms = 
{
	//.Alarm
	{
		//.Job
		{
			/*.Dyn       =*/OS_ALARM_CASTDYN_ALARM_2_JOB(OsCfg_Alarm_Rte_Al_TE2_Core3_10ms_Task_0_10ms_Dyn),
			/*.Count     =*/OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core3),
			/*.Callback  =*/Os_AlarmActionSetEvent
		},
		//Autosarstart
		{
			/*AlarmTime          =*/0u,
			/*Cycle              =*/0u,
			/*ApplicationModes   =*/OS_APPMODE_NONE,
			/*AlarmMode          =*/OS_ALARMMODE_ABSOLUTE
		},
		/*AccessingApplications  =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
		/*OwnerApplication       =*/&OsCfg_App_OsApplication_NonTrusted_Core3		
	},
	/*Task  =*/&OsCfg_Task_Core3_10ms_Task,
	/*Mask  =*/Rte_Ev_Cyclic2_Core3_10ms_Task_0_10ms
};

const Os_AlarmConfigType* const OsCfg_AlarmRefs[5] = 
{
	OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Core0_10ms_Task_0_10ms),
	OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Core1_10ms_Task_0_10ms),
	OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Core2_10ms_Task_0_10ms),
	OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Core3_10ms_Task_0_10ms),
	NULL_PTR
};