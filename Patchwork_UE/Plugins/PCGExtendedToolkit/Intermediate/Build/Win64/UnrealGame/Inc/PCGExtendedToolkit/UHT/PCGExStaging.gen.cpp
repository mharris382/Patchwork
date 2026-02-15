// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetStaging/PCGExStaging.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExStaging() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAbsoluteRotationFlags ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAbsoluteRotationFlags;
static UEnum* EPCGExAbsoluteRotationFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAbsoluteRotationFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAbsoluteRotationFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAbsoluteRotationFlags"));
	}
	return Z_Registration_Info_UEnum_EPCGExAbsoluteRotationFlags.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAbsoluteRotationFlags>()
{
	return EPCGExAbsoluteRotationFlags_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExAbsoluteRotationFlags::All" },
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Component Flags" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExStaging.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPCGExAbsoluteRotationFlags::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "X.DisplayName", "Pitch" },
		{ "X.Name", "EPCGExAbsoluteRotationFlags::X" },
		{ "Y.DisplayName", "Yaw" },
		{ "Y.Name", "EPCGExAbsoluteRotationFlags::Y" },
		{ "Z.DisplayName", "Roll" },
		{ "Z.Name", "EPCGExAbsoluteRotationFlags::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAbsoluteRotationFlags::None", (int64)EPCGExAbsoluteRotationFlags::None },
		{ "EPCGExAbsoluteRotationFlags::X", (int64)EPCGExAbsoluteRotationFlags::X },
		{ "EPCGExAbsoluteRotationFlags::Y", (int64)EPCGExAbsoluteRotationFlags::Y },
		{ "EPCGExAbsoluteRotationFlags::Z", (int64)EPCGExAbsoluteRotationFlags::Z },
		{ "EPCGExAbsoluteRotationFlags::All", (int64)EPCGExAbsoluteRotationFlags::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAbsoluteRotationFlags",
	"EPCGExAbsoluteRotationFlags",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags()
{
	if (!Z_Registration_Info_UEnum_EPCGExAbsoluteRotationFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAbsoluteRotationFlags.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAbsoluteRotationFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAbsoluteRotationFlags.InnerSingleton;
}
// ********** End Enum EPCGExAbsoluteRotationFlags *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExStaging_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAbsoluteRotationFlags_StaticEnum, TEXT("EPCGExAbsoluteRotationFlags"), &Z_Registration_Info_UEnum_EPCGExAbsoluteRotationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2205637743U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExStaging_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExStaging_h__Script_PCGExtendedToolkit_1464509321{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExStaging_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExStaging_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
