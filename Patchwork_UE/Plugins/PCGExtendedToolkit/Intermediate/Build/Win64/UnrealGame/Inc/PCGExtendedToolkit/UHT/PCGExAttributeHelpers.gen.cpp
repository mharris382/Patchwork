// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PCGExAttributeHelpers.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAttributeHelpers() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInputConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExInputConfig *************************************************
struct Z_Construct_UScriptStruct_FPCGExInputConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExInputConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExInputConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitlePropertyName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "Hidden", "" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHelpers.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute or $Property. */" },
		{ "DisplayName", "Attribute" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHelpers.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute or $Property." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExInputConfig constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitlePropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExInputConfig constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExInputConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExInputConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExInputConfig;
class UScriptStruct* FPCGExInputConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExInputConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExInputConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExInputConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExInputConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExInputConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExInputConfig Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::NewProp_TitlePropertyName = { "TitlePropertyName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInputConfig, TitlePropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitlePropertyName_MetaData), NewProp_TitlePropertyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInputConfig, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::NewProp_TitlePropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::NewProp_Selector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExInputConfig Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExInputConfig",
	Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::PropPointers),
	sizeof(FPCGExInputConfig),
	alignof(FPCGExInputConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExInputConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExInputConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExInputConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExInputConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExInputConfig ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHelpers_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExInputConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExInputConfig_Statics::NewStructOps, TEXT("PCGExInputConfig"),&Z_Registration_Info_UScriptStruct_FPCGExInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExInputConfig), 939453127U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHelpers_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHelpers_h__Script_PCGExtendedToolkit_3515863001{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHelpers_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHelpers_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
