// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGEx.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGEx_generated_h
#error "PCGEx.generated.h already included, missing '#pragma once' in PCGEx.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGEx_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGEx_h

// ********** Begin Enum EPCGExOptionState *********************************************************
#define FOREACH_ENUM_EPCGEXOPTIONSTATE(op) \
	op(EPCGExOptionState::Default) \
	op(EPCGExOptionState::Enabled) \
	op(EPCGExOptionState::Disabled) 

enum class EPCGExOptionState : uint8;
template<> struct TIsUEnumClass<EPCGExOptionState> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOptionState>();
// ********** End Enum EPCGExOptionState ***********************************************************

// ********** Begin Enum EPCGExAttributeSetPackingMode *********************************************
#define FOREACH_ENUM_EPCGEXATTRIBUTESETPACKINGMODE(op) \
	op(EPCGExAttributeSetPackingMode::PerInput) \
	op(EPCGExAttributeSetPackingMode::Merged) 

enum class EPCGExAttributeSetPackingMode : uint8;
template<> struct TIsUEnumClass<EPCGExAttributeSetPackingMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeSetPackingMode>();
// ********** End Enum EPCGExAttributeSetPackingMode ***********************************************

// ********** Begin Enum EPCGExWinding *************************************************************
#define FOREACH_ENUM_EPCGEXWINDING(op) \
	op(EPCGExWinding::Clockwise) \
	op(EPCGExWinding::CounterClockwise) 

enum class EPCGExWinding : uint8;
template<> struct TIsUEnumClass<EPCGExWinding> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExWinding>();
// ********** End Enum EPCGExWinding ***************************************************************

// ********** Begin Enum EPCGExWindingMutation *****************************************************
#define FOREACH_ENUM_EPCGEXWINDINGMUTATION(op) \
	op(EPCGExWindingMutation::Unchanged) \
	op(EPCGExWindingMutation::Clockwise) \
	op(EPCGExWindingMutation::CounterClockwise) 

enum class EPCGExWindingMutation : uint8;
template<> struct TIsUEnumClass<EPCGExWindingMutation> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExWindingMutation>();
// ********** End Enum EPCGExWindingMutation *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
