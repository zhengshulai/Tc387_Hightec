#ifndef OS_CORE_CFG_H
# define OS_CORE_CFG_H

#include "Std_Types.h"

#define OS_CFG_INTERRUPT_ONLY                                STD_OFF

#define OS_CFG_THREAD_FPU_CONTEXT_FOR_ALL_THREADS_ENABLED    STD_ON
#define OS_CFG_THREAD_FPU_CONTEXT_ENABLED                    STD_ON
#define OS_CFG_OS_PRESTARTTASK                               STD_OFF

#define OS_CFG_NUM_BARRIERS                                  0
#define OS_CFG_NUM_ISRLEVELS                                 3
#define OS_CFG_NUM_SYSTEM_SPINLOCKS                          0
#define OS_CFG_COREPHYSICALID_COUNT                          4

#endif