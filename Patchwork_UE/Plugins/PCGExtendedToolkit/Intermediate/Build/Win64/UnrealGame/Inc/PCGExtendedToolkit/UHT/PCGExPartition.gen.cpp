// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExPartition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPartition() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInputConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExPartitonRuleConfig ******************************************
struct Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPartitonRuleConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPartitonRuleConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enable or disable this partition. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "ToolTip", "Enable or disable this partition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Filter Size. Higher values means fewer, larger groups. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Filter Size. Higher values means fewer, larger groups." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Upscale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Upscale multiplier, applied before filtering. Handy to deal with floating point values. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Upscale multiplier, applied before filtering. Handy to deal with floating point values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset input value. Applied after upscaling the raw value.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Offset input value. Applied after upscaling the raw value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteKey_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to write the partition Key to an attribute. Useful for debugging. Note: They key is not the index, but instead the filtered value used to distribute into partitions. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to write the partition Key to an attribute. Useful for debugging. Note: They key is not the index, but instead the filtered value used to distribute into partitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the int64 attribute to write the partition Key to. */" },
		{ "EditCondition", "bWriteKey" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the int64 attribute to write the partition Key to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePartitionIndexAsKey_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output the partition index instead of the value used for partitioning. */" },
		{ "EditCondition", "bWriteKey" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output the partition index instead of the value used for partitioning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to write the partition Key to a tag. Will write tags as 'Prefix::Key' */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to write the partition Key to a tag. Will write tags as 'Prefix::Key'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagPrefixName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the tag prefix used for this partition. */" },
		{ "EditCondition", "bWriteTag" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the tag prefix used for this partition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagUsePartitionIndexAsKey_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output the partition index to the tag instead of the value used for partitioning. */" },
		{ "EditCondition", "bWriteTag" },
		{ "ModuleRelativePath", "Public/Misc/PCGExPartition.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output the partition index to the tag instead of the value used for partitioning." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPartitonRuleConfig constinit property declarations **********
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FilterSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Upscale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
	static void NewProp_bWriteKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyAttributeName;
	static void NewProp_bUsePartitionIndexAsKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePartitionIndexAsKey;
	static void NewProp_bWriteTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagPrefixName;
	static void NewProp_bTagUsePartitionIndexAsKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagUsePartitionIndexAsKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPartitonRuleConfig constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPartitonRuleConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics
static_assert(std::is_polymorphic<FPCGExPartitonRuleConfig>() == std::is_polymorphic<FPCGExInputConfig>(), "USTRUCT FPCGExPartitonRuleConfig cannot be polymorphic unless super FPCGExInputConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPartitonRuleConfig;
class UScriptStruct* FPCGExPartitonRuleConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPartitonRuleConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPartitonRuleConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPartitonRuleConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPartitonRuleConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPartitonRuleConfig Property Definitions *********************
void Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FPCGExPartitonRuleConfig*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPartitonRuleConfig), &Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_FilterSize = { "FilterSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPartitonRuleConfig, FilterSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterSize_MetaData), NewProp_FilterSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_Upscale = { "Upscale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPartitonRuleConfig, Upscale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Upscale_MetaData), NewProp_Upscale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPartitonRuleConfig, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bWriteKey_SetBit(void* Obj)
{
	((FPCGExPartitonRuleConfig*)Obj)->bWriteKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bWriteKey = { "bWriteKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPartitonRuleConfig), &Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bWriteKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteKey_MetaData), NewProp_bWriteKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_KeyAttributeName = { "KeyAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPartitonRuleConfig, KeyAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyAttributeName_MetaData), NewProp_KeyAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bUsePartitionIndexAsKey_SetBit(void* Obj)
{
	((FPCGExPartitonRuleConfig*)Obj)->bUsePartitionIndexAsKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bUsePartitionIndexAsKey = { "bUsePartitionIndexAsKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPartitonRuleConfig), &Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bUsePartitionIndexAsKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePartitionIndexAsKey_MetaData), NewProp_bUsePartitionIndexAsKey_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bWriteTag_SetBit(void* Obj)
{
	((FPCGExPartitonRuleConfig*)Obj)->bWriteTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bWriteTag = { "bWriteTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPartitonRuleConfig), &Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bWriteTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTag_MetaData), NewProp_bWriteTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_TagPrefixName = { "TagPrefixName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPartitonRuleConfig, TagPrefixName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagPrefixName_MetaData), NewProp_TagPrefixName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bTagUsePartitionIndexAsKey_SetBit(void* Obj)
{
	((FPCGExPartitonRuleConfig*)Obj)->bTagUsePartitionIndexAsKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bTagUsePartitionIndexAsKey = { "bTagUsePartitionIndexAsKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPartitonRuleConfig), &Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bTagUsePartitionIndexAsKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagUsePartitionIndexAsKey_MetaData), NewProp_bTagUsePartitionIndexAsKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_FilterSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_Upscale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bWriteKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_KeyAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bUsePartitionIndexAsKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bWriteTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_TagPrefixName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewProp_bTagUsePartitionIndexAsKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPartitonRuleConfig Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExInputConfig,
	&NewStructOps,
	"PCGExPartitonRuleConfig",
	Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::PropPointers),
	sizeof(FPCGExPartitonRuleConfig),
	alignof(FPCGExPartitonRuleConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPartitonRuleConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPartitonRuleConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPartitonRuleConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPartitonRuleConfig ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartition_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPartitonRuleConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExPartitonRuleConfig_Statics::NewStructOps, TEXT("PCGExPartitonRuleConfig"),&Z_Registration_Info_UScriptStruct_FPCGExPartitonRuleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPartitonRuleConfig), 2918078472U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartition_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartition_h__Script_PCGExtendedToolkit_1143478777{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartition_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPartition_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
