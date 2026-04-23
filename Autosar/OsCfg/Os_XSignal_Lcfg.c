#define OS_XSIGNAL_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_XSignal.h"
#include "Os_XSignal_Lcfg.h"

#include "Os_Common.h"
#include "Os_Isr_Lcfg.h"
#include "Os_Lcfg.h"


static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore0_Send0;
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore0_Send1;
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore0_Send2;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore0_Recv0;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore0_Recv1;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore0_Recv2;

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore1_Send0;
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore1_Send1;
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore1_Send2;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore1_Recv0;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore1_Recv1;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore1_Recv2;

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore2_Send0;
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore2_Send1;
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore2_Send2;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore2_Recv0;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore2_Recv1;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore2_Recv2;

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore3_Send0;
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore3_Send1;
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore3_Send2;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore3_Recv0;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore3_Recv1;
static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore3_Recv2;


/*OsCore0 -> OsCore1*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Send_Dyn;
static Os_XSigSendDataType OsCore0_Send0_Data[2];
/*OsCore0 -> OsCore2*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Send_Dyn;
static Os_XSigSendDataType OsCore0_Send1_Data[2];
/*OsCore0 -> OsCore3*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Send_Dyn;
static Os_XSigSendDataType OsCore0_Send2_Data[2];
/*OsCore0 <- OsCore1*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore0_Recv0_Data[2];
/*OsCore0 <- OsCore2*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore0_Recv1_Data[2];
/*OsCore0 <- OsCore3*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore0_Recv2_Data[2];

/*OsCore1 -> OsCore0*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Send_Dyn;
static Os_XSigSendDataType OsCore1_Send0_Data[2];
/*OsCore1 -> OsCore2*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Send_Dyn;
static Os_XSigSendDataType OsCore1_Send1_Data[2];
/*OsCore1 -> OsCore3*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Send_Dyn;
static Os_XSigSendDataType OsCore1_Send2_Data[2];
/*OsCore1 <- OsCore0*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore1_Recv0_Data[2];
/*OsCore1 <- OsCore2*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore1_Recv1_Data[2];
/*OsCore1 <- OsCore3*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore1_Recv2_Data[2];

/*OsCore2 -> OsCore1*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Send_Dyn;
static Os_XSigSendDataType OsCore2_Send0_Data[2];
/*OsCore2 -> OsCore3*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Send_Dyn;
static Os_XSigSendDataType OsCore2_Send1_Data[2];
/*OsCore2 -> OsCore0*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Send_Dyn;
static Os_XSigSendDataType OsCore2_Send2_Data[2];
/*OsCore2 <- OsCore1*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore2_Recv0_Data[2];
/*OsCore2 <- OsCore3*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore2_Recv1_Data[2];
/*OsCore2 <- OsCore0*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore2_Recv2_Data[2];

/*OsCore3 -> OsCore1*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Send_Dyn;
static Os_XSigSendDataType OsCore3_Send0_Data[2];
/*OsCore3 -> OsCore2*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Send_Dyn;
static Os_XSigSendDataType OsCore3_Send1_Data[2];
/*OsCore3 -> OsCore0*/
static Os_XSigChannelSendType OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Send_Dyn;
static Os_XSigSendDataType OsCore3_Send2_Data[2];
/*OsCore3 <- OsCore1*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore3_Recv0_Data[2];
/*OsCore3 <- OsCore2*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore3_Recv1_Data[2];
/*OsCore3 <- OsCore0*/
static Os_XSigChannelRecvType OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Recv_Dyn;
static Os_XSigRecvDataType XSignalIsr_OsCore3_Recv2_Data[2];

const OSServiceIdType OsCfg_XSig_ServiceMap[27] = 
{
	OSServiceId_ActivateTask,
	OSServiceId_CancelAlarm,
	OSServiceId_ControlIdle,
	OSServiceId_GetAlarm,
	OSServiceId_GetApplicationState,
	OSServiceId_GetCounterValue,
	OSServiceId_GetErrorHookStackUsage,
	OSServiceId_GetEvent,
	OSServiceId_GetISRStackUsage,
	OSServiceId_GetKernelStackUsage,
	OSServiceId_GetProtectionHookStackUsage,
	OSServiceId_GetScheduleTableStatus,
	OSServiceId_GetShutdownHookStackUsage,
	OSServiceId_GetStartupHookStackUsage,
	OSServiceId_GetTaskStackUsage,
	OSServiceId_GetTaskState,
	OSServiceId_HookCallCallback,
	OSServiceId_NextScheduleTable,
	OSServiceId_SetAbsAlarm,
	OSServiceId_SetEvent,
	OSServiceId_SetRelAlarm,
	OSServiceId_ShutdownAllCores,
	OSServiceId_StartScheduleTableAbs,
	OSServiceId_StartScheduleTableRel,
	OSServiceId_StopScheduleTable,
	OSServiceId_TerminateApplication,
	OSSERVICEID_COUNT
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore0_Send0_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore1_Recv0_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore0_Send0_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore1_Recv0_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore0_Send1_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore2_Recv0_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore0_Send1_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore2_Recv0_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore0_Send2_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore3_Recv0_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore0_Send2_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore3_Recv0_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore1_Send0_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore2_Recv1_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore1_Send0_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore2_Recv1_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore1_Send1_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore3_Recv1_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore1_Send1_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore3_Recv1_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore1_Send2_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore0_Recv0_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore1_Send2_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore0_Recv0_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore2_Send0_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore1_Recv1_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore2_Send0_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore1_Recv1_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore2_Send1_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore3_Recv2_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore2_Send1_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore3_Recv2_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore2_Send2_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore0_Recv1_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore2_Send2_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore0_Recv1_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore3_Send0_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore1_Recv2_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore3_Send0_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore1_Recv2_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore3_Send1_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore2_Recv2_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore3_Send1_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore2_Recv2_Data[0]),
		/*Idx       =*/1		
	}
};

static const Os_XSigComDataConfigType OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Buffer_Dyn[2] = 
{
	{
		/*SendData  =*/&(OsCore3_Send2_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore0_Recv2_Data[0]),
		/*Idx       =*/0
	},
	{
		/*SendData  =*/&(OsCore3_Send2_Data[0]),
		/*RecvData  =*/&(XSignalIsr_OsCore0_Recv2_Data[0]),
		/*Idx       =*/1		
	}
};


/***************************************************************Core0************************************************************/
static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore0_Send0 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore1,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore1_Recv0,
	/*SendCore   =*/&OsCfg_Core_OsCore0
};

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore0_Send1 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore2,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore2_Recv0,
	/*SendCore   =*/&OsCfg_Core_OsCore0
};

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore0_Send2 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore3,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore3_Recv0,
	/*SendCore   =*/&OsCfg_Core_OsCore0
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore0_Recv0 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore1_Send2
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore0_Recv1 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore2_Send2
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore0_Recv2 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore3_Send2
};

const Os_XSigFunctionTableConfigType OsCfg_Isr_XSignalIsr_OsCore0_FuncTable = 
{
	//FunctionDescription
	{
			{Os_XSigRecv_ActivateTask},
			{Os_XSigRecv_CancelAlarm},
			{Os_XSigRecv_ControlIdle},
			{Os_XSigRecv_GetAlarm},
			{Os_XSigRecv_GetApplicationState},
			{Os_XSigRecv_GetCounterValue},
			{Os_XSigRecv_GetErrorHookStackUsage},
			{Os_XSigRecv_GetEvent},
			{Os_XSigRecv_GetISRStackUsage},
			{Os_XSigRecv_GetKernelStackUsage},
			{Os_XSigRecv_GetProtectionHookStackUsage},
			{Os_XSigRecv_GetScheduleTableStatus},
			{Os_XSigRecv_GetShutdownHookStackUsage},
			{Os_XSigRecv_GetStartupHookStackUsage},
			{Os_XSigRecv_GetTaskStackUsage},
			{Os_XSigRecv_GetTaskState},
			{Os_XSigRecv_HookCallCallback},
			{Os_XSigRecv_NextScheduleTable},
			{Os_XSigRecv_SetAbsAlarm},
			{Os_XSigRecv_SetEvent},
			{Os_XSigRecv_SetRelAlarm},
			{Os_XSigRecv_ShutdownAllCores},
			{Os_XSigRecv_StartScheduleTableAbs},
			{Os_XSigRecv_StartScheduleTableRel},
			{Os_XSigRecv_StopScheduleTable},
			{Os_XSigRecv_TerminateApplication},
			{NULL_PTR}		
	}
};

const Os_XSigRecvPortConfigRefType OsCfg_Isr_XSignalIsr_OsCore0_PortRefs[4] = 
{
	&OsCfg_XSig_XSignalIsr_OsCore0_Recv0,
	&OsCfg_XSig_XSignalIsr_OsCore0_Recv1,
	&OsCfg_XSig_XSignalIsr_OsCore0_Recv2,
	NULL_PTR
};

static const Os_XSigIsrConfigRefType OsCfg_XSig_OsCore0_IsrRefs[2] = 
{
	&OsCfg_Isr_XSignalIsr_OsCore0,
	NULL_PTR
};

const Os_XSigConfigType OsCfg_XSig_OsCore0 = 
{
	//XSigSendPorts
	{
		/*[0]    =*/NULL_PTR,
		/*[1]    =*/&OsCfg_XSig_OsCore0_Send0,
		/*[1]    =*/&OsCfg_XSig_OsCore0_Send1,
		/*[1]    =*/&OsCfg_XSig_OsCore0_Send2		
	},
	/*XSigRecvIsrRefs  =*/OsCfg_XSig_OsCore0_IsrRefs,
	/*XSigRecvIsrCount =*/(Os_ObjIdxType)1
};

/***********************************************************************Core1*********************************************************************/

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore1_Send0 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore2,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore2_Recv1,
	/*SendCore   =*/&OsCfg_Core_OsCore1
};

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore1_Send1 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore3,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore3_Recv1,
	/*SendCore   =*/&OsCfg_Core_OsCore1
};

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore1_Send2 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore1_Send2_XSignalIsr_OsCore0_Recv0_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore0,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore0_Recv0,
	/*SendCore   =*/&OsCfg_Core_OsCore1
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore1_Recv0 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore0_Send0_XSignalIsr_OsCore1_Recv0_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore0_Send0
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore1_Recv1 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore2_Send0
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore1_Recv2 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore3_Send0
};

const Os_XSigFunctionTableConfigType OsCfg_Isr_XSignalIsr_OsCore1_FuncTable = 
{
	//FunctionDescription
	{
			{Os_XSigRecv_ActivateTask},
			{Os_XSigRecv_CancelAlarm},
			{Os_XSigRecv_ControlIdle},
			{Os_XSigRecv_GetAlarm},
			{Os_XSigRecv_GetApplicationState},
			{Os_XSigRecv_GetCounterValue},
			{Os_XSigRecv_GetErrorHookStackUsage},
			{Os_XSigRecv_GetEvent},
			{Os_XSigRecv_GetISRStackUsage},
			{Os_XSigRecv_GetKernelStackUsage},
			{Os_XSigRecv_GetProtectionHookStackUsage},
			{Os_XSigRecv_GetScheduleTableStatus},
			{Os_XSigRecv_GetShutdownHookStackUsage},
			{Os_XSigRecv_GetStartupHookStackUsage},
			{Os_XSigRecv_GetTaskStackUsage},
			{Os_XSigRecv_GetTaskState},
			{Os_XSigRecv_HookCallCallback},
			{Os_XSigRecv_NextScheduleTable},
			{Os_XSigRecv_SetAbsAlarm},
			{Os_XSigRecv_SetEvent},
			{Os_XSigRecv_SetRelAlarm},
			{Os_XSigRecv_ShutdownAllCores},
			{Os_XSigRecv_StartScheduleTableAbs},
			{Os_XSigRecv_StartScheduleTableRel},
			{Os_XSigRecv_StopScheduleTable},
			{Os_XSigRecv_TerminateApplication},
			{NULL_PTR}		
	}
};

const Os_XSigRecvPortConfigRefType OsCfg_Isr_XSignalIsr_OsCore1_PortRefs[4] = 
{
	&OsCfg_XSig_XSignalIsr_OsCore1_Recv0,
	&OsCfg_XSig_XSignalIsr_OsCore1_Recv1,
	&OsCfg_XSig_XSignalIsr_OsCore1_Recv2,
	NULL_PTR
};

static const Os_XSigIsrConfigRefType OsCfg_XSig_OsCore1_IsrRefs[2] = 
{
	&OsCfg_Isr_XSignalIsr_OsCore1,
	NULL_PTR
};

const Os_XSigConfigType OsCfg_XSig_OsCore1 = 
{
	//XSigSendPorts
	{
		/*[0]    =*/NULL_PTR,
		/*[1]    =*/&OsCfg_XSig_OsCore1_Send0,
		/*[1]    =*/&OsCfg_XSig_OsCore1_Send1,
		/*[1]    =*/&OsCfg_XSig_OsCore1_Send2		
	},
	/*XSigRecvIsrRefs  =*/OsCfg_XSig_OsCore1_IsrRefs,
	/*XSigRecvIsrCount =*/(Os_ObjIdxType)1
};


/***********************************************************************Core2*********************************************************************/

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore2_Send0 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore2_Send0_XSignalIsr_OsCore1_Recv1_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore1,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore1_Recv1,
	/*SendCore   =*/&OsCfg_Core_OsCore2
};

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore2_Send1 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore3,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore3_Recv2,
	/*SendCore   =*/&OsCfg_Core_OsCore2
};

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore2_Send2 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore2_Send2_XSignalIsr_OsCore0_Recv1_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore0,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore0_Recv1,
	/*SendCore   =*/&OsCfg_Core_OsCore2
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore2_Recv0 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore0_Send1_XSignalIsr_OsCore2_Recv0_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore0_Send1
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore2_Recv1 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore1_Send0_XSignalIsr_OsCore2_Recv1_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore1_Send0
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore2_Recv2 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore3_Send1
};

const Os_XSigFunctionTableConfigType OsCfg_Isr_XSignalIsr_OsCore2_FuncTable = 
{
	//FunctionDescription
	{
			{Os_XSigRecv_ActivateTask},
			{Os_XSigRecv_CancelAlarm},
			{Os_XSigRecv_ControlIdle},
			{Os_XSigRecv_GetAlarm},
			{Os_XSigRecv_GetApplicationState},
			{Os_XSigRecv_GetCounterValue},
			{Os_XSigRecv_GetErrorHookStackUsage},
			{Os_XSigRecv_GetEvent},
			{Os_XSigRecv_GetISRStackUsage},
			{Os_XSigRecv_GetKernelStackUsage},
			{Os_XSigRecv_GetProtectionHookStackUsage},
			{Os_XSigRecv_GetScheduleTableStatus},
			{Os_XSigRecv_GetShutdownHookStackUsage},
			{Os_XSigRecv_GetStartupHookStackUsage},
			{Os_XSigRecv_GetTaskStackUsage},
			{Os_XSigRecv_GetTaskState},
			{Os_XSigRecv_HookCallCallback},
			{Os_XSigRecv_NextScheduleTable},
			{Os_XSigRecv_SetAbsAlarm},
			{Os_XSigRecv_SetEvent},
			{Os_XSigRecv_SetRelAlarm},
			{Os_XSigRecv_ShutdownAllCores},
			{Os_XSigRecv_StartScheduleTableAbs},
			{Os_XSigRecv_StartScheduleTableRel},
			{Os_XSigRecv_StopScheduleTable},
			{Os_XSigRecv_TerminateApplication},
			{NULL_PTR}		
	}
};

const Os_XSigRecvPortConfigRefType OsCfg_Isr_XSignalIsr_OsCore2_PortRefs[4] = 
{
	&OsCfg_XSig_XSignalIsr_OsCore2_Recv0,
	&OsCfg_XSig_XSignalIsr_OsCore2_Recv1,
	&OsCfg_XSig_XSignalIsr_OsCore2_Recv2,
	NULL_PTR
};

static const Os_XSigIsrConfigRefType OsCfg_XSig_OsCore2_IsrRefs[2] = 
{
	&OsCfg_Isr_XSignalIsr_OsCore2,
	NULL_PTR
};

const Os_XSigConfigType OsCfg_XSig_OsCore2 = 
{
	//XSigSendPorts
	{
		/*[0]    =*/NULL_PTR,
		/*[1]    =*/&OsCfg_XSig_OsCore2_Send0,
		/*[1]    =*/&OsCfg_XSig_OsCore2_Send1,
		/*[1]    =*/&OsCfg_XSig_OsCore2_Send2		
	},
	/*XSigRecvIsrRefs  =*/OsCfg_XSig_OsCore2_IsrRefs,
	/*XSigRecvIsrCount =*/(Os_ObjIdxType)1
};



/***********************************************************************Core3*********************************************************************/

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore3_Send0 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore3_Send0_XSignalIsr_OsCore1_Recv2_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore1,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore1_Recv2,
	/*SendCore   =*/&OsCfg_Core_OsCore3
};

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore3_Send1 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore3_Send1_XSignalIsr_OsCore2_Recv2_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore2,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore2_Recv2,
	/*SendCore   =*/&OsCfg_Core_OsCore3
};

static const Os_XSigSendPortConfigType OsCfg_XSig_OsCore3_Send2 = 
{
	//SendChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Send_Dyn,
		/*Receive      =*/&OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Recv_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore3_Send2_XSignalIsr_OsCore0_Recv2_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*XSigIsr    =*/&OsCfg_Isr_XSignalIsr_OsCore0,
	/*RecvPort   =*/&OsCfg_XSig_XSignalIsr_OsCore0_Recv2,
	/*SendCore   =*/&OsCfg_Core_OsCore3
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore3_Recv0 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore0_Send2_XSignalIsr_OsCore3_Recv0_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore0_Send2
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore3_Recv1 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore1_Send1_XSignalIsr_OsCore3_Recv1_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore1_Send1
};

static const Os_XSigRecvPortConfigType OsCfg_XSig_XSignalIsr_OsCore3_Recv2 = 
{
	//RecvChannel
	{
		/*Dyn          =*/&OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Recv_Dyn,
		/*Send         =*/&OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Send_Dyn,
		/*Buffer       =*/OsCfg_XSig_OsCore2_Send1_XSignalIsr_OsCore3_Recv2_Buffer_Dyn,
		/*BufferSize   =*/(Os_XSigBufferIdxType)2
	},
	/*SendPort   =*/&OsCfg_XSig_OsCore2_Send1
};

const Os_XSigFunctionTableConfigType OsCfg_Isr_XSignalIsr_OsCore3_FuncTable = 
{
	//FunctionDescription
	{
			{Os_XSigRecv_ActivateTask},
			{Os_XSigRecv_CancelAlarm},
			{Os_XSigRecv_ControlIdle},
			{Os_XSigRecv_GetAlarm},
			{Os_XSigRecv_GetApplicationState},
			{Os_XSigRecv_GetCounterValue},
			{Os_XSigRecv_GetErrorHookStackUsage},
			{Os_XSigRecv_GetEvent},
			{Os_XSigRecv_GetISRStackUsage},
			{Os_XSigRecv_GetKernelStackUsage},
			{Os_XSigRecv_GetProtectionHookStackUsage},
			{Os_XSigRecv_GetScheduleTableStatus},
			{Os_XSigRecv_GetShutdownHookStackUsage},
			{Os_XSigRecv_GetStartupHookStackUsage},
			{Os_XSigRecv_GetTaskStackUsage},
			{Os_XSigRecv_GetTaskState},
			{Os_XSigRecv_HookCallCallback},
			{Os_XSigRecv_NextScheduleTable},
			{Os_XSigRecv_SetAbsAlarm},
			{Os_XSigRecv_SetEvent},
			{Os_XSigRecv_SetRelAlarm},
			{Os_XSigRecv_ShutdownAllCores},
			{Os_XSigRecv_StartScheduleTableAbs},
			{Os_XSigRecv_StartScheduleTableRel},
			{Os_XSigRecv_StopScheduleTable},
			{Os_XSigRecv_TerminateApplication},
			{NULL_PTR}		
	}
};

const Os_XSigRecvPortConfigRefType OsCfg_Isr_XSignalIsr_OsCore3_PortRefs[4] = 
{
	&OsCfg_XSig_XSignalIsr_OsCore3_Recv0,
	&OsCfg_XSig_XSignalIsr_OsCore3_Recv1,
	&OsCfg_XSig_XSignalIsr_OsCore3_Recv2,
	NULL_PTR
};

static const Os_XSigIsrConfigRefType OsCfg_XSig_OsCore3_IsrRefs[2] = 
{
	&OsCfg_Isr_XSignalIsr_OsCore3,
	NULL_PTR
};

const Os_XSigConfigType OsCfg_XSig_OsCore3 = 
{
	//XSigSendPorts
	{
		/*[0]    =*/NULL_PTR,
		/*[1]    =*/&OsCfg_XSig_OsCore3_Send0,
		/*[2]    =*/&OsCfg_XSig_OsCore3_Send1,
		/*[3]    =*/&OsCfg_XSig_OsCore3_Send2		
	},
	/*XSigRecvIsrRefs  =*/OsCfg_XSig_OsCore3_IsrRefs,
	/*XSigRecvIsrCount =*/(Os_ObjIdxType)1
};
