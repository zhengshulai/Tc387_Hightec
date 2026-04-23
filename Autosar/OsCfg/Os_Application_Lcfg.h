#ifndef OS_APPLICATION_LCFG_H
#define OS_APPLICATION_LCFG_H

#include "Std_Types.h"

#include "Os_Application_Types.h"

#include "Os_Lcfg.h"



extern const Os_AppConfigType OsCfg_App_OsApplication_NonTrusted_Core0;
extern const Os_AppConfigType OsCfg_App_SystemApplication_OsCore0;

extern const Os_AppConfigType OsCfg_App_OsApplication_NonTrusted_Core1;
extern const Os_AppConfigType OsCfg_App_SystemApplication_OsCore1;

extern const Os_AppConfigType OsCfg_App_OsApplication_NonTrusted_Core2;
extern const Os_AppConfigType OsCfg_App_SystemApplication_OsCore2;

extern const Os_AppConfigType OsCfg_App_OsApplication_NonTrusted_Core3;
extern const Os_AppConfigType OsCfg_App_SystemApplication_OsCore3;


extern const Os_AppConfigType* const OsCfg_AppRefs[9];
#endif