#define OS_MEMORYPROTECTION_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_MemoryProtection_Lcfg.h"
#include "Os_MemoryProtection.h"

#include "Os_Hal_MemoryProtection_Lcfg.h"


/***********************************************Core0********************************************/
// const Os_MpCoreConfigType OsCfg_Mp_OsCore0 =
// {
	// /*HwConfig    =*/&OsCfg_Hal_Mp_OsCore0
// };

// const Os_MpAccessRightsType OsCfg_Mp_OsApplication_NonTrusted_Core0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_EmptyThread
// };

// const Os_MpAccessRightsType OsCfg_Mp_SystemApplication_OsCore0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore0,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_EmptyThread
// };

// const Os_MpAccessRightsType OsCfg_Mp_OsIsr_STM0_Ch0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore0,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_OsIsr_STM0_Ch0
// };

// const Os_MpAccessRightsType OsCfg_Mp_XSignalIsr_OsCore0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore0,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_XSignalIsr_OsCore0
// };

// const Os_MpAccessRightsType OsCfg_Mp_Core0_10ms_Task = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_Core0_10ms_Task
// };

// const Os_MpAccessRightsType OsCfg_Mp_Default_Init_Task_Core0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_Default_Init_Task_Core0
// };

// const Os_MpAccessRightsType OsCfg_Mp_IdleTask_OsCore0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore0,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_IdleTask_OsCore0
// };


// /***********************************************Core1********************************************/
// const Os_MpCoreConfigType OsCfg_Mp_OsCore1 =
// {
	// /*HwConfig    =*/&OsCfg_Hal_Mp_OsCore1
// };

// const Os_MpAccessRightsType OsCfg_Mp_OsApplication_NonTrusted_Core1 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core1,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_EmptyThread
// };

// const Os_MpAccessRightsType OsCfg_Mp_SystemApplication_OsCore1 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore1,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_EmptyThread
// };

// const Os_MpAccessRightsType OsCfg_Mp_OsIsr_STM1_Ch0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore1,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_OsIsr_STM1_Ch0
// };

// const Os_MpAccessRightsType OsCfg_Mp_XSignalIsr_OsCore1 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore1,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_XSignalIsr_OsCore1
// };

// const Os_MpAccessRightsType OsCfg_Mp_Core1_10ms_Task = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core1,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_Core1_10ms_Task
// };

// const Os_MpAccessRightsType OsCfg_Mp_Default_Init_Task_Core1 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core1,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_Default_Init_Task_Core1
// };

// const Os_MpAccessRightsType OsCfg_Mp_IdleTask_OsCore1 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore1,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_IdleTask_OsCore1
// };



// /***********************************************Core2********************************************/
// const Os_MpCoreConfigType OsCfg_Mp_OsCore2 =
// {
	// /*HwConfig    =*/&OsCfg_Hal_Mp_OsCore2
// };

// const Os_MpAccessRightsType OsCfg_Mp_OsApplication_NonTrusted_Core2 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core2,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_EmptyThread
// };

// const Os_MpAccessRightsType OsCfg_Mp_SystemApplication_OsCore2 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore2,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_EmptyThread
// };

// const Os_MpAccessRightsType OsCfg_Mp_OsIsr_STM2_Ch0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore2,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_OsIsr_STM2_Ch0
// };

// const Os_MpAccessRightsType OsCfg_Mp_XSignalIsr_OsCore2 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore2,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_XSignalIsr_OsCore2
// };

// const Os_MpAccessRightsType OsCfg_Mp_Core2_10ms_Task = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core2,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_Core2_10ms_Task
// };

// const Os_MpAccessRightsType OsCfg_Mp_Default_Init_Task_Core2 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core2,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_Default_Init_Task_Core2
// };

// const Os_MpAccessRightsType OsCfg_Mp_IdleTask_OsCore2 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore2,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_IdleTask_OsCore2
// };



// /***********************************************Core3********************************************/
// const Os_MpCoreConfigType OsCfg_Mp_OsCore3 =
// {
	// /*HwConfig    =*/&OsCfg_Hal_Mp_OsCore3
// };

// const Os_MpAccessRightsType OsCfg_Mp_OsApplication_NonTrusted_Core3 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core3,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_EmptyThread
// };

// const Os_MpAccessRightsType OsCfg_Mp_SystemApplication_OsCore3 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore3,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_EmptyThread
// };

// const Os_MpAccessRightsType OsCfg_Mp_OsIsr_STM3_Ch0 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore3,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_OsIsr_STM3_Ch0
// };

// const Os_MpAccessRightsType OsCfg_Mp_XSignalIsr_OsCore3 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore3,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_XSignalIsr_OsCore3
// };

// const Os_MpAccessRightsType OsCfg_Mp_Core3_10ms_Task = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core3,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_Core3_10ms_Task
// };

// const Os_MpAccessRightsType OsCfg_Mp_Default_Init_Task_Core3 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_OsApplication_NonTrusted_Core3,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_Default_Init_Task_Core3
// };

// const Os_MpAccessRightsType OsCfg_Mp_IdleTask_OsCore3 = 
// {
	// /*AppAccessRights    =*/&OsCfg_Hal_Mp_SystemApplication_OsCore3,
	// /*ThreadAccessRights =*/&OsCfg_Hal_Mp_IdleTask_OsCore3
// };


// const Os_MpSystemConfigType OsCfg_Mp_SystemMpu = 
// {
	// /*HwConfig          =*/&OsCfg_Hal_Mp_SystemMpu
// };