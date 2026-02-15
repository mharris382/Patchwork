// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampling() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExRangeType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRangeType;
static UEnum* EPCGExRangeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRangeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRangeType"));
	}
	return Z_Registration_Info_UEnum_EPCGExRangeType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRangeType>()
{
	return EPCGExRangeType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EffectiveRange.DisplayName", "Effective Range" },
		{ "EffectiveRange.Name", "EPCGExRangeType::EffectiveRange" },
		{ "EffectiveRange.ToolTip", "Remap the input [Min..Max] range to [0..1]." },
		{ "FullRange.DisplayName", "Full Range" },
		{ "FullRange.Name", "EPCGExRangeType::FullRange" },
		{ "FullRange.ToolTip", "Normalize in the [0..1] range using [0..Max Value] range." },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRangeType::FullRange", (int64)EPCGExRangeType::FullRange },
		{ "EPCGExRangeType::EffectiveRange", (int64)EPCGExRangeType::EffectiveRange },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRangeType",
	"EPCGExRangeType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType()
{
	if (!Z_Registration_Info_UEnum_EPCGExRangeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRangeType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRangeType.InnerSingleton;
}
// ********** End Enum EPCGExRangeType *************************************************************

// ********** Begin Enum EPCGExSurfaceSource *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSurfaceSource;
static UEnum* EPCGExSurfaceSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSurfaceSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSurfaceSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSurfaceSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExSurfaceSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSurfaceSource>()
{
	return EPCGExSurfaceSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorReferences.DisplayName", "Actor Reference" },
		{ "ActorReferences.Name", "EPCGExSurfaceSource::ActorReferences" },
		{ "ActorReferences.ToolTip", "Only a list of actor surfaces will be included." },
		{ "All.DisplayName", "Any surface" },
		{ "All.Name", "EPCGExSurfaceSource::All" },
		{ "All.ToolTip", "Any surface within range will be tested" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSurfaceSource::All", (int64)EPCGExSurfaceSource::All },
		{ "EPCGExSurfaceSource::ActorReferences", (int64)EPCGExSurfaceSource::ActorReferences },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSurfaceSource",
	"EPCGExSurfaceSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExSurfaceSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSurfaceSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSurfaceSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSurfaceSource.InnerSingleton;
}
// ********** End Enum EPCGExSurfaceSource *********************************************************

// ********** Begin Enum EPCGExSampleMethod ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSampleMethod;
static UEnum* EPCGExSampleMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSampleMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSampleMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSampleMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExSampleMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSampleMethod>()
{
	return EPCGExSampleMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BestCandidate.DisplayName", "Best Candidate" },
		{ "BestCandidate.Name", "EPCGExSampleMethod::BestCandidate" },
		{ "BestCandidate.ToolTip", "Picks & process the best candidate based on sorting rules" },
		{ "ClosestTarget.DisplayName", "Closest Target" },
		{ "ClosestTarget.Name", "EPCGExSampleMethod::ClosestTarget" },
		{ "ClosestTarget.ToolTip", "Picks & process the closest target only" },
		{ "FarthestTarget.DisplayName", "Farthest Target" },
		{ "FarthestTarget.Name", "EPCGExSampleMethod::FarthestTarget" },
		{ "FarthestTarget.ToolTip", "Picks & process the farthest target only" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "WithinRange.DisplayName", "All (Within range)" },
		{ "WithinRange.Name", "EPCGExSampleMethod::WithinRange" },
		{ "WithinRange.ToolTip", "Use RangeMax = 0 to include all targets" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSampleMethod::WithinRange", (int64)EPCGExSampleMethod::WithinRange },
		{ "EPCGExSampleMethod::ClosestTarget", (int64)EPCGExSampleMethod::ClosestTarget },
		{ "EPCGExSampleMethod::FarthestTarget", (int64)EPCGExSampleMethod::FarthestTarget },
		{ "EPCGExSampleMethod::BestCandidate", (int64)EPCGExSampleMethod::BestCandidate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSampleMethod",
	"EPCGExSampleMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExSampleMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSampleMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSampleMethod.InnerSingleton;
}
// ********** End Enum EPCGExSampleMethod **********************************************************

// ********** Begin Enum EPCGExSampleSource ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSampleSource;
static UEnum* EPCGExSampleSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSampleSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSampleSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSampleSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExSampleSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSampleSource>()
{
	return EPCGExSampleSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExSampleSource::Constant" },
		{ "Constant.ToolTip", "Read constant" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "Source.DisplayName", "Main" },
		{ "Source.Name", "EPCGExSampleSource::Source" },
		{ "Source.ToolTip", "Read value on main inputs" },
		{ "Target.DisplayName", "Target" },
		{ "Target.Name", "EPCGExSampleSource::Target" },
		{ "Target.ToolTip", "Read value on target" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSampleSource::Source", (int64)EPCGExSampleSource::Source },
		{ "EPCGExSampleSource::Target", (int64)EPCGExSampleSource::Target },
		{ "EPCGExSampleSource::Constant", (int64)EPCGExSampleSource::Constant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSampleSource",
	"EPCGExSampleSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExSampleSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSampleSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSampleSource.InnerSingleton;
}
// ********** End Enum EPCGExSampleSource **********************************************************

// ********** Begin Enum EPCGExAngleRange **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAngleRange;
static UEnum* EPCGExAngleRange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAngleRange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAngleRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAngleRange"));
	}
	return Z_Registration_Info_UEnum_EPCGExAngleRange.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAngleRange>()
{
	return EPCGExAngleRange_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InvertedNormalized.DisplayName", "Inv. Normalized (0..+360 -> 1..0)" },
		{ "InvertedNormalized.Name", "EPCGExAngleRange::InvertedNormalized" },
		{ "InvertedNormalized.ToolTip", "0..+360 -> 1..0" },
		{ "InvertedNormalizedHalf.DisplayName", "Inv. Normalized Half (0..180 -> 1..0)" },
		{ "InvertedNormalizedHalf.Name", "EPCGExAngleRange::InvertedNormalizedHalf" },
		{ "InvertedNormalizedHalf.ToolTip", "0..180 -> 1..0" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "Normalized.DisplayName", "Normalized (0..+360 -> 0..1)" },
		{ "Normalized.Name", "EPCGExAngleRange::Normalized" },
		{ "Normalized.ToolTip", "0..+360 -> 0..1" },
		{ "NormalizedHalf.DisplayName", "Normalized Half (0..180 -> 0..1)" },
		{ "NormalizedHalf.Name", "EPCGExAngleRange::NormalizedHalf" },
		{ "NormalizedHalf.ToolTip", "0..180 -> 0..1" },
		{ "PIDegrees.DisplayName", "Degrees (-180..+180)" },
		{ "PIDegrees.Name", "EPCGExAngleRange::PIDegrees" },
		{ "PIDegrees.ToolTip", "-180..+180" },
		{ "PIRadians.DisplayName", "Radians (-PI..+PI)" },
		{ "PIRadians.Name", "EPCGExAngleRange::PIRadians" },
		{ "PIRadians.ToolTip", "-PI..+PI" },
		{ "TAUDegrees.DisplayName", "Degrees (0..+360)" },
		{ "TAUDegrees.Name", "EPCGExAngleRange::TAUDegrees" },
		{ "TAUDegrees.ToolTip", "0..+360" },
		{ "TAURadians.DisplayName", "Radians (0..+TAU)" },
		{ "TAURadians.Name", "EPCGExAngleRange::TAURadians" },
		{ "TAURadians.ToolTip", "0..TAU" },
		{ "UDegrees.DisplayName", "Degrees (0..+180)" },
		{ "UDegrees.Name", "EPCGExAngleRange::UDegrees" },
		{ "UDegrees.ToolTip", "0..+180" },
		{ "URadians.DisplayName", "Radians (0..+PI)" },
		{ "URadians.Name", "EPCGExAngleRange::URadians" },
		{ "URadians.ToolTip", "0..+PI" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAngleRange::URadians", (int64)EPCGExAngleRange::URadians },
		{ "EPCGExAngleRange::PIRadians", (int64)EPCGExAngleRange::PIRadians },
		{ "EPCGExAngleRange::TAURadians", (int64)EPCGExAngleRange::TAURadians },
		{ "EPCGExAngleRange::UDegrees", (int64)EPCGExAngleRange::UDegrees },
		{ "EPCGExAngleRange::PIDegrees", (int64)EPCGExAngleRange::PIDegrees },
		{ "EPCGExAngleRange::TAUDegrees", (int64)EPCGExAngleRange::TAUDegrees },
		{ "EPCGExAngleRange::NormalizedHalf", (int64)EPCGExAngleRange::NormalizedHalf },
		{ "EPCGExAngleRange::Normalized", (int64)EPCGExAngleRange::Normalized },
		{ "EPCGExAngleRange::InvertedNormalizedHalf", (int64)EPCGExAngleRange::InvertedNormalizedHalf },
		{ "EPCGExAngleRange::InvertedNormalized", (int64)EPCGExAngleRange::InvertedNormalized },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAngleRange",
	"EPCGExAngleRange",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange()
{
	if (!Z_Registration_Info_UEnum_EPCGExAngleRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAngleRange.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleRange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAngleRange.InnerSingleton;
}
// ********** End Enum EPCGExAngleRange ************************************************************

// ********** Begin Enum EPCGExSampleWeightMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSampleWeightMode;
static UEnum* EPCGExSampleWeightMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSampleWeightMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSampleWeightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSampleWeightMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSampleWeightMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSampleWeightMode>()
{
	return EPCGExSampleWeightMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExSampleWeightMode::Attribute" },
		{ "Attribute.ToolTip", "Uses a fixed attribute value on the target as weight" },
		{ "AttributeMult.DisplayName", "Att x Dist" },
		{ "AttributeMult.Name", "EPCGExSampleWeightMode::AttributeMult" },
		{ "AttributeMult.ToolTip", "Uses a fixed attribute value on the target as a multiplier to distance-based weight" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExSampleWeightMode::Distance" },
		{ "Distance.ToolTip", "Weight is computed using distance to targets" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSampleWeightMode::Distance", (int64)EPCGExSampleWeightMode::Distance },
		{ "EPCGExSampleWeightMode::Attribute", (int64)EPCGExSampleWeightMode::Attribute },
		{ "EPCGExSampleWeightMode::AttributeMult", (int64)EPCGExSampleWeightMode::AttributeMult },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSampleWeightMode",
	"EPCGExSampleWeightMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSampleWeightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSampleWeightMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSampleWeightMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSampleWeightMode.InnerSingleton;
}
// ********** End Enum EPCGExSampleWeightMode ******************************************************

// ********** Begin Enum EPCGExApplySampledComponentFlags ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExApplySampledComponentFlags;
static UEnum* EPCGExApplySampledComponentFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExApplySampledComponentFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExApplySampledComponentFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExApplySampledComponentFlags"));
	}
	return Z_Registration_Info_UEnum_EPCGExApplySampledComponentFlags.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExApplySampledComponentFlags>()
{
	return EPCGExApplySampledComponentFlags_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Hidden", "" },
		{ "All.Name", "EPCGExApplySampledComponentFlags::All" },
		{ "All.ToolTip", "Apply all Component" },
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Component Flags" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "None.Name", "EPCGExApplySampledComponentFlags::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "X.ActionIcon", "X" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "EPCGExApplySampledComponentFlags::X" },
		{ "X.ToolTip", "Apply X Component" },
		{ "Y.ActionIcon", "Y" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "EPCGExApplySampledComponentFlags::Y" },
		{ "Y.ToolTip", "Apply Y Component" },
		{ "Z.ActionIcon", "Z" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "EPCGExApplySampledComponentFlags::Z" },
		{ "Z.ToolTip", "Apply Z Component" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExApplySampledComponentFlags::None", (int64)EPCGExApplySampledComponentFlags::None },
		{ "EPCGExApplySampledComponentFlags::X", (int64)EPCGExApplySampledComponentFlags::X },
		{ "EPCGExApplySampledComponentFlags::Y", (int64)EPCGExApplySampledComponentFlags::Y },
		{ "EPCGExApplySampledComponentFlags::Z", (int64)EPCGExApplySampledComponentFlags::Z },
		{ "EPCGExApplySampledComponentFlags::All", (int64)EPCGExApplySampledComponentFlags::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExApplySampledComponentFlags",
	"EPCGExApplySampledComponentFlags",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags()
{
	if (!Z_Registration_Info_UEnum_EPCGExApplySampledComponentFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExApplySampledComponentFlags.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExApplySampledComponentFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExApplySampledComponentFlags.InnerSingleton;
}
// ********** End Enum EPCGExApplySampledComponentFlags ********************************************

// ********** Begin ScriptStruct FPCGExApplySamplingDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExApplySamplingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExApplySamplingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformPosition_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which position components from the sampled transform should be applied to the point.  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Position" },
		{ "EditCondition", "bApplyTransform" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which position components from the sampled transform should be applied to the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformRotation_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which rotation components from the sampled transform should be applied to the point.  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Rotation" },
		{ "EditCondition", "bApplyTransform" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which rotation components from the sampled transform should be applied to the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which scale components from the sampled transform should be applied to the point.  */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Scale" },
		{ "EditCondition", "bApplyTransform" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which scale components from the sampled transform should be applied to the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyLookAt_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtRotation_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which rotation components from the sampled look at should be applied to the point.  */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Rotation" },
		{ "EditCondition", "bApplyLookAt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampling.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which rotation components from the sampled look at should be applied to the point." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExApplySamplingDetails constinit property declarations ********
	static void NewProp_bApplyTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformScale;
	static void NewProp_bApplyLookAt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyLookAt;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExApplySamplingDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExApplySamplingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExApplySamplingDetails;
class UScriptStruct* FPCGExApplySamplingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExApplySamplingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExApplySamplingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExApplySamplingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExApplySamplingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExApplySamplingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExApplySamplingDetails Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_bApplyTransform_SetBit(void* Obj)
{
	((FPCGExApplySamplingDetails*)Obj)->bApplyTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_bApplyTransform = { "bApplyTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExApplySamplingDetails), &Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_bApplyTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyTransform_MetaData), NewProp_bApplyTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_TransformPosition = { "TransformPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExApplySamplingDetails, TransformPosition), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformPosition_MetaData), NewProp_TransformPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_TransformRotation = { "TransformRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExApplySamplingDetails, TransformRotation), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformRotation_MetaData), NewProp_TransformRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExApplySamplingDetails, TransformScale), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformScale_MetaData), NewProp_TransformScale_MetaData) };
void Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_bApplyLookAt_SetBit(void* Obj)
{
	((FPCGExApplySamplingDetails*)Obj)->bApplyLookAt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_bApplyLookAt = { "bApplyLookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExApplySamplingDetails), &Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_bApplyLookAt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyLookAt_MetaData), NewProp_bApplyLookAt_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_LookAtRotation = { "LookAtRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExApplySamplingDetails, LookAtRotation), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtRotation_MetaData), NewProp_LookAtRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_bApplyTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_TransformPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_TransformRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_TransformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_bApplyLookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewProp_LookAtRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExApplySamplingDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExApplySamplingDetails",
	Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::PropPointers),
	sizeof(FPCGExApplySamplingDetails),
	alignof(FPCGExApplySamplingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExApplySamplingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExApplySamplingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExApplySamplingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExApplySamplingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExApplySamplingDetails ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExRangeType_StaticEnum, TEXT("EPCGExRangeType"), &Z_Registration_Info_UEnum_EPCGExRangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1971727460U) },
		{ EPCGExSurfaceSource_StaticEnum, TEXT("EPCGExSurfaceSource"), &Z_Registration_Info_UEnum_EPCGExSurfaceSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3616557955U) },
		{ EPCGExSampleMethod_StaticEnum, TEXT("EPCGExSampleMethod"), &Z_Registration_Info_UEnum_EPCGExSampleMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2414402877U) },
		{ EPCGExSampleSource_StaticEnum, TEXT("EPCGExSampleSource"), &Z_Registration_Info_UEnum_EPCGExSampleSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 925482475U) },
		{ EPCGExAngleRange_StaticEnum, TEXT("EPCGExAngleRange"), &Z_Registration_Info_UEnum_EPCGExAngleRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1931588405U) },
		{ EPCGExSampleWeightMode_StaticEnum, TEXT("EPCGExSampleWeightMode"), &Z_Registration_Info_UEnum_EPCGExSampleWeightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2397014392U) },
		{ EPCGExApplySampledComponentFlags_StaticEnum, TEXT("EPCGExApplySampledComponentFlags"), &Z_Registration_Info_UEnum_EPCGExApplySampledComponentFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3221137950U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExApplySamplingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExApplySamplingDetails_Statics::NewStructOps, TEXT("PCGExApplySamplingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExApplySamplingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExApplySamplingDetails), 4279728225U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h__Script_PCGExtendedToolkit_1094204840{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampling_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
