#define OS_STACK_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_Stack_Cfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Stack.h"


Os_Hal_StackType OsCfg_Stack_Core0_10ms_Task_Dyn[(4096+16)/4];
Os_Hal_StackType OsCfg_Stack_Core1_10ms_Task_Dyn[(4096+16)/4];
Os_Hal_StackType OsCfg_Stack_Core2_10ms_Task_Dyn[(4096+16)/4];
Os_Hal_StackType OsCfg_Stack_Core3_10ms_Task_Dyn[(4096+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore0_Error_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore0_Init_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore0_Isr_Core_Dyn[(2048+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore0_Isr_Level88_Dyn[(2048+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore0_Kernel_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore0_Task_Prio300_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore1_Error_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore1_Init_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore1_Isr_Core_Dyn[(2048+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore1_Isr_Level88_Dyn[(2048+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore1_Kernel_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore1_Task_Prio300_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore1_Task_Prio4294967295_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore2_Error_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore2_Init_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore2_Isr_Core_Dyn[(2048+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore2_Isr_Level88_Dyn[(2048+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore2_Kernel_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore2_Task_Prio300_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore2_Task_Prio4294967295_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore3_Error_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore3_Init_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore3_Isr_Core_Dyn[(2048+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore3_Isr_Level88_Dyn[(2048+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore3_Kernel_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore3_Task_Prio300_Dyn[(1024+16)/4];
Os_Hal_StackType OsCfg_Stack_OsCore3_Task_Prio4294967295_Dyn[(1024+16)/4];

/************************************************************Core0*********************************************************/
const Os_StackConfigType OsCfg_Stack_Core0_10ms_Task = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_Core0_10ms_Task_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Core0_10ms_Task_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore0_Error = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Error_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Error_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore0_Init = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Init_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Init_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore0_Isr_Core = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore0_Isr_Level88 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Level88_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Level88_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore0_Kernel = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore0_Task_Prio300 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio300_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio300_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore0_Task_Prio4294967295 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn)
};



/************************************************************Core1*********************************************************/
const Os_StackConfigType OsCfg_Stack_Core1_10ms_Task = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_Core1_10ms_Task_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Core1_10ms_Task_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore1_Error = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Error_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Error_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore1_Init = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Init_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Init_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore1_Isr_Core = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Isr_Core_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Isr_Core_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore1_Isr_Level88 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Isr_Level88_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Isr_Level88_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore1_Kernel = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Kernel_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Kernel_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore1_Task_Prio300 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Task_Prio300_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Task_Prio300_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore1_Task_Prio4294967295 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Task_Prio4294967295_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Task_Prio4294967295_Dyn)
};



/************************************************************Core2*********************************************************/
const Os_StackConfigType OsCfg_Stack_Core2_10ms_Task = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_Core2_10ms_Task_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Core2_10ms_Task_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore2_Error = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Error_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Error_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore2_Init = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Init_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Init_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore2_Isr_Core = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Isr_Core_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Isr_Core_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore2_Isr_Level88 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Isr_Level88_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Isr_Level88_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore2_Kernel = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Kernel_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Kernel_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore2_Task_Prio300 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Task_Prio300_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Task_Prio300_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore2_Task_Prio4294967295 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Task_Prio4294967295_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Task_Prio4294967295_Dyn)
};




/************************************************************Core3*********************************************************/
const Os_StackConfigType OsCfg_Stack_Core3_10ms_Task = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_Core3_10ms_Task_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Core3_10ms_Task_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore3_Error = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Error_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Error_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore3_Init = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Init_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Init_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore3_Isr_Core = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Isr_Core_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Isr_Core_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore3_Isr_Level88 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Isr_Level88_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Isr_Level88_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore3_Kernel = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Kernel_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Kernel_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore3_Task_Prio300 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Task_Prio300_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Task_Prio300_Dyn)
};
const Os_StackConfigType OsCfg_Stack_OsCore3_Task_Prio4294967295 = 
{
	/*LowAddress     =*/OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Task_Prio4294967295_Dyn),
	/*HighAddress    =*/OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Task_Prio4294967295_Dyn)
};