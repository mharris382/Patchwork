// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExSampling.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSampling_generated_h
#error "PCGExSampling.generated.h already included, missing '#pragma once' in PCGExSampling.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSampling_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExApplySamplingDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExApplySamplingDetails;
// ********** End ScriptStruct FPCGExApplySamplingDetails ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h

// ********** Begin Enum EPCGExRangeType ***********************************************************
#define FOREACH_ENUM_EPCGEXRANGETYPE(op) \
	op(EPCGExRangeType::FullRange) \
	op(EPCGExRangeType::EffectiveRange) 

enum class EPCGExRangeType : uint8;
template<> struct TIsUEnumClass<EPCGExRangeType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRangeType>();
// ********** End Enum EPCGExRangeType *************************************************************

// ********** Begin Enum EPCGExSurfaceSource *******************************************************
#define FOREACH_ENUM_EPCGEXSURFACESOURCE(op) \
	op(EPCGExSurfaceSource::All) \
	op(EPCGExSurfaceSource::ActorReferences) 

enum class EPCGExSurfaceSource : uint8;
template<> struct TIsUEnumClass<EPCGExSurfaceSource> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSurfaceSource>();
// ********** End Enum EPCGExSurfaceSource *********************************************************

// ********** Begin Enum EPCGExSampleMethod ********************************************************
#define FOREACH_ENUM_EPCGEXSAMPLEMETHOD(op) \
	op(EPCGExSampleMethod::WithinRange) \
	op(EPCGExSampleMethod::ClosestTarget) \
	op(EPCGExSampleMethod::FarthestTarget) \
	op(EPCGExSampleMethod::BestCandidate) 

enum class EPCGExSampleMethod : uint8;
template<> struct TIsUEnumClass<EPCGExSampleMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSampleMethod>();
// ********** End Enum EPCGExSampleMethod **********************************************************

// ********** Begin Enum EPCGExSampleSource ********************************************************
#define FOREACH_ENUM_EPCGEXSAMPLESOURCE(op) \
	op(EPCGExSampleSource::Source) \
	op(EPCGExSampleSource::Target) \
	op(EPCGExSampleSource::Constant) 

enum class EPCGExSampleSource : uint8;
template<> struct TIsUEnumClass<EPCGExSampleSource> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSampleSource>();
// ********** End Enum EPCGExSampleSource **********************************************************

// ********** Begin Enum EPCGExAngleRange **********************************************************
#define FOREACH_ENUM_EPCGEXANGLERANGE(op) \
	op(EPCGExAngleRange::URadians) \
	op(EPCGExAngleRange::PIRadians) \
	op(EPCGExAngleRange::TAURadians) \
	op(EPCGExAngleRange::UDegrees) \
	op(EPCGExAngleRange::PIDegrees) \
	op(EPCGExAngleRange::TAUDegrees) \
	op(EPCGExAngleRange::NormalizedHalf) \
	op(EPCGExAngleRange::Normalized) \
	op(EPCGExAngleRange::InvertedNormalizedHalf) \
	op(EPCGExAngleRange::InvertedNormalized) 

enum class EPCGExAngleRange : uint8;
template<> struct TIsUEnumClass<EPCGExAngleRange> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAngleRange>();
// ********** End Enum EPCGExAngleRange ************************************************************

// ********** Begin Enum EPCGExSampleWeightMode ****************************************************
#define FOREACH_ENUM_EPCGEXSAMPLEWEIGHTMODE(op) \
	op(EPCGExSampleWeightMode::Distance) \
	op(EPCGExSampleWeightMode::Attribute) \
	op(EPCGExSampleWeightMode::AttributeMult) 

enum class EPCGExSampleWeightMode : uint8;
template<> struct TIsUEnumClass<EPCGExSampleWeightMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSampleWeightMode>();
// ********** End Enum EPCGExSampleWeightMode ******************************************************

// ********** Begin Enum EPCGExApplySampledComponentFlags ******************************************
#define FOREACH_ENUM_EPCGEXAPPLYSAMPLEDCOMPONENTFLAGS(op) \
	op(EPCGExApplySampledComponentFlags::None) \
	op(EPCGExApplySampledComponentFlags::X) \
	op(EPCGExApplySampledComponentFlags::Y) \
	op(EPCGExApplySampledComponentFlags::Z) \
	op(EPCGExApplySampledComponentFlags::All) 

enum class EPCGExApplySampledComponentFlags : uint8;
template<> struct TIsUEnumClass<EPCGExApplySampledComponentFlags> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExApplySampledComponentFlags>();
// ********** End Enum EPCGExApplySampledComponentFlags ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
