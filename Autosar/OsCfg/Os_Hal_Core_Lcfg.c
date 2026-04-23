#define OS_HAL_CORE_LCFG_SOURCE


#include"Std_Types.h"

#include "Os_Hal_Core_Lcfg.h"
#include "Os_Hal_Core.h"

#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Entry_Lcfg.h"
#include "Os_Hal_Interrupt_Lcfg.h"
#include "Os_Hal_Kernel_Lcfg.h"

static Os_Hal_Core2ThreadType OsCfg_Hal_Core2Thread_OsCore0_Dyn;
static Os_Hal_Core2ThreadType OsCfg_Hal_Core2Thread_OsCore1_Dyn;
static Os_Hal_Core2ThreadType OsCfg_Hal_Core2Thread_OsCore2_Dyn;
static Os_Hal_Core2ThreadType OsCfg_Hal_Core2Thread_OsCore3_Dyn;

const Os_IsrHwConfigType* const OsCfg_Hal_Core_OsCore0_InterruptSourceRefs[1] = 
{
	NULL_PTR
};
const Os_Hal_CoreConfigType OsCfg_Hal_Core_OsCore0 = 
{
	/*CoreId                     =*/0,
	/*ProgramCounterRegister     =*/0,
	/*StartLabelAddress          =*/0,
	/*DBGRRegister               =*/0,
	/*SYSCON_CORECON_Register    =*/0,
	/*BOOTCONRegister            =*/0
};
const Os_Hal_CoreAsrConfigType OsCfg_Hal_CoreAsr_OsCore0 = 
{
	/*CoreId     =*/0
};


const Os_IsrHwConfigType* const OsCfg_Hal_Core_OsCore1_InterruptSourceRefs[1] = 
{
	NULL_PTR
};
const Os_Hal_CoreConfigType OsCfg_Hal_Core_OsCore1 = 
{
	/*CoreId                     =*/1,
	/*ProgramCounterRegister     =*/OS_HAL_CORE1_PC,
	/*StartLabelAddress          =*/(uint32)&(__START1),
	/*DBGRRegister               =*/OS_HAL_CORE1_DBGSR,
	/*SYSCON_CORECON_Register    =*/OS_HAL_CORE1_SYSCON_CORECON,
	/*BOOTCONRegister            =*/OS_HAL_CORE1_BOOTCON
};
const Os_Hal_CoreAsrConfigType OsCfg_Hal_CoreAsr_OsCore1 = 
{
	/*CoreId     =*/1
};


const Os_IsrHwConfigType* const OsCfg_Hal_Core_OsCore2_InterruptSourceRefs[1] = 
{
	NULL_PTR
};
const Os_Hal_CoreConfigType OsCfg_Hal_Core_OsCore2 = 
{
	/*CoreId                     =*/2,
	/*ProgramCounterRegister     =*/OS_HAL_CORE2_PC,
	/*StartLabelAddress          =*/(uint32)&(__START2),
	/*DBGRRegister               =*/OS_HAL_CORE2_DBGSR,
	/*SYSCON_CORECON_Register    =*/OS_HAL_CORE2_SYSCON_CORECON,
	/*BOOTCONRegister            =*/OS_HAL_CORE2_BOOTCON
};
const Os_Hal_CoreAsrConfigType OsCfg_Hal_CoreAsr_OsCore2 = 
{
	/*CoreId     =*/2
};


const Os_IsrHwConfigType* const OsCfg_Hal_Core_OsCore3_InterruptSourceRefs[1] = 
{
	NULL_PTR
};
const Os_Hal_CoreConfigType OsCfg_Hal_Core_OsCore3 = 
{
	/*CoreId                     =*/3,
	/*ProgramCounterRegister     =*/OS_HAL_CORE3_PC,
	/*StartLabelAddress          =*/(uint32)&(__START3),
	/*DBGRRegister               =*/OS_HAL_CORE3_DBGSR,
	/*SYSCON_CORECON_Register    =*/OS_HAL_CORE3_SYSCON_CORECON,
	/*BOOTCONRegister            =*/OS_HAL_CORE3_BOOTCON
};
const Os_Hal_CoreAsrConfigType OsCfg_Hal_CoreAsr_OsCore3 = 
{
	/*CoreId     =*/3
};


const Os_Hal_Core2ThreadConfigType OsCfg_Hal_Core2Thread = 
{
	//Core2Thread
	{
		&OsCfg_Hal_Core2Thread_OsCore0_Dyn,
		&OsCfg_Hal_Core2Thread_OsCore1_Dyn,
		&OsCfg_Hal_Core2Thread_OsCore2_Dyn,
		&OsCfg_Hal_Core2Thread_OsCore3_Dyn
	}
};


const Os_Hal_SystemConfigType OsCfg_Hal_System = 0;


const Os_IsrHwConfigType* const OsCfg_Hal_System_InterruptSourceRefs[9] = 
{
	&OsCfg_Isr_OsIsr_STM0_Ch0_HwConfig,
	&OsCfg_Isr_OsIsr_STM1_Ch0_HwConfig,
	&OsCfg_Isr_OsIsr_STM2_Ch0_HwConfig,
	&OsCfg_Isr_OsIsr_STM3_Ch0_HwConfig,
	&OsCfg_Isr_XSignalIsr_OsCore0_HwConfig,
	&OsCfg_Isr_XSignalIsr_OsCore1_HwConfig,
	&OsCfg_Isr_XSignalIsr_OsCore2_HwConfig,
	&OsCfg_Isr_XSignalIsr_OsCore3_HwConfig,
	NULL_PTR
};