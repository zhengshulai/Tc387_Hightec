#ifndef OS_ISR_LCFG_H
# define OS_ISR_LCFG_H

#include "Std_Types.h"

#include "Os_Isr_Types.h"

#include "Os_Lcfg.h"
#include "Os_Timer_Types.h"
#include "Os_XSignal_Types.h"


/**********************************************************Core0**********************************************************/
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_STM0_Ch0_HwConfig;
extern const Os_TimerIsrConfigType OsCfg_Isr_OsIsr_STM0_Ch0;
extern const Os_IsrHwConfigType OsCfg_Isr_XSignalIsr_OsCore0_HwConfig;
extern const Os_XSigIsrConfigType OsCfg_Isr_XSignalIsr_OsCore0;
/**********************************************************Core1**********************************************************/
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_STM1_Ch0_HwConfig;
extern const Os_TimerIsrConfigType OsCfg_Isr_OsIsr_STM1_Ch0;
extern const Os_IsrHwConfigType OsCfg_Isr_XSignalIsr_OsCore1_HwConfig;
extern const Os_XSigIsrConfigType OsCfg_Isr_XSignalIsr_OsCore1;
/**********************************************************Core2**********************************************************/
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_STM2_Ch0_HwConfig;
extern const Os_TimerIsrConfigType OsCfg_Isr_OsIsr_STM2_Ch0;
extern const Os_IsrHwConfigType OsCfg_Isr_XSignalIsr_OsCore2_HwConfig;
extern const Os_XSigIsrConfigType OsCfg_Isr_XSignalIsr_OsCore2;
/**********************************************************Core3**********************************************************/
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_STM3_Ch0_HwConfig;
extern const Os_TimerIsrConfigType OsCfg_Isr_OsIsr_STM3_Ch0;
extern const Os_IsrHwConfigType OsCfg_Isr_XSignalIsr_OsCore3_HwConfig;
extern const Os_XSigIsrConfigType OsCfg_Isr_XSignalIsr_OsCore3;

extern const Os_IsrConfigType* const OsCfg_IsrRefs[9];

#endif