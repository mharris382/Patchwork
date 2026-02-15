// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Layout/PCGExLayout.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExLayout() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBinSeedMode *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBinSeedMode;
static UEnum* EPCGExBinSeedMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBinSeedMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBinSeedMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBinSeedMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExBinSeedMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBinSeedMode>()
{
	return EPCGExBinSeedMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Layout/PCGExLayout.h" },
		{ "PositionAttribute.DisplayName", "Position (Attribute)" },
		{ "PositionAttribute.Name", "EPCGExBinSeedMode::PositionAttribute" },
		{ "PositionAttribute.ToolTip", "A per-bin world position" },
		{ "PositionConstant.DisplayName", "Position (Constant)" },
		{ "PositionConstant.Name", "EPCGExBinSeedMode::PositionConstant" },
		{ "PositionConstant.ToolTip", "A constant world position" },
		{ "UVWAttribute.DisplayName", "UVW" },
		{ "UVWAttribute.Name", "EPCGExBinSeedMode::UVWAttribute" },
		{ "UVWAttribute.ToolTip", "A per-bin bound-relative position" },
		{ "UVWConstant.DisplayName", "UVW (Constant)" },
		{ "UVWConstant.Name", "EPCGExBinSeedMode::UVWConstant" },
		{ "UVWConstant.ToolTip", "A constant bound-relative position" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBinSeedMode::UVWConstant", (int64)EPCGExBinSeedMode::UVWConstant },
		{ "EPCGExBinSeedMode::UVWAttribute", (int64)EPCGExBinSeedMode::UVWAttribute },
		{ "EPCGExBinSeedMode::PositionConstant", (int64)EPCGExBinSeedMode::PositionConstant },
		{ "EPCGExBinSeedMode::PositionAttribute", (int64)EPCGExBinSeedMode::PositionAttribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBinSeedMode",
	"EPCGExBinSeedMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExBinSeedMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBinSeedMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBinSeedMode.InnerSingleton;
}
// ********** End Enum EPCGExBinSeedMode ***********************************************************

// ********** Begin Enum EPCGExSpaceSplitMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSpaceSplitMode;
static UEnum* EPCGExSpaceSplitMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSpaceSplitMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSpaceSplitMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSpaceSplitMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSpaceSplitMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSpaceSplitMode>()
{
	return EPCGExSpaceSplitMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cone.DisplayName", "Cone" },
		{ "Cone.Hidden", "" },
		{ "Cone.Name", "EPCGExSpaceSplitMode::Cone" },
		{ "Cone.ToolTip", "..." },
		{ "ConeCross.DisplayName", "Cone (Cross Axis)" },
		{ "ConeCross.Hidden", "" },
		{ "ConeCross.Name", "EPCGExSpaceSplitMode::ConeCross" },
		{ "ConeCross.ToolTip", "..." },
		{ "EqualSplit.DisplayName", "Equal Split" },
		{ "EqualSplit.Name", "EPCGExSpaceSplitMode::EqualSplit" },
		{ "EqualSplit.ToolTip", "..." },
		{ "Minimal.DisplayName", "Minimal" },
		{ "Minimal.Name", "EPCGExSpaceSplitMode::Minimal" },
		{ "Minimal.ToolTip", "..." },
		{ "MinimalCross.DisplayName", "Minimal (Cross Axis)" },
		{ "MinimalCross.Name", "EPCGExSpaceSplitMode::MinimalCross" },
		{ "MinimalCross.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Layout/PCGExLayout.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSpaceSplitMode::Minimal", (int64)EPCGExSpaceSplitMode::Minimal },
		{ "EPCGExSpaceSplitMode::MinimalCross", (int64)EPCGExSpaceSplitMode::MinimalCross },
		{ "EPCGExSpaceSplitMode::EqualSplit", (int64)EPCGExSpaceSplitMode::EqualSplit },
		{ "EPCGExSpaceSplitMode::Cone", (int64)EPCGExSpaceSplitMode::Cone },
		{ "EPCGExSpaceSplitMode::ConeCross", (int64)EPCGExSpaceSplitMode::ConeCross },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSpaceSplitMode",
	"EPCGExSpaceSplitMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSpaceSplitMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSpaceSplitMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSpaceSplitMode.InnerSingleton;
}
// ********** End Enum EPCGExSpaceSplitMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExLayout_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBinSeedMode_StaticEnum, TEXT("EPCGExBinSeedMode"), &Z_Registration_Info_UEnum_EPCGExBinSeedMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2451387701U) },
		{ EPCGExSpaceSplitMode_StaticEnum, TEXT("EPCGExSpaceSplitMode"), &Z_Registration_Info_UEnum_EPCGExSpaceSplitMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3252117894U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExLayout_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExLayout_h__Script_PCGExtendedToolkit_3391950322{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExLayout_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExLayout_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
