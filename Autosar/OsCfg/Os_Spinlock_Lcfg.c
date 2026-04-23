#define OS_SPINLOCK_LCFG_SOURCE

#include "Std_Types.h"

#include "Os_Spinlock_Lcfg.h"
#include "Os_Spinlock.h"

#include "Os_Application_Lcfg.h"
#include "Os_Scheduler_Types.h"
#include "Os_Trace_Lcfg.h"


//static Os_SpinlockType OsCfg_Spinlock_OsSpinlock_WdgApplication_Dyn;
// const Os_SpinlockConfigType OsCfg_Spinlock_OsSpinlock_WdgApplication = 
// {
	// //Lock
	// {
		// /*Dyn                        =*/OS_SPINLOCK_CASTDYN_SPINLOCK_2_LOCK(OsCfg_Spinlock_OsSpinlock_WdgApplication_Dyn),
		// /*AccessingApplications      =*/(OS_APPID2MASK(OsApplication_NonTrusted_Core0) | OS_APPID2MASK(OsApplication_NonTrusted_Core1) | OS_APPID2MASK(OsApplication_NonTrusted_Core2) | OS_APPID2MASK(OsApplication_NonTrusted_Core3) | OS_APPID2MASK(SystemApplication_OsCore0) | OS_APPID2MASK(SystemApplication_OsCore1) | OS_APPID2MASK(SystemApplication_OsCore2) | OS_APPID2MASK(SystemApplication_OsCore3)),
		// /*Type                       =*/OS_LOCKTYPE_SPINLOCK
	// },
	// /*Method            =*/OS_SPINLOCKMETHOD_NOTHING,
	// /*CeilingPriority   =*/(Os_TaskPrioType)0u,
	// /*Mode              =*/OS_SPINLOCKMODE_SUPERVISOR,
	// /*Trace             =*/OS_SPINLOCKTRACE_ENABLED,
	// /*Checks            =*/OS_SPINLOCKCHECK_DISABLED,
	// /*Order             =*/(Os_SpinlockOrderType)0u,
	// /*TimingHookTrace   =*/NULL_PTR
// };
const Os_SpinlockConfigType* const OsCfg_SpinlockRefs[1] = 
{
	NULL_PTR
};