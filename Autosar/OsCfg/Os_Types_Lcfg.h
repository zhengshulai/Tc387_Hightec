#ifndef OS_TYPES_LCFG_H
# define OS_TYPES_LCFG_H

#include "Std_Types.h"

#define OsApplication_NonTrusted_Core0 OsApplication_NonTrusted_Core0
#define OsApplication_NonTrusted_Core1 OsApplication_NonTrusted_Core1
#define OsApplication_NonTrusted_Core2 OsApplication_NonTrusted_Core2
#define OsApplication_NonTrusted_Core3 OsApplication_NonTrusted_Core3
#define SystemApplication_OsCore0      SystemApplication_OsCore0
#define SystemApplication_OsCore1      SystemApplication_OsCore1
#define SystemApplication_OsCore2      SystemApplication_OsCore2
#define SystemApplication_OsCore3      SystemApplication_OsCore3

#define Core0_10ms_Task                  Core0_10ms_Task
#define Core1_10ms_Task                  Core1_10ms_Task
#define Core2_10ms_Task                  Core2_10ms_Task
#define Core3_10ms_Task                  Core3_10ms_Task
#define Default_Init_Task_Core0        Default_Init_Task_Core0
#define Default_Init_Task_Core1        Default_Init_Task_Core1
#define Default_Init_Task_Core2        Default_Init_Task_Core2
#define Default_Init_Task_Core3        Default_Init_Task_Core3
#define IdleTask_OsCore0               IdleTask_OsCore0
#define IdleTask_OsCore1               IdleTask_OsCore1
#define IdleTask_OsCore2               IdleTask_OsCore2
#define IdleTask_OsCore3               IdleTask_OsCore3


#define OsIsr_STM0_Ch0                 OsIsr_STM0_Ch0
#define OsIsr_STM1_Ch0                 OsIsr_STM1_Ch0
#define OsIsr_STM2_Ch0                 OsIsr_STM2_Ch0
#define OsIsr_STM3_Ch0                 OsIsr_STM3_Ch0
#define XSignalIsr_OsCore0             XSignalIsr_OsCore0
#define XSignalIsr_OsCore1             XSignalIsr_OsCore1
#define XSignalIsr_OsCore2             XSignalIsr_OsCore2
#define XSignalIsr_OsCore3             XSignalIsr_OsCore3

#define Rte_Al_TE2_Core0_10ms_Task_0_10ms Rte_Al_TE2_Core0_10ms_Task_0_10ms
#define Rte_Al_TE2_Core1_10ms_Task_0_10ms Rte_Al_TE2_Core1_10ms_Task_0_10ms
#define Rte_Al_TE2_Core2_10ms_Task_0_10ms Rte_Al_TE2_Core2_10ms_Task_0_10ms
#define Rte_Al_TE2_Core3_10ms_Task_0_10ms Rte_Al_TE2_Core3_10ms_Task_0_10ms

#define SystemTimer_Core0 SystemTimer_Core0
#define SystemTimer_Core1 SystemTimer_Core1
#define SystemTimer_Core2 SystemTimer_Core2
#define SystemTimer_Core3 SystemTimer_Core3

#define OsResource OsResource
#define RES_SCHEDULER_OsCore0          RES_SCHEDULER_OsCore0
#define RES_SCHEDULER_OsCore1          RES_SCHEDULER_OsCore1
#define RES_SCHEDULER_OsCore2          RES_SCHEDULER_OsCore2
#define RES_SCHEDULER_OsCore3          RES_SCHEDULER_OsCore3

#define OsSpinlock_WdgApplication OsSpinlock_WdgApplication
#define OsPeripheralRegion        OsPeripheralRegion

typedef uint32 Os_AppAccessMaskType;

typedef enum
{
	OsApplication_NonTrusted_Core0 = 0,
	OsApplication_NonTrusted_Core1 = 1,
	OsApplication_NonTrusted_Core2 = 2,
	OsApplication_NonTrusted_Core3 = 3,
	SystemApplication_OsCore0 = 4,
	SystemApplication_OsCore1 = 5,
	SystemApplication_OsCore2 = 6,
	SystemApplication_OsCore3 = 7,
	OS_APPID_COUNT = 8,
	INVALID_OSAPPLICATION = OS_APPID_COUNT
}ApplicationType;

typedef enum
{
	OS_TRUSTEDFUNCTIONID_COUNT = 0,
}TrustedFunctionIndexType;

typedef enum
{
	OS_NONTRUSTEDFUNCTIONID_COUNT = 0,
}Os_NonTrustedFunctionIndexType;

typedef enum
{
	OS_FASTTRUSTEDFUNCTIONID_COUNT = 0,
}Os_FastTrustedFunctionIndexType;

typedef enum
{
	Core0_10ms_Task = 0,
	Core1_10ms_Task = 1,
	Core2_10ms_Task = 2,
	Core3_10ms_Task = 3,
	Default_Init_Task_Core0 = 4,
	Default_Init_Task_Core1 = 5,
	Default_Init_Task_Core2 = 6,
	Default_Init_Task_Core3 = 7,
	IdleTask_OsCore0 = 8,
	IdleTask_OsCore1 = 9,
	IdleTask_OsCore2 = 10,
	IdleTask_OsCore3 = 11,
	OS_TASKID_COUNT = 12,
	INVALID_TASK = OS_TASKID_COUNT
}TaskType;

typedef enum
{
	OsIsr_STM0_Ch0 = 0,
	OsIsr_STM1_Ch0 = 1,
	OsIsr_STM2_Ch0 = 2,
	OsIsr_STM3_Ch0 = 3,
	XSignalIsr_OsCore0 = 4,
	XSignalIsr_OsCore1 = 5,
	XSignalIsr_OsCore2 = 6,
	XSignalIsr_OsCore3 = 7,
	OS_ISRID_COUNT = 8,
	INVALID_ISR = OS_ISRID_COUNT
}ISRType;

typedef enum
{
	Rte_Al_TE2_Core0_10ms_Task_0_10ms = 0,
	Rte_Al_TE2_Core1_10ms_Task_0_10ms = 1,
	Rte_Al_TE2_Core2_10ms_Task_0_10ms = 2,
	Rte_Al_TE2_Core3_10ms_Task_0_10ms = 3,
	OS_ALARMID_COUNT = 4
}AlarmType;

typedef enum
{
	SystemTimer_Core0 = 0,
	SystemTimer_Core1 = 1,
	SystemTimer_Core2 = 2,
	SystemTimer_Core3 = 3,
	OS_COUNTERID_COUNT = 4
}CounterType;

typedef enum
{
	OS_SCHTID_COUNT = 0,
}ScheduleTableType;

typedef enum
{
	OsResource = 0,
	RES_SCHEDULER_OsCore0 = 1,
	RES_SCHEDULER_OsCore1 = 2,
	RES_SCHEDULER_OsCore2 = 3,
	RES_SCHEDULER_OsCore3 = 4,
	OS_RESOURCEID_COUNT = 5
}ResourceType;

typedef enum
{
	OS_SPINLOCKID_COUNT = 0,
	INVALID_SPINLOCK = OS_SPINLOCKID_COUNT
}SpinlockIdType;

typedef enum
{
	OS_PERIPHERALID_COUNT = 0
}Os_PeripheralIdType;

typedef enum
{
	OS_BARRIERID_COUNT = 0
}Os_BarrierIdType;

typedef enum
{
	OS_TRACE_THREADID_COUNT = 0,
	OS_TRACE_INVALID_THREAD = OS_TRACE_THREADID_COUNT + 1
}Os_TraceThreadIdType;

typedef enum
{
	OS_TRACE_NUMBER_OF_CONFIGURED_SPINLOCKS = OS_SPINLOCKID_COUNT,
	OS_TRACE_NUMBER_OF_ALL_SPINLOCKS = OS_TRACE_THREADID_COUNT + 0,
	OS_TRACE_NUMBER_INVALID_SPINLOCK = OS_TRACE_NUMBER_OF_ALL_SPINLOCKS + 1
}Os_TraceSpinlockIdType;


#endif