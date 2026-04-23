#define OS_HAL_TIMER_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Hal_Timer_Lcfg.h"
#include "Os_Hal_Timer.h"


const Os_Hal_TimerFrtConfigType OsCfg_Hal_TimerFrt_SystemTimer_Core0 = 
{
	/*CounterRegisterAddress      =*/OS_HAL_TIMER_STM0_BASE + OS_HAL_TIMER_STM_TIM0_OFFSET,
	/*ComparaRegisterAddress      =*/OS_HAL_TIMER_STM0_BASE + OS_HAL_TIMER_STM_CMP0_OFFSET,
	/*CMCONRegisterAddress        =*/OS_HAL_TIMER_STM0_BASE + OS_HAL_TIMER_STM_CMCON_OFFSET,
	/*CMCONMask                   =*/OS_HAL_TIMER_STM_CMCON_USE_CMP0_MASK,
	/*CMCONValue                  =*/OS_HAL_TIMER_STM_CMCON_USE_CMP0_VALUE,
	/*InterruptSRCRegisterAddress =*/OS_HAL_INT_SRC_BASE + OS_HAL_INT_SRC_STM0_CH0_OFFSET,
	/*ICRRegisterAddress          =*/OS_HAL_TIMER_STM0_BASE + OS_HAL_TIMER_STM_ICR_OFFSET,
	/*ICRMask                     =*/OS_HAL_TIMER_STM_ICR_USE_CMP0_MASK,
	/*ICRValue                    =*/OS_HAL_TIMER_STM_ICR_USE_CMP0_VALUE,
	/*ReloadValue                 =*/0
};

const Os_Hal_TimerFrtConfigType OsCfg_Hal_TimerFrt_SystemTimer_Core1 = 
{
	/*CounterRegisterAddress      =*/OS_HAL_TIMER_STM1_BASE + OS_HAL_TIMER_STM_TIM0_OFFSET,
	/*ComparaRegisterAddress      =*/OS_HAL_TIMER_STM1_BASE + OS_HAL_TIMER_STM_CMP0_OFFSET,
	/*CMCONRegisterAddress        =*/OS_HAL_TIMER_STM1_BASE + OS_HAL_TIMER_STM_CMCON_OFFSET,
	/*CMCONMask                   =*/OS_HAL_TIMER_STM_CMCON_USE_CMP0_MASK,
	/*CMCONValue                  =*/OS_HAL_TIMER_STM_CMCON_USE_CMP0_VALUE,
	/*InterruptSRCRegisterAddress =*/OS_HAL_INT_SRC_BASE + OS_HAL_INT_SRC_STM1_CH0_OFFSET,
	/*ICRRegisterAddress          =*/OS_HAL_TIMER_STM1_BASE + OS_HAL_TIMER_STM_ICR_OFFSET,
	/*ICRMask                     =*/OS_HAL_TIMER_STM_ICR_USE_CMP0_MASK,
	/*ICRValue                    =*/OS_HAL_TIMER_STM_ICR_USE_CMP0_VALUE,
	/*ReloadValue                 =*/0
};

const Os_Hal_TimerFrtConfigType OsCfg_Hal_TimerFrt_SystemTimer_Core2 = 
{
	/*CounterRegisterAddress      =*/OS_HAL_TIMER_STM2_BASE + OS_HAL_TIMER_STM_TIM0_OFFSET,
	/*ComparaRegisterAddress      =*/OS_HAL_TIMER_STM2_BASE + OS_HAL_TIMER_STM_CMP0_OFFSET,
	/*CMCONRegisterAddress        =*/OS_HAL_TIMER_STM2_BASE + OS_HAL_TIMER_STM_CMCON_OFFSET,
	/*CMCONMask                   =*/OS_HAL_TIMER_STM_CMCON_USE_CMP0_MASK,
	/*CMCONValue                  =*/OS_HAL_TIMER_STM_CMCON_USE_CMP0_VALUE,
	/*InterruptSRCRegisterAddress =*/OS_HAL_INT_SRC_BASE + OS_HAL_INT_SRC_STM2_CH0_OFFSET,
	/*ICRRegisterAddress          =*/OS_HAL_TIMER_STM2_BASE + OS_HAL_TIMER_STM_ICR_OFFSET,
	/*ICRMask                     =*/OS_HAL_TIMER_STM_ICR_USE_CMP0_MASK,
	/*ICRValue                    =*/OS_HAL_TIMER_STM_ICR_USE_CMP0_VALUE,
	/*ReloadValue                 =*/0
};

const Os_Hal_TimerFrtConfigType OsCfg_Hal_TimerFrt_SystemTimer_Core3 = 
{
	/*CounterRegisterAddress      =*/OS_HAL_TIMER_STM3_BASE + OS_HAL_TIMER_STM_TIM0_OFFSET,
	/*ComparaRegisterAddress      =*/OS_HAL_TIMER_STM3_BASE + OS_HAL_TIMER_STM_CMP0_OFFSET,
	/*CMCONRegisterAddress        =*/OS_HAL_TIMER_STM3_BASE + OS_HAL_TIMER_STM_CMCON_OFFSET,
	/*CMCONMask                   =*/OS_HAL_TIMER_STM_CMCON_USE_CMP0_MASK,
	/*CMCONValue                  =*/OS_HAL_TIMER_STM_CMCON_USE_CMP0_VALUE,
	/*InterruptSRCRegisterAddress =*/OS_HAL_INT_SRC_BASE + OS_HAL_INT_SRC_STM3_CH0_OFFSET,
	/*ICRRegisterAddress          =*/OS_HAL_TIMER_STM3_BASE + OS_HAL_TIMER_STM_ICR_OFFSET,
	/*ICRMask                     =*/OS_HAL_TIMER_STM_ICR_USE_CMP0_MASK,
	/*ICRValue                    =*/OS_HAL_TIMER_STM_ICR_USE_CMP0_VALUE,
	/*ReloadValue                 =*/0
};