#define OS_HAL_KERNEL_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Hal_Kernel_Lcfg.h"

#include "Os_Common.h"
#include "Os_Core.h"
#include "Os_Spinlock_Lcfg.h"

#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Core_Lcfg.h"


const Os_CoreConfigType* const OsCfg_CoreRefs[5] = 
{
	OS_CORE_CASTCONFIG_COREASR_2_CORE(OsCfg_Core_OsCore0),
	OS_CORE_CASTCONFIG_COREASR_2_CORE(OsCfg_Core_OsCore1),
	OS_CORE_CASTCONFIG_COREASR_2_CORE(OsCfg_Core_OsCore2),
	OS_CORE_CASTCONFIG_COREASR_2_CORE(OsCfg_Core_OsCore3),
	NULL_PTR
};

const Os_CoreConfigType* const OsCfg_CorePhysicalRefs[5] = 
{
	OS_CORE_CASTCONFIG_COREASR_2_CORE(OsCfg_Core_OsCore0),
	OS_CORE_CASTCONFIG_COREASR_2_CORE(OsCfg_Core_OsCore1),
	OS_CORE_CASTCONFIG_COREASR_2_CORE(OsCfg_Core_OsCore2),
	OS_CORE_CASTCONFIG_COREASR_2_CORE(OsCfg_Core_OsCore3),
	NULL_PTR
};

const Os_Hal_ContextStackConfigType* const OsCfg_Stack_KernelStacks[5] = 
{
	&OsCfg_Hal_Stack_OsCore0_Kernel,
	&OsCfg_Hal_Stack_OsCore0_Kernel,
	&OsCfg_Hal_Stack_OsCore0_Kernel,
	&OsCfg_Hal_Stack_OsCore0_Kernel,
	NULL_PTR
};
