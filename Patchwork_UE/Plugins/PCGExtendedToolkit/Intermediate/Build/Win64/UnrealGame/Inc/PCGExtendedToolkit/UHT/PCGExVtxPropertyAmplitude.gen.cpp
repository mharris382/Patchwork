// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExVtxPropertyAmplitude() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAmplitudeConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExVtxAmplitudeMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExVtxAmplitudeMode;
static UEnum* EPCGExVtxAmplitudeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExVtxAmplitudeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExVtxAmplitudeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExVtxAmplitudeMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExVtxAmplitudeMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExVtxAmplitudeMode>()
{
	return EPCGExVtxAmplitudeMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Individual.DisplayName", "Individual" },
		{ "Individual.Name", "EPCGExVtxAmplitudeMode::Individual" },
		{ "Individual.ToolTip", "Component-wise amplitude" },
		{ "Length.DisplayName", "Length" },
		{ "Length.Name", "EPCGExVtxAmplitudeMode::Length" },
		{ "Length.ToolTip", "Uniform fit" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExVtxAmplitudeMode::Length", (int64)EPCGExVtxAmplitudeMode::Length },
		{ "EPCGExVtxAmplitudeMode::Individual", (int64)EPCGExVtxAmplitudeMode::Individual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExVtxAmplitudeMode",
	"EPCGExVtxAmplitudeMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExVtxAmplitudeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExVtxAmplitudeMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExVtxAmplitudeMode.InnerSingleton;
}
// ********** End Enum EPCGExVtxAmplitudeMode ******************************************************

// ********** Begin Enum EPCGExVtxAmplitudeUpMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExVtxAmplitudeUpMode;
static UEnum* EPCGExVtxAmplitudeUpMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExVtxAmplitudeUpMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExVtxAmplitudeUpMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExVtxAmplitudeUpMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExVtxAmplitudeUpMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExVtxAmplitudeUpMode>()
{
	return EPCGExVtxAmplitudeUpMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.DisplayName", "Average Direction" },
		{ "Average.Name", "EPCGExVtxAmplitudeUpMode::Average" },
		{ "Average.ToolTip", "Average direction to neighbors" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "UpVector.DisplayName", "Custom Up Vector" },
		{ "UpVector.Name", "EPCGExVtxAmplitudeUpMode::UpVector" },
		{ "UpVector.ToolTip", "Custom Up Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExVtxAmplitudeUpMode::Average", (int64)EPCGExVtxAmplitudeUpMode::Average },
		{ "EPCGExVtxAmplitudeUpMode::UpVector", (int64)EPCGExVtxAmplitudeUpMode::UpVector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExVtxAmplitudeUpMode",
	"EPCGExVtxAmplitudeUpMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExVtxAmplitudeUpMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExVtxAmplitudeUpMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExVtxAmplitudeUpMode.InnerSingleton;
}
// ********** End Enum EPCGExVtxAmplitudeUpMode ****************************************************

// ********** Begin Enum EPCGExVtxAmplitudeSignOutput **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExVtxAmplitudeSignOutput;
static UEnum* EPCGExVtxAmplitudeSignOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExVtxAmplitudeSignOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExVtxAmplitudeSignOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExVtxAmplitudeSignOutput"));
	}
	return Z_Registration_Info_UEnum_EPCGExVtxAmplitudeSignOutput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExVtxAmplitudeSignOutput>()
{
	return EPCGExVtxAmplitudeSignOutput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "NormalizedSize.DisplayName", "Size (Normalized)" },
		{ "NormalizedSize.Name", "EPCGExVtxAmplitudeSignOutput::NormalizedSize" },
		{ "NormalizedSize.ToolTip", "Dot product * edge size normalized" },
		{ "Raw.DisplayName", "Raw" },
		{ "Raw.Name", "EPCGExVtxAmplitudeSignOutput::Raw" },
		{ "Raw.ToolTip", "Raw dot product" },
		{ "Sign.DisplayName", "Sign" },
		{ "Sign.Name", "EPCGExVtxAmplitudeSignOutput::Sign" },
		{ "Sign.ToolTip", "Sign (0,1,-1)" },
		{ "Size.DisplayName", "Size" },
		{ "Size.Name", "EPCGExVtxAmplitudeSignOutput::Size" },
		{ "Size.ToolTip", "Dot product * edge size" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExVtxAmplitudeSignOutput::Raw", (int64)EPCGExVtxAmplitudeSignOutput::Raw },
		{ "EPCGExVtxAmplitudeSignOutput::Size", (int64)EPCGExVtxAmplitudeSignOutput::Size },
		{ "EPCGExVtxAmplitudeSignOutput::NormalizedSize", (int64)EPCGExVtxAmplitudeSignOutput::NormalizedSize },
		{ "EPCGExVtxAmplitudeSignOutput::Sign", (int64)EPCGExVtxAmplitudeSignOutput::Sign },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExVtxAmplitudeSignOutput",
	"EPCGExVtxAmplitudeSignOutput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput()
{
	if (!Z_Registration_Info_UEnum_EPCGExVtxAmplitudeSignOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExVtxAmplitudeSignOutput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExVtxAmplitudeSignOutput.InnerSingleton;
}
// ********** End Enum EPCGExVtxAmplitudeSignOutput ************************************************

// ********** Begin ScriptStruct FPCGExAmplitudeConfig *********************************************
struct Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAmplitudeConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAmplitudeConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteMinAmplitude_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAmplitudeAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Min" },
		{ "EditCondition", "bWriteMinAmplitude" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Up vector to use for amplitude sign */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Absolute" },
		{ "EditCondition", "bWriteMinAmplitude && MinMode == EPCGExVtxAmplitudeMode::Individual" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector to use for amplitude sign" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Mode" },
		{ "EditCondition", "bWriteMinAmplitude" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteMaxAmplitude_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmplitudeAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Max" },
		{ "EditCondition", "bWriteMaxAmplitude" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Up vector to use for amplitude sign */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Absolute" },
		{ "EditCondition", "bWriteMaxAmplitude && MaxMode == EPCGExVtxAmplitudeMode::Individual" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector to use for amplitude sign" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Mode" },
		{ "EditCondition", "bWriteMaxAmplitude" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAmplitudeRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeRangeAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Range" },
		{ "EditCondition", "bWriteAmplitudeRange" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Absolute" },
		{ "EditCondition", "bWriteAmplitudeRange && RangeMode == EPCGExVtxAmplitudeMode::Individual" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Mode" },
		{ "EditCondition", "bWriteAmplitudeRange" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAmplitudeSign_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeSignAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Sign" },
		{ "EditCondition", "bWriteAmplitudeSign" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignOutputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Absolute" },
		{ "EditCondition", "bWriteAmplitudeSign" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteSign_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Absolute" },
		{ "EditCondition", "bWriteAmplitudeSign" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Up vector source.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Up Mode" },
		{ "EditCondition", "bWriteAmplitudeSign" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpSelection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Up vector source.*/" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Up Input Type" },
		{ "EditCondition", "bWriteAmplitudeSign && UpMode == EPCGExVtxAmplitudeUpMode::UpVector" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Up vector to use for amplitude sign */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector (Attr)" },
		{ "EditCondition", "bWriteAmplitudeSign && UpMode == EPCGExVtxAmplitudeUpMode::UpVector && UpSelection != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector to use for amplitude sign" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Up vector to use for amplitude sign */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Up Vector" },
		{ "EditCondition", "bWriteAmplitudeSign && UpMode == EPCGExVtxAmplitudeUpMode::UpVector && UpSelection == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector to use for amplitude sign" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAmplitudeConfig constinit property declarations *************
	static void NewProp_bWriteMinAmplitude_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteMinAmplitude;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MinAmplitudeAttributeName;
	static void NewProp_bAbsoluteMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteMin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MinMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MinMode;
	static void NewProp_bWriteMaxAmplitude_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteMaxAmplitude;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxAmplitudeAttributeName;
	static void NewProp_bAbsoluteMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxMode;
	static void NewProp_bWriteAmplitudeRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAmplitudeRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AmplitudeRangeAttributeName;
	static void NewProp_bAbsoluteRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteRange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeMode;
	static void NewProp_bWriteAmplitudeSign_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAmplitudeSign;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AmplitudeSignAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SignOutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SignOutputMode;
	static void NewProp_bAbsoluteSign_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteSign;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpSelection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpSelection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAmplitudeConfig constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAmplitudeConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAmplitudeConfig;
class UScriptStruct* FPCGExAmplitudeConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAmplitudeConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAmplitudeConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAmplitudeConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAmplitudeConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAmplitudeConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAmplitudeConfig Property Definitions ************************
void Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteMinAmplitude_SetBit(void* Obj)
{
	((FPCGExAmplitudeConfig*)Obj)->bWriteMinAmplitude = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteMinAmplitude = { "bWriteMinAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAmplitudeConfig), &Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteMinAmplitude_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteMinAmplitude_MetaData), NewProp_bWriteMinAmplitude_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MinAmplitudeAttributeName = { "MinAmplitudeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, MinAmplitudeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAmplitudeAttributeName_MetaData), NewProp_MinAmplitudeAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteMin_SetBit(void* Obj)
{
	((FPCGExAmplitudeConfig*)Obj)->bAbsoluteMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteMin = { "bAbsoluteMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAmplitudeConfig), &Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteMin_MetaData), NewProp_bAbsoluteMin_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MinMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MinMode = { "MinMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, MinMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMode_MetaData), NewProp_MinMode_MetaData) }; // 2164131416
void Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteMaxAmplitude_SetBit(void* Obj)
{
	((FPCGExAmplitudeConfig*)Obj)->bWriteMaxAmplitude = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteMaxAmplitude = { "bWriteMaxAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAmplitudeConfig), &Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteMaxAmplitude_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteMaxAmplitude_MetaData), NewProp_bWriteMaxAmplitude_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MaxAmplitudeAttributeName = { "MaxAmplitudeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, MaxAmplitudeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmplitudeAttributeName_MetaData), NewProp_MaxAmplitudeAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteMax_SetBit(void* Obj)
{
	((FPCGExAmplitudeConfig*)Obj)->bAbsoluteMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteMax = { "bAbsoluteMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAmplitudeConfig), &Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteMax_MetaData), NewProp_bAbsoluteMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MaxMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MaxMode = { "MaxMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, MaxMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMode_MetaData), NewProp_MaxMode_MetaData) }; // 2164131416
void Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteAmplitudeRange_SetBit(void* Obj)
{
	((FPCGExAmplitudeConfig*)Obj)->bWriteAmplitudeRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteAmplitudeRange = { "bWriteAmplitudeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAmplitudeConfig), &Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteAmplitudeRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAmplitudeRange_MetaData), NewProp_bWriteAmplitudeRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_AmplitudeRangeAttributeName = { "AmplitudeRangeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, AmplitudeRangeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmplitudeRangeAttributeName_MetaData), NewProp_AmplitudeRangeAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteRange_SetBit(void* Obj)
{
	((FPCGExAmplitudeConfig*)Obj)->bAbsoluteRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteRange = { "bAbsoluteRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAmplitudeConfig), &Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteRange_MetaData), NewProp_bAbsoluteRange_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_RangeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_RangeMode = { "RangeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, RangeMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMode_MetaData), NewProp_RangeMode_MetaData) }; // 2164131416
void Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteAmplitudeSign_SetBit(void* Obj)
{
	((FPCGExAmplitudeConfig*)Obj)->bWriteAmplitudeSign = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteAmplitudeSign = { "bWriteAmplitudeSign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAmplitudeConfig), &Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteAmplitudeSign_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAmplitudeSign_MetaData), NewProp_bWriteAmplitudeSign_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_AmplitudeSignAttributeName = { "AmplitudeSignAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, AmplitudeSignAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmplitudeSignAttributeName_MetaData), NewProp_AmplitudeSignAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_SignOutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_SignOutputMode = { "SignOutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, SignOutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeSignOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignOutputMode_MetaData), NewProp_SignOutputMode_MetaData) }; // 729454976
void Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteSign_SetBit(void* Obj)
{
	((FPCGExAmplitudeConfig*)Obj)->bAbsoluteSign = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteSign = { "bAbsoluteSign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAmplitudeConfig), &Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteSign_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteSign_MetaData), NewProp_bAbsoluteSign_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpMode = { "UpMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, UpMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExVtxAmplitudeUpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpMode_MetaData), NewProp_UpMode_MetaData) }; // 356429747
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpSelection = { "UpSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, UpSelection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpSelection_MetaData), NewProp_UpSelection_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpSource = { "UpSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, UpSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpSource_MetaData), NewProp_UpSource_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpConstant = { "UpConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAmplitudeConfig, UpConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpConstant_MetaData), NewProp_UpConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteMinAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MinAmplitudeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MinMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MinMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteMaxAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MaxAmplitudeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MaxMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_MaxMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteAmplitudeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_AmplitudeRangeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_RangeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_RangeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bWriteAmplitudeSign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_AmplitudeSignAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_SignOutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_SignOutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_bAbsoluteSign,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpSelection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewProp_UpConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAmplitudeConfig Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAmplitudeConfig",
	Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::PropPointers),
	sizeof(FPCGExAmplitudeConfig),
	alignof(FPCGExAmplitudeConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAmplitudeConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAmplitudeConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAmplitudeConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAmplitudeConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAmplitudeConfig ***********************************************

// ********** Begin Class UPCGExVtxPropertyAmplitudeFactory ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeFactory;
UClass* UPCGExVtxPropertyAmplitudeFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertyAmplitudeFactory;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertyAmplitudeFactory"),
			Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeFactory.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertyAmplitudeFactory,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_NoRegister()
{
	return UPCGExVtxPropertyAmplitudeFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertyAmplitudeFactory constinit property declarations ********
// ********** End Class UPCGExVtxPropertyAmplitudeFactory constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertyAmplitudeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxPropertyFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_Statics::ClassParams = {
	&UPCGExVtxPropertyAmplitudeFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertyAmplitudeFactory::StaticRegisterNativesUPCGExVtxPropertyAmplitudeFactory()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeFactory.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeFactory.OuterSingleton;
}
UPCGExVtxPropertyAmplitudeFactory::UPCGExVtxPropertyAmplitudeFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertyAmplitudeFactory);
UPCGExVtxPropertyAmplitudeFactory::~UPCGExVtxPropertyAmplitudeFactory() {}
// ********** End Class UPCGExVtxPropertyAmplitudeFactory ******************************************

// ********** Begin Class UPCGExVtxPropertyAmplitudeSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeSettings;
UClass* UPCGExVtxPropertyAmplitudeSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertyAmplitudeSettings;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertyAmplitudeSettings"),
			Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeSettings.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertyAmplitudeSettings,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_NoRegister()
{
	return UPCGExVtxPropertyAmplitudeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|VtxProperty" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCGExNodeLibraryDoc", "clusters/metadata/vtx-properties/vtx-amplitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction Settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyAmplitude.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Direction Settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertyAmplitudeSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExVtxPropertyAmplitudeSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertyAmplitudeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics

// ********** Begin Class UPCGExVtxPropertyAmplitudeSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVtxPropertyAmplitudeSettings, Config), Z_Construct_UScriptStruct_FPCGExAmplitudeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 645082171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExVtxPropertyAmplitudeSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxPropertyProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::ClassParams = {
	&UPCGExVtxPropertyAmplitudeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertyAmplitudeSettings::StaticRegisterNativesUPCGExVtxPropertyAmplitudeSettings()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeSettings.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeSettings.OuterSingleton;
}
UPCGExVtxPropertyAmplitudeSettings::UPCGExVtxPropertyAmplitudeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertyAmplitudeSettings);
UPCGExVtxPropertyAmplitudeSettings::~UPCGExVtxPropertyAmplitudeSettings() {}
// ********** End Class UPCGExVtxPropertyAmplitudeSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExVtxAmplitudeMode_StaticEnum, TEXT("EPCGExVtxAmplitudeMode"), &Z_Registration_Info_UEnum_EPCGExVtxAmplitudeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2164131416U) },
		{ EPCGExVtxAmplitudeUpMode_StaticEnum, TEXT("EPCGExVtxAmplitudeUpMode"), &Z_Registration_Info_UEnum_EPCGExVtxAmplitudeUpMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 356429747U) },
		{ EPCGExVtxAmplitudeSignOutput_StaticEnum, TEXT("EPCGExVtxAmplitudeSignOutput"), &Z_Registration_Info_UEnum_EPCGExVtxAmplitudeSignOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 729454976U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAmplitudeConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExAmplitudeConfig_Statics::NewStructOps, TEXT("PCGExAmplitudeConfig"),&Z_Registration_Info_UScriptStruct_FPCGExAmplitudeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAmplitudeConfig), 645082171U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExVtxPropertyAmplitudeFactory, UPCGExVtxPropertyAmplitudeFactory::StaticClass, TEXT("UPCGExVtxPropertyAmplitudeFactory"), &Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertyAmplitudeFactory), 3674655320U) },
		{ Z_Construct_UClass_UPCGExVtxPropertyAmplitudeSettings, UPCGExVtxPropertyAmplitudeSettings::StaticClass, TEXT("UPCGExVtxPropertyAmplitudeSettings"), &Z_Registration_Info_UClass_UPCGExVtxPropertyAmplitudeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertyAmplitudeSettings), 459341082U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_2073075399{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyAmplitude_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
