// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGExDataTag.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDataTag_generated_h
#error "PCGExDataTag.generated.h already included, missing '#pragma once' in PCGExDataTag.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDataTag_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataTag_h

// ********** Begin Enum EPCGExSupportedTagValue ***************************************************
#define FOREACH_ENUM_EPCGEXSUPPORTEDTAGVALUE(op) \
	op(EPCGExSupportedTagValue::Integer) \
	op(EPCGExSupportedTagValue::FloatingPoint) \
	op(EPCGExSupportedTagValue::String) \
	op(EPCGExSupportedTagValue::Vector2) \
	op(EPCGExSupportedTagValue::Vector) \
	op(EPCGExSupportedTagValue::Vector4) 

enum class EPCGExSupportedTagValue : uint8;
template<> struct TIsUEnumClass<EPCGExSupportedTagValue> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSupportedTagValue>();
// ********** End Enum EPCGExSupportedTagValue *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
