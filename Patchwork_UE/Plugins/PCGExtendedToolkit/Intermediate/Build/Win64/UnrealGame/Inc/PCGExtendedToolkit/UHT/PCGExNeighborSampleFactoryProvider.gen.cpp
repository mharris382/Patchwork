// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h"
#include "Curves/CurveFloat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNeighborSampleFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSamplingConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoNeighborSampler *********************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoNeighborSampler); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoNeighborSampler); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Neighbor Sampler" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoNeighborSampler constinit property declarations *
// ********** End ScriptStruct FPCGExDataTypeInfoNeighborSampler constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoNeighborSampler>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoNeighborSampler>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoNeighborSampler cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoNeighborSampler;
class UScriptStruct* FPCGExDataTypeInfoNeighborSampler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoNeighborSampler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoNeighborSampler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoNeighborSampler"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoNeighborSampler.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoNeighborSampler",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoNeighborSampler),
	alignof(FPCGExDataTypeInfoNeighborSampler),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoNeighborSampler.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoNeighborSampler.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoNeighborSampler.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoNeighborSampler ***********************************

// ********** Begin ScriptStruct FPCGExSamplingConfig **********************************************
struct Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSamplingConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSamplingConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsBlending_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of range for weight blending computation */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of range for weight blending computation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepth_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The maximum sampling traversal depth */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The maximum sampling traversal depth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOver_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to compute the initial blend weight */" },
		{ "EditCondition", "bSupportsBlending" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to compute the initial blend weight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Max dist */" },
		{ "EditCondition", "BlendOver == EPCGExBlendOver::Distance" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max dist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedBlend_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The fixed blending value */" },
		{ "EditCondition", "bSupportsBlending && BlendOver == EPCGExBlendOver::Fixed" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The fixed blending value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Curve over which the sampling will be remapped. Used differently depending on sampler.  */" },
		{ "DisplayName", "Weight Curve" },
		{ "EditCondition", "bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Curve over which the sampling will be remapped. Used differently depending on sampler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Curve over which the sampling will be remapped. Used differently depending on sampler.  */" },
		{ "DisplayName", "Weight Curve" },
		{ "EditCondition", "!bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Curve over which the sampling will be remapped. Used differently depending on sampler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighborSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which type of neighbor to sample */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which type of neighbor to sample" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSamplingConfig constinit property declarations **************
	static void NewProp_bSupportsBlending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsBlending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOver_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOver;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FixedBlend;
	static void NewProp_bUseLocalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalWeightCurve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeightCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NeighborSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NeighborSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSamplingConfig constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSamplingConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSamplingConfig;
class UScriptStruct* FPCGExSamplingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSamplingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSamplingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSamplingConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSamplingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSamplingConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSamplingConfig Property Definitions *************************
void Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_bSupportsBlending_SetBit(void* Obj)
{
	((FPCGExSamplingConfig*)Obj)->bSupportsBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_bSupportsBlending = { "bSupportsBlending", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplingConfig), &Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_bSupportsBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsBlending_MetaData), NewProp_bSupportsBlending_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_RangeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_RangeType = { "RangeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplingConfig, RangeType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRangeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeType_MetaData), NewProp_RangeType_MetaData) }; // 1971727460
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_MaxDepth = { "MaxDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplingConfig, MaxDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepth_MetaData), NewProp_MaxDepth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_BlendOver_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_BlendOver = { "BlendOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplingConfig, BlendOver), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOver_MetaData), NewProp_BlendOver_MetaData) }; // 336339527
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplingConfig, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_FixedBlend = { "FixedBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplingConfig, FixedBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedBlend_MetaData), NewProp_FixedBlend_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((FPCGExSamplingConfig*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplingConfig), &Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_LocalWeightCurve = { "LocalWeightCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplingConfig, LocalWeightCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightCurve_MetaData), NewProp_LocalWeightCurve_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_WeightCurve = { "WeightCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplingConfig, WeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightCurve_MetaData), NewProp_WeightCurve_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_NeighborSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_NeighborSource = { "NeighborSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplingConfig, NeighborSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighborSource_MetaData), NewProp_NeighborSource_MetaData) }; // 1423364254
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_bSupportsBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_RangeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_RangeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_MaxDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_BlendOver_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_BlendOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_FixedBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_LocalWeightCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_WeightCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_NeighborSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewProp_NeighborSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSamplingConfig Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSamplingConfig",
	Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::PropPointers),
	sizeof(FPCGExSamplingConfig),
	alignof(FPCGExSamplingConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSamplingConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSamplingConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSamplingConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSamplingConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSamplingConfig ************************************************

// ********** Begin Class UPCGExNeighborSamplerFactoryData *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryData;
UClass* UPCGExNeighborSamplerFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSamplerFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSamplerFactoryData"),
			Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSamplerFactoryData,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_NoRegister()
{
	return UPCGExNeighborSamplerFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxFilterFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgesFilterFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueFilterFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSamplerFactoryData constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VtxFilterFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VtxFilterFactories;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgesFilterFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgesFilterFactories;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueFilterFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueFilterFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNeighborSamplerFactoryData constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSamplerFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics

// ********** Begin Class UPCGExNeighborSamplerFactoryData Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_SamplingConfig = { "SamplingConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSamplerFactoryData, SamplingConfig), Z_Construct_UScriptStruct_FPCGExSamplingConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingConfig_MetaData), NewProp_SamplingConfig_MetaData) }; // 1235443557
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_VtxFilterFactories_Inner = { "VtxFilterFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_VtxFilterFactories = { "VtxFilterFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSamplerFactoryData, VtxFilterFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxFilterFactories_MetaData), NewProp_VtxFilterFactories_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_EdgesFilterFactories_Inner = { "EdgesFilterFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_EdgesFilterFactories = { "EdgesFilterFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSamplerFactoryData, EdgesFilterFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgesFilterFactories_MetaData), NewProp_EdgesFilterFactories_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_ValueFilterFactories_Inner = { "ValueFilterFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExPointFilterFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_ValueFilterFactories = { "ValueFilterFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSamplerFactoryData, ValueFilterFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueFilterFactories_MetaData), NewProp_ValueFilterFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_SamplingConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_VtxFilterFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_VtxFilterFactories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_EdgesFilterFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_EdgesFilterFactories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_ValueFilterFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::NewProp_ValueFilterFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNeighborSamplerFactoryData Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::ClassParams = {
	&UPCGExNeighborSamplerFactoryData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSamplerFactoryData::StaticRegisterNativesUPCGExNeighborSamplerFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryData.OuterSingleton;
}
UPCGExNeighborSamplerFactoryData::UPCGExNeighborSamplerFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSamplerFactoryData);
UPCGExNeighborSamplerFactoryData::~UPCGExNeighborSamplerFactoryData() {}
// ********** End Class UPCGExNeighborSamplerFactoryData *******************************************

// ********** Begin Class UPCGExNeighborSampleProviderSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSampleProviderSettings;
UClass* UPCGExNeighborSampleProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSampleProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSampleProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSampleProviderSettings"),
			Z_Registration_Info_UClass_UPCGExNeighborSampleProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSampleProviderSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSampleProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_NoRegister()
{
	return UPCGExNeighborSampleProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|NeighborSample" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Priority for sampling order. Higher values are processed last. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Priority for sampling order. Higher values are processed last." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingConfig_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Priority for sampling order. Higher values are processed last. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Priority for sampling order. Higher values are processed last." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSampleProviderSettings constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNeighborSampleProviderSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSampleProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics

// ********** Begin Class UPCGExNeighborSampleProviderSettings Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSampleProviderSettings, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::NewProp_SamplingConfig = { "SamplingConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSampleProviderSettings, SamplingConfig), Z_Construct_UScriptStruct_FPCGExSamplingConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingConfig_MetaData), NewProp_SamplingConfig_MetaData) }; // 1235443557
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::NewProp_SamplingConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNeighborSampleProviderSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::ClassParams = {
	&UPCGExNeighborSampleProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSampleProviderSettings::StaticRegisterNativesUPCGExNeighborSampleProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSampleProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSampleProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSampleProviderSettings.OuterSingleton;
}
UPCGExNeighborSampleProviderSettings::UPCGExNeighborSampleProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSampleProviderSettings);
UPCGExNeighborSampleProviderSettings::~UPCGExNeighborSampleProviderSettings() {}
// ********** End Class UPCGExNeighborSampleProviderSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoNeighborSampler::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics::NewStructOps, TEXT("PCGExDataTypeInfoNeighborSampler"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoNeighborSampler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoNeighborSampler), 1016418036U) },
		{ FPCGExSamplingConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics::NewStructOps, TEXT("PCGExSamplingConfig"),&Z_Registration_Info_UScriptStruct_FPCGExSamplingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSamplingConfig), 1235443557U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNeighborSamplerFactoryData, UPCGExNeighborSamplerFactoryData::StaticClass, TEXT("UPCGExNeighborSamplerFactoryData"), &Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSamplerFactoryData), 3292717856U) },
		{ Z_Construct_UClass_UPCGExNeighborSampleProviderSettings, UPCGExNeighborSampleProviderSettings::StaticClass, TEXT("UPCGExNeighborSampleProviderSettings"), &Z_Registration_Info_UClass_UPCGExNeighborSampleProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSampleProviderSettings), 373851784U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h__Script_PCGExtendedToolkit_3746798274{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
