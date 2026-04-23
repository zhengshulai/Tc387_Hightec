#ifndef STD_TYPES_H
#define STD_TYPES_H

#include "Compilers.h"
#include "Platform_Types.h"

#define STD_ON     1u
#define STD_OFF    0u

#define E_OK       0u
#define E_NOT_OK   1u

typedef uint8 Std_ReturnType;
typedef unsigned char StatusType;

typedef struct
{
	uint16 vendorID;
	uint16 moduleID;
	uint8  sw_major_version;
	uint8  sw_minor_version;
	uint8  sw_patch_version;
}Std_VersionInfoType;

#endif