// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetStaging/PCGExStaging.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExStaging_generated_h
#error "PCGExStaging.generated.h already included, missing '#pragma once' in PCGExStaging.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExStaging_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExStaging_h

// ********** Begin Enum EPCGExAbsoluteRotationFlags ***********************************************
#define FOREACH_ENUM_EPCGEXABSOLUTEROTATIONFLAGS(op) \
	op(EPCGExAbsoluteRotationFlags::None) \
	op(EPCGExAbsoluteRotationFlags::X) \
	op(EPCGExAbsoluteRotationFlags::Y) \
	op(EPCGExAbsoluteRotationFlags::Z) \
	op(EPCGExAbsoluteRotationFlags::All) 

enum class EPCGExAbsoluteRotationFlags : uint8;
template<> struct TIsUEnumClass<EPCGExAbsoluteRotationFlags> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAbsoluteRotationFlags>();
// ********** End Enum EPCGExAbsoluteRotationFlags *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
