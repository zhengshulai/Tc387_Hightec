#ifndef OS_COUNTER_LCFG_H
# define OS_COUNTER_LCFG_H

#include "Std_Types.h"

#include "Os_Counter_Types.h"

#include "Os_Timer_Types.h"
#include "Os_Lcfg.h"


extern const Os_TimerHrtConfigType OsCfg_Counter_SystemTimer_Core0;
extern const Os_TimerHrtConfigType OsCfg_Counter_SystemTimer_Core1;
extern const Os_TimerHrtConfigType OsCfg_Counter_SystemTimer_Core2;
extern const Os_TimerHrtConfigType OsCfg_Counter_SystemTimer_Core3;


extern const Os_CounterConfigType* const OsCfg_CounterRefs[5];


#endif