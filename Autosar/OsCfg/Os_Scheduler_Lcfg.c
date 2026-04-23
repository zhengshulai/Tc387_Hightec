#define OS_SCHEDULER_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Scheduler_Lcfg.h"
#include "Os_Scheduler_Cfg.h"
#include "Os_Scheduler.h"

#include "Os_BitArray.h"
#include "Os_Common.h"
#include "Os_Deque.h"


static Os_SchedulerType OsCfg_Scheduler_OsCore0_Dyn;
static Os_BitArrayType OsCfg_Scheduler_OsCore0_BitArray_Dyn;
static Os_BitFieldType OsCfg_Scheduler_OsCore0_BitField_Dyn[3];
static Os_DequeType OsCfg_TaskQueue0_OsCore0_Dyn;
static Os_DequeType OsCfg_TaskQueue1_OsCore0_Dyn;
static Os_DequeType OsCfg_TaskQueue2_OsCore0_Dyn;
static Os_DequeNodeType OsCfg_TaskQueueNodes0_OsCore0_Dyn[3];
static Os_DequeNodeType OsCfg_TaskQueueNodes1_OsCore0_Dyn[2];
static Os_DequeNodeType OsCfg_TaskQueueNodes2_OsCore0_Dyn[2];

static Os_SchedulerType OsCfg_Scheduler_OsCore1_Dyn;
static Os_BitArrayType OsCfg_Scheduler_OsCore1_BitArray_Dyn;
static Os_BitFieldType OsCfg_Scheduler_OsCore1_BitField_Dyn[3];
static Os_DequeType OsCfg_TaskQueue0_OsCore1_Dyn;
static Os_DequeType OsCfg_TaskQueue1_OsCore1_Dyn;
static Os_DequeType OsCfg_TaskQueue2_OsCore1_Dyn;
static Os_DequeNodeType OsCfg_TaskQueueNodes0_OsCore1_Dyn[3];
static Os_DequeNodeType OsCfg_TaskQueueNodes1_OsCore1_Dyn[2];
static Os_DequeNodeType OsCfg_TaskQueueNodes2_OsCore1_Dyn[2];

static Os_SchedulerType OsCfg_Scheduler_OsCore2_Dyn;
static Os_BitArrayType OsCfg_Scheduler_OsCore2_BitArray_Dyn;
static Os_BitFieldType OsCfg_Scheduler_OsCore2_BitField_Dyn[3];
static Os_DequeType OsCfg_TaskQueue0_OsCore2_Dyn;
static Os_DequeType OsCfg_TaskQueue1_OsCore2_Dyn;
static Os_DequeType OsCfg_TaskQueue2_OsCore2_Dyn;
static Os_DequeNodeType OsCfg_TaskQueueNodes0_OsCore2_Dyn[3];
static Os_DequeNodeType OsCfg_TaskQueueNodes1_OsCore2_Dyn[2];
static Os_DequeNodeType OsCfg_TaskQueueNodes2_OsCore2_Dyn[2];

static Os_SchedulerType OsCfg_Scheduler_OsCore3_Dyn;
static Os_BitArrayType OsCfg_Scheduler_OsCore3_BitArray_Dyn;
static Os_BitFieldType OsCfg_Scheduler_OsCore3_BitField_Dyn[3];
static Os_DequeType OsCfg_TaskQueue0_OsCore3_Dyn;
static Os_DequeType OsCfg_TaskQueue1_OsCore3_Dyn;
static Os_DequeType OsCfg_TaskQueue2_OsCore3_Dyn;
static Os_DequeNodeType OsCfg_TaskQueueNodes0_OsCore3_Dyn[3];
static Os_DequeNodeType OsCfg_TaskQueueNodes1_OsCore3_Dyn[2];
static Os_DequeNodeType OsCfg_TaskQueueNodes2_OsCore3_Dyn[2];

/********************************************************Core0***********************************************/
static const Os_DequeConfigType OsCfg_Scheduler_OsCore0_TaskQueues[3] = 
{
	{
		/*Dyn      =*/&OsCfg_TaskQueue0_OsCore0_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes0_OsCore0_Dyn,
		/*Size     =*/3u
	},
	{
		/*Dyn      =*/&OsCfg_TaskQueue1_OsCore0_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes1_OsCore0_Dyn,
		/*Size     =*/2u
	},
	{
		/*Dyn      =*/&OsCfg_TaskQueue2_OsCore0_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes2_OsCore0_Dyn,
		/*Size     =*/2u
	}
};

const Os_SchedulerConfigType OsCfg_Scheduler_OsCore0 = 
{
    //BitArray
	{
		/*Dyn          =*/&OsCfg_Scheduler_OsCore0_BitArray_Dyn,
		/*Data         =*/OsCfg_Scheduler_OsCore0_BitField_Dyn,
		/*Size         =*/(uint16)OS_BITARRAY_SIZE(3u),	
		/*BitLength    =*/(uint16)OS_BITARRAY_LENGTH(3u)	
	},
	/*Dyn                  =*/&OsCfg_Scheduler_OsCore0_Dyn,
	/*TaskQueues           =*/OsCfg_Scheduler_OsCore0_TaskQueues,
	/*NumberOfPriorities   =*/3u,	
};


/********************************************************Core1***********************************************/
static const Os_DequeConfigType OsCfg_Scheduler_OsCore1_TaskQueues[3] = 
{
	{
		/*Dyn      =*/&OsCfg_TaskQueue0_OsCore1_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes0_OsCore1_Dyn,
		/*Size     =*/3u
	},
	{
		/*Dyn      =*/&OsCfg_TaskQueue1_OsCore1_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes1_OsCore1_Dyn,
		/*Size     =*/2u
	},
	{
		/*Dyn      =*/&OsCfg_TaskQueue2_OsCore1_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes2_OsCore1_Dyn,
		/*Size     =*/2u
	}
};

const Os_SchedulerConfigType OsCfg_Scheduler_OsCore1 = 
{
    //BitArray
	{
		/*Dyn          =*/&OsCfg_Scheduler_OsCore1_BitArray_Dyn,
		/*Data         =*/OsCfg_Scheduler_OsCore1_BitField_Dyn,
		/*Size         =*/(uint16)OS_BITARRAY_SIZE(3u),	
		/*BitLength    =*/(uint16)OS_BITARRAY_LENGTH(3u)	
	},
	/*Dyn                  =*/&OsCfg_Scheduler_OsCore1_Dyn,
	/*TaskQueues           =*/OsCfg_Scheduler_OsCore1_TaskQueues,
	/*NumberOfPriorities   =*/3u,	
};



/********************************************************Core2***********************************************/
static const Os_DequeConfigType OsCfg_Scheduler_OsCore2_TaskQueues[3] = 
{
	{
		/*Dyn      =*/&OsCfg_TaskQueue0_OsCore2_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes0_OsCore2_Dyn,
		/*Size     =*/3u
	},
	{
		/*Dyn      =*/&OsCfg_TaskQueue1_OsCore2_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes1_OsCore2_Dyn,
		/*Size     =*/2u
	},
	{
		/*Dyn      =*/&OsCfg_TaskQueue2_OsCore2_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes2_OsCore2_Dyn,
		/*Size     =*/2u
	}
};

const Os_SchedulerConfigType OsCfg_Scheduler_OsCore2 = 
{
    //BitArray
	{
		/*Dyn          =*/&OsCfg_Scheduler_OsCore2_BitArray_Dyn,
		/*Data         =*/OsCfg_Scheduler_OsCore2_BitField_Dyn,
		/*Size         =*/(uint16)OS_BITARRAY_SIZE(3u),	
		/*BitLength    =*/(uint16)OS_BITARRAY_LENGTH(3u)	
	},
	/*Dyn                  =*/&OsCfg_Scheduler_OsCore2_Dyn,
	/*TaskQueues           =*/OsCfg_Scheduler_OsCore2_TaskQueues,
	/*NumberOfPriorities   =*/3u,	
};




/********************************************************Core3***********************************************/
static const Os_DequeConfigType OsCfg_Scheduler_OsCore3_TaskQueues[3] = 
{
	{
		/*Dyn      =*/&OsCfg_TaskQueue0_OsCore3_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes0_OsCore3_Dyn,
		/*Size     =*/3u
	},
	{
		/*Dyn      =*/&OsCfg_TaskQueue1_OsCore3_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes1_OsCore3_Dyn,
		/*Size     =*/2u
	},
	{
		/*Dyn      =*/&OsCfg_TaskQueue2_OsCore3_Dyn,
		/*Buffer   =*/OsCfg_TaskQueueNodes2_OsCore3_Dyn,
		/*Size     =*/2u
	}
};

const Os_SchedulerConfigType OsCfg_Scheduler_OsCore3 = 
{
    //BitArray
	{
		/*Dyn          =*/&OsCfg_Scheduler_OsCore3_BitArray_Dyn,
		/*Data         =*/OsCfg_Scheduler_OsCore3_BitField_Dyn,
		/*Size         =*/(uint16)OS_BITARRAY_SIZE(3u),	
		/*BitLength    =*/(uint16)OS_BITARRAY_LENGTH(3u)	
	},
	/*Dyn                  =*/&OsCfg_Scheduler_OsCore3_Dyn,
	/*TaskQueues           =*/OsCfg_Scheduler_OsCore3_TaskQueues,
	/*NumberOfPriorities   =*/3u,	
};