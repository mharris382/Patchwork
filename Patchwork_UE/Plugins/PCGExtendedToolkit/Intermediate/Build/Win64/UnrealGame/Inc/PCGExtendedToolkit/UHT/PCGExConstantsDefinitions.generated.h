// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Constants/PCGExConstantsDefinitions.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExConstantsDefinitions_generated_h
#error "PCGExConstantsDefinitions.generated.h already included, missing '#pragma once' in PCGExConstantsDefinitions.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExConstantsDefinitions_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantsDefinitions_h

// ********** Begin Enum EPCGExConstantListID ******************************************************
#define FOREACH_ENUM_EPCGEXCONSTANTLISTID(op) \
	op(EPCGExConstantListID::ZeroAndOne) \
	op(EPCGExConstantListID::MinusOne) \
	op(EPCGExConstantListID::Twos) \
	op(EPCGExConstantListID::Tens) \
	op(EPCGExConstantListID::Irrationals) \
	op(EPCGExConstantListID::Angles) \
	op(EPCGExConstantListID::Zero) \
	op(EPCGExConstantListID::One) \
	op(EPCGExConstantListID::Vectors) \
	op(EPCGExConstantListID::Booleans) \
	op(EPCGExConstantListID::TrueBool) \
	op(EPCGExConstantListID::FalseBool) \
	op(EPCGExConstantListID::MAX_BOOL) \
	op(EPCGExConstantListID::ADDITIONAL_VECTORS) \
	op(EPCGExConstantListID::OneVector) \
	op(EPCGExConstantListID::ZeroVector) \
	op(EPCGExConstantListID::HalfVector) \
	op(EPCGExConstantListID::UpVector) \
	op(EPCGExConstantListID::RightVector) \
	op(EPCGExConstantListID::ForwardVector) \
	op(EPCGExConstantListID::ADDITIONAL_NUMERICS) \
	op(EPCGExConstantListID::Two) \
	op(EPCGExConstantListID::Half) 

enum class EPCGExConstantListID : uint8;
template<> struct TIsUEnumClass<EPCGExConstantListID> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExConstantListID>();
// ********** End Enum EPCGExConstantListID ********************************************************

// ********** Begin Enum EPCGExConstantType ********************************************************
#define FOREACH_ENUM_EPCGEXCONSTANTTYPE(op) \
	op(EPCGExConstantType::Number) \
	op(EPCGExConstantType::Vector) \
	op(EPCGExConstantType::Bool) 

enum class EPCGExConstantType : uint8;
template<> struct TIsUEnumClass<EPCGExConstantType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExConstantType>();
// ********** End Enum EPCGExConstantType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
