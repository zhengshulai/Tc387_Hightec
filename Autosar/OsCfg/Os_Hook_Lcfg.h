#ifndef OS_HOOK_LCFG_H
# define OS_HOOK_LCFG_H

#include "Std_Types.h"

#include "Os_Hook_Cfg.h"
#include "Os_Hook_Types.h"

/***************************************************Core0***************************************************************/
extern const Os_HookInitHookConfigType OsCfg_Hook_Os_CoreInitHook_OsCore0;
extern const Os_HookStatusHookConfigType OsCfg_Hook_ErrorHook_OsCore0;
/***************************************************Core1***************************************************************/
extern const Os_HookInitHookConfigType OsCfg_Hook_Os_CoreInitHook_OsCore1;
extern const Os_HookStatusHookConfigType OsCfg_Hook_ErrorHook_OsCore1;
/***************************************************Core2***************************************************************/
extern const Os_HookInitHookConfigType OsCfg_Hook_Os_CoreInitHook_OsCore2;
extern const Os_HookStatusHookConfigType OsCfg_Hook_ErrorHook_OsCore2;
/***************************************************Core3***************************************************************/
extern const Os_HookInitHookConfigType OsCfg_Hook_Os_CoreInitHook_OsCore3;
extern const Os_HookStatusHookConfigType OsCfg_Hook_ErrorHook_OsCore3;

extern const Os_HookConfigType* const OsCfg_HookRefs[9];


#endif