#include "Os_Isr_Types.h"
#include "Os_Isr_Lcfg.h"
#include "Os_Isr.h"
#include "Os_ThreadInt.h"
#include "Os.h"

#include "Mcu_Init.h"

volatile uint8 Test_Os_Core0_Cnt = 0;
volatile uint8 Test_Os_Core1_Cnt = 0;
volatile uint8 Test_Os_Core2_Cnt = 0;
volatile uint8 Test_Os_Core3_Cnt = 0;

volatile uint8 Rte_InitState_0 = 0;
volatile uint8 Rte_InitState_1 = 0;
volatile uint8 Rte_InitState_2 = 0;
volatile uint8 Rte_InitState_3 = 0;

volatile uint8 Isr_Enable_Flag = 0;
volatile uint8 Os_ThreadStartFirst_line = 0;


void ErrorHook(StatusType Error)
{
	(void)Error;
}

static void SchM_Init(void)
{
	uint32 id = GetCoreID();
	if(id == OS_CORE_ID_0)
	{
		(void)ActivateTask(Core0_10ms_Task);
		(void)SetRelAlarm(Rte_Al_TE2_Core0_10ms_Task_0_10ms, OS_MS2TICKS_SystemTimer_Core0(0)+(TickType)1, OS_MS2TICKS_SystemTimer_Core0(10));		
		Rte_InitState_0 = 2;
	}
	if(id == OS_CORE_ID_1)
	{
		(void)ActivateTask(Core1_10ms_Task);		
		(void)SetRelAlarm(Rte_Al_TE2_Core1_10ms_Task_0_10ms, OS_MS2TICKS_SystemTimer_Core0(0)+(TickType)1, OS_MS2TICKS_SystemTimer_Core0(10));	
		Rte_InitState_1 = 2;
	}
	if(id == OS_CORE_ID_2)
	{
		(void)ActivateTask(Core2_10ms_Task);		
		(void)SetRelAlarm(Rte_Al_TE2_Core2_10ms_Task_0_10ms, OS_MS2TICKS_SystemTimer_Core0(0)+(TickType)1, OS_MS2TICKS_SystemTimer_Core0(10));		
		Rte_InitState_2 = 2;
	}
	if(id == OS_CORE_ID_3)
	{
		(void)ActivateTask(Core3_10ms_Task);		
		(void)SetRelAlarm(Rte_Al_TE2_Core3_10ms_Task_0_10ms, OS_MS2TICKS_SystemTimer_Core0(0)+(TickType)1, OS_MS2TICKS_SystemTimer_Core0(10));		
		Rte_InitState_3 = 2;
	}
}
/*********************************Core0*************************/


void Os_Task_IdleTask_OsCore0(void)
{
	for(;;)
	{
		(void)Schedule();
	}
}

void Os_Task_Core0_10ms_Task(void)
{
	EventMaskType ev;
	for(;;)
	{
		(void)WaitEvent(Rte_Ev_Cyclic2_Core0_10ms_Task_0_10ms);
		(void)GetEvent(Core0_10ms_Task, &ev);
		(void)ClearEvent(ev & Rte_Ev_Cyclic2_Core0_10ms_Task_0_10ms);
		
		if((ev & Rte_Ev_Cyclic2_Core0_10ms_Task_0_10ms) != (EventMaskType)0)
		{
			Test_Os_Core0_Cnt++;
		}
	}
}

void Os_Task_Default_Init_Task_Core0(void)
{
	ISRType stIsrId;
	const Os_IsrConfigType *pstIsrCfg;
	const Os_ThreadConfigType *pstCurrentThread;	

    PmsmFoc_initHardware();

	SchM_Init();
	while(Rte_InitState_0 != 2){}
	
	pstCurrentThread = Os_CoreGetThread();
	for(stIsrId = (ISRType)0; stIsrId < OS_ISRID_COUNT; stIsrId++)
	{
		pstIsrCfg = Os_IsrId2Isr(stIsrId);
		if(0 != Os_ThreadCheckIsCurrentApplication(pstCurrentThread, Os_ThreadGetOwnerApplication(Os_IsrGetThread(pstIsrCfg))))
		{
			Isr_Enable_Flag = 1;
			Os_EnableInterruptSource(stIsrId, TRUE);
		}
	}
	(void)TerminateTask();
}




/*********************************Core1*************************/
void Os_Task_IdleTask_OsCore1(void)
{
	for(;;)
	{
		(void)Schedule();
	}
}

void Os_Task_Core1_10ms_Task(void)
{
	EventMaskType ev;
	for(;;)
	{
		(void)WaitEvent(Rte_Ev_Cyclic2_Core1_10ms_Task_0_10ms);
		(void)GetEvent(Core1_10ms_Task, &ev);
		(void)ClearEvent(ev & Rte_Ev_Cyclic2_Core1_10ms_Task_0_10ms);
		
		if((ev & Rte_Ev_Cyclic2_Core1_10ms_Task_0_10ms) != (EventMaskType)0)
		{
			Test_Os_Core1_Cnt++;
		}
	}
}

void Os_Task_Default_Init_Task_Core1(void)
{
	ISRType stIsrId;
	const Os_IsrConfigType *pstIsrCfg;
	const Os_ThreadConfigType *pstCurrentThread;

	SchM_Init();
	while((Rte_InitState_0 != 2) || (Rte_InitState_2 != 2) || (Rte_InitState_3 != 2)){}
	
	pstCurrentThread = Os_CoreGetThread();
	for(stIsrId = (ISRType)0; stIsrId < OS_ISRID_COUNT; stIsrId++)
	{
		pstIsrCfg = Os_IsrId2Isr(stIsrId);
		if(0 != Os_ThreadCheckIsCurrentApplication(pstCurrentThread, Os_ThreadGetOwnerApplication(Os_IsrGetThread(pstIsrCfg))))
		{
			Os_EnableInterruptSource(stIsrId, TRUE);
		}
	}
	(void)TerminateTask();
}


/*********************************Core2*************************/
void Os_Task_IdleTask_OsCore2(void)
{
	for(;;)
	{
		(void)Schedule();
	}
}

void Os_Task_Core2_10ms_Task(void)
{
	EventMaskType ev;
	for(;;)
	{
		(void)WaitEvent(Rte_Ev_Cyclic2_Core2_10ms_Task_0_10ms);
		(void)GetEvent(Core2_10ms_Task, &ev);
		(void)ClearEvent(ev & Rte_Ev_Cyclic2_Core2_10ms_Task_0_10ms);
		
		if((ev & Rte_Ev_Cyclic2_Core2_10ms_Task_0_10ms) != (EventMaskType)0)
		{
			Test_Os_Core2_Cnt++;
		}
	}
}

void Os_Task_Default_Init_Task_Core2(void)
{
	ISRType stIsrId;
	const Os_IsrConfigType *pstIsrCfg;
	const Os_ThreadConfigType *pstCurrentThread;

	SchM_Init();
	while((Rte_InitState_0 != 2) || (Rte_InitState_1 != 2) || (Rte_InitState_3 != 2)){}
	
	pstCurrentThread = Os_CoreGetThread();
	for(stIsrId = (ISRType)0; stIsrId < OS_ISRID_COUNT; stIsrId++)
	{
		pstIsrCfg = Os_IsrId2Isr(stIsrId);
		if(0 != Os_ThreadCheckIsCurrentApplication(pstCurrentThread, Os_ThreadGetOwnerApplication(Os_IsrGetThread(pstIsrCfg))))
		{
			Os_EnableInterruptSource(stIsrId, TRUE);
		}
	}
	(void)TerminateTask();
}


/*********************************Core2*************************/
void Os_Task_IdleTask_OsCore3(void)
{
	for(;;)
	{
		(void)Schedule();
	}
}

void Os_Task_Core3_10ms_Task(void)
{
	EventMaskType ev;
	for(;;)
	{
		(void)WaitEvent(Rte_Ev_Cyclic2_Core3_10ms_Task_0_10ms);
		(void)GetEvent(Core3_10ms_Task, &ev);
		(void)ClearEvent(ev & Rte_Ev_Cyclic2_Core3_10ms_Task_0_10ms);
		
		if((ev & Rte_Ev_Cyclic2_Core3_10ms_Task_0_10ms) != (EventMaskType)0)
		{
			Test_Os_Core3_Cnt++;
		}
	}
}

void Os_Task_Default_Init_Task_Core3(void)
{
	ISRType stIsrId;
	const Os_IsrConfigType *pstIsrCfg;
	const Os_ThreadConfigType *pstCurrentThread;

	SchM_Init();
	while((Rte_InitState_0 != 2) || (Rte_InitState_1 != 2) || (Rte_InitState_2 != 2)){}
	
	pstCurrentThread = Os_CoreGetThread();
	for(stIsrId = (ISRType)0; stIsrId < OS_ISRID_COUNT; stIsrId++)
	{
		pstIsrCfg = Os_IsrId2Isr(stIsrId);
		if(0 != Os_ThreadCheckIsCurrentApplication(pstCurrentThread, Os_ThreadGetOwnerApplication(Os_IsrGetThread(pstIsrCfg))))
		{
			Os_EnableInterruptSource(stIsrId, TRUE);
		}
	}
	(void)TerminateTask();
}