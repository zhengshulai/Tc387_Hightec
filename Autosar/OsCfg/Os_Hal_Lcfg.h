#ifndef OS_HAL_LCFG_H
# define OS_HAL_LCFG_H

#include "Std_Types.h"

#include "Os_Cfg.h"
#include "Os_Types.h"


#define OS_CORE_ID_0 OS_CORE_ID_0
#define OS_CORE_ID_1 OS_CORE_ID_1
#define OS_CORE_ID_2 OS_CORE_ID_2
#define OS_CORE_ID_3 OS_CORE_ID_3


typedef enum
{
	OS_CORE_ID_MASTER = 0,
	OS_CORE_ID_0 = 0,
	OS_CORE_ID_1 = 1,
	OS_CORE_ID_2 = 2,
	OS_CORE_ID_3 = 3,
	OS_COREID_COUNT = 4,
}CoreIdType;


#endif