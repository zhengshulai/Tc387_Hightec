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

extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tlf35584_TxIsr_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_Tlf35584_TxIsr;
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tlf35584_RxIsr_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_Tlf35584_RxIsr;
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tlf35584_ErrIsr_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_Tlf35584_ErrIsr;

extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tle9180_TxIsr_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_Tle9180_TxIsr;
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tle9180_RxIsr_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_Tle9180_RxIsr;
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Tle9180_ErrIsr_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_Tle9180_ErrIsr;

extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_CURR_G0CH0_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_CURR_G0CH0;
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_VBEMF_G2CH3_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_VBEMF_G2CH3;
extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_VHVDC_G1CH3_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_VHVDC_G1CH3;

extern const Os_IsrHwConfigType OsCfg_Isr_OsIsr_Gpt12_Encoder_HwConfig;
extern const Os_IsrConfigType OsCfg_Isr_OsIsr_Gpt12_Encoder;
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

extern const Os_IsrConfigType* const OsCfg_IsrRefs[19];

#endif