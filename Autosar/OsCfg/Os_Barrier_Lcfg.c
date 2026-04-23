#define OS_BARRIER_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Barrier_Lcfg.h"
#include "Os_Barrier.h"

#include "Os_Common.h"

#include "Os_Hal_Kernel_Lcfg.h"


static Os_BarrierBaseType OsCfg_Barrier_OsCore0_Dyn;
static Os_BarrierBaseType OsCfg_Barrier_OsCore1_Dyn;
static Os_BarrierBaseType OsCfg_Barrier_OsCore2_Dyn;
static Os_BarrierBaseType OsCfg_Barrier_OsCore3_Dyn;

static const Os_BarrierAttendeeRefType OsCfg_Barrier_AttendeeRefs[4] = 
{
	&OsCfg_Barrier_OsCore0,
	&OsCfg_Barrier_OsCore1,
	&OsCfg_Barrier_OsCore2,
	&OsCfg_Barrier_OsCore3
};


const Os_BarrierBaseConfigType OsCfg_Barrier_OsCore0 = 
{
	/*Dyn             =*/&OsCfg_Barrier_OsCore0_Dyn,
	/*AttendeeRefs    =*/OsCfg_Barrier_AttendeeRefs,
	/*AttendeeCount   =*/(Os_BarrierAttendeeIdxType)4,
	/*TaskPtr         =*/NULL_PTR
};

const Os_BarrierBaseConfigType OsCfg_Barrier_OsCore1 = 
{
	/*Dyn             =*/&OsCfg_Barrier_OsCore1_Dyn,
	/*AttendeeRefs    =*/OsCfg_Barrier_AttendeeRefs,
	/*AttendeeCount   =*/(Os_BarrierAttendeeIdxType)4,
	/*TaskPtr         =*/NULL_PTR
};

const Os_BarrierBaseConfigType OsCfg_Barrier_OsCore2 = 
{
	/*Dyn             =*/&OsCfg_Barrier_OsCore2_Dyn,
	/*AttendeeRefs    =*/OsCfg_Barrier_AttendeeRefs,
	/*AttendeeCount   =*/(Os_BarrierAttendeeIdxType)4,
	/*TaskPtr         =*/NULL_PTR
};

const Os_BarrierBaseConfigType OsCfg_Barrier_OsCore3 = 
{
	/*Dyn             =*/&OsCfg_Barrier_OsCore3_Dyn,
	/*AttendeeRefs    =*/OsCfg_Barrier_AttendeeRefs,
	/*AttendeeCount   =*/(Os_BarrierAttendeeIdxType)4,
	/*TaskPtr         =*/NULL_PTR
};