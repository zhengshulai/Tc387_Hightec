#ifndef OS_STACK_LCFG_H
# define OS_STACK_LCFG_H

#include "Std_Types.h"

#include "Os_Stack_Cfg.h"
#include "Os_Stack_Types.h"

#include "Os_Lcfg.h"



extern Os_Hal_StackType OsCfg_Stack_Core0_10ms_Task_Dyn[(4096+16)/4];
extern Os_Hal_StackType OsCfg_Stack_Core1_10ms_Task_Dyn[(4096+16)/4];
extern Os_Hal_StackType OsCfg_Stack_Core2_10ms_Task_Dyn[(4096+16)/4];
extern Os_Hal_StackType OsCfg_Stack_Core3_10ms_Task_Dyn[(4096+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore0_Error_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore0_Init_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore0_Isr_Core_Dyn[(2048+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore0_Isr_Level88_Dyn[(2048+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore0_Kernel_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore0_Task_Prio300_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore1_Error_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore1_Init_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore1_Isr_Core_Dyn[(2048+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore1_Isr_Level88_Dyn[(2048+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore1_Kernel_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore1_Task_Prio300_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore1_Task_Prio4294967295_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore2_Error_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore2_Init_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore2_Isr_Core_Dyn[(2048+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore2_Isr_Level88_Dyn[(2048+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore2_Kernel_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore2_Task_Prio300_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore2_Task_Prio4294967295_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore3_Error_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore3_Init_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore3_Isr_Core_Dyn[(2048+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore3_Isr_Level88_Dyn[(2048+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore3_Kernel_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore3_Task_Prio300_Dyn[(1024+16)/4];
extern Os_Hal_StackType OsCfg_Stack_OsCore3_Task_Prio4294967295_Dyn[(1024+16)/4];

/************************************************************Core0*********************************************************/
extern const Os_StackConfigType OsCfg_Stack_Core0_10ms_Task;
extern const Os_StackConfigType OsCfg_Stack_OsCore0_Error;
extern const Os_StackConfigType OsCfg_Stack_OsCore0_Init;
extern const Os_StackConfigType OsCfg_Stack_OsCore0_Isr_Core;
extern const Os_StackConfigType OsCfg_Stack_OsCore0_Isr_Level88;
extern const Os_StackConfigType OsCfg_Stack_OsCore0_Kernel;
extern const Os_StackConfigType OsCfg_Stack_OsCore0_Task_Prio300;
extern const Os_StackConfigType OsCfg_Stack_OsCore0_Task_Prio4294967295;

/************************************************************Core1*********************************************************/
extern const Os_StackConfigType OsCfg_Stack_Core1_10ms_Task;
extern const Os_StackConfigType OsCfg_Stack_OsCore1_Error;
extern const Os_StackConfigType OsCfg_Stack_OsCore1_Init;
extern const Os_StackConfigType OsCfg_Stack_OsCore1_Isr_Core;
extern const Os_StackConfigType OsCfg_Stack_OsCore1_Isr_Level88;
extern const Os_StackConfigType OsCfg_Stack_OsCore1_Kernel;
extern const Os_StackConfigType OsCfg_Stack_OsCore1_Task_Prio300;
extern const Os_StackConfigType OsCfg_Stack_OsCore1_Task_Prio4294967295;

/************************************************************Core2*********************************************************/
extern const Os_StackConfigType OsCfg_Stack_Core2_10ms_Task;
extern const Os_StackConfigType OsCfg_Stack_OsCore2_Error;
extern const Os_StackConfigType OsCfg_Stack_OsCore2_Init;
extern const Os_StackConfigType OsCfg_Stack_OsCore2_Isr_Core;
extern const Os_StackConfigType OsCfg_Stack_OsCore2_Isr_Level88;
extern const Os_StackConfigType OsCfg_Stack_OsCore2_Kernel;
extern const Os_StackConfigType OsCfg_Stack_OsCore2_Task_Prio300;
extern const Os_StackConfigType OsCfg_Stack_OsCore2_Task_Prio4294967295;

/************************************************************Core3*********************************************************/
extern const Os_StackConfigType OsCfg_Stack_Core3_10ms_Task;
extern const Os_StackConfigType OsCfg_Stack_OsCore3_Error;
extern const Os_StackConfigType OsCfg_Stack_OsCore3_Init;
extern const Os_StackConfigType OsCfg_Stack_OsCore3_Isr_Core;
extern const Os_StackConfigType OsCfg_Stack_OsCore3_Isr_Level88;
extern const Os_StackConfigType OsCfg_Stack_OsCore3_Kernel;
extern const Os_StackConfigType OsCfg_Stack_OsCore3_Task_Prio300;
extern const Os_StackConfigType OsCfg_Stack_OsCore3_Task_Prio4294967295;


#endif