// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geometry/PCGExGeoPointBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGeoPointBox() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBoxCheckMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBoxCheckMode;
static UEnum* EPCGExBoxCheckMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoxCheckMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBoxCheckMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBoxCheckMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExBoxCheckMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBoxCheckMode>()
{
	return EPCGExBoxCheckMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.DisplayName", "Box" },
		{ "Box.Name", "EPCGExBoxCheckMode::Box" },
		{ "Box.Tooltip", "A box" },
		{ "ExpandedBox.DisplayName", "Expanded Box" },
		{ "ExpandedBox.Name", "EPCGExBoxCheckMode::ExpandedBox" },
		{ "ExpandedBox.Tooltip", "A box expanded by an amount" },
		{ "ExpandedSphere.DisplayName", "Expanded Sphere" },
		{ "ExpandedSphere.Name", "EPCGExBoxCheckMode::ExpandedSphere" },
		{ "ExpandedSphere.Tooltip", "A Sphere which radius is defined by the bound' extents size, expanded by an amount" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoPointBox.h" },
		{ "Sphere.DisplayName", "Sphere" },
		{ "Sphere.Name", "EPCGExBoxCheckMode::Sphere" },
		{ "Sphere.Tooltip", "Sphere which radius is defined by the bounds' extents size" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBoxCheckMode::Box", (int64)EPCGExBoxCheckMode::Box },
		{ "EPCGExBoxCheckMode::ExpandedBox", (int64)EPCGExBoxCheckMode::ExpandedBox },
		{ "EPCGExBoxCheckMode::Sphere", (int64)EPCGExBoxCheckMode::Sphere },
		{ "EPCGExBoxCheckMode::ExpandedSphere", (int64)EPCGExBoxCheckMode::ExpandedSphere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBoxCheckMode",
	"EPCGExBoxCheckMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExBoxCheckMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBoxCheckMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBoxCheckMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBoxCheckMode.InnerSingleton;
}
// ********** End Enum EPCGExBoxCheckMode **********************************************************

// ********** Begin Enum EPCGExCutType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCutType;
static UEnum* EPCGExCutType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCutType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCutType"));
	}
	return Z_Registration_Info_UEnum_EPCGExCutType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCutType>()
{
	return EPCGExCutType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Entry.DisplayName", "Entry" },
		{ "Entry.Name", "EPCGExCutType::Entry" },
		{ "EntryNoExit.DisplayName", "Entry (no exit)" },
		{ "EntryNoExit.Name", "EPCGExCutType::EntryNoExit" },
		{ "Exit.DisplayName", "Exit" },
		{ "Exit.Name", "EPCGExCutType::Exit" },
		{ "ExitNoEntry.DisplayName", "Exit (no entry)" },
		{ "ExitNoEntry.Name", "EPCGExCutType::ExitNoEntry" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeoPointBox.h" },
		{ "Undefined.DisplayName", "Undefined" },
		{ "Undefined.Name", "EPCGExCutType::Undefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCutType::Undefined", (int64)EPCGExCutType::Undefined },
		{ "EPCGExCutType::Entry", (int64)EPCGExCutType::Entry },
		{ "EPCGExCutType::EntryNoExit", (int64)EPCGExCutType::EntryNoExit },
		{ "EPCGExCutType::Exit", (int64)EPCGExCutType::Exit },
		{ "EPCGExCutType::ExitNoEntry", (int64)EPCGExCutType::ExitNoEntry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCutType",
	"EPCGExCutType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType()
{
	if (!Z_Registration_Info_UEnum_EPCGExCutType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCutType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCutType.InnerSingleton;
}
// ********** End Enum EPCGExCutType ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoPointBox_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBoxCheckMode_StaticEnum, TEXT("EPCGExBoxCheckMode"), &Z_Registration_Info_UEnum_EPCGExBoxCheckMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1065862460U) },
		{ EPCGExCutType_StaticEnum, TEXT("EPCGExCutType"), &Z_Registration_Info_UEnum_EPCGExCutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1606751436U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoPointBox_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoPointBox_h__Script_PCGExtendedToolkit_2818692770{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoPointBox_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoPointBox_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
