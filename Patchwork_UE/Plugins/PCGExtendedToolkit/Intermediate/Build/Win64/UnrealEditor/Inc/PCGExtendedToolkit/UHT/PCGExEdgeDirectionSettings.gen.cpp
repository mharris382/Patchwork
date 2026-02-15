// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExEdgeDirectionSettings.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeDirectionSettings() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExEdgeDirectionSettings ***************************************
struct Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeDirectionSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeDirectionSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdgeDirectionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Method to pick the edge direction amongst various possibilities.*/" },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdgeDirectionSettings.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Method to pick the edge direction amongst various possibilities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirSourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute picker for the selected Direction Method.*/" },
		{ "EditCondition", "DirectionMethod == EPCGExEdgeDirectionMethod::EdgeDotAttribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdgeDirectionSettings.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute picker for the selected Direction Method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionChoice_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Further refine the direction method. Not all methods make use of this property.*/" },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdgeDirectionSettings.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Further refine the direction method. Not all methods make use of this property." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeDirectionSettings constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirSourceAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionChoice_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionChoice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeDirectionSettings constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeDirectionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeDirectionSettings;
class UScriptStruct* FPCGExEdgeDirectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeDirectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeDirectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeDirectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeDirectionSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeDirectionSettings Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirectionMethod = { "DirectionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeDirectionSettings, DirectionMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionMethod_MetaData), NewProp_DirectionMethod_MetaData) }; // 2550565730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirSourceAttribute = { "DirSourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeDirectionSettings, DirSourceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirSourceAttribute_MetaData), NewProp_DirSourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirectionChoice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirectionChoice = { "DirectionChoice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeDirectionSettings, DirectionChoice), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEdgeDirectionChoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionChoice_MetaData), NewProp_DirectionChoice_MetaData) }; // 2539041373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirectionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirSourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirectionChoice_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewProp_DirectionChoice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeDirectionSettings Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEdgeDirectionSettings",
	Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::PropPointers),
	sizeof(FPCGExEdgeDirectionSettings),
	alignof(FPCGExEdgeDirectionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeDirectionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeDirectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeDirectionSettings.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeDirectionSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgeDirectionSettings_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExEdgeDirectionSettings::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings_Statics::NewStructOps, TEXT("PCGExEdgeDirectionSettings"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeDirectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeDirectionSettings), 1520832441U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgeDirectionSettings_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgeDirectionSettings_h__Script_PCGExtendedToolkit_1037795462{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgeDirectionSettings_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgeDirectionSettings_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
