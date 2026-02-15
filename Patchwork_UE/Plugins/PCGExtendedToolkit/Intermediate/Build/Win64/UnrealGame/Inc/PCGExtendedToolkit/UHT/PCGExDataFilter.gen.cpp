// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PCGExDataFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDataFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAttributeFilter *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAttributeFilter;
static UEnum* EPCGExAttributeFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAttributeFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAttributeFilter"));
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeFilter.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeFilter>()
{
	return EPCGExAttributeFilter_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.ActionIcon", "All" },
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExAttributeFilter::All" },
		{ "All.ToolTip", "All elements" },
		{ "Exclude.ActionIcon", "Exclude" },
		{ "Exclude.DisplayName", "Exclude" },
		{ "Exclude.Name", "EPCGExAttributeFilter::Exclude" },
		{ "Exclude.ToolTip", "Discard listed elements, keep the others" },
		{ "Include.ActionIcon", "Include" },
		{ "Include.DisplayName", "Include" },
		{ "Include.Name", "EPCGExAttributeFilter::Include" },
		{ "Include.ToolTip", "Keep listed elements, discard the others" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAttributeFilter::All", (int64)EPCGExAttributeFilter::All },
		{ "EPCGExAttributeFilter::Exclude", (int64)EPCGExAttributeFilter::Exclude },
		{ "EPCGExAttributeFilter::Include", (int64)EPCGExAttributeFilter::Include },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAttributeFilter",
	"EPCGExAttributeFilter",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAttributeFilter.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeFilter.InnerSingleton;
}
// ********** End Enum EPCGExAttributeFilter *******************************************************

// ********** Begin ScriptStruct FPCGExNameFiltersDetails ******************************************
struct Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNameFiltersDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNameFiltersDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How the names are processed. */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How the names are processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matches_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** List of matches that will be checked. Any success is a pass. */" },
		{ "EditCondition", "FilterMode != EPCGExAttributeFilter::All" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "List of matches that will be checked. Any success is a pass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommaSeparatedNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of names separated by a comma, for easy overrides. The limitation is that they all use the same shared filter mode. */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A list of names separated by a comma, for easy overrides. The limitation is that they all use the same shared filter mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommaSeparatedNameFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Unique filter mode applied to comma separated names */" },
		{ "EditCondition", "FilterMode != EPCGExAttributeFilter::All" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Unique filter mode applied to comma separated names" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreservePCGExData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, PCGEx attributes & tags won't be affected.  Cluster-related nodes rely on these to work! */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, PCGEx attributes & tags won't be affected.  Cluster-related nodes rely on these to work!" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNameFiltersDetails constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Matches_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Matches_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Matches_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Matches;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommaSeparatedNames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommaSeparatedNameFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CommaSeparatedNameFilter;
	static void NewProp_bPreservePCGExData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreservePCGExData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExNameFiltersDetails constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNameFiltersDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNameFiltersDetails;
class UScriptStruct* FPCGExNameFiltersDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNameFiltersDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNameFiltersDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNameFiltersDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNameFiltersDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNameFiltersDetails Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_FilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_FilterMode = { "FilterMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNameFiltersDetails, FilterMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterMode_MetaData), NewProp_FilterMode_MetaData) }; // 3768222847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_Matches_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_Matches_ValueProp = { "Matches", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode, METADATA_PARAMS(0, nullptr) }; // 2911749281
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_Matches_Key_KeyProp = { "Matches_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_Matches = { "Matches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNameFiltersDetails, Matches), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matches_MetaData), NewProp_Matches_MetaData) }; // 2911749281
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_CommaSeparatedNames = { "CommaSeparatedNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNameFiltersDetails, CommaSeparatedNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommaSeparatedNames_MetaData), NewProp_CommaSeparatedNames_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_CommaSeparatedNameFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_CommaSeparatedNameFilter = { "CommaSeparatedNameFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNameFiltersDetails, CommaSeparatedNameFilter), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommaSeparatedNameFilter_MetaData), NewProp_CommaSeparatedNameFilter_MetaData) }; // 2911749281
void Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_bPreservePCGExData_SetBit(void* Obj)
{
	((FPCGExNameFiltersDetails*)Obj)->bPreservePCGExData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_bPreservePCGExData = { "bPreservePCGExData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExNameFiltersDetails), &Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_bPreservePCGExData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreservePCGExData_MetaData), NewProp_bPreservePCGExData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_FilterMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_FilterMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_Matches_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_Matches_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_Matches_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_Matches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_CommaSeparatedNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_CommaSeparatedNameFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_CommaSeparatedNameFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewProp_bPreservePCGExData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNameFiltersDetails Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNameFiltersDetails",
	Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::PropPointers),
	sizeof(FPCGExNameFiltersDetails),
	alignof(FPCGExNameFiltersDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNameFiltersDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNameFiltersDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNameFiltersDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNameFiltersDetails ********************************************

// ********** Begin ScriptStruct FPCGExAttributeGatherDetails **************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeGatherDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeGatherDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeGatherDetails constinit property declarations ******
// ********** End ScriptStruct FPCGExAttributeGatherDetails constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeGatherDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics
static_assert(std::is_polymorphic<FPCGExAttributeGatherDetails>() == std::is_polymorphic<FPCGExNameFiltersDetails>(), "USTRUCT FPCGExAttributeGatherDetails cannot be polymorphic unless super FPCGExNameFiltersDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeGatherDetails;
class UScriptStruct* FPCGExAttributeGatherDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeGatherDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeGatherDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeGatherDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeGatherDetails.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExNameFiltersDetails,
	&NewStructOps,
	"PCGExAttributeGatherDetails",
	nullptr,
	0,
	sizeof(FPCGExAttributeGatherDetails),
	alignof(FPCGExAttributeGatherDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeGatherDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeGatherDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeGatherDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeGatherDetails ****************************************

// ********** Begin ScriptStruct FPCGExCarryOverDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExCarryOverDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExCarryOverDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveAttributesDefaultValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will preserve the initial attribute default value. */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will preserve the initial attribute default value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attributes to carry over. */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attributes to carry over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDataDomainToElements_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will convert data domain attributes to elements domain ones. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Data domain to Elements" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will convert data domain attributes to elements domain ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tags to carry over. */" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tags to carry over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestTagsWithValues_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will test full tag with its value ('Tag:Value'), otherwise only test the left part ignoring the right `:Value` ('Tag'). */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Flatten tag value" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will test full tag with its value ('Tag:Value'), otherwise only test the left part ignoring the right `:Value` ('Tag')." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExCarryOverDetails constinit property declarations ************
	static void NewProp_bPreserveAttributesDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveAttributesDefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static void NewProp_bDataDomainToElements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDataDomainToElements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static void NewProp_bTestTagsWithValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestTagsWithValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExCarryOverDetails constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExCarryOverDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExCarryOverDetails;
class UScriptStruct* FPCGExCarryOverDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCarryOverDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExCarryOverDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExCarryOverDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExCarryOverDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExCarryOverDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExCarryOverDetails Property Definitions ***********************
void Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bPreserveAttributesDefaultValue_SetBit(void* Obj)
{
	((FPCGExCarryOverDetails*)Obj)->bPreserveAttributesDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bPreserveAttributesDefaultValue = { "bPreserveAttributesDefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCarryOverDetails), &Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bPreserveAttributesDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveAttributesDefaultValue_MetaData), NewProp_bPreserveAttributesDefaultValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCarryOverDetails, Attributes), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 1913362378
void Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bDataDomainToElements_SetBit(void* Obj)
{
	((FPCGExCarryOverDetails*)Obj)->bDataDomainToElements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bDataDomainToElements = { "bDataDomainToElements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCarryOverDetails), &Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bDataDomainToElements_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDataDomainToElements_MetaData), NewProp_bDataDomainToElements_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCarryOverDetails, Tags), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 1913362378
void Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bTestTagsWithValues_SetBit(void* Obj)
{
	((FPCGExCarryOverDetails*)Obj)->bTestTagsWithValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bTestTagsWithValues = { "bTestTagsWithValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCarryOverDetails), &Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bTestTagsWithValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestTagsWithValues_MetaData), NewProp_bTestTagsWithValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bPreserveAttributesDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bDataDomainToElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewProp_bTestTagsWithValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExCarryOverDetails Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExCarryOverDetails",
	Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::PropPointers),
	sizeof(FPCGExCarryOverDetails),
	alignof(FPCGExCarryOverDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCarryOverDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExCarryOverDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExCarryOverDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExCarryOverDetails **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAttributeFilter_StaticEnum, TEXT("EPCGExAttributeFilter"), &Z_Registration_Info_UEnum_EPCGExAttributeFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3768222847U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNameFiltersDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExNameFiltersDetails_Statics::NewStructOps, TEXT("PCGExNameFiltersDetails"),&Z_Registration_Info_UScriptStruct_FPCGExNameFiltersDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNameFiltersDetails), 1913362378U) },
		{ FPCGExAttributeGatherDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails_Statics::NewStructOps, TEXT("PCGExAttributeGatherDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeGatherDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeGatherDetails), 2865583282U) },
		{ FPCGExCarryOverDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExCarryOverDetails_Statics::NewStructOps, TEXT("PCGExCarryOverDetails"),&Z_Registration_Info_UScriptStruct_FPCGExCarryOverDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExCarryOverDetails), 4041221405U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h__Script_PCGExtendedToolkit_2323770665{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
