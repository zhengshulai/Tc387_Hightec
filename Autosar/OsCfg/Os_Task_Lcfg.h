#ifndef OS_TASK_LCFG_H
# define OS_TASK_LCFG_H

#include "Std_Types.h"

#include "Os_Task_Types.h"

#include "Os_Ioc_Types.h"
#include "Os_Lcfg.h"


extern const Os_TaskConfigType OsCfg_Task_Core0_10ms_Task;
extern const Os_TaskConfigType OsCfg_Task_Default_Init_Task_Core0;
extern const Os_TaskConfigType OsCfg_Task_IdleTask_OsCore0;
/******************************************************Core1***************************************************/
extern const Os_TaskConfigType OsCfg_Task_Core1_10ms_Task;
extern const Os_TaskConfigType OsCfg_Task_Default_Init_Task_Core1;
extern const Os_TaskConfigType OsCfg_Task_IdleTask_OsCore1;
/******************************************************Core1***************************************************/
extern const Os_TaskConfigType OsCfg_Task_Core2_10ms_Task;
extern const Os_TaskConfigType OsCfg_Task_Default_Init_Task_Core2;
extern const Os_TaskConfigType OsCfg_Task_IdleTask_OsCore2;
/******************************************************Core1***************************************************/
extern const Os_TaskConfigType OsCfg_Task_Core3_10ms_Task;
extern const Os_TaskConfigType OsCfg_Task_Default_Init_Task_Core3;
extern const Os_TaskConfigType OsCfg_Task_IdleTask_OsCore3;

extern const Os_TaskConfigType* const OsCfg_TaskRefs[13];

extern void Os_Task_IdleTask_OsCore0(void);
#endif