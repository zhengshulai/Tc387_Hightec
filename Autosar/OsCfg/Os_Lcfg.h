#ifndef OS_LCFG_H
# define OS_LCFG_H

#include "Std_Types.h"

#include "Os_Cfg.h"
#include "Os_Types.h"
#include "Os_Types_Lcfg.h"

#include "Os_Hal_Lcfg.h"

extern void Os_Task_Core0_10ms_Task(void);
extern void Os_Task_Core1_10ms_Task(void);
extern void Os_Task_Core2_10ms_Task(void);
extern void Os_Task_Core3_10ms_Task(void);

extern void Os_Task_Default_Init_Task_Core0(void);
extern void Os_Task_Default_Init_Task_Core1(void);
extern void Os_Task_Default_Init_Task_Core2(void);
extern void Os_Task_Default_Init_Task_Core3(void);



#endif