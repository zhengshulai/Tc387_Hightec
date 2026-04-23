#ifndef OS_ERROR_LCFG_H
# define OS_ERROR_LCFG_H

#include "Std_Types.h"

#include "Os_Error_Cfg.h"
#include "Os_Error_Types.h"

extern uint8 _OS_CODE_START[];
extern uint8 _OS_CODE_LIMIT[];


extern const Os_LinkerSectionLabelsType* const OsCfg_OsCode_Sections[2];
#endif