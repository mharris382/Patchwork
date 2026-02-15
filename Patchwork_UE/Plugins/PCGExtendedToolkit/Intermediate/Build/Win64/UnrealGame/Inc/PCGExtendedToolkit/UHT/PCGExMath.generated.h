// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExMath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExMath_generated_h
#error "PCGExMath.generated.h already included, missing '#pragma once' in PCGExMath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExMath_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMath_h

// ********** Begin Enum EPCGExIndexSafety *********************************************************
#define FOREACH_ENUM_EPCGEXINDEXSAFETY(op) \
	op(EPCGExIndexSafety::Ignore) \
	op(EPCGExIndexSafety::Tile) \
	op(EPCGExIndexSafety::Clamp) \
	op(EPCGExIndexSafety::Yoyo) 

enum class EPCGExIndexSafety : uint8;
template<> struct TIsUEnumClass<EPCGExIndexSafety> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIndexSafety>();
// ********** End Enum EPCGExIndexSafety ***********************************************************

// ********** Begin Enum EPCGExTruncateMode ********************************************************
#define FOREACH_ENUM_EPCGEXTRUNCATEMODE(op) \
	op(EPCGExTruncateMode::None) \
	op(EPCGExTruncateMode::Round) \
	op(EPCGExTruncateMode::Ceil) \
	op(EPCGExTruncateMode::Floor) 

enum class EPCGExTruncateMode : uint8;
template<> struct TIsUEnumClass<EPCGExTruncateMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTruncateMode>();
// ********** End Enum EPCGExTruncateMode **********************************************************

// ********** Begin Enum EPCGExIntersectionStrictness **********************************************
#define FOREACH_ENUM_EPCGEXINTERSECTIONSTRICTNESS(op) \
	op(EPCGExIntersectionStrictness::Loose) \
	op(EPCGExIntersectionStrictness::MainA) \
	op(EPCGExIntersectionStrictness::MainB) \
	op(EPCGExIntersectionStrictness::OtherA) \
	op(EPCGExIntersectionStrictness::OtherB) \
	op(EPCGExIntersectionStrictness::Strict) 

enum class EPCGExIntersectionStrictness : uint8;
template<> struct TIsUEnumClass<EPCGExIntersectionStrictness> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIntersectionStrictness>();
// ********** End Enum EPCGExIntersectionStrictness ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
