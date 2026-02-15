// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExBoundsFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBoundsFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBoundsCheckType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBoundsCheckType;
static UEnum* EPCGExBoundsCheckType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoundsCheckType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBoundsCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBoundsCheckType"));
	}
	return Z_Registration_Info_UEnum_EPCGExBoundsCheckType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBoundsCheckType>()
{
	return EPCGExBoundsCheckType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Intersects.ActionIcon", "PCGEx.Pin.OUT_Filter" },
		{ "Intersects.DisplayName", "Intersects" },
		{ "Intersects.Name", "EPCGExBoundsCheckType::Intersects" },
		{ "Intersects.SearchHints", "Intersects" },
		{ "Intersects.Tooltip", "..." },
		{ "IsInside.ActionIcon", "PCGEx.Pin.OUT_Filter" },
		{ "IsInside.DisplayName", "Is Inside" },
		{ "IsInside.Name", "EPCGExBoundsCheckType::IsInside" },
		{ "IsInside.SearchHints", "Inside" },
		{ "IsInside.Tooltip", "..." },
		{ "IsInsideOrIntersects.ActionIcon", "PCGEx.Pin.OUT_Filter" },
		{ "IsInsideOrIntersects.DisplayName", "Is Inside or Intersects" },
		{ "IsInsideOrIntersects.Name", "EPCGExBoundsCheckType::IsInsideOrIntersects" },
		{ "IsInsideOrIntersects.SearchHints", "Is Inside or Intersects" },
		{ "IsInsideOrIntersects.Tooltip", "..." },
		{ "IsInsideOrOn.ActionIcon", "PCGEx.Pin.OUT_Filter" },
		{ "IsInsideOrOn.DisplayName", "Is Inside or On" },
		{ "IsInsideOrOn.Name", "EPCGExBoundsCheckType::IsInsideOrOn" },
		{ "IsInsideOrOn.SearchHints", "Is Inside or On" },
		{ "IsInsideOrOn.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBoundsCheckType::Intersects", (int64)EPCGExBoundsCheckType::Intersects },
		{ "EPCGExBoundsCheckType::IsInside", (int64)EPCGExBoundsCheckType::IsInside },
		{ "EPCGExBoundsCheckType::IsInsideOrOn", (int64)EPCGExBoundsCheckType::IsInsideOrOn },
		{ "EPCGExBoundsCheckType::IsInsideOrIntersects", (int64)EPCGExBoundsCheckType::IsInsideOrIntersects },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBoundsCheckType",
	"EPCGExBoundsCheckType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoundsCheckType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBoundsCheckType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBoundsCheckType.InnerSingleton;
}
// ********** End Enum EPCGExBoundsCheckType *******************************************************

// ********** Begin Enum EPCGExBoundsFilterCompareMode *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBoundsFilterCompareMode;
static UEnum* EPCGExBoundsFilterCompareMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoundsFilterCompareMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBoundsFilterCompareMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBoundsFilterCompareMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExBoundsFilterCompareMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBoundsFilterCompareMode>()
{
	return EPCGExBoundsFilterCompareMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CollectionBounds.DisplayName", "Collection Bounds" },
		{ "CollectionBounds.Name", "EPCGExBoundsFilterCompareMode::CollectionBounds" },
		{ "CollectionBounds.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PerPointBounds.DisplayName", "Per Point Bounds" },
		{ "PerPointBounds.Name", "EPCGExBoundsFilterCompareMode::PerPointBounds" },
		{ "PerPointBounds.Tooltip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBoundsFilterCompareMode::PerPointBounds", (int64)EPCGExBoundsFilterCompareMode::PerPointBounds },
		{ "EPCGExBoundsFilterCompareMode::CollectionBounds", (int64)EPCGExBoundsFilterCompareMode::CollectionBounds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBoundsFilterCompareMode",
	"EPCGExBoundsFilterCompareMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoundsFilterCompareMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBoundsFilterCompareMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBoundsFilterCompareMode.InnerSingleton;
}
// ********** End Enum EPCGExBoundsFilterCompareMode ***********************************************

// ********** Begin ScriptStruct FPCGExBoundsFilterConfig ******************************************
struct Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExBoundsFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExBoundsFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bounds to use on input points. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bounds to use on input points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bounds to use on input points. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bounds to use on input points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bounds to use on input bounds. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bounds to use on input bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines against what type of shape (extrapolated from target bounds) is tested against. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines against what type of shape (extrapolated from target bounds) is tested against." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expansion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Epsilon value used to slightly expand target bounds. */" },
		{ "EditCondition", "TestMode == EPCGExBoxCheckMode::ExpandedBox || TestMode == EPCGExBoxCheckMode::ExpandedSphere" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Epsilon value used to slightly expand target bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, invert the result of the test */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, invert the result of the test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckAgainstDataBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, when used with a collection filter, will use collection bounds as a proxy point instead of per-point testing */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, when used with a collection filter, will use collection bounds as a proxy point instead of per-point testing" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExBoundsFilterConfig constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsTarget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TestMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Expansion;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static void NewProp_bCheckAgainstDataBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckAgainstDataBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExBoundsFilterConfig constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExBoundsFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExBoundsFilterConfig;
class UScriptStruct* FPCGExBoundsFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBoundsFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExBoundsFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExBoundsFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExBoundsFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExBoundsFilterConfig Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoundsFilterConfig, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsFilterCompareMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 18176786
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_BoundsSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_BoundsSource = { "BoundsSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoundsFilterConfig, BoundsSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSource_MetaData), NewProp_BoundsSource_MetaData) }; // 926722312
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_BoundsTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_BoundsTarget = { "BoundsTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoundsFilterConfig, BoundsTarget), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsTarget_MetaData), NewProp_BoundsTarget_MetaData) }; // 926722312
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_CheckType = { "CheckType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoundsFilterConfig, CheckType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoundsCheckType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckType_MetaData), NewProp_CheckType_MetaData) }; // 69875513
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_TestMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoundsFilterConfig, TestMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMode_MetaData), NewProp_TestMode_MetaData) }; // 1065862460
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_Expansion = { "Expansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoundsFilterConfig, Expansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expansion_MetaData), NewProp_Expansion_MetaData) };
void Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExBoundsFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExBoundsFilterConfig), &Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
void Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_bCheckAgainstDataBounds_SetBit(void* Obj)
{
	((FPCGExBoundsFilterConfig*)Obj)->bCheckAgainstDataBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_bCheckAgainstDataBounds = { "bCheckAgainstDataBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExBoundsFilterConfig), &Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_bCheckAgainstDataBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckAgainstDataBounds_MetaData), NewProp_bCheckAgainstDataBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_BoundsSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_BoundsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_BoundsTarget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_BoundsTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_CheckType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_CheckType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_TestMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_TestMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_Expansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewProp_bCheckAgainstDataBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExBoundsFilterConfig Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExBoundsFilterConfig",
	Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::PropPointers),
	sizeof(FPCGExBoundsFilterConfig),
	alignof(FPCGExBoundsFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBoundsFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExBoundsFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExBoundsFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExBoundsFilterConfig ********************************************

// ********** Begin Class UPCGExBoundsFilterFactory ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBoundsFilterFactory;
UClass* UPCGExBoundsFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExBoundsFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExBoundsFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBoundsFilterFactory"),
			Z_Registration_Info_UClass_UPCGExBoundsFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExBoundsFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExBoundsFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBoundsFilterFactory_NoRegister()
{
	return UPCGExBoundsFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExBoundsFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBoundsFilterFactory constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBoundsFilterFactory constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBoundsFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics

// ********** Begin Class UPCGExBoundsFilterFactory Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1346212225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBoundsFilterFactory Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::ClassParams = {
	&UPCGExBoundsFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExBoundsFilterFactory::StaticRegisterNativesUPCGExBoundsFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExBoundsFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExBoundsFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBoundsFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExBoundsFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBoundsFilterFactory.OuterSingleton;
}
UPCGExBoundsFilterFactory::UPCGExBoundsFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBoundsFilterFactory);
UPCGExBoundsFilterFactory::~UPCGExBoundsFilterFactory() {}
// ********** End Class UPCGExBoundsFilterFactory **************************************************

// ********** Begin Class UPCGExBoundsFilterProviderSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBoundsFilterProviderSettings;
UClass* UPCGExBoundsFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBoundsFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExBoundsFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBoundsFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExBoundsFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBoundsFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExBoundsFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_NoRegister()
{
	return UPCGExBoundsFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExBoundsFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/spatial/bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBoundsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBoundsFilterProviderSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBoundsFilterProviderSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBoundsFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics

// ********** Begin Class UPCGExBoundsFilterProviderSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1346212225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBoundsFilterProviderSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::ClassParams = {
	&UPCGExBoundsFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExBoundsFilterProviderSettings::StaticRegisterNativesUPCGExBoundsFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBoundsFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBoundsFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBoundsFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExBoundsFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBoundsFilterProviderSettings.OuterSingleton;
}
UPCGExBoundsFilterProviderSettings::UPCGExBoundsFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBoundsFilterProviderSettings);
UPCGExBoundsFilterProviderSettings::~UPCGExBoundsFilterProviderSettings() {}
// ********** End Class UPCGExBoundsFilterProviderSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBoundsCheckType_StaticEnum, TEXT("EPCGExBoundsCheckType"), &Z_Registration_Info_UEnum_EPCGExBoundsCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 69875513U) },
		{ EPCGExBoundsFilterCompareMode_StaticEnum, TEXT("EPCGExBoundsFilterCompareMode"), &Z_Registration_Info_UEnum_EPCGExBoundsFilterCompareMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 18176786U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExBoundsFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExBoundsFilterConfig_Statics::NewStructOps, TEXT("PCGExBoundsFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExBoundsFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExBoundsFilterConfig), 1346212225U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBoundsFilterFactory, UPCGExBoundsFilterFactory::StaticClass, TEXT("UPCGExBoundsFilterFactory"), &Z_Registration_Info_UClass_UPCGExBoundsFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBoundsFilterFactory), 2295493358U) },
		{ Z_Construct_UClass_UPCGExBoundsFilterProviderSettings, UPCGExBoundsFilterProviderSettings::StaticClass, TEXT("UPCGExBoundsFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExBoundsFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBoundsFilterProviderSettings), 4040284347U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_1447370740{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBoundsFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
