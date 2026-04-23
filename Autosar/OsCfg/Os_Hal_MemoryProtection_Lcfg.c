#define OS_HAL_MEMORYPROTECTION_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_Hal_MemoryProtection_Cfg.h"
#include "Os_Hal_MemoryProtection_Lcfg.h"
#include "Os_Hal_MemoryProtection.h"

// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore0_DataRegions[11];
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore0_DataRegions[11] = 
// {
    // {
		// /*StartAddress = */(uint32)0x0uL,
		// /*EndAddress   = */(uint32)0x0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0xF0000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xBFFFFFF0uL
	// },
// };

// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore0_CodeRegions[2];
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore0_CodeRegions[2] = 
// {
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
// };


// const Os_Hal_MpCoreConfigType OsCfg_Hal_Mp_OsCore0 = 
// {
	// /*MpuDataRegionStartSlot         =*/0,
	// /*MpuDataRegionCount             =*/11,
	// /*MpuDataRegion                  =*/OsCfg_Hal_Mp_OsCore0_DataRegions,
	// {
		// //Read Access bit mask
		// /*MpuDataRegionReadEnablePS0     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS1     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS2     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS3     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS4     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS5     =*/0x7FFFu
	// },
	// {
		// //Write Access bit mask
		// /*MpuDataRegionWriteEnablePS0     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS1     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS2     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS3     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS4     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS5     =*/0x7FFFu
	// },
	// /*MpuCodeRegionStartSlot         =*/0,
	// /*MpuCodeRegionCount             =*/2,
	// /*MpuCodeRegion                  =*/OsCfg_Hal_Mp_OsCore0_CodeRegions,
	// {
		// //Execution Access bit mask
		// /*MpuCodeRegionExecutionEnablePS0     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS1     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS2     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS3     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS4     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS5     =*/3u	
	// },
// };

// const Os_Hal_MpAppConfigType OsCfg_Hal_Mp_OsApplication_NonTrusted_Core0 = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u
// };

// const Os_Hal_MpAppConfigType OsCfg_Hal_Mp_SystemApplication_OsCore0 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_OsIsr_STM0_Ch0 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_XSignalIsr_OsCore0 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_Core0_10ms_Task = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_Default_Init_Task_Core0 = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_IdleTask_OsCore0 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };


// /******************************************************Core1***************************************/
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore1_DataRegions[11];
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore1_DataRegions[11] = 
// {
    // {
		// /*StartAddress = */(uint32)0x0uL,
		// /*EndAddress   = */(uint32)0x0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0xF0000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xBFFFFFF0uL
	// },
// };

// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore1_CodeRegions[2];
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore1_CodeRegions[2] = 
// {
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
// };


// const Os_Hal_MpCoreConfigType OsCfg_Hal_Mp_OsCore1 = 
// {
	// /*MpuDataRegionStartSlot         =*/0,
	// /*MpuDataRegionCount             =*/11,
	// /*MpuDataRegion                  =*/OsCfg_Hal_Mp_OsCore1_DataRegions,
	// {
		// //Read Access bit mask
		// /*MpuDataRegionReadEnablePS0     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS1     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS2     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS3     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS4     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS5     =*/0x7FFFu
	// },
	// {
		// //Write Access bit mask
		// /*MpuDataRegionWriteEnablePS0     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS1     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS2     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS3     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS4     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS5     =*/0x7FFFu
	// },
	// /*MpuCodeRegionStartSlot         =*/0,
	// /*MpuCodeRegionCount             =*/2,
	// /*MpuCodeRegion                  =*/OsCfg_Hal_Mp_OsCore1_CodeRegions,
	// {
		// //Execution Access bit mask
		// /*MpuCodeRegionExecutionEnablePS0     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS1     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS2     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS3     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS4     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS5     =*/3u	
	// },
// };

// const Os_Hal_MpAppConfigType OsCfg_Hal_Mp_OsApplication_NonTrusted_Core1 = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u
// };

// const Os_Hal_MpAppConfigType OsCfg_Hal_Mp_SystemApplication_OsCore1 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_OsIsr_STM1_Ch0 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_XSignalIsr_OsCore1 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_Core1_10ms_Task = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_Default_Init_Task_Core1 = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_IdleTask_OsCore1 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };




// /******************************************************Core2***************************************/
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore2_DataRegions[11];
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore2_DataRegions[11] = 
// {
    // {
		// /*StartAddress = */(uint32)0x0uL,
		// /*EndAddress   = */(uint32)0x0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0xF0000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xBFFFFFF0uL
	// },
// };

// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore2_CodeRegions[2];
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore2_CodeRegions[2] = 
// {
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
// };


// const Os_Hal_MpCoreConfigType OsCfg_Hal_Mp_OsCore2 = 
// {
	// /*MpuDataRegionStartSlot         =*/0,
	// /*MpuDataRegionCount             =*/11,
	// /*MpuDataRegion                  =*/OsCfg_Hal_Mp_OsCore2_DataRegions,
	// {
		// //Read Access bit mask
		// /*MpuDataRegionReadEnablePS0     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS1     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS2     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS3     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS4     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS5     =*/0x7FFFu
	// },
	// {
		// //Write Access bit mask
		// /*MpuDataRegionWriteEnablePS0     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS1     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS2     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS3     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS4     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS5     =*/0x7FFFu
	// },
	// /*MpuCodeRegionStartSlot         =*/0,
	// /*MpuCodeRegionCount             =*/2,
	// /*MpuCodeRegion                  =*/OsCfg_Hal_Mp_OsCore2_CodeRegions,
	// {
		// //Execution Access bit mask
		// /*MpuCodeRegionExecutionEnablePS0     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS1     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS2     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS3     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS4     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS5     =*/3u	
	// },
// };

// const Os_Hal_MpAppConfigType OsCfg_Hal_Mp_OsApplication_NonTrusted_Core2 = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u
// };

// const Os_Hal_MpAppConfigType OsCfg_Hal_Mp_SystemApplication_OsCore2 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_OsIsr_STM2_Ch0 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_XSignalIsr_OsCore2 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_Core2_10ms_Task = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_Default_Init_Task_Core2 = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_IdleTask_OsCore2 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };




// /******************************************************Core2***************************************/
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore3_DataRegions[11];
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore3_DataRegions[11] = 
// {
    // {
		// /*StartAddress = */(uint32)0x0uL,
		// /*EndAddress   = */(uint32)0x0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0xF0000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xBFFFFFF0uL
	// },
// };

// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore3_CodeRegions[2];
// static const Os_Hal_MpuRegionRangeConfigType OsCfg_Hal_Mp_OsCore3_CodeRegions[2] = 
// {
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
    // {
		// /*StartAddress = */(uint32)0x40000000uL,
		// /*EndAddress   = */(uint32)0xFFFFFFF0uL
	// },
// };


// const Os_Hal_MpCoreConfigType OsCfg_Hal_Mp_OsCore3 = 
// {
	// /*MpuDataRegionStartSlot         =*/0,
	// /*MpuDataRegionCount             =*/11,
	// /*MpuDataRegion                  =*/OsCfg_Hal_Mp_OsCore3_DataRegions,
	// {
		// //Read Access bit mask
		// /*MpuDataRegionReadEnablePS0     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS1     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS2     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS3     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS4     =*/0x7FFFu,
		// /*MpuDataRegionReadEnablePS5     =*/0x7FFFu
	// },
	// {
		// //Write Access bit mask
		// /*MpuDataRegionWriteEnablePS0     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS1     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS2     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS3     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS4     =*/0x7FFFu,
		// /*MpuDataRegionWriteEnablePS5     =*/0x7FFFu
	// },
	// /*MpuCodeRegionStartSlot         =*/0,
	// /*MpuCodeRegionCount             =*/2,
	// /*MpuCodeRegion                  =*/OsCfg_Hal_Mp_OsCore3_CodeRegions,
	// {
		// //Execution Access bit mask
		// /*MpuCodeRegionExecutionEnablePS0     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS1     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS2     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS3     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS4     =*/3u,
		// /*MpuCodeRegionExecutionEnablePS5     =*/3u	
	// },
// };

// const Os_Hal_MpAppConfigType OsCfg_Hal_Mp_OsApplication_NonTrusted_Core3 = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u
// };

// const Os_Hal_MpAppConfigType OsCfg_Hal_Mp_SystemApplication_OsCore3 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_OsIsr_STM3_Ch0 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_XSignalIsr_OsCore3 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_Core3_10ms_Task = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_Default_Init_Task_Core3 = 
// {
	// /*ProtectionSet               =*/1u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_IdleTask_OsCore3 = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/11u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/2u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };

// const Os_Hal_MpSystemConfigType OsCfg_Hal_Mp_SystemMpu =
// {
	// /*SysMpuId   =*/0
// };

// const Os_Hal_MpThreadConfigType OsCfg_Hal_Mp_EmptyThread = 
// {
	// /*ProtectionSet               =*/0u,
	// /*MpuDataRegionStartSlot      =*/0u,
	// /*MpuDataRegionCount          =*/0u,	
	// /*MpuDataRegion               =*/NULL_PTR,
	// /*MpuDataRegionEnableMask     =*/0u,
	// /*MpuDataRegionReadEnable     =*/0u,
	// /*MpuDataRegionWriteEnable    =*/0u,

	// /*MpuCodeRegionStartSlot      =*/0u,
	// /*MpuCodeRegionCount          =*/0u,	
	// /*MpuCodeRegion               =*/NULL_PTR,
	// /*MpuCodeRegionEnableMask     =*/0u,
	// /*MpuCodeRegionExcutionEnable =*/0u	
// };