// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExRandom.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExRandom() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSeedComponents ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSeedComponents;
static UEnum* EPCGExSeedComponents_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSeedComponents.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSeedComponents.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSeedComponents"));
	}
	return Z_Registration_Info_UEnum_EPCGExSeedComponents.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSeedComponents>()
{
	return EPCGExSeedComponents_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Component.DisplayName", "Component" },
		{ "Component.Name", "EPCGExSeedComponents::Component" },
		{ "DisplayName", "[PCGEx] Seed Components" },
		{ "Local.DisplayName", "Local" },
		{ "Local.Name", "EPCGExSeedComponents::Local" },
		{ "ModuleRelativePath", "Public/PCGExRandom.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPCGExSeedComponents::None" },
		{ "Settings.DisplayName", "Settings" },
		{ "Settings.Name", "EPCGExSeedComponents::Settings" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSeedComponents::None", (int64)EPCGExSeedComponents::None },
		{ "EPCGExSeedComponents::Local", (int64)EPCGExSeedComponents::Local },
		{ "EPCGExSeedComponents::Settings", (int64)EPCGExSeedComponents::Settings },
		{ "EPCGExSeedComponents::Component", (int64)EPCGExSeedComponents::Component },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSeedComponents",
	"EPCGExSeedComponents",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents()
{
	if (!Z_Registration_Info_UEnum_EPCGExSeedComponents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSeedComponents.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSeedComponents_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSeedComponents.InnerSingleton;
}
// ********** End Enum EPCGExSeedComponents ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExRandom_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSeedComponents_StaticEnum, TEXT("EPCGExSeedComponents"), &Z_Registration_Info_UEnum_EPCGExSeedComponents, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2571120488U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExRandom_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExRandom_h__Script_PCGExtendedToolkit_2927856192{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExRandom_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExRandom_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
