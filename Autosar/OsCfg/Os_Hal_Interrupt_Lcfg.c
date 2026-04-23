#define OS_HAL_INTERRUPT_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Hal_Interrupt_Lcfg.h"
#include "Os_Hal_Interrupt.h"

#include "Os_Hal_Core.h"

const Os_Hal_IntIsrConfigType OsCfg_Hal_IntIsr_OsIsr_STM0_Ch0 = 
{
	/*Level            =*/88,
	/*Source           =*/0x300,
	/*CoreAssignment   =*/0
};
const Os_Hal_IntIsrMapConfigType OsCfg_Hal_IntIsrMap_OsIsr_STM0_Ch0 = 
{
	/*Dummy      =*/(uint32)0
};

const Os_Hal_IntIsrConfigType OsCfg_Hal_IntIsr_XSignalIsr_OsCore0 = 
{
	/*Level            =*/87,
	/*Source           =*/0x990,
	/*CoreAssignment   =*/0
};
const Os_Hal_IntIsrMapConfigType OsCfg_Hal_IntIsrMap_XSignalIsr_OsCore0 = 
{
	/*Dummy      =*/(uint32)0
};

const Os_Hal_XSigInterruptConfigType OsCfg_Hal_XSig_XSignalIsr_OsCore0 = 
{
	/*ConfigData   = */&OsCfg_Hal_IntIsr_XSignalIsr_OsCore0,
};


const Os_Hal_IntIsrConfigType OsCfg_Hal_IntIsr_OsIsr_STM1_Ch0 = 
{
	/*Level            =*/88,
	/*Source           =*/0x308,
	/*CoreAssignment   =*/2
};
const Os_Hal_IntIsrMapConfigType OsCfg_Hal_IntIsrMap_OsIsr_STM1_Ch0 = 
{
	/*Dummy      =*/(uint32)0
};

const Os_Hal_IntIsrConfigType OsCfg_Hal_IntIsr_XSignalIsr_OsCore1 = 
{
	/*Level            =*/87,
	/*Source           =*/0x994,
	/*CoreAssignment   =*/2
};
const Os_Hal_IntIsrMapConfigType OsCfg_Hal_IntIsrMap_XSignalIsr_OsCore1 = 
{
	/*Dummy      =*/(uint32)0
};

const Os_Hal_XSigInterruptConfigType OsCfg_Hal_XSig_XSignalIsr_OsCore1 = 
{
	/*ConfigData   = */&OsCfg_Hal_IntIsr_XSignalIsr_OsCore1,
};



const Os_Hal_IntIsrConfigType OsCfg_Hal_IntIsr_OsIsr_STM2_Ch0 = 
{
	/*Level            =*/88,
	/*Source           =*/0x310,
	/*CoreAssignment   =*/3
};
const Os_Hal_IntIsrMapConfigType OsCfg_Hal_IntIsrMap_OsIsr_STM2_Ch0 = 
{
	/*Dummy      =*/(uint32)0
};

const Os_Hal_IntIsrConfigType OsCfg_Hal_IntIsr_XSignalIsr_OsCore2 = 
{
	/*Level            =*/87,
	/*Source           =*/0x998,
	/*CoreAssignment   =*/3
};
const Os_Hal_IntIsrMapConfigType OsCfg_Hal_IntIsrMap_XSignalIsr_OsCore2 = 
{
	/*Dummy      =*/(uint32)0
};

const Os_Hal_XSigInterruptConfigType OsCfg_Hal_XSig_XSignalIsr_OsCore2 = 
{
	/*ConfigData   = */&OsCfg_Hal_IntIsr_XSignalIsr_OsCore2,
};



const Os_Hal_IntIsrConfigType OsCfg_Hal_IntIsr_OsIsr_STM3_Ch0 = 
{
	/*Level            =*/88,
	/*Source           =*/0x318,
	/*CoreAssignment   =*/4
};
const Os_Hal_IntIsrMapConfigType OsCfg_Hal_IntIsrMap_OsIsr_STM3_Ch0 = 
{
	/*Dummy      =*/(uint32)0
};

const Os_Hal_IntIsrConfigType OsCfg_Hal_IntIsr_XSignalIsr_OsCore3 = 
{
	/*Level            =*/87,
	/*Source           =*/0x99c,
	/*CoreAssignment   =*/4
};
const Os_Hal_IntIsrMapConfigType OsCfg_Hal_IntIsrMap_XSignalIsr_OsCore3 = 
{
	/*Dummy      =*/(uint32)0
};

const Os_Hal_XSigInterruptConfigType OsCfg_Hal_XSig_XSignalIsr_OsCore3 = 
{
	/*ConfigData   = */&OsCfg_Hal_IntIsr_XSignalIsr_OsCore3,
};
