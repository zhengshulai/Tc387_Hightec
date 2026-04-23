#define OS_PERIPHERAL_LCFG_SOURCE


#include "Std_Types.h"

#include "Os_Peripheral_Lcfg.h"
#include "Os_Peripheral.h"

// static const Os_PeripheralConfigType OsCfg_Peripheral_OsPeripheralRegion =
// {
	// /*AddressStart               =*/(Os_AddressOfConstType)0xF0000000,
	// /*AddressEnd                 =*/(Os_AddressOfConstType)0xFFFFFFF0,
    // /*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
// };

const Os_PeripheralConfigType* const OsCfg_PeripheralRefs[1] = 
{
	NULL_PTR
};