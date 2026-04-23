#ifndef OS_HAL_KERNEL_LCFG_H
# define OS_HAL_KERNEL_LCFG_H

#include "Std_Types.h"

#include "Os_Core_Cfg.h"
#include "Os_Core_Types.h"

#include "Os_Hal_Context_Types.h"
#include "Os_Hal_Lcfg.h"




typedef enum
{
	OS_COREASRCOREIDX_0 = 0,
	OS_COREASRCOREIDX_1 = 1,
	OS_COREASRCOREIDX_2 = 2,
	OS_COREASRCOREIDX_3 = 3,
	OS_COREASRCOREIDX_COUNT = 4
} Os_CoreAsrCoreIdx;


extern const Os_CoreConfigType* const OsCfg_CoreRefs[5];
extern const Os_CoreConfigType* const OsCfg_CorePhysicalRefs[5];
extern const Os_Hal_ContextStackConfigType* const OsCfg_Stack_KernelStacks[5];


#endif