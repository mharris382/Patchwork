// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PCGExDataForward.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDataForward() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExForwardDetails **********************************************
struct Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExForwardDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExForwardDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Is forwarding enabled. */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Is forwarding enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveAttributesDefaultValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will preserve the initial attribute default value. */" },
		{ "DisplayPriority", "0" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will preserve the initial attribute default value." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExForwardDetails constinit property declarations **************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bPreserveAttributesDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveAttributesDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExForwardDetails constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExForwardDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics
static_assert(std::is_polymorphic<FPCGExForwardDetails>() == std::is_polymorphic<FPCGExNameFiltersDetails>(), "USTRUCT FPCGExForwardDetails cannot be polymorphic unless super FPCGExNameFiltersDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExForwardDetails;
class UScriptStruct* FPCGExForwardDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExForwardDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExForwardDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExForwardDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExForwardDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExForwardDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExForwardDetails Property Definitions *************************
void Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FPCGExForwardDetails*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExForwardDetails), &Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewProp_bPreserveAttributesDefaultValue_SetBit(void* Obj)
{
	((FPCGExForwardDetails*)Obj)->bPreserveAttributesDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewProp_bPreserveAttributesDefaultValue = { "bPreserveAttributesDefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExForwardDetails), &Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewProp_bPreserveAttributesDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveAttributesDefaultValue_MetaData), NewProp_bPreserveAttributesDefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewProp_bPreserveAttributesDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExForwardDetails Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExNameFiltersDetails,
	&NewStructOps,
	"PCGExForwardDetails",
	Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::PropPointers),
	sizeof(FPCGExForwardDetails),
	alignof(FPCGExForwardDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExForwardDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExForwardDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExForwardDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExForwardDetails ************************************************

// ********** Begin ScriptStruct FPCGExAttributeToTagDetails ***************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeToTagDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeToTagDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddIndexTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Use reference point index to tag output data. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
		{ "ToolTip", "Use reference point index to tag output data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexTagPrefix_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Prefix added to the reference point index */" },
		{ "EditCondition", "bAddIndexTag" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
		{ "ToolTip", "Prefix added to the reference point index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrefixWithAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, prefix the attribute value with the attribute name  */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
		{ "ToolTip", "If enabled, prefix the attribute value with the attribute name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attributes which value will be used as tags. */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
		{ "ToolTip", "Attributes which value will be used as tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommaSeparatedAttributeSelectors_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of selectors separated by a comma, for easy overrides. Will be appended to the existing array. */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataForward.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A list of selectors separated by a comma, for easy overrides. Will be appended to the existing array." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeToTagDetails constinit property declarations *******
	static void NewProp_bAddIndexTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddIndexTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IndexTagPrefix;
	static void NewProp_bPrefixWithAttributeName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrefixWithAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommaSeparatedAttributeSelectors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeToTagDetails constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeToTagDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeToTagDetails;
class UScriptStruct* FPCGExAttributeToTagDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeToTagDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeToTagDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeToTagDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeToTagDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeToTagDetails Property Definitions ******************
void Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_bAddIndexTag_SetBit(void* Obj)
{
	((FPCGExAttributeToTagDetails*)Obj)->bAddIndexTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_bAddIndexTag = { "bAddIndexTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeToTagDetails), &Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_bAddIndexTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddIndexTag_MetaData), NewProp_bAddIndexTag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_IndexTagPrefix = { "IndexTagPrefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeToTagDetails, IndexTagPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexTagPrefix_MetaData), NewProp_IndexTagPrefix_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_bPrefixWithAttributeName_SetBit(void* Obj)
{
	((FPCGExAttributeToTagDetails*)Obj)->bPrefixWithAttributeName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_bPrefixWithAttributeName = { "bPrefixWithAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeToTagDetails), &Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_bPrefixWithAttributeName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrefixWithAttributeName_MetaData), NewProp_bPrefixWithAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(0, nullptr) }; // 3844583698
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeToTagDetails, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 3844583698
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_CommaSeparatedAttributeSelectors = { "CommaSeparatedAttributeSelectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeToTagDetails, CommaSeparatedAttributeSelectors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommaSeparatedAttributeSelectors_MetaData), NewProp_CommaSeparatedAttributeSelectors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_bAddIndexTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_IndexTagPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_bPrefixWithAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewProp_CommaSeparatedAttributeSelectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeToTagDetails Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeToTagDetails",
	Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::PropPointers),
	sizeof(FPCGExAttributeToTagDetails),
	alignof(FPCGExAttributeToTagDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeToTagDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeToTagDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeToTagDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeToTagDetails *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataForward_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExForwardDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExForwardDetails_Statics::NewStructOps, TEXT("PCGExForwardDetails"),&Z_Registration_Info_UScriptStruct_FPCGExForwardDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExForwardDetails), 925115943U) },
		{ FPCGExAttributeToTagDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails_Statics::NewStructOps, TEXT("PCGExAttributeToTagDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeToTagDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeToTagDetails), 1295694073U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataForward_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataForward_h__Script_PCGExtendedToolkit_34139188{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataForward_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataForward_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
