#define OS_ERROR_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Error_Cfg.h"
#include "Os_Error_Lcfg.h"
#include "Os_Error.h"


static const Os_LinkerSectionLabelsType OsCfg_OsCode_Section0 = 
{
	/*StartLabel           =*/(Os_AddressOfConstType)&_OS_CODE_START,
	/*EndLabel             =*/(Os_AddressOfConstType)&_OS_CODE_LIMIT,
};

const Os_LinkerSectionLabelsType* const OsCfg_OsCode_Sections[2] = 
{
	&OsCfg_OsCode_Section0,
	NULL_PTR
};
