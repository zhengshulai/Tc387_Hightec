#ifndef OS_HAL_ENTRY_LCFG_H
# define OS_HAL_ENTRY_LCFG_H


#include "Std_Types.h"


#include "Os_Hal_Core_Types.h"
#include "Os_Hal_Compiler.h"


extern uint8 _OS_INTVEC_CODE_START[];
extern uint8 _OS_INTVEC_CODE_END[];

extern uint8 _OS_EXCVEC_CORE0_CODE_START[];
extern uint8 _OS_EXCVEC_CORE0_CODE_END[];
extern uint8 _OS_INTVEC_CORE0_CODE_START[];
extern uint8 _OS_INTVEC_CORE0_CODE_END[];

extern uint8 _OS_EXCVEC_CORE1_CODE_START[];
extern uint8 _OS_EXCVEC_CORE1_CODE_END[];
extern uint8 _OS_INTVEC_CORE1_CODE_START[];
extern uint8 _OS_INTVEC_CORE1_CODE_END[];

extern uint8 _OS_EXCVEC_CORE2_CODE_START[];
extern uint8 _OS_EXCVEC_CORE2_CODE_END[];
extern uint8 _OS_INTVEC_CORE2_CODE_START[];
extern uint8 _OS_INTVEC_CORE2_CODE_END[];

extern uint8 _OS_EXCVEC_CORE3_CODE_START[];
extern uint8 _OS_EXCVEC_CORE3_CODE_END[];
extern uint8 _OS_INTVEC_CORE3_CODE_START[];
extern uint8 _OS_INTVEC_CORE3_CODE_END[];


#endif