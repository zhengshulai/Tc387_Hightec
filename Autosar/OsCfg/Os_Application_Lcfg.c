#define OS_APPLICATION_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_Application_Cfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Application.h"

#include "Os_Alarm_Lcfg.h"
#include "Os_Alarm.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_Counter.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_ScheduleTable_Lcfg.h"
#include "Os_Scheduler_Lcfg.h"
#include "Os_ServiceFunction_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Timer.h"



static Os_AppType OsCfg_App_OsApplication_NonTrusted_Core0_Dyn;
static Os_AppType OsCfg_App_SystemApplication_OsCore0_Dyn;

static Os_AppType OsCfg_App_OsApplication_NonTrusted_Core1_Dyn;
static Os_AppType OsCfg_App_SystemApplication_OsCore1_Dyn;

static Os_AppType OsCfg_App_OsApplication_NonTrusted_Core2_Dyn;
static Os_AppType OsCfg_App_SystemApplication_OsCore2_Dyn;

static Os_AppType OsCfg_App_OsApplication_NonTrusted_Core3_Dyn;
static Os_AppType OsCfg_App_SystemApplication_OsCore3_Dyn;



static const Os_AlarmConfigRefType OsCfg_App_OsApplication_NonTrusted_Core0_AlarmRefs[2] = 
{
	OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Core0_10ms_Task_0_10ms),
	NULL_PTR
};
static const Os_CounterConfigRefType OsCfg_App_OsApplication_NonTrusted_Core0_CounterRefs[1] = 
{
	NULL_PTR
};
static const Os_HookConfigRefType OsCfg_App_OsApplication_NonTrusted_Core0_HookRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_App_OsApplication_NonTrusted_Core0_IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrCat1ConfigRefType OsCfg_App_OsApplication_NonTrusted_Core0_Cat1IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_SchTConfigRefType OsCfg_App_OsApplication_NonTrusted_Core0_SchTRefs[1] = 
{
	NULL_PTR
};
static const Os_TaskConfigRefType OsCfg_App_OsApplication_NonTrusted_Core0_TaskRefs[3] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Core0_10ms_Task),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task_Core0),	
	NULL_PTR
};
static const Os_ServiceConfigRefType OsCfg_App_OsApplication_NonTrusted_Core0_ServiceRefs[1] = 
{
	NULL_PTR
};

const Os_AppConfigType OsCfg_App_OsApplication_NonTrusted_Core0 = 
{
	/*Dyn                          =*/&OsCfg_App_OsApplication_NonTrusted_Core0_Dyn,
	/*Core                         =*/&OsCfg_Core_OsCore0,
	/*AccssRightId                 =*/OS_APPID2MASK(OsApplication_NonTrusted_Core0),
	/*TaskRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core0_TaskRefs,
	/*TaskCount                    =*/(Os_ObjIdxType)2u,
	/*IsrCat2Refs                  =*/OsCfg_App_OsApplication_NonTrusted_Core0_IsrRefs,
	/*IsrCat2Count                 =*/(Os_ObjIdxType)0u,
	/*IsrCat1Refs                  =*/OsCfg_App_OsApplication_NonTrusted_Core0_Cat1IsrRefs,
	/*IsrCat1Count                 =*/(Os_ObjIdxType)0u,
	/*CounterRefs                  =*/OsCfg_App_OsApplication_NonTrusted_Core0_CounterRefs,
	/*CounterCount                 =*/(Os_ObjIdxType)0u,
	/*AlarmRefs                    =*/OsCfg_App_OsApplication_NonTrusted_Core0_AlarmRefs,
	/*AlarmCount                   =*/(Os_ObjIdxType)1u,
	/*SchTRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core0_SchTRefs,
	/*SchTCount                    =*/(Os_ObjIdxType)0u,
	/*ServiceFunctions             =*/OsCfg_App_OsApplication_NonTrusted_Core0_ServiceRefs,
	/*ServiceFunctionsCount        =*/(Os_ObjIdxType)0u,
	/*StartupHookRef               =*/NULL_PTR,
	/*ShutdownHookRef              =*/NULL_PTR,
	/*ErrorHookRef                 =*/NULL_PTR,
	/*HookRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core0_HookRefs,
	/*HookCount                    =*/(Os_ObjIdxType)0u,
	/*RestartTask                  =*/NULL_PTR,
	/*IsTrusted                    =*/TRUE,
	/*IsPrivileged                 =*/TRUE,
	/*HasTimingProtectionDelay     =*/FALSE,
	/*Id                           =*/OsApplication_NonTrusted_Core0,
};

static const Os_AlarmConfigRefType OsCfg_App_SysApplication_OsCore0_AlarmRefs[1] = 
{
	NULL_PTR
};
static const Os_CounterConfigRefType OsCfg_App_SysApplication_OsCore0_CounterRefs[2] = 
{
	OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core0),
	NULL_PTR
};
static const Os_HookConfigRefType OsCfg_App_SysApplication_OsCore0_HookRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_App_SysApplication_OsCore0_IsrRefs[3] = 
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM0_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore0),
	NULL_PTR
};
static const Os_IsrCat1ConfigRefType OsCfg_App_SysApplication_OsCore0_Cat1IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_SchTConfigRefType OsCfg_App_SysApplication_OsCore0_SchTRefs[1] = 
{
	NULL_PTR
};
static const Os_TaskConfigRefType OsCfg_App_SysApplication_OsCore0_TaskRefs[2] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore0),
	NULL_PTR
};
static const Os_ServiceConfigRefType OsCfg_App_SysApplication_OsCore0_ServiceRefs[1] = 
{
	NULL_PTR
};

const Os_AppConfigType OsCfg_App_SystemApplication_OsCore0 = 
{
	/*Dyn                          =*/&OsCfg_App_SystemApplication_OsCore0_Dyn,
	/*Core                         =*/&OsCfg_Core_OsCore0,
	/*AccssRightId                 =*/OS_APPID2MASK(SystemApplication_OsCore0),
	/*TaskRefs                     =*/OsCfg_App_SysApplication_OsCore0_TaskRefs,
	/*TaskCount                    =*/(Os_ObjIdxType)1u,
	/*IsrCat2Refs                  =*/OsCfg_App_SysApplication_OsCore0_IsrRefs,
	/*IsrCat2Count                 =*/(Os_ObjIdxType)2u,
	/*IsrCat1Refs                  =*/OsCfg_App_SysApplication_OsCore0_Cat1IsrRefs,
	/*IsrCat1Count                 =*/(Os_ObjIdxType)0u,
	/*CounterRefs                  =*/OsCfg_App_SysApplication_OsCore0_CounterRefs,
	/*CounterCount                 =*/(Os_ObjIdxType)1u,
	/*AlarmRefs                    =*/OsCfg_App_SysApplication_OsCore0_AlarmRefs,
	/*AlarmCount                   =*/(Os_ObjIdxType)0u,
	/*SchTRefs                     =*/OsCfg_App_SysApplication_OsCore0_SchTRefs,
	/*SchTCount                    =*/(Os_ObjIdxType)0u,
	/*ServiceFunctions             =*/OsCfg_App_SysApplication_OsCore0_ServiceRefs,
	/*ServiceFunctionsCount        =*/(Os_ObjIdxType)0u,
	/*StartupHookRef               =*/NULL_PTR,
	/*ShutdownHookRef              =*/NULL_PTR,
	/*ErrorHookRef                 =*/NULL_PTR,
	/*HookRefs                     =*/OsCfg_App_SysApplication_OsCore0_HookRefs,
	/*HookCount                    =*/(Os_ObjIdxType)0u,
	/*RestartTask                  =*/NULL_PTR,
	/*IsTrusted                    =*/TRUE,
	/*IsPrivileged                 =*/TRUE,
	/*HasTimingProtectionDelay     =*/FALSE,
	/*Id                           =*/SystemApplication_OsCore0,
};




/*****************************************Core1*******************************************/


static const Os_AlarmConfigRefType OsCfg_App_OsApplication_NonTrusted_Core1_AlarmRefs[2] = 
{
	OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Core1_10ms_Task_0_10ms),
	NULL_PTR
};
static const Os_CounterConfigRefType OsCfg_App_OsApplication_NonTrusted_Core1_CounterRefs[1] = 
{
	NULL_PTR
};
static const Os_HookConfigRefType OsCfg_App_OsApplication_NonTrusted_Core1_HookRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_App_OsApplication_NonTrusted_Core1_IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrCat1ConfigRefType OsCfg_App_OsApplication_NonTrusted_Core1_Cat1IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_SchTConfigRefType OsCfg_App_OsApplication_NonTrusted_Core1_SchTRefs[1] = 
{
	NULL_PTR
};
static const Os_TaskConfigRefType OsCfg_App_OsApplication_NonTrusted_Core1_TaskRefs[3] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Core1_10ms_Task),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task_Core1),
	NULL_PTR
};
static const Os_ServiceConfigRefType OsCfg_App_OsApplication_NonTrusted_Core1_ServiceRefs[1] = 
{
	NULL_PTR
};

const Os_AppConfigType OsCfg_App_OsApplication_NonTrusted_Core1 = 
{
	/*Dyn                          =*/&OsCfg_App_OsApplication_NonTrusted_Core1_Dyn,
	/*Core                         =*/&OsCfg_Core_OsCore1,
	/*AccssRightId                 =*/OS_APPID2MASK(OsApplication_NonTrusted_Core1),
	/*TaskRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core1_TaskRefs,
	/*TaskCount                    =*/(Os_ObjIdxType)2u,
	/*IsrCat2Refs                  =*/OsCfg_App_OsApplication_NonTrusted_Core1_IsrRefs,
	/*IsrCat2Count                 =*/(Os_ObjIdxType)0u,
	/*IsrCat1Refs                  =*/OsCfg_App_OsApplication_NonTrusted_Core1_Cat1IsrRefs,
	/*IsrCat1Count                 =*/(Os_ObjIdxType)0u,
	/*CounterRefs                  =*/OsCfg_App_OsApplication_NonTrusted_Core1_CounterRefs,
	/*CounterCount                 =*/(Os_ObjIdxType)0u,
	/*AlarmRefs                    =*/OsCfg_App_OsApplication_NonTrusted_Core1_AlarmRefs,
	/*AlarmCount                   =*/(Os_ObjIdxType)1u,
	/*SchTRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core1_SchTRefs,
	/*SchTCount                    =*/(Os_ObjIdxType)0u,
	/*ServiceFunctions             =*/OsCfg_App_OsApplication_NonTrusted_Core1_ServiceRefs,
	/*ServiceFunctionsCount        =*/(Os_ObjIdxType)0u,
	/*StartupHookRef               =*/NULL_PTR,
	/*ShutdownHookRef              =*/NULL_PTR,
	/*ErrorHookRef                 =*/NULL_PTR,
	/*HookRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core1_HookRefs,
	/*HookCount                    =*/(Os_ObjIdxType)0u,
	/*RestartTask                  =*/NULL_PTR,
	/*IsTrusted                    =*/TRUE,
	/*IsPrivileged                 =*/TRUE,
	/*HasTimingProtectionDelay     =*/FALSE,
	/*Id                           =*/OsApplication_NonTrusted_Core1,
};

static const Os_AlarmConfigRefType OsCfg_App_SysApplication_OsCore1_AlarmRefs[1] = 
{
	NULL_PTR
};
static const Os_CounterConfigRefType OsCfg_App_SysApplication_OsCore1_CounterRefs[2] = 
{
	OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core1),
	NULL_PTR
};
static const Os_HookConfigRefType OsCfg_App_SysApplication_OsCore1_HookRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_App_SysApplication_OsCore1_IsrRefs[3] = 
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM1_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore1),
	NULL_PTR
};
static const Os_IsrCat1ConfigRefType OsCfg_App_SysApplication_OsCore1_Cat1IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_SchTConfigRefType OsCfg_App_SysApplication_OsCore1_SchTRefs[1] = 
{
	NULL_PTR
};
static const Os_TaskConfigRefType OsCfg_App_SysApplication_OsCore1_TaskRefs[2] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore1),
	NULL_PTR
};
static const Os_ServiceConfigRefType OsCfg_App_SysApplication_OsCore1_ServiceRefs[1] = 
{
	NULL_PTR
};

const Os_AppConfigType OsCfg_App_SystemApplication_OsCore1 = 
{
	/*Dyn                          =*/&OsCfg_App_SystemApplication_OsCore1_Dyn,
	/*Core                         =*/&OsCfg_Core_OsCore1,
	/*AccssRightId                 =*/OS_APPID2MASK(SystemApplication_OsCore1),
	/*TaskRefs                     =*/OsCfg_App_SysApplication_OsCore1_TaskRefs,
	/*TaskCount                    =*/(Os_ObjIdxType)1u,
	/*IsrCat2Refs                  =*/OsCfg_App_SysApplication_OsCore1_IsrRefs,
	/*IsrCat2Count                 =*/(Os_ObjIdxType)2u,
	/*IsrCat1Refs                  =*/OsCfg_App_SysApplication_OsCore1_Cat1IsrRefs,
	/*IsrCat1Count                 =*/(Os_ObjIdxType)0u,
	/*CounterRefs                  =*/OsCfg_App_SysApplication_OsCore1_CounterRefs,
	/*CounterCount                 =*/(Os_ObjIdxType)1u,
	/*AlarmRefs                    =*/OsCfg_App_SysApplication_OsCore1_AlarmRefs,
	/*AlarmCount                   =*/(Os_ObjIdxType)0u,
	/*SchTRefs                     =*/OsCfg_App_SysApplication_OsCore1_SchTRefs,
	/*SchTCount                    =*/(Os_ObjIdxType)0u,
	/*ServiceFunctions             =*/OsCfg_App_SysApplication_OsCore1_ServiceRefs,
	/*ServiceFunctionsCount        =*/(Os_ObjIdxType)0u,
	/*StartupHookRef               =*/NULL_PTR,
	/*ShutdownHookRef              =*/NULL_PTR,
	/*ErrorHookRef                 =*/NULL_PTR,
	/*HookRefs                     =*/OsCfg_App_SysApplication_OsCore1_HookRefs,
	/*HookCount                    =*/(Os_ObjIdxType)0u,
	/*RestartTask                  =*/NULL_PTR,
	/*IsTrusted                    =*/TRUE,
	/*IsPrivileged                 =*/TRUE,
	/*HasTimingProtectionDelay     =*/FALSE,
	/*Id                           =*/SystemApplication_OsCore1,
};




/*****************************************Core2*******************************************/


static const Os_AlarmConfigRefType OsCfg_App_OsApplication_NonTrusted_Core2_AlarmRefs[2] = 
{
	OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Core2_10ms_Task_0_10ms),
	NULL_PTR
};
static const Os_CounterConfigRefType OsCfg_App_OsApplication_NonTrusted_Core2_CounterRefs[1] = 
{
	NULL_PTR
};
static const Os_HookConfigRefType OsCfg_App_OsApplication_NonTrusted_Core2_HookRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_App_OsApplication_NonTrusted_Core2_IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrCat1ConfigRefType OsCfg_App_OsApplication_NonTrusted_Core2_Cat1IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_SchTConfigRefType OsCfg_App_OsApplication_NonTrusted_Core2_SchTRefs[1] = 
{
	NULL_PTR
};
static const Os_TaskConfigRefType OsCfg_App_OsApplication_NonTrusted_Core2_TaskRefs[3] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Core2_10ms_Task),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task_Core2),
	NULL_PTR
};
static const Os_ServiceConfigRefType OsCfg_App_OsApplication_NonTrusted_Core2_ServiceRefs[1] = 
{
	NULL_PTR
};

const Os_AppConfigType OsCfg_App_OsApplication_NonTrusted_Core2 = 
{
	/*Dyn                          =*/&OsCfg_App_OsApplication_NonTrusted_Core2_Dyn,
	/*Core                         =*/&OsCfg_Core_OsCore2,
	/*AccssRightId                 =*/OS_APPID2MASK(OsApplication_NonTrusted_Core2),
	/*TaskRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core2_TaskRefs,
	/*TaskCount                    =*/(Os_ObjIdxType)2u,
	/*IsrCat2Refs                  =*/OsCfg_App_OsApplication_NonTrusted_Core2_IsrRefs,
	/*IsrCat2Count                 =*/(Os_ObjIdxType)0u,
	/*IsrCat1Refs                  =*/OsCfg_App_OsApplication_NonTrusted_Core2_Cat1IsrRefs,
	/*IsrCat1Count                 =*/(Os_ObjIdxType)0u,
	/*CounterRefs                  =*/OsCfg_App_OsApplication_NonTrusted_Core2_CounterRefs,
	/*CounterCount                 =*/(Os_ObjIdxType)0u,
	/*AlarmRefs                    =*/OsCfg_App_OsApplication_NonTrusted_Core2_AlarmRefs,
	/*AlarmCount                   =*/(Os_ObjIdxType)1u,
	/*SchTRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core2_SchTRefs,
	/*SchTCount                    =*/(Os_ObjIdxType)0u,
	/*ServiceFunctions             =*/OsCfg_App_OsApplication_NonTrusted_Core2_ServiceRefs,
	/*ServiceFunctionsCount        =*/(Os_ObjIdxType)0u,
	/*StartupHookRef               =*/NULL_PTR,
	/*ShutdownHookRef              =*/NULL_PTR,
	/*ErrorHookRef                 =*/NULL_PTR,
	/*HookRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core2_HookRefs,
	/*HookCount                    =*/(Os_ObjIdxType)0u,
	/*RestartTask                  =*/NULL_PTR,
	/*IsTrusted                    =*/TRUE,
	/*IsPrivileged                 =*/TRUE,
	/*HasTimingProtectionDelay     =*/FALSE,
	/*Id                           =*/OsApplication_NonTrusted_Core2,
};

static const Os_AlarmConfigRefType OsCfg_App_SysApplication_OsCore2_AlarmRefs[1] = 
{
	NULL_PTR
};
static const Os_CounterConfigRefType OsCfg_App_SysApplication_OsCore2_CounterRefs[2] = 
{
	OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core2),
	NULL_PTR
};
static const Os_HookConfigRefType OsCfg_App_SysApplication_OsCore2_HookRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_App_SysApplication_OsCore2_IsrRefs[3] = 
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM2_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore2),
	NULL_PTR
};
static const Os_IsrCat1ConfigRefType OsCfg_App_SysApplication_OsCore2_Cat1IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_SchTConfigRefType OsCfg_App_SysApplication_OsCore2_SchTRefs[1] = 
{
	NULL_PTR
};
static const Os_TaskConfigRefType OsCfg_App_SysApplication_OsCore2_TaskRefs[2] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore2),
	NULL_PTR
};
static const Os_ServiceConfigRefType OsCfg_App_SysApplication_OsCore2_ServiceRefs[1] = 
{
	NULL_PTR
};

const Os_AppConfigType OsCfg_App_SystemApplication_OsCore2 = 
{
	/*Dyn                          =*/&OsCfg_App_SystemApplication_OsCore2_Dyn,
	/*Core                         =*/&OsCfg_Core_OsCore2,
	/*AccssRightId                 =*/OS_APPID2MASK(SystemApplication_OsCore2),
	/*TaskRefs                     =*/OsCfg_App_SysApplication_OsCore2_TaskRefs,
	/*TaskCount                    =*/(Os_ObjIdxType)1u,
	/*IsrCat2Refs                  =*/OsCfg_App_SysApplication_OsCore2_IsrRefs,
	/*IsrCat2Count                 =*/(Os_ObjIdxType)2u,
	/*IsrCat1Refs                  =*/OsCfg_App_SysApplication_OsCore2_Cat1IsrRefs,
	/*IsrCat1Count                 =*/(Os_ObjIdxType)0u,
	/*CounterRefs                  =*/OsCfg_App_SysApplication_OsCore2_CounterRefs,
	/*CounterCount                 =*/(Os_ObjIdxType)1u,
	/*AlarmRefs                    =*/OsCfg_App_SysApplication_OsCore2_AlarmRefs,
	/*AlarmCount                   =*/(Os_ObjIdxType)0u,
	/*SchTRefs                     =*/OsCfg_App_SysApplication_OsCore2_SchTRefs,
	/*SchTCount                    =*/(Os_ObjIdxType)0u,
	/*ServiceFunctions             =*/OsCfg_App_SysApplication_OsCore2_ServiceRefs,
	/*ServiceFunctionsCount        =*/(Os_ObjIdxType)0u,
	/*StartupHookRef               =*/NULL_PTR,
	/*ShutdownHookRef              =*/NULL_PTR,
	/*ErrorHookRef                 =*/NULL_PTR,
	/*HookRefs                     =*/OsCfg_App_SysApplication_OsCore2_HookRefs,
	/*HookCount                    =*/(Os_ObjIdxType)0u,
	/*RestartTask                  =*/NULL_PTR,
	/*IsTrusted                    =*/TRUE,
	/*IsPrivileged                 =*/TRUE,
	/*HasTimingProtectionDelay     =*/FALSE,
	/*Id                           =*/SystemApplication_OsCore2,
};




/*****************************************Core3*******************************************/


static const Os_AlarmConfigRefType OsCfg_App_OsApplication_NonTrusted_Core3_AlarmRefs[2] = 
{
	OS_ALARM_CASTCONFIG_ALARMSETEVENT_2_ALARM(OsCfg_Alarm_Rte_Al_TE2_Core3_10ms_Task_0_10ms),
	NULL_PTR
};
static const Os_CounterConfigRefType OsCfg_App_OsApplication_NonTrusted_Core3_CounterRefs[1] = 
{
	NULL_PTR
};
static const Os_HookConfigRefType OsCfg_App_OsApplication_NonTrusted_Core3_HookRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_App_OsApplication_NonTrusted_Core3_IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrCat1ConfigRefType OsCfg_App_OsApplication_NonTrusted_Core3_Cat1IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_SchTConfigRefType OsCfg_App_OsApplication_NonTrusted_Core3_SchTRefs[1] = 
{
	NULL_PTR
};
static const Os_TaskConfigRefType OsCfg_App_OsApplication_NonTrusted_Core3_TaskRefs[3] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Core3_10ms_Task),
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Default_Init_Task_Core3),
	NULL_PTR
};
static const Os_ServiceConfigRefType OsCfg_App_OsApplication_NonTrusted_Core3_ServiceRefs[1] = 
{
	NULL_PTR
};

const Os_AppConfigType OsCfg_App_OsApplication_NonTrusted_Core3 = 
{
	/*Dyn                          =*/&OsCfg_App_OsApplication_NonTrusted_Core3_Dyn,
	/*Core                         =*/&OsCfg_Core_OsCore3,
	/*AccssRightId                 =*/OS_APPID2MASK(OsApplication_NonTrusted_Core3),
	/*TaskRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core3_TaskRefs,
	/*TaskCount                    =*/(Os_ObjIdxType)2u,
	/*IsrCat2Refs                  =*/OsCfg_App_OsApplication_NonTrusted_Core3_IsrRefs,
	/*IsrCat2Count                 =*/(Os_ObjIdxType)0u,
	/*IsrCat1Refs                  =*/OsCfg_App_OsApplication_NonTrusted_Core3_Cat1IsrRefs,
	/*IsrCat1Count                 =*/(Os_ObjIdxType)0u,
	/*CounterRefs                  =*/OsCfg_App_OsApplication_NonTrusted_Core3_CounterRefs,
	/*CounterCount                 =*/(Os_ObjIdxType)0u,
	/*AlarmRefs                    =*/OsCfg_App_OsApplication_NonTrusted_Core3_AlarmRefs,
	/*AlarmCount                   =*/(Os_ObjIdxType)1u,
	/*SchTRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core3_SchTRefs,
	/*SchTCount                    =*/(Os_ObjIdxType)0u,
	/*ServiceFunctions             =*/OsCfg_App_OsApplication_NonTrusted_Core3_ServiceRefs,
	/*ServiceFunctionsCount        =*/(Os_ObjIdxType)0u,
	/*StartupHookRef               =*/NULL_PTR,
	/*ShutdownHookRef              =*/NULL_PTR,
	/*ErrorHookRef                 =*/NULL_PTR,
	/*HookRefs                     =*/OsCfg_App_OsApplication_NonTrusted_Core3_HookRefs,
	/*HookCount                    =*/(Os_ObjIdxType)0u,
	/*RestartTask                  =*/NULL_PTR,
	/*IsTrusted                    =*/TRUE,
	/*IsPrivileged                 =*/TRUE,
	/*HasTimingProtectionDelay     =*/FALSE,
	/*Id                           =*/OsApplication_NonTrusted_Core3,
};

static const Os_AlarmConfigRefType OsCfg_App_SysApplication_OsCore3_AlarmRefs[1] = 
{
	NULL_PTR
};
static const Os_CounterConfigRefType OsCfg_App_SysApplication_OsCore3_CounterRefs[2] = 
{
	OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_SystemTimer_Core3),
	NULL_PTR
};
static const Os_HookConfigRefType OsCfg_App_SysApplication_OsCore3_HookRefs[1] = 
{
	NULL_PTR
};
static const Os_IsrConfigRefType OsCfg_App_SysApplication_OsCore3_IsrRefs[3] = 
{
	OS_TIMER_CASTCONFIG_TIMERISR_2_ISR(OsCfg_Isr_OsIsr_STM3_Ch0),
	OS_XSIGNAL_CASTCONFIG_XSIGNALISR_2_ISR(OsCfg_Isr_XSignalIsr_OsCore3),
	NULL_PTR
};
static const Os_IsrCat1ConfigRefType OsCfg_App_SysApplication_OsCore3_Cat1IsrRefs[1] = 
{
	NULL_PTR
};
static const Os_SchTConfigRefType OsCfg_App_SysApplication_OsCore3_SchTRefs[1] = 
{
	NULL_PTR
};
static const Os_TaskConfigRefType OsCfg_App_SysApplication_OsCore3_TaskRefs[2] = 
{
	OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore3),
	NULL_PTR
};
static const Os_ServiceConfigRefType OsCfg_App_SysApplication_OsCore3_ServiceRefs[1] = 
{
	NULL_PTR
};

const Os_AppConfigType OsCfg_App_SystemApplication_OsCore3 = 
{
	/*Dyn                          =*/&OsCfg_App_SystemApplication_OsCore3_Dyn,
	/*Core                         =*/&OsCfg_Core_OsCore3,
	/*AccssRightId                 =*/OS_APPID2MASK(SystemApplication_OsCore3),
	/*TaskRefs                     =*/OsCfg_App_SysApplication_OsCore3_TaskRefs,
	/*TaskCount                    =*/(Os_ObjIdxType)1u,
	/*IsrCat2Refs                  =*/OsCfg_App_SysApplication_OsCore3_IsrRefs,
	/*IsrCat2Count                 =*/(Os_ObjIdxType)2u,
	/*IsrCat1Refs                  =*/OsCfg_App_SysApplication_OsCore3_Cat1IsrRefs,
	/*IsrCat1Count                 =*/(Os_ObjIdxType)0u,
	/*CounterRefs                  =*/OsCfg_App_SysApplication_OsCore3_CounterRefs,
	/*CounterCount                 =*/(Os_ObjIdxType)1u,
	/*AlarmRefs                    =*/OsCfg_App_SysApplication_OsCore3_AlarmRefs,
	/*AlarmCount                   =*/(Os_ObjIdxType)0u,
	/*SchTRefs                     =*/OsCfg_App_SysApplication_OsCore3_SchTRefs,
	/*SchTCount                    =*/(Os_ObjIdxType)0u,
	/*ServiceFunctions             =*/OsCfg_App_SysApplication_OsCore3_ServiceRefs,
	/*ServiceFunctionsCount        =*/(Os_ObjIdxType)0u,
	/*StartupHookRef               =*/NULL_PTR,
	/*ShutdownHookRef              =*/NULL_PTR,
	/*ErrorHookRef                 =*/NULL_PTR,
	/*HookRefs                     =*/OsCfg_App_SysApplication_OsCore3_HookRefs,
	/*HookCount                    =*/(Os_ObjIdxType)0u,
	/*RestartTask                  =*/NULL_PTR,
	/*IsTrusted                    =*/TRUE,
	/*IsPrivileged                 =*/TRUE,
	/*HasTimingProtectionDelay     =*/FALSE,
	/*Id                           =*/SystemApplication_OsCore3,
};



const Os_AppConfigType* const OsCfg_AppRefs[9] = 
{
	&OsCfg_App_OsApplication_NonTrusted_Core0,
	&OsCfg_App_OsApplication_NonTrusted_Core1,
	&OsCfg_App_OsApplication_NonTrusted_Core2,
	&OsCfg_App_OsApplication_NonTrusted_Core3,
	&OsCfg_App_SystemApplication_OsCore0,
	&OsCfg_App_SystemApplication_OsCore1,
	&OsCfg_App_SystemApplication_OsCore2,
	&OsCfg_App_SystemApplication_OsCore3,
	NULL_PTR
};

