// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExRandom.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExRandom_generated_h
#error "PCGExRandom.generated.h already included, missing '#pragma once' in PCGExRandom.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExRandom_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExRandom_h

// ********** Begin Enum EPCGExSeedComponents ******************************************************
#define FOREACH_ENUM_EPCGEXSEEDCOMPONENTS(op) \
	op(EPCGExSeedComponents::None) \
	op(EPCGExSeedComponents::Local) \
	op(EPCGExSeedComponents::Settings) \
	op(EPCGExSeedComponents::Component) 

enum class EPCGExSeedComponents : uint8;
template<> struct TIsUEnumClass<EPCGExSeedComponents> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSeedComponents>();
// ********** End Enum EPCGExSeedComponents ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
