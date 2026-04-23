#ifndef OS_HAL_CFG_H
# define OS_HAL_CFG_H


#define OS_CFG_HAL_MAJOR_VERSION               2
#define OS_CFG_HAL_MINOR_VERSION               32
											   
#define OS_ISR_CANISR_0_CORE                   1
#define OS_ISR_CANISR_0_LEVEL                  70
											   
#define OS_ISR_OSISR_STM0_CH0_CORE             0
#define OS_ISR_OSISR_STM0_CH0_LEVEL            88
#define OS_ISR_OSISR_STM1_CH0_CORE             1
#define OS_ISR_OSISR_STM1_CH0_LEVEL            88
#define OS_ISR_OSISR_STM2_CH0_CORE             2
#define OS_ISR_OSISR_STM2_CH0_LEVEL            88
#define OS_ISR_OSISR_STM3_CH0_CORE             3
#define OS_ISR_OSISR_STM3_CH0_LEVEL            88
											   
#define OS_ISR_XSIGNALISR_OSCORE0_CORE         0
#define OS_ISR_XSIGNALISR_OSCORE0_LEVEL        87
#define OS_ISR_XSIGNALISR_OSCORE1_CORE         1
#define OS_ISR_XSIGNALISR_OSCORE1_LEVEL        87
#define OS_ISR_XSIGNALISR_OSCORE2_CORE         2
#define OS_ISR_XSIGNALISR_OSCORE2_LEVEL        87
#define OS_ISR_XSIGNALISR_OSCORE3_CORE         3
#define OS_ISR_XSIGNALISR_OSCORE3_LEVEL        87

#define OSMAXALLOWEDVALUE_SystemTimer_Core0    1073741823uL
#define OSMINCYCLE_SystemTimer_Core0           1uL
#define OSTICKSPERBASE_SystemTimer_Core0       1uL
#define OSTICKDURATION_SystemTimer_Core0       10uL

#define OSMAXALLOWEDVALUE                      OSMAXALLOWEDVALUE_SystemTimer_Core0
#define OSMINCYCLE                             OSMINCYCLE_SystemTimer_Core0
#define OSTICKSPERBASE                         OSTICKSPERBASE_SystemTimer_Core0
#define OSTICKDURATION                         OSTICKDURATION_SystemTimer_Core0

#define OS_NS2TICKS_SystemTimer_Core0(x)       (TickType)(((((uint32)(x))*1)+5)/10)
#define OS_US2TICKS_SystemTimer_Core0(x)       (TickType)(((((uint32)(x))*100)+0)/1)
#define OS_MS2TICKS_SystemTimer_Core0(x)       (TickType)(((((uint32)(x))*100000)+0)/1)
#define OS_SEC2TICKS_SystemTimer_Core0(x)      (TickType)(((((uint32)(x))*100000000)+0)/1)

#define OS_TICKS2NS_SystemTimer_Core0(x)       (PhysicalTimeType)(((((uint32)(x))*10)+0)/1)
#define OS_TICKS2US_SystemTimer_Core0(x)       (PhysicalTimeType)(((((uint32)(x))*1)+50)/100)
#define OS_TICKS2MS_SystemTimer_Core0(x)       (PhysicalTimeType)(((((uint32)(x))*1)+50000)/100000)
#define OS_TICKS2SEC_SystemTimer_Core0(x)      (PhysicalTimeType)(((((uint32)(x))*1)+50000000)/100000000)



#define OSMAXALLOWEDVALUE_SystemTimer_Core1    1073741823
#define OSMINCYCLE_SystemTimer_Core1           1
#define OSTICKSPERBASE_SystemTimer_Core1       1
#define OSTICKDURATION_SystemTimer_Core1       10

#define OS_NS2TICKS_SystemTimer_Core1(x)       (TickType)(((((uint32)(x))*1)+5)/10)
#define OS_US2TICKS_SystemTimer_Core1(x)       (TickType)(((((uint32)(x))*100)+0)/1)
#define OS_MS2TICKS_SystemTimer_Core1(x)       (TickType)(((((uint32)(x))*100000)+0)/1)
#define OS_SEC2TICKS_SystemTimer_Core1(x)      (TickType)(((((uint32)(x))*100000000)+0)/1)

#define OS_TICKS2NS_SystemTimer_Core1(x)       (PhysicalTimeType)(((((uint32)(x))*10)+0)/1)
#define OS_TICKS2US_SystemTimer_Core1(x)       (PhysicalTimeType)(((((uint32)(x))*1)+50)/100)
#define OS_TICKS2MS_SystemTimer_Core1(x)       (PhysicalTimeType)(((((uint32)(x))*1)+50000)/100000)
#define OS_TICKS2SEC_SystemTimer_Core1(x)      (PhysicalTimeType)(((((uint32)(x))*1)+50000000)/100000000)



#define OSMAXALLOWEDVALUE_SystemTimer_Core2    1073741823
#define OSMINCYCLE_SystemTimer_Core2           1
#define OSTICKSPERBASE_SystemTimer_Core2       1
#define OSTICKDURATION_SystemTimer_Core2       10

#define OS_NS2TICKS_SystemTimer_Core2(x)       (TickType)(((((uint32)(x))*1)+5)/10)
#define OS_US2TICKS_SystemTimer_Core2(x)       (TickType)(((((uint32)(x))*100)+0)/1)
#define OS_MS2TICKS_SystemTimer_Core2(x)       (TickType)(((((uint32)(x))*100000)+0)/1)
#define OS_SEC2TICKS_SystemTimer_Core2(x)      (TickType)(((((uint32)(x))*100000000)+0)/1)

#define OS_TICKS2NS_SystemTimer_Core2(x)       (PhysicalTimeType)(((((uint32)(x))*10)+0)/1)
#define OS_TICKS2US_SystemTimer_Core2(x)       (PhysicalTimeType)(((((uint32)(x))*1)+50)/100)
#define OS_TICKS2MS_SystemTimer_Core2(x)       (PhysicalTimeType)(((((uint32)(x))*1)+50000)/100000)
#define OS_TICKS2SEC_SystemTimer_Core2(x)      (PhysicalTimeType)(((((uint32)(x))*1)+50000000)/100000000)



#define OSMAXALLOWEDVALUE_SystemTimer_Core3    1073741823
#define OSMINCYCLE_SystemTimer_Core3           1
#define OSTICKSPERBASE_SystemTimer_Core3       1
#define OSTICKDURATION_SystemTimer_Core3       10

#define OS_NS2TICKS_SystemTimer_Core3(x)       (TickType)(((((uint32)(x))*1)+5)/10)
#define OS_US2TICKS_SystemTimer_Core3(x)       (TickType)(((((uint32)(x))*100)+0)/1)
#define OS_MS2TICKS_SystemTimer_Core3(x)       (TickType)(((((uint32)(x))*100000)+0)/1)
#define OS_SEC2TICKS_SystemTimer_Core3(x)      (TickType)(((((uint32)(x))*100000000)+0)/1)

#define OS_TICKS2NS_SystemTimer_Core3(x)       (PhysicalTimeType)(((((uint32)(x))*10)+0)/1)
#define OS_TICKS2US_SystemTimer_Core3(x)       (PhysicalTimeType)(((((uint32)(x))*1)+50)/100)
#define OS_TICKS2MS_SystemTimer_Core3(x)       (PhysicalTimeType)(((((uint32)(x))*1)+50000)/100000)
#define OS_TICKS2SEC_SystemTimer_Core3(x)      (PhysicalTimeType)(((((uint32)(x))*1)+50000000)/100000000)
#endif