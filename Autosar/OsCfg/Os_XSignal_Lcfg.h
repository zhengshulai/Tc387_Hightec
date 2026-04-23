#ifndef OS_XSIGNAL_LCFG_H
# define OS_XSIGNAL_LCFG_H

#include "Std_Types.h"

#include "Os_XSignal_Types.h"
#include "Os_Error_Types.h"
#include "OsInt.h"


typedef enum
{
	XSigFunctionIdx_ActivateTask = 0,
	XSigFunctionIdx_CancelAlarm = 1,
	XSigFunctionIdx_ControlIdle = 2,
	XSigFunctionIdx_GetAlarm = 3,
	XSigFunctionIdx_GetApplicationState = 4,
	XSigFunctionIdx_GetCounterValue = 5,
	XSigFunctionIdx_GetErrorHookStackUsage = 6,
	XSigFunctionIdx_GetEvent = 7,
	XSigFunctionIdx_GetISRStackUsage = 8,
	XSigFunctionIdx_GetKernelStackUsage = 9,
	XSigFunctionIdx_GetProtectionHookStackUsage = 10,
	XSigFunctionIdx_GetScheduleTableStatus = 11,
	XSigFunctionIdx_GetShutdownHookStackUsage = 12,
	XSigFunctionIdx_GetStartupHookStackUsage = 13,
	XSigFunctionIdx_GetTaskStackUsage = 14,
	XSigFunctionIdx_GetTaskState = 15,
	XSigFunctionIdx_HookCallCallback = 16,
	XSigFunctionIdx_NextScheduleTable = 17,
	XSigFunctionIdx_SetAbsAlarm = 18,
	XSigFunctionIdx_SetEvent = 19,
	XSigFunctionIdx_SetRelAlarm = 20,
	XSigFunctionIdx_ShutdownAllCores = 21,
	XSigFunctionIdx_StartScheduleTableAbs = 22,
	XSigFunctionIdx_StartScheduleTableRel = 23,
	XSigFunctionIdx_StopScheduleTable = 24,
	XSigFunctionIdx_TerminateApplication = 25,
	XSigFunctionIdx_GetNonTrustedFunctionStackUsage = 26,
	OS_XSIGFUNCTIONIDX_USEDCOUNT = 27,
	OS_XSIGFUNCTIONIDX_COUNT = 27
}Os_XSigFunctionIdx;



extern const Os_XSigFunctionTableConfigType OsCfg_Isr_XSignalIsr_OsCore0_FuncTable;
extern const Os_XSigRecvPortConfigRefType OsCfg_Isr_XSignalIsr_OsCore0_PortRefs[4];
extern const Os_XSigConfigType OsCfg_XSig_OsCore0;

extern const Os_XSigFunctionTableConfigType OsCfg_Isr_XSignalIsr_OsCore1_FuncTable;
extern const Os_XSigRecvPortConfigRefType OsCfg_Isr_XSignalIsr_OsCore1_PortRefs[4];
extern const Os_XSigConfigType OsCfg_XSig_OsCore1;

extern const Os_XSigFunctionTableConfigType OsCfg_Isr_XSignalIsr_OsCore2_FuncTable;
extern const Os_XSigRecvPortConfigRefType OsCfg_Isr_XSignalIsr_OsCore2_PortRefs[4];
extern const Os_XSigConfigType OsCfg_XSig_OsCore2;

extern const Os_XSigFunctionTableConfigType OsCfg_Isr_XSignalIsr_OsCore3_FuncTable;
extern const Os_XSigRecvPortConfigRefType OsCfg_Isr_XSignalIsr_OsCore3_PortRefs[4];
extern const Os_XSigConfigType OsCfg_XSig_OsCore3;

extern const OSServiceIdType OsCfg_XSig_ServiceMap[27];

#endif