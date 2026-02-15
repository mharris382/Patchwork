// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layout/PCGExLayout.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExLayout_generated_h
#error "PCGExLayout.generated.h already included, missing '#pragma once' in PCGExLayout.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExLayout_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExLayout_h

// ********** Begin Enum EPCGExBinSeedMode *********************************************************
#define FOREACH_ENUM_EPCGEXBINSEEDMODE(op) \
	op(EPCGExBinSeedMode::UVWConstant) \
	op(EPCGExBinSeedMode::UVWAttribute) \
	op(EPCGExBinSeedMode::PositionConstant) \
	op(EPCGExBinSeedMode::PositionAttribute) 

enum class EPCGExBinSeedMode : uint8;
template<> struct TIsUEnumClass<EPCGExBinSeedMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBinSeedMode>();
// ********** End Enum EPCGExBinSeedMode ***********************************************************

// ********** Begin Enum EPCGExSpaceSplitMode ******************************************************
#define FOREACH_ENUM_EPCGEXSPACESPLITMODE(op) \
	op(EPCGExSpaceSplitMode::Minimal) \
	op(EPCGExSpaceSplitMode::MinimalCross) \
	op(EPCGExSpaceSplitMode::EqualSplit) \
	op(EPCGExSpaceSplitMode::Cone) \
	op(EPCGExSpaceSplitMode::ConeCross) 

enum class EPCGExSpaceSplitMode : uint8;
template<> struct TIsUEnumClass<EPCGExSpaceSplitMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSpaceSplitMode>();
// ********** End Enum EPCGExSpaceSplitMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
