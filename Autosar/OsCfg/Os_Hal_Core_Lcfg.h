#ifndef OS_HAL_CORE_LCFG_H
# define OS_HAL_CORE_LCFG_H


#include "Std_Types.h"

#include "Os_Hal_Core_Cfg.h"
#include "Os_Hal_Core_Types.h"

#include "Os_Isr_Types.h"
#include "Os_Hal_Interrupt_Types.h"



extern uint8 __START[];
extern uint8 __START1[];
extern uint8 __START2[];
extern uint8 __START3[];

extern const Os_IsrHwConfigType* const OsCfg_Hal_Core_OsCore0_InterruptSourceRefs[1];
extern const Os_Hal_CoreConfigType OsCfg_Hal_Core_OsCore0;
extern const Os_Hal_CoreAsrConfigType OsCfg_Hal_CoreAsr_OsCore0;

extern const Os_IsrHwConfigType* const OsCfg_Hal_Core_OsCore1_InterruptSourceRefs[1];
extern const Os_Hal_CoreConfigType OsCfg_Hal_Core_OsCore1;
extern const Os_Hal_CoreAsrConfigType OsCfg_Hal_CoreAsr_OsCore1;

extern const Os_IsrHwConfigType* const OsCfg_Hal_Core_OsCore2_InterruptSourceRefs[1];
extern const Os_Hal_CoreConfigType OsCfg_Hal_Core_OsCore2;
extern const Os_Hal_CoreAsrConfigType OsCfg_Hal_CoreAsr_OsCore2;

extern const Os_IsrHwConfigType* const OsCfg_Hal_Core_OsCore3_InterruptSourceRefs[1];
extern const Os_Hal_CoreConfigType OsCfg_Hal_Core_OsCore3;
extern const Os_Hal_CoreAsrConfigType OsCfg_Hal_CoreAsr_OsCore3;

extern const Os_Hal_Core2ThreadConfigType OsCfg_Hal_Core2Thread;
extern const Os_Hal_SystemConfigType OsCfg_Hal_System;
extern const Os_IsrHwConfigType* const OsCfg_Hal_System_InterruptSourceRefs[9];
#endif