#define OS_HAL_CONTEXT_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Context.h"

#include "OsInt.h"
#include "Os_Core.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Hook.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Task.h"

#include "Os_Hal_Core.h"


/*******************************************Core0*******************************************/
Os_Hal_ContextType OsCfg_Hal_Context_Os_CoreInitHook_OsCore0_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Os_CoreInitHook_OsCore0_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_ErrorHook_OsCore0_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_ErrorHook_OsCore0_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore0_Isr_Level1_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore0_Isr_Level1_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore0_Isr_Level2_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore0_Isr_Level2_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_Core0_10ms_Task_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Core0_10ms_Task_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_Default_Init_Task_Core0_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Default_Init_Task_Core0_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_IdleTask_OsCore0_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_IdleTask_OsCore0_Dyn;

Os_ExceptionContextType OsCfg_Hal_Context_OsCore0_ExceptionContext;



/*******************************************Core1*******************************************/
Os_Hal_ContextType OsCfg_Hal_Context_Os_CoreInitHook_OsCore1_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Os_CoreInitHook_OsCore1_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_ErrorHook_OsCore1_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_ErrorHook_OsCore1_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore1_Isr_Level1_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore1_Isr_Level1_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore1_Isr_Level2_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore1_Isr_Level2_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore1_Isr_Level3_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore1_Isr_Level3_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_Core1_10ms_Task_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Core1_10ms_Task_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_Default_Init_Task_Core1_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Default_Init_Task_Core1_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_IdleTask_OsCore1_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_IdleTask_OsCore1_Dyn;

Os_ExceptionContextType OsCfg_Hal_Context_OsCore1_ExceptionContext;



/*******************************************Core2*******************************************/
Os_Hal_ContextType OsCfg_Hal_Context_Os_CoreInitHook_OsCore2_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Os_CoreInitHook_OsCore2_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_ErrorHook_OsCore2_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_ErrorHook_OsCore2_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore2_Isr_Level1_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore2_Isr_Level1_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore2_Isr_Level2_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore2_Isr_Level2_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_Core2_10ms_Task_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Core2_10ms_Task_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_Default_Init_Task_Core2_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Default_Init_Task_Core2_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_IdleTask_OsCore2_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_IdleTask_OsCore2_Dyn;

Os_ExceptionContextType OsCfg_Hal_Context_OsCore2_ExceptionContext;



/*******************************************Core3*******************************************/
Os_Hal_ContextType OsCfg_Hal_Context_Os_CoreInitHook_OsCore3_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Os_CoreInitHook_OsCore3_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_ErrorHook_OsCore3_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_ErrorHook_OsCore3_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore3_Isr_Level1_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore3_Isr_Level1_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_OsCore3_Isr_Level2_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_OsCore3_Isr_Level2_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_Core3_10ms_Task_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Core3_10ms_Task_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_Default_Init_Task_Core3_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_Default_Init_Task_Core3_Dyn;

Os_Hal_ContextType OsCfg_Hal_Context_IdleTask_OsCore3_Dyn;
Os_Hal_ContextFpuContextType OsCfg_Hal_FpuContext_IdleTask_OsCore3_Dyn;

Os_ExceptionContextType OsCfg_Hal_Context_OsCore3_ExceptionContext;




/**********************************************************************Core0***********************************************************************/

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Os_CoreInitHook_OsCore0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Init_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Init_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_HookWrapperOs_CoreInitHook,
	/*ReturnAddress       =*/(uint32)&Os_TrapHookReturn,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_ErrorHook_OsCore0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Error_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Error_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_HookWrapperStatusHook,
	/*ReturnAddress       =*/(uint32)&Os_TrapHookReturn,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_OsIsr_STM0_Ch0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Isr_Os_TimerHrtIsr,
	/*ReturnAddress       =*/(uint32)&Os_TrapIsrEpilogue,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_XSignalIsr_OsCore0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Isr_Core_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Isr_Os_XSigRecvIsrHandler,
	/*ReturnAddress       =*/(uint32)&Os_TrapIsrEpilogue,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Core0_10ms_Task = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Core0_10ms_Task_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_Core0_10ms_Task_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS1,
	/*Entry               =*/(uint32)&Os_Task_Core0_10ms_Task,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Default_Init_Task_Core0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio300_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio300_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS1,
	/*Entry               =*/(uint32)&Os_Task_Default_Init_Task_Core0,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_IdleTask_OsCore0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Task_Prio4294967295_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Task_Os_IdleTask,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextStackConfigType OsCfg_Hal_Stack_OsCore0_Kernel = 
{
	/*StackRegionStart     =*/(uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn),
	/*StackREgionEnd       =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore0_Kernel_Dyn)+1)
};



/**********************************************************************Core1***********************************************************************/

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Os_CoreInitHook_OsCore1 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Init_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Init_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_HookWrapperOs_CoreInitHook,
	/*ReturnAddress       =*/(uint32)&Os_TrapHookReturn,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_ErrorHook_OsCore1 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Error_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Error_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_HookWrapperStatusHook,
	/*ReturnAddress       =*/(uint32)&Os_TrapHookReturn,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_OsIsr_STM1_Ch0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Isr_Core_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Isr_Core_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Isr_Os_TimerHrtIsr,
	/*ReturnAddress       =*/(uint32)&Os_TrapIsrEpilogue,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_XSignalIsr_OsCore1 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Isr_Core_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Isr_Core_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Isr_Os_XSigRecvIsrHandler,
	/*ReturnAddress       =*/(uint32)&Os_TrapIsrEpilogue,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Core1_10ms_Task = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Core1_10ms_Task_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_Core1_10ms_Task_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS1,
	/*Entry               =*/(uint32)&Os_Task_Core1_10ms_Task,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Default_Init_Task_Core1 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Task_Prio300_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Task_Prio300_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS1,
	/*Entry               =*/(uint32)&Os_Task_Default_Init_Task_Core1,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_IdleTask_OsCore1 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Task_Prio4294967295_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Task_Prio4294967295_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Task_Os_IdleTask,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextStackConfigType OsCfg_Hal_Stack_OsCore1_Kernel = 
{
	/*StackRegionStart     =*/(uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore1_Kernel_Dyn),
	/*StackREgionEnd       =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore1_Kernel_Dyn)+1)
};


/**********************************************************************Core2***********************************************************************/

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Os_CoreInitHook_OsCore2 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Init_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Init_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_HookWrapperOs_CoreInitHook,
	/*ReturnAddress       =*/(uint32)&Os_TrapHookReturn,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_ErrorHook_OsCore2 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Error_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Error_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_HookWrapperStatusHook,
	/*ReturnAddress       =*/(uint32)&Os_TrapHookReturn,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_OsIsr_STM2_Ch0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Isr_Core_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Isr_Core_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Isr_Os_TimerHrtIsr,
	/*ReturnAddress       =*/(uint32)&Os_TrapIsrEpilogue,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_XSignalIsr_OsCore2 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Isr_Core_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Isr_Core_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Isr_Os_XSigRecvIsrHandler,
	/*ReturnAddress       =*/(uint32)&Os_TrapIsrEpilogue,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Core2_10ms_Task = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Core2_10ms_Task_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_Core2_10ms_Task_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS1,
	/*Entry               =*/(uint32)&Os_Task_Core2_10ms_Task,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Default_Init_Task_Core2 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Task_Prio300_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Task_Prio300_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS1,
	/*Entry               =*/(uint32)&Os_Task_Default_Init_Task_Core2,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_IdleTask_OsCore2 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Task_Prio4294967295_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Task_Prio4294967295_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Task_Os_IdleTask,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextStackConfigType OsCfg_Hal_Stack_OsCore2_Kernel = 
{
	/*StackRegionStart     =*/(uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore2_Kernel_Dyn),
	/*StackREgionEnd       =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore2_Kernel_Dyn)+1)
};

/**********************************************************************Core3***********************************************************************/

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Os_CoreInitHook_OsCore3 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Init_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Init_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_HookWrapperOs_CoreInitHook,
	/*ReturnAddress       =*/(uint32)&Os_TrapHookReturn,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_ErrorHook_OsCore3 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Error_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Error_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_HookWrapperStatusHook,
	/*ReturnAddress       =*/(uint32)&Os_TrapHookReturn,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_OsIsr_STM3_Ch0 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Isr_Core_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Isr_Core_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Isr_Os_TimerHrtIsr,
	/*ReturnAddress       =*/(uint32)&Os_TrapIsrEpilogue,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_XSignalIsr_OsCore3 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Isr_Core_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Isr_Core_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Isr_Os_XSigRecvIsrHandler,
	/*ReturnAddress       =*/(uint32)&Os_TrapIsrEpilogue,
	/*IntStatus           =*/((uint32)88<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Core3_10ms_Task = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_Core3_10ms_Task_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_Core3_10ms_Task_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS1,
	/*Entry               =*/(uint32)&Os_Task_Core3_10ms_Task,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_Default_Init_Task_Core3 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Task_Prio300_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Task_Prio300_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS1,
	/*Entry               =*/(uint32)&Os_Task_Default_Init_Task_Core3,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextConfigType OsCfg_Hal_Context_IdleTask_OsCore3 = 
{
	/*StackEndAddr        =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Task_Prio4294967295_Dyn)+1),
	/*StackStartAddr      =*/(uint32)(OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Task_Prio4294967295_Dyn)),
	/*ProgramStatus       =*/(uint32)OS_HAL_PSW_IS_MASK | OS_HAL_PSW_CDE_MASK | OS_HAL_PSW_IO_SUPERVISOR | OS_HAL_PSW_S_MASK,
	/*ProtectionSet       =*/(uint32)OS_HAL_PSW_PRS_PS0,
	/*Entry               =*/(uint32)&Os_Task_Os_IdleTask,
	/*ReturnAddress       =*/(uint32)&Os_TrapTaskMissingTerminateTask,
	/*IntStatus           =*/((uint32)0<<OS_HAL_PCXI_PCPN_BIT_POSITION) | OS_HAL_PCXI_PIE_ENABLED		
};

const Os_Hal_ContextStackConfigType OsCfg_Hal_Stack_OsCore3_Kernel = 
{
	/*StackRegionStart     =*/(uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore3_Kernel_Dyn),
	/*StackREgionEnd       =*/(uint32)(OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore3_Kernel_Dyn)+1)
};




Os_ExceptionContextType* const OsCfg_Hal_Context_ExceptionContextRef[5] = 
{
	&OsCfg_Hal_Context_OsCore0_ExceptionContext,
	&OsCfg_Hal_Context_OsCore1_ExceptionContext,
	&OsCfg_Hal_Context_OsCore2_ExceptionContext,
	&OsCfg_Hal_Context_OsCore3_ExceptionContext,
	NULL_PTR
};