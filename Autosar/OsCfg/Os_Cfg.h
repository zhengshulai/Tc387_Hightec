#ifndef OS_CFG_H
# define OS_CFG_H


#include "Os_Hal_Cfg.h"





#define OS_CFG_MAJOR_VERSION            2u
#define OS_CFG_MINOR_VERSION            63u
#define OS_CFG_PLATFORM_TRICOREAURIX    STD_ON
#define OS_CFG_DERIVATIVEGROUP_TC38X    STD_ON
#define OS_CFG_DERIVATIVE_TC387Q        STD_ON
#define OS_CFG_COMPILER_GNU             STD_ON
#define OS_CFG_ERR_PARAMETERACCESS      STD_OFF
#define OS_CFG_ERR_GETSERVICEID         STD_OFF
#define OS_CFG_PRETASKHOOK              STD_OFF
#define OS_CFG_POSTTASKHOOK             STD_OFF
#define OS_CFG_PANICHOOK                STD_OFF
#define OS_CFG_STARTUPHOOK_SYSTEM       STD_OFF
#define OS_CFG_SHUTDOWNHOOK_SYSTEM      STD_OFF
#define OS_CFG_ERRORHOOK_SYSTEM         STD_ON
#define OS_CFG_PROTECTIONHOOK_SYSTEM    STD_OFF
#define OS_CFG_PERIPHERAL_COMPATIBILITY STD_OFF

#define DONOTCARE                           (AppModeType)0
#define OS_APPMODE_NONE                     (AppModeType)0
#define OSDEFAULTAPPMODE                    (AppModeType)1
#define OS_APPMODE_ANY                      (AppModeType)255

#define OS_CFG_EVENT                    STD_ON


#define Rte_Ev_Cyclic2_Core0_10ms_Task_0_10ms     (EventMaskType)1
#define Rte_Ev_Cyclic2_Core1_10ms_Task_0_10ms     (EventMaskType)1
#define Rte_Ev_Cyclic2_Core2_10ms_Task_0_10ms     (EventMaskType)1
#define Rte_Ev_Cyclic2_Core3_10ms_Task_0_10ms     (EventMaskType)1


#endif