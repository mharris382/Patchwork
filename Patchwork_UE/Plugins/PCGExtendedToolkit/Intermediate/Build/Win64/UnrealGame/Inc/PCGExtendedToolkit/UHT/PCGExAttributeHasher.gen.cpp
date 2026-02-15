// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PCGExAttributeHasher.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAttributeHasher() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeHashConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExDataHashScope *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDataHashScope;
static UEnum* EPCGExDataHashScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataHashScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDataHashScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDataHashScope"));
	}
	return Z_Registration_Info_UEnum_EPCGExDataHashScope.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataHashScope>()
{
	return EPCGExDataHashScope_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExDataHashScope::All" },
		{ "All.Tooltip", "Combines all the values" },
		{ "First.DisplayName", "First only" },
		{ "First.Name", "EPCGExDataHashScope::First" },
		{ "First.Tooltip", "Uses the value from the first point only" },
		{ "FirstAndLast.DisplayName", "First and Last" },
		{ "FirstAndLast.Name", "EPCGExDataHashScope::FirstAndLast" },
		{ "FirstAndLast.Tooltip", "Combines the value from the first and last point" },
		{ "Last.DisplayName", "Last only" },
		{ "Last.Name", "EPCGExDataHashScope::Last" },
		{ "Last.Tooltip", "Uses the value from the last point only" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHasher.h" },
		{ "Uniques.DisplayName", "Uniques" },
		{ "Uniques.Name", "EPCGExDataHashScope::Uniques" },
		{ "Uniques.Tooltip", "Combines all the unique values, ignoring duplicates." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDataHashScope::All", (int64)EPCGExDataHashScope::All },
		{ "EPCGExDataHashScope::Uniques", (int64)EPCGExDataHashScope::Uniques },
		{ "EPCGExDataHashScope::FirstAndLast", (int64)EPCGExDataHashScope::FirstAndLast },
		{ "EPCGExDataHashScope::First", (int64)EPCGExDataHashScope::First },
		{ "EPCGExDataHashScope::Last", (int64)EPCGExDataHashScope::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDataHashScope",
	"EPCGExDataHashScope",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataHashScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDataHashScope.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDataHashScope.InnerSingleton;
}
// ********** End Enum EPCGExDataHashScope *********************************************************

// ********** Begin ScriptStruct FPCGExAttributeHashConfig *****************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeHashConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeHashConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHasher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which attribute should be used to generate the hash */" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHasher.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which attribute should be used to generate the hash" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scope_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which values will be combined to a hash */" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHasher.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which values will be combined to a hash" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortInputValues_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHasher.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sorting_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to sort hash components or not. */" },
		{ "EditCondition", "bSortInputValues" },
		{ "ModuleRelativePath", "Public/Data/PCGExAttributeHasher.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to sort hash components or not." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeHashConfig constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static void NewProp_bSortInputValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortInputValues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Sorting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Sorting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeHashConfig constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeHashConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeHashConfig;
class UScriptStruct* FPCGExAttributeHashConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeHashConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeHashConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeHashConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeHashConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeHashConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeHashConfig Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_SourceAttribute = { "SourceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeHashConfig, SourceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAttribute_MetaData), NewProp_SourceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeHashConfig, Scope), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataHashScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scope_MetaData), NewProp_Scope_MetaData) }; // 1965006681
void Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_bSortInputValues_SetBit(void* Obj)
{
	((FPCGExAttributeHashConfig*)Obj)->bSortInputValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_bSortInputValues = { "bSortInputValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeHashConfig), &Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_bSortInputValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortInputValues_MetaData), NewProp_bSortInputValues_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_Sorting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_Sorting = { "Sorting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeHashConfig, Sorting), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sorting_MetaData), NewProp_Sorting_MetaData) }; // 477201674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_SourceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_bSortInputValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_Sorting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewProp_Sorting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeHashConfig Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeHashConfig",
	Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::PropPointers),
	sizeof(FPCGExAttributeHashConfig),
	alignof(FPCGExAttributeHashConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeHashConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeHashConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeHashConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeHashConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeHashConfig *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExDataHashScope_StaticEnum, TEXT("EPCGExDataHashScope"), &Z_Registration_Info_UEnum_EPCGExDataHashScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1965006681U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAttributeHashConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics::NewStructOps, TEXT("PCGExAttributeHashConfig"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeHashConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeHashConfig), 1288571515U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h__Script_PCGExtendedToolkit_374815574{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
