// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGExDataHelpers.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDataHelpers_generated_h
#error "PCGExDataHelpers.generated.h already included, missing '#pragma once' in PCGExDataHelpers.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDataHelpers_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataHelpers_h

// ********** Begin Enum EPCGExNumericOutput *******************************************************
#define FOREACH_ENUM_EPCGEXNUMERICOUTPUT(op) \
	op(EPCGExNumericOutput::Double) \
	op(EPCGExNumericOutput::Float) \
	op(EPCGExNumericOutput::Int32) \
	op(EPCGExNumericOutput::Int64) 

enum class EPCGExNumericOutput : uint8;
template<> struct TIsUEnumClass<EPCGExNumericOutput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExNumericOutput>();
// ********** End Enum EPCGExNumericOutput *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
