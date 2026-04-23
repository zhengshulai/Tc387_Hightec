#ifndef OS_CORE_LCFG_H
# define OS_CORE_LCFG_H

#include "Std_Types.h"

#include "Os_Core_Types.h"
#include "Os_Lcfg.h"
#include "Os_Hal_Kernel_Lcfg.h"


extern Os_CoreAsrType OsCfg_Core_OsCore0_Dyn;
extern Os_CoreAsrType OsCfg_Core_OsCore1_Dyn;
extern Os_CoreAsrType OsCfg_Core_OsCore2_Dyn;
extern Os_CoreAsrType OsCfg_Core_OsCore3_Dyn;

extern const Os_CoreAsrConfigType OsCfg_Core_OsCore0;
extern const Os_CoreAsrConfigType OsCfg_Core_OsCore1;
extern const Os_CoreAsrConfigType OsCfg_Core_OsCore2;
extern const Os_CoreAsrConfigType OsCfg_Core_OsCore3;

extern Os_CoreBootBarrierType* const OsCfg_CoreBootBarrierRefs[5];
extern const Os_SystemConfigType OsCfg_System;
#endif