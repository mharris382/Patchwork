// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExMathMean.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExMathMean_generated_h
#error "PCGExMathMean.generated.h already included, missing '#pragma once' in PCGExMathMean.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExMathMean_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMathMean_h

// ********** Begin Enum EPCGExMeanMeasure *********************************************************
#define FOREACH_ENUM_EPCGEXMEANMEASURE(op) \
	op(EPCGExMeanMeasure::Relative) \
	op(EPCGExMeanMeasure::Discrete) 

enum class EPCGExMeanMeasure : uint8;
template<> struct TIsUEnumClass<EPCGExMeanMeasure> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMeanMeasure>();
// ********** End Enum EPCGExMeanMeasure ***********************************************************

// ********** Begin Enum EPCGExMeanMethod **********************************************************
#define FOREACH_ENUM_EPCGEXMEANMETHOD(op) \
	op(EPCGExMeanMethod::Average) \
	op(EPCGExMeanMethod::Median) \
	op(EPCGExMeanMethod::ModeMin) \
	op(EPCGExMeanMethod::ModeMax) \
	op(EPCGExMeanMethod::Central) \
	op(EPCGExMeanMethod::Fixed) 

enum class EPCGExMeanMethod : uint8;
template<> struct TIsUEnumClass<EPCGExMeanMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMeanMethod>();
// ********** End Enum EPCGExMeanMethod ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
