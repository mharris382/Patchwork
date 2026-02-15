// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExMath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMath() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExIndexSafety *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExIndexSafety;
static UEnum* EPCGExIndexSafety_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExIndexSafety.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExIndexSafety.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExIndexSafety"));
	}
	return Z_Registration_Info_UEnum_EPCGExIndexSafety.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIndexSafety>()
{
	return EPCGExIndexSafety_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clamp.DisplayName", "Clamp" },
		{ "Clamp.Name", "EPCGExIndexSafety::Clamp" },
		{ "Clamp.Tooltip", "Out of bounds indices are clamped." },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EPCGExIndexSafety::Ignore" },
		{ "Ignore.Tooltip", "Out of bounds indices are ignored." },
		{ "ModuleRelativePath", "Public/PCGExMath.h" },
		{ "Tile.DisplayName", "Tile" },
		{ "Tile.Name", "EPCGExIndexSafety::Tile" },
		{ "Tile.Tooltip", "Out of bounds indices are tiled." },
		{ "Yoyo.DisplayName", "Yoyo" },
		{ "Yoyo.Name", "EPCGExIndexSafety::Yoyo" },
		{ "Yoyo.Tooltip", "Out of bounds indices are mirrored and back." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExIndexSafety::Ignore", (int64)EPCGExIndexSafety::Ignore },
		{ "EPCGExIndexSafety::Tile", (int64)EPCGExIndexSafety::Tile },
		{ "EPCGExIndexSafety::Clamp", (int64)EPCGExIndexSafety::Clamp },
		{ "EPCGExIndexSafety::Yoyo", (int64)EPCGExIndexSafety::Yoyo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExIndexSafety",
	"EPCGExIndexSafety",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety()
{
	if (!Z_Registration_Info_UEnum_EPCGExIndexSafety.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExIndexSafety.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExIndexSafety.InnerSingleton;
}
// ********** End Enum EPCGExIndexSafety ***********************************************************

// ********** Begin Enum EPCGExTruncateMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTruncateMode;
static UEnum* EPCGExTruncateMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTruncateMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTruncateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTruncateMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExTruncateMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTruncateMode>()
{
	return EPCGExTruncateMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ceil.DisplayName", "Ceil" },
		{ "Ceil.Name", "EPCGExTruncateMode::Ceil" },
		{ "Ceil.ToolTip", "Ceil" },
		{ "Floor.DisplayName", "Floor" },
		{ "Floor.Name", "EPCGExTruncateMode::Floor" },
		{ "Floor.ToolTip", "Floor" },
		{ "ModuleRelativePath", "Public/PCGExMath.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExTruncateMode::None" },
		{ "None.ToolTip", "None" },
		{ "Round.DisplayName", "Round" },
		{ "Round.Name", "EPCGExTruncateMode::Round" },
		{ "Round.ToolTip", "Round" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTruncateMode::None", (int64)EPCGExTruncateMode::None },
		{ "EPCGExTruncateMode::Round", (int64)EPCGExTruncateMode::Round },
		{ "EPCGExTruncateMode::Ceil", (int64)EPCGExTruncateMode::Ceil },
		{ "EPCGExTruncateMode::Floor", (int64)EPCGExTruncateMode::Floor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTruncateMode",
	"EPCGExTruncateMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExTruncateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTruncateMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTruncateMode.InnerSingleton;
}
// ********** End Enum EPCGExTruncateMode **********************************************************

// ********** Begin Enum EPCGExIntersectionStrictness **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExIntersectionStrictness;
static UEnum* EPCGExIntersectionStrictness_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExIntersectionStrictness.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExIntersectionStrictness.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExIntersectionStrictness"));
	}
	return Z_Registration_Info_UEnum_EPCGExIntersectionStrictness.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIntersectionStrictness>()
{
	return EPCGExIntersectionStrictness_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Loose.DisplayName", "Loose" },
		{ "Loose.Name", "EPCGExIntersectionStrictness::Loose" },
		{ "Loose.ToolTip", "Consider intersections only through segment/segment distance." },
		{ "MainA.DisplayName", "Strict on Main A" },
		{ "MainA.Name", "EPCGExIntersectionStrictness::MainA" },
		{ "MainA.ToolTip", "Intersections located on main segment' start point are considered invalid." },
		{ "MainB.DisplayName", "Strict on Main B" },
		{ "MainB.Name", "EPCGExIntersectionStrictness::MainB" },
		{ "MainB.ToolTip", "Intersections located on main segment' end point are considered invalid." },
		{ "ModuleRelativePath", "Public/PCGExMath.h" },
		{ "OtherA.DisplayName", "Strict on Other A" },
		{ "OtherA.Name", "EPCGExIntersectionStrictness::OtherA" },
		{ "OtherA.ToolTip", "Intersections located on end segment' start point are considered invalid." },
		{ "OtherB.DisplayName", "Strict on Other B" },
		{ "OtherB.Name", "EPCGExIntersectionStrictness::OtherB" },
		{ "OtherB.ToolTip", "Intersections located on end segment' end point are considered invalid." },
		{ "Strict.Name", "EPCGExIntersectionStrictness::Strict" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExIntersectionStrictness::Loose", (int64)EPCGExIntersectionStrictness::Loose },
		{ "EPCGExIntersectionStrictness::MainA", (int64)EPCGExIntersectionStrictness::MainA },
		{ "EPCGExIntersectionStrictness::MainB", (int64)EPCGExIntersectionStrictness::MainB },
		{ "EPCGExIntersectionStrictness::OtherA", (int64)EPCGExIntersectionStrictness::OtherA },
		{ "EPCGExIntersectionStrictness::OtherB", (int64)EPCGExIntersectionStrictness::OtherB },
		{ "EPCGExIntersectionStrictness::Strict", (int64)EPCGExIntersectionStrictness::Strict },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExIntersectionStrictness",
	"EPCGExIntersectionStrictness",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness()
{
	if (!Z_Registration_Info_UEnum_EPCGExIntersectionStrictness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExIntersectionStrictness.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionStrictness_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExIntersectionStrictness.InnerSingleton;
}
// ********** End Enum EPCGExIntersectionStrictness ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExIndexSafety_StaticEnum, TEXT("EPCGExIndexSafety"), &Z_Registration_Info_UEnum_EPCGExIndexSafety, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 122057320U) },
		{ EPCGExTruncateMode_StaticEnum, TEXT("EPCGExTruncateMode"), &Z_Registration_Info_UEnum_EPCGExTruncateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3854127603U) },
		{ EPCGExIntersectionStrictness_StaticEnum, TEXT("EPCGExIntersectionStrictness"), &Z_Registration_Info_UEnum_EPCGExIntersectionStrictness, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3273367248U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMath_h__Script_PCGExtendedToolkit_3768586088{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExMath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
