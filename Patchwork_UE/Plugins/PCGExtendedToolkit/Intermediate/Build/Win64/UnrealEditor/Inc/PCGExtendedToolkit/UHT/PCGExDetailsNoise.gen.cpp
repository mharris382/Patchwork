// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsNoise.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsNoise() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExRandomRatioDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum PCGExSpatialNoiseMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_PCGExSpatialNoiseMode;
static UEnum* PCGExSpatialNoiseMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_PCGExSpatialNoiseMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_PCGExSpatialNoiseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSpatialNoiseMode"));
	}
	return Z_Registration_Info_UEnum_PCGExSpatialNoiseMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<PCGExSpatialNoiseMode>()
{
	return PCGExSpatialNoiseMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Caustic.Comment", "/** Based on underwater fake caustic rendering, gives swirly look. */" },
		{ "Caustic.Name", "PCGExSpatialNoiseMode::Caustic" },
		{ "Caustic.ToolTip", "Based on underwater fake caustic rendering, gives swirly look." },
		{ "Comment", "// Exposed copy of the otherwise private PCG' spatial noise mode enum\n" },
		{ "EdgeMask.Comment", "/** Used to create masks to blend out edges. */" },
		{ "EdgeMask.Name", "PCGExSpatialNoiseMode::EdgeMask" },
		{ "EdgeMask.ToolTip", "Used to create masks to blend out edges." },
		{ "FractionalBrownian.Comment", "/** Based on fractional brownian motion. */" },
		{ "FractionalBrownian.Name", "PCGExSpatialNoiseMode::FractionalBrownian" },
		{ "FractionalBrownian.ToolTip", "Based on fractional brownian motion." },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "Perlin.Comment", "/** Your classic perlin noise. */" },
		{ "Perlin.Name", "PCGExSpatialNoiseMode::Perlin" },
		{ "Perlin.ToolTip", "Your classic perlin noise." },
		{ "ToolTip", "Exposed copy of the otherwise private PCG' spatial noise mode enum" },
		{ "Voronoi.Comment", "/** Voronoi noise, result a the distance to edge and cell ID. */" },
		{ "Voronoi.Name", "PCGExSpatialNoiseMode::Voronoi" },
		{ "Voronoi.ToolTip", "Voronoi noise, result a the distance to edge and cell ID." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PCGExSpatialNoiseMode::Perlin", (int64)PCGExSpatialNoiseMode::Perlin },
		{ "PCGExSpatialNoiseMode::Caustic", (int64)PCGExSpatialNoiseMode::Caustic },
		{ "PCGExSpatialNoiseMode::Voronoi", (int64)PCGExSpatialNoiseMode::Voronoi },
		{ "PCGExSpatialNoiseMode::FractionalBrownian", (int64)PCGExSpatialNoiseMode::FractionalBrownian },
		{ "PCGExSpatialNoiseMode::EdgeMask", (int64)PCGExSpatialNoiseMode::EdgeMask },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"PCGExSpatialNoiseMode",
	"PCGExSpatialNoiseMode",
	Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode()
{
	if (!Z_Registration_Info_UEnum_PCGExSpatialNoiseMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PCGExSpatialNoiseMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_PCGExSpatialNoiseMode.InnerSingleton;
}
// ********** End Enum PCGExSpatialNoiseMode *******************************************************

// ********** Begin Enum PCGExSpatialNoiseMask2DMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_PCGExSpatialNoiseMask2DMode;
static UEnum* PCGExSpatialNoiseMask2DMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_PCGExSpatialNoiseMask2DMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_PCGExSpatialNoiseMask2DMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSpatialNoiseMask2DMode"));
	}
	return Z_Registration_Info_UEnum_PCGExSpatialNoiseMask2DMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<PCGExSpatialNoiseMask2DMode>()
{
	return PCGExSpatialNoiseMask2DMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Caustic.Comment", "/** Based on underwater fake caustic rendering, gives swirly look. */" },
		{ "Caustic.Name", "PCGExSpatialNoiseMask2DMode::Caustic" },
		{ "Caustic.ToolTip", "Based on underwater fake caustic rendering, gives swirly look." },
		{ "FractionalBrownian.Comment", "/** Based on fractional brownian motion. */" },
		{ "FractionalBrownian.Name", "PCGExSpatialNoiseMask2DMode::FractionalBrownian" },
		{ "FractionalBrownian.ToolTip", "Based on fractional brownian motion." },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "Perlin.Comment", "/** Your classic perlin noise. */" },
		{ "Perlin.Name", "PCGExSpatialNoiseMask2DMode::Perlin" },
		{ "Perlin.ToolTip", "Your classic perlin noise." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PCGExSpatialNoiseMask2DMode::Perlin", (int64)PCGExSpatialNoiseMask2DMode::Perlin },
		{ "PCGExSpatialNoiseMask2DMode::Caustic", (int64)PCGExSpatialNoiseMask2DMode::Caustic },
		{ "PCGExSpatialNoiseMask2DMode::FractionalBrownian", (int64)PCGExSpatialNoiseMask2DMode::FractionalBrownian },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"PCGExSpatialNoiseMask2DMode",
	"PCGExSpatialNoiseMask2DMode",
	Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode()
{
	if (!Z_Registration_Info_UEnum_PCGExSpatialNoiseMask2DMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PCGExSpatialNoiseMask2DMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_PCGExSpatialNoiseMask2DMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_PCGExSpatialNoiseMask2DMode.InnerSingleton;
}
// ********** End Enum PCGExSpatialNoiseMask2DMode *************************************************

// ********** Begin ScriptStruct FPCGExRandomRatioDetails ******************************************
struct Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExRandomRatioDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExRandomRatioDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedInput_MetaData[] = {
		{ "Category", "Seed" },
		{ "Comment", "/** Type of seed input */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of seed input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSeed_MetaData[] = {
		{ "Category", "Seed" },
		{ "Comment", "/** Fetch the seed value from a @Data attribute.*/" },
		{ "DisplayName", "Seed (Attr)" },
		{ "EditCondition", "SeedInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the seed value from a @Data attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedValue_MetaData[] = {
		{ "Category", "Seed" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Seed" },
		{ "EditCondition", "SeedInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of amount input */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of amount input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the amount value from a @Data attribute.*/" },
		{ "DisplayName", "Amount (Attr)" },
		{ "EditCondition", "AmountInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the amount value from a @Data attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Ratio relative to maximum number of items. */" },
		{ "DisplayName", "Amount" },
		{ "EditCondition", "AmountInput == EPCGExInputValueType::Constant && Units == EPCGExMeanMeasure::Relative" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Ratio relative to maximum number of items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Fixed number of items. */" },
		{ "DisplayName", "Fixed Amount" },
		{ "EditCondition", "AmountInput == EPCGExInputValueType::Constant && Units == EPCGExMeanMeasure::Discrete" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fixed number of items." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExRandomRatioDetails constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SeedValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Units_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Units;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmountInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmountInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalAmount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FixedAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExRandomRatioDetails constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExRandomRatioDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExRandomRatioDetails;
class UScriptStruct* FPCGExRandomRatioDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExRandomRatioDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExRandomRatioDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExRandomRatioDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExRandomRatioDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExRandomRatioDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExRandomRatioDetails Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_SeedInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_SeedInput = { "SeedInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRandomRatioDetails, SeedInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedInput_MetaData), NewProp_SeedInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_LocalSeed = { "LocalSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRandomRatioDetails, LocalSeed), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSeed_MetaData), NewProp_LocalSeed_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_SeedValue = { "SeedValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRandomRatioDetails, SeedValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedValue_MetaData), NewProp_SeedValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_Units_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRandomRatioDetails, Units), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Units_MetaData), NewProp_Units_MetaData) }; // 356721050
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_AmountInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_AmountInput = { "AmountInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRandomRatioDetails, AmountInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountInput_MetaData), NewProp_AmountInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_LocalAmount = { "LocalAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRandomRatioDetails, LocalAmount), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalAmount_MetaData), NewProp_LocalAmount_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRandomRatioDetails, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_FixedAmount = { "FixedAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExRandomRatioDetails, FixedAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedAmount_MetaData), NewProp_FixedAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_SeedInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_SeedInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_LocalSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_SeedValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_Units_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_Units,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_AmountInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_AmountInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_LocalAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewProp_FixedAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExRandomRatioDetails Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExRandomRatioDetails",
	Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::PropPointers),
	sizeof(FPCGExRandomRatioDetails),
	alignof(FPCGExRandomRatioDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExRandomRatioDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExRandomRatioDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExRandomRatioDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExRandomRatioDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExRandomRatioDetails ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ PCGExSpatialNoiseMode_StaticEnum, TEXT("PCGExSpatialNoiseMode"), &Z_Registration_Info_UEnum_PCGExSpatialNoiseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4130541993U) },
		{ PCGExSpatialNoiseMask2DMode_StaticEnum, TEXT("PCGExSpatialNoiseMask2DMode"), &Z_Registration_Info_UEnum_PCGExSpatialNoiseMask2DMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2172616394U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExRandomRatioDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExRandomRatioDetails_Statics::NewStructOps, TEXT("PCGExRandomRatioDetails"),&Z_Registration_Info_UScriptStruct_FPCGExRandomRatioDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExRandomRatioDetails), 1314394637U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h__Script_PCGExtendedToolkit_2606960459{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsNoise_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
