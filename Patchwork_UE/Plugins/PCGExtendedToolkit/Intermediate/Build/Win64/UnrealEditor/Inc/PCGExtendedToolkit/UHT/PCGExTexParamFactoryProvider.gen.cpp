// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExTexParamFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTexParamFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTexParamFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTexParamFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTexParamProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTexParamProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTextureParamConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTexSampleAttributeType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTexSampleAttributeType;
static UEnum* EPCGExTexSampleAttributeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTexSampleAttributeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTexSampleAttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTexSampleAttributeType"));
	}
	return Z_Registration_Info_UEnum_EPCGExTexSampleAttributeType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTexSampleAttributeType>()
{
	return EPCGExTexSampleAttributeType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EPCGExTexSampleAttributeType::Auto" },
		{ "Auto.ToolTip", "Output type will be driven by selected channels." },
		{ "Double.DisplayName", "Double" },
		{ "Double.Name", "EPCGExTexSampleAttributeType::Double" },
		{ "Double.ToolTip", "Output sample attribute type will be Double" },
		{ "Float.DisplayName", "Float" },
		{ "Float.Hidden", "" },
		{ "Float.Name", "EPCGExTexSampleAttributeType::Float" },
		{ "Float.ToolTip", "Output sample attribute type will be Float" },
		{ "Integer.DisplayName", "Double" },
		{ "Integer.Hidden", "" },
		{ "Integer.Name", "EPCGExTexSampleAttributeType::Integer" },
		{ "Integer.ToolTip", "Output sample attribute type will be Integer" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EPCGExTexSampleAttributeType::Invalid" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "Vector.DisplayName", "Vector" },
		{ "Vector.Name", "EPCGExTexSampleAttributeType::Vector" },
		{ "Vector.ToolTip", "Output sample attribute type will be Vector" },
		{ "Vector2.DisplayName", "Vector2" },
		{ "Vector2.Name", "EPCGExTexSampleAttributeType::Vector2" },
		{ "Vector2.ToolTip", "Output sample attribute type will be Vector2" },
		{ "Vector4.DisplayName", "Vector4" },
		{ "Vector4.Name", "EPCGExTexSampleAttributeType::Vector4" },
		{ "Vector4.ToolTip", "Output sample attribute type will be Vector4" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTexSampleAttributeType::Auto", (int64)EPCGExTexSampleAttributeType::Auto },
		{ "EPCGExTexSampleAttributeType::Float", (int64)EPCGExTexSampleAttributeType::Float },
		{ "EPCGExTexSampleAttributeType::Double", (int64)EPCGExTexSampleAttributeType::Double },
		{ "EPCGExTexSampleAttributeType::Integer", (int64)EPCGExTexSampleAttributeType::Integer },
		{ "EPCGExTexSampleAttributeType::Vector4", (int64)EPCGExTexSampleAttributeType::Vector4 },
		{ "EPCGExTexSampleAttributeType::Vector", (int64)EPCGExTexSampleAttributeType::Vector },
		{ "EPCGExTexSampleAttributeType::Vector2", (int64)EPCGExTexSampleAttributeType::Vector2 },
		{ "EPCGExTexSampleAttributeType::Invalid", (int64)EPCGExTexSampleAttributeType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTexSampleAttributeType",
	"EPCGExTexSampleAttributeType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType()
{
	if (!Z_Registration_Info_UEnum_EPCGExTexSampleAttributeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTexSampleAttributeType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTexSampleAttributeType.InnerSingleton;
}
// ********** End Enum EPCGExTexSampleAttributeType ************************************************

// ********** Begin Enum EPCGExTexChannelsFlags ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTexChannelsFlags;
static UEnum* EPCGExTexChannelsFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTexChannelsFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTexChannelsFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTexChannelsFlags"));
	}
	return Z_Registration_Info_UEnum_EPCGExTexChannelsFlags.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTexChannelsFlags>()
{
	return EPCGExTexChannelsFlags_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.DisplayName", "A" },
		{ "A.Name", "EPCGExTexChannelsFlags::A" },
		{ "A.ToolTip", "Alpha Channel" },
		{ "All.DisplayName", "RGBA" },
		{ "All.Name", "EPCGExTexChannelsFlags::All" },
		{ "B.DisplayName", "B" },
		{ "B.Name", "EPCGExTexChannelsFlags::B" },
		{ "B.ToolTip", "Blue Channel" },
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Tex Channels Flags" },
		{ "G.DisplayName", "G" },
		{ "G.Name", "EPCGExTexChannelsFlags::G" },
		{ "G.ToolTip", "Green Channel" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "None.Name", "EPCGExTexChannelsFlags::None" },
		{ "R.DisplayName", "R" },
		{ "R.Name", "EPCGExTexChannelsFlags::R" },
		{ "R.ToolTip", "Red Channel" },
		{ "RGB.DisplayName", "RGB" },
		{ "RGB.Name", "EPCGExTexChannelsFlags::RGB" },
		{ "RGB.ToolTip", "RGB Channels, omits alpha" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTexChannelsFlags::None", (int64)EPCGExTexChannelsFlags::None },
		{ "EPCGExTexChannelsFlags::R", (int64)EPCGExTexChannelsFlags::R },
		{ "EPCGExTexChannelsFlags::G", (int64)EPCGExTexChannelsFlags::G },
		{ "EPCGExTexChannelsFlags::B", (int64)EPCGExTexChannelsFlags::B },
		{ "EPCGExTexChannelsFlags::A", (int64)EPCGExTexChannelsFlags::A },
		{ "EPCGExTexChannelsFlags::RGB", (int64)EPCGExTexChannelsFlags::RGB },
		{ "EPCGExTexChannelsFlags::All", (int64)EPCGExTexChannelsFlags::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTexChannelsFlags",
	"EPCGExTexChannelsFlags",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags()
{
	if (!Z_Registration_Info_UEnum_EPCGExTexChannelsFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTexChannelsFlags.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexChannelsFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTexChannelsFlags.InnerSingleton;
}
// ********** End Enum EPCGExTexChannelsFlags ******************************************************

// ********** Begin ScriptStruct FPCGExTextureParamConfig ******************************************
struct Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTextureParamConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTextureParamConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the texture parameter to look for, when used in node that are set up to require this info. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the texture parameter to look for, when used in node that are set up to require this info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureIDAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to output the path to */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the path to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleAttributeName_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Name of the attribute to output the sampled value to */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the sampled value to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Type of the attribute to output the sampled value to */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of the attribute to output the sampled value to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampledChannels_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExTexChannelsFlags" },
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** What components will be sampled. Note that output will be truncated or sparse depending on the selected output type.  */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What components will be sampled. Note that output will be truncated or sparse depending on the selected output type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Apply a scale factor to the output value */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Apply a scale factor to the output value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureIndexInput_MetaData[] = {
		{ "Category", "Settings|Texture Array" },
		{ "Comment", "/** Resolution input type */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Resolution input type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureIndexAttribute_MetaData[] = {
		{ "Category", "Settings|Texture Array" },
		{ "Comment", "/** Texture Index Attribute. */" },
		{ "DisplayName", "Texture Index (Attr)" },
		{ "EditCondition", "TextureIndexInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Texture Index Attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[] = {
		{ "Category", "Settings|Texture Array" },
		{ "Comment", "/** Texture Index Constant. */" },
		{ "DisplayName", "Texture Index" },
		{ "EditCondition", "TextureIndexInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Texture Index Constant." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTextureParamConfig constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureIDAttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SampleAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampledChannels;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureIndexInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureIndexInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureIndexAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTextureParamConfig constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTextureParamConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTextureParamConfig;
class UScriptStruct* FPCGExTextureParamConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTextureParamConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTextureParamConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTextureParamConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTextureParamConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTextureParamConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTextureParamConfig Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_MaterialParameterName = { "MaterialParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, MaterialParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParameterName_MetaData), NewProp_MaterialParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIDAttributeName = { "TextureIDAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, TextureIDAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureIDAttributeName_MetaData), NewProp_TextureIDAttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_SampleAttributeName = { "SampleAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, SampleAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleAttributeName_MetaData), NewProp_SampleAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, OutputType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTexSampleAttributeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 1943664657
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_SampledChannels = { "SampledChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, SampledChannels), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampledChannels_MetaData), NewProp_SampledChannels_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIndexInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIndexInput = { "TextureIndexInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, TextureIndexInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureIndexInput_MetaData), NewProp_TextureIndexInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIndexAttribute = { "TextureIndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, TextureIndexAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureIndexAttribute_MetaData), NewProp_TextureIndexAttribute_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTextureParamConfig, TextureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureIndex_MetaData), NewProp_TextureIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_MaterialParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIDAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_SampleAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_SampledChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIndexInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIndexInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTextureParamConfig Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTextureParamConfig",
	Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::PropPointers),
	sizeof(FPCGExTextureParamConfig),
	alignof(FPCGExTextureParamConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTextureParamConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTextureParamConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTextureParamConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTextureParamConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTextureParamConfig ********************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoTexParam ****************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoTexParam); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoTexParam); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Tex Param" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoTexParam constinit property declarations ********
// ********** End ScriptStruct FPCGExDataTypeInfoTexParam constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoTexParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoTexParam>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoTexParam cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTexParam;
class UScriptStruct* FPCGExDataTypeInfoTexParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTexParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTexParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoTexParam"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTexParam.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoTexParam",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoTexParam),
	alignof(FPCGExDataTypeInfoTexParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTexParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTexParam.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTexParam.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoTexParam ******************************************

// ********** Begin Class UPCGExTexParamFactoryData ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTexParamFactoryData;
UClass* UPCGExTexParamFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExTexParamFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExTexParamFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTexParamFactoryData"),
			Z_Registration_Info_UClass_UPCGExTexParamFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExTexParamFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExTexParamFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTexParamFactoryData_NoRegister()
{
	return UPCGExTexParamFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTexParamFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExTexParamFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCGExNodeLibraryDoc", "sampling/textures/texture-param" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTexParamFactoryData constinit property declarations ****************
// ********** End Class UPCGExTexParamFactoryData constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTexParamFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTexParamFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExTexParamFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTexParamFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTexParamFactoryData_Statics::ClassParams = {
	&UPCGExTexParamFactoryData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTexParamFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTexParamFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExTexParamFactoryData::StaticRegisterNativesUPCGExTexParamFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExTexParamFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExTexParamFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTexParamFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExTexParamFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTexParamFactoryData.OuterSingleton;
}
UPCGExTexParamFactoryData::UPCGExTexParamFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTexParamFactoryData);
UPCGExTexParamFactoryData::~UPCGExTexParamFactoryData() {}
// ********** End Class UPCGExTexParamFactoryData **************************************************

// ********** Begin Class UPCGExTexParamProviderSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTexParamProviderSettings;
UClass* UPCGExTexParamProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTexParamProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExTexParamProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTexParamProviderSettings"),
			Z_Registration_Info_UClass_UPCGExTexParamProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTexParamProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExTexParamProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTexParamProviderSettings_NoRegister()
{
	return UPCGExTexParamProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExTexParamFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExTexParamFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTexParamProviderSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTexParamProviderSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTexParamProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics

// ********** Begin Class UPCGExTexParamProviderSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTexParamProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExTextureParamConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4159211796
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTexParamProviderSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::ClassParams = {
	&UPCGExTexParamProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExTexParamProviderSettings::StaticRegisterNativesUPCGExTexParamProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTexParamProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTexParamProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTexParamProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExTexParamProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTexParamProviderSettings.OuterSingleton;
}
UPCGExTexParamProviderSettings::UPCGExTexParamProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTexParamProviderSettings);
UPCGExTexParamProviderSettings::~UPCGExTexParamProviderSettings() {}
// ********** End Class UPCGExTexParamProviderSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTexSampleAttributeType_StaticEnum, TEXT("EPCGExTexSampleAttributeType"), &Z_Registration_Info_UEnum_EPCGExTexSampleAttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1943664657U) },
		{ EPCGExTexChannelsFlags_StaticEnum, TEXT("EPCGExTexChannelsFlags"), &Z_Registration_Info_UEnum_EPCGExTexChannelsFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1456566136U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTextureParamConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTextureParamConfig_Statics::NewStructOps, TEXT("PCGExTextureParamConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTextureParamConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTextureParamConfig), 4159211796U) },
		{ FPCGExDataTypeInfoTexParam::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoTexParam_Statics::NewStructOps, TEXT("PCGExDataTypeInfoTexParam"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTexParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoTexParam), 2697641557U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTexParamFactoryData, UPCGExTexParamFactoryData::StaticClass, TEXT("UPCGExTexParamFactoryData"), &Z_Registration_Info_UClass_UPCGExTexParamFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTexParamFactoryData), 3127557928U) },
		{ Z_Construct_UClass_UPCGExTexParamProviderSettings, UPCGExTexParamProviderSettings::StaticClass, TEXT("UPCGExTexParamProviderSettings"), &Z_Registration_Info_UClass_UPCGExTexParamProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTexParamProviderSettings), 2956033490U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_3564803858{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExTexParamFactoryProvider_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
