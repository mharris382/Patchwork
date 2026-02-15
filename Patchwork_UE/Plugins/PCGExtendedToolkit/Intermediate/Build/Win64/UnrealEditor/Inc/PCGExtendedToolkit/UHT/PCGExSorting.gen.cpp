// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExSorting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSorting() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortingRule();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortingRule_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortingRuleProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortingRuleProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInputConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSortRuleConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSortDirection *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSortDirection;
static UEnum* EPCGExSortDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSortDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSortDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSortDirection"));
	}
	return Z_Registration_Info_UEnum_EPCGExSortDirection.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSortDirection>()
{
	return EPCGExSortDirection_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ascending.ActionIcon", "Ascending" },
		{ "Ascending.DisplayName", "Ascending" },
		{ "Ascending.Name", "EPCGExSortDirection::Ascending" },
		{ "Ascending.ToolTip", "Ascending" },
		{ "Descending.ActionIcon", "Descending" },
		{ "Descending.DisplayName", "Descending" },
		{ "Descending.Name", "EPCGExSortDirection::Descending" },
		{ "Descending.ToolTip", "Descending" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSortDirection::Ascending", (int64)EPCGExSortDirection::Ascending },
		{ "EPCGExSortDirection::Descending", (int64)EPCGExSortDirection::Descending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSortDirection",
	"EPCGExSortDirection",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection()
{
	if (!Z_Registration_Info_UEnum_EPCGExSortDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSortDirection.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSortDirection.InnerSingleton;
}
// ********** End Enum EPCGExSortDirection *********************************************************

// ********** Begin ScriptStruct FPCGExSortRuleConfig **********************************************
struct Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSortRuleConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSortRuleConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Equality tolerance. */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Equality tolerance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertRule_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert sorting direction on that rule. */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Invert sorting direction on that rule." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSortRuleConfig constinit property declarations **************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bInvertRule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSortRuleConfig constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSortRuleConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics
static_assert(std::is_polymorphic<FPCGExSortRuleConfig>() == std::is_polymorphic<FPCGExInputConfig>(), "USTRUCT FPCGExSortRuleConfig cannot be polymorphic unless super FPCGExInputConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSortRuleConfig;
class UScriptStruct* FPCGExSortRuleConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSortRuleConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSortRuleConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSortRuleConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSortRuleConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSortRuleConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSortRuleConfig Property Definitions *************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSortRuleConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::NewProp_bInvertRule_SetBit(void* Obj)
{
	((FPCGExSortRuleConfig*)Obj)->bInvertRule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::NewProp_bInvertRule = { "bInvertRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSortRuleConfig), &Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::NewProp_bInvertRule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertRule_MetaData), NewProp_bInvertRule_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::NewProp_bInvertRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSortRuleConfig Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExInputConfig,
	&NewStructOps,
	"PCGExSortRuleConfig",
	Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::PropPointers),
	sizeof(FPCGExSortRuleConfig),
	alignof(FPCGExSortRuleConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSortRuleConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSortRuleConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSortRuleConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSortRuleConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSortRuleConfig ************************************************

// ********** Begin ScriptStruct FPCGExCollectionSortingDetails ************************************
struct Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExCollectionSortingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExCollectionSortingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether this collection sorting is enabled or not. */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether this collection sorting is enabled or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sorting direction */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sorting direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tag which value will be used for sorting; i.e MyTag:0, MyTag:1, MyTag:3 etc. */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tag which value will be used for sorting; i.e MyTag:0, MyTag:1, MyTag:3 etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackOrderOffset_MetaData[] = {
		{ "Category", "Settings|Fallback" },
		{ "Comment", "/** Multiplied applied to original order when tag is missing. Use -1/1 to choose whether these data should be put before or after the valid ones. */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Multiplied applied to original order when tag is missing. Use -1/1 to choose whether these data should be put before or after the valid ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackOrderMultiplier_MetaData[] = {
		{ "Category", "Settings|Fallback" },
		{ "Comment", "/** Multiplied applied to original order when tag is missing. Use -1/1 to choose whether these data should be put before or after the valid ones. */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Multiplied applied to original order when tag is missing. Use -1/1 to choose whether these data should be put before or after the valid ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietMissingTagWarning_MetaData[] = {
		{ "Category", "Settings|Fallback" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExCollectionSortingDetails constinit property declarations ****
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FallbackOrderOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FallbackOrderMultiplier;
	static void NewProp_bQuietMissingTagWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietMissingTagWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExCollectionSortingDetails constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExCollectionSortingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExCollectionSortingDetails;
class UScriptStruct* FPCGExCollectionSortingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCollectionSortingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExCollectionSortingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExCollectionSortingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExCollectionSortingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExCollectionSortingDetails Property Definitions ***************
void Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FPCGExCollectionSortingDetails*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCollectionSortingDetails), &Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollectionSortingDetails, Direction), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 477201674
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollectionSortingDetails, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_FallbackOrderOffset = { "FallbackOrderOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollectionSortingDetails, FallbackOrderOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackOrderOffset_MetaData), NewProp_FallbackOrderOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_FallbackOrderMultiplier = { "FallbackOrderMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollectionSortingDetails, FallbackOrderMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackOrderMultiplier_MetaData), NewProp_FallbackOrderMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_bQuietMissingTagWarning_SetBit(void* Obj)
{
	((FPCGExCollectionSortingDetails*)Obj)->bQuietMissingTagWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_bQuietMissingTagWarning = { "bQuietMissingTagWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCollectionSortingDetails), &Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_bQuietMissingTagWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietMissingTagWarning_MetaData), NewProp_bQuietMissingTagWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_FallbackOrderOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_FallbackOrderMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewProp_bQuietMissingTagWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExCollectionSortingDetails Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExCollectionSortingDetails",
	Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::PropPointers),
	sizeof(FPCGExCollectionSortingDetails),
	alignof(FPCGExCollectionSortingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCollectionSortingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExCollectionSortingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExCollectionSortingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExCollectionSortingDetails **************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoSortRule ****************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoSortRule); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoSortRule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Sort Rule" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoSortRule constinit property declarations ********
// ********** End ScriptStruct FPCGExDataTypeInfoSortRule constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoSortRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoSortRule>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoSortRule cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoSortRule;
class UScriptStruct* FPCGExDataTypeInfoSortRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoSortRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoSortRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoSortRule"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoSortRule.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoSortRule",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoSortRule),
	alignof(FPCGExDataTypeInfoSortRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoSortRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoSortRule.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoSortRule.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoSortRule ******************************************

// ********** Begin Class UPCGExSortingRule ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSortingRule;
UClass* UPCGExSortingRule::GetPrivateStaticClass()
{
	using TClass = UPCGExSortingRule;
	if (!Z_Registration_Info_UClass_UPCGExSortingRule.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSortingRule"),
			Z_Registration_Info_UClass_UPCGExSortingRule.InnerSingleton,
			StaticRegisterNativesUPCGExSortingRule,
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
	return Z_Registration_Info_UClass_UPCGExSortingRule.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSortingRule_NoRegister()
{
	return UPCGExSortingRule::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSortingRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PCGExSorting.h" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSortingRule constinit property declarations ************************
// ********** End Class UPCGExSortingRule constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSortingRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSortingRule_Statics
UObject* (*const Z_Construct_UClass_UPCGExSortingRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortingRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSortingRule_Statics::ClassParams = {
	&UPCGExSortingRule::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortingRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSortingRule_Statics::Class_MetaDataParams)
};
void UPCGExSortingRule::StaticRegisterNativesUPCGExSortingRule()
{
}
UClass* Z_Construct_UClass_UPCGExSortingRule()
{
	if (!Z_Registration_Info_UClass_UPCGExSortingRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSortingRule.OuterSingleton, Z_Construct_UClass_UPCGExSortingRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSortingRule.OuterSingleton;
}
UPCGExSortingRule::UPCGExSortingRule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSortingRule);
UPCGExSortingRule::~UPCGExSortingRule() {}
// ********** End Class UPCGExSortingRule **********************************************************

// ********** Begin Class UPCGExSortingRuleProviderSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSortingRuleProviderSettings;
UClass* UPCGExSortingRuleProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSortingRuleProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExSortingRuleProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSortingRuleProviderSettings"),
			Z_Registration_Info_UClass_UPCGExSortingRuleProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSortingRuleProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExSortingRuleProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSortingRuleProviderSettings_NoRegister()
{
	return UPCGExSortingRuleProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGExSorting.h" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Priority.*/" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Filter Priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rule Config */" },
		{ "ModuleRelativePath", "Public/PCGExSorting.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Rule Config" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSortingRuleProviderSettings constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSortingRuleProviderSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSortingRuleProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics

// ********** Begin Class UPCGExSortingRuleProviderSettings Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSortingRuleProviderSettings, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSortingRuleProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExSortRuleConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3286425527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSortingRuleProviderSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::ClassParams = {
	&UPCGExSortingRuleProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExSortingRuleProviderSettings::StaticRegisterNativesUPCGExSortingRuleProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSortingRuleProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSortingRuleProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSortingRuleProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSortingRuleProviderSettings.OuterSingleton;
}
UPCGExSortingRuleProviderSettings::UPCGExSortingRuleProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSortingRuleProviderSettings);
UPCGExSortingRuleProviderSettings::~UPCGExSortingRuleProviderSettings() {}
// ********** End Class UPCGExSortingRuleProviderSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSortDirection_StaticEnum, TEXT("EPCGExSortDirection"), &Z_Registration_Info_UEnum_EPCGExSortDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 477201674U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSortRuleConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics::NewStructOps, TEXT("PCGExSortRuleConfig"),&Z_Registration_Info_UScriptStruct_FPCGExSortRuleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSortRuleConfig), 3286425527U) },
		{ FPCGExCollectionSortingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics::NewStructOps, TEXT("PCGExCollectionSortingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExCollectionSortingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExCollectionSortingDetails), 2157303676U) },
		{ FPCGExDataTypeInfoSortRule::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics::NewStructOps, TEXT("PCGExDataTypeInfoSortRule"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoSortRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoSortRule), 3352078350U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSortingRule, UPCGExSortingRule::StaticClass, TEXT("UPCGExSortingRule"), &Z_Registration_Info_UClass_UPCGExSortingRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSortingRule), 2598470212U) },
		{ Z_Construct_UClass_UPCGExSortingRuleProviderSettings, UPCGExSortingRuleProviderSettings::StaticClass, TEXT("UPCGExSortingRuleProviderSettings"), &Z_Registration_Info_UClass_UPCGExSortingRuleProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSortingRuleProviderSettings), 266122124U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_3322669175{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
