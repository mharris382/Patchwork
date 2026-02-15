// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Constants/PCGExConstantsDefinitions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExConstantsDefinitions() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExConstantListID ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExConstantListID;
static UEnum* EPCGExConstantListID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExConstantListID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExConstantListID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExConstantListID"));
	}
	return Z_Registration_Info_UEnum_EPCGExConstantListID.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExConstantListID>()
{
	return EPCGExConstantListID_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ADDITIONAL_NUMERICS.Comment", "// Additional numerics\n" },
		{ "ADDITIONAL_NUMERICS.Hidden", "" },
		{ "ADDITIONAL_NUMERICS.Name", "EPCGExConstantListID::ADDITIONAL_NUMERICS" },
		{ "ADDITIONAL_NUMERICS.ToolTip", "Additional numerics" },
		{ "ADDITIONAL_VECTORS.Comment", "// Additional vectors\n" },
		{ "ADDITIONAL_VECTORS.Hidden", "" },
		{ "ADDITIONAL_VECTORS.Name", "EPCGExConstantListID::ADDITIONAL_VECTORS" },
		{ "ADDITIONAL_VECTORS.ToolTip", "Additional vectors" },
		{ "Angles.Name", "EPCGExConstantListID::Angles" },
		{ "BlueprintType", "true" },
		{ "Booleans.Comment", "// Booleans\n" },
		{ "Booleans.DisplayName", "True and False" },
		{ "Booleans.Name", "EPCGExConstantListID::Booleans" },
		{ "Booleans.ToolTip", "Booleans" },
		{ "Comment", "// An enum used to identify the constants in the namespace below. This is perhaps a slightly messy way of doing things,\n// but it means we can use PCGMetadataElementCommon::FillPreconfiguredSettingsInfoFromEnum to create different nodes\n// for each.\n" },
		{ "FalseBool.DisplayName", "False" },
		{ "FalseBool.Name", "EPCGExConstantListID::FalseBool" },
		{ "ForwardVector.DisplayName", "Forward Vector" },
		{ "ForwardVector.Name", "EPCGExConstantListID::ForwardVector" },
		{ "Half.DisplayName", "0.5" },
		{ "Half.Name", "EPCGExConstantListID::Half" },
		{ "HalfVector.DisplayName", "Half Vector" },
		{ "HalfVector.Name", "EPCGExConstantListID::HalfVector" },
		{ "Irrationals.Name", "EPCGExConstantListID::Irrationals" },
		{ "MAX_BOOL.Hidden", "" },
		{ "MAX_BOOL.Name", "EPCGExConstantListID::MAX_BOOL" },
		{ "MinusOne.DisplayName", "-1" },
		{ "MinusOne.Name", "EPCGExConstantListID::MinusOne" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantsDefinitions.h" },
		{ "One.DisplayName", "1" },
		{ "One.Name", "EPCGExConstantListID::One" },
		{ "OneVector.DisplayName", "Unit Vector" },
		{ "OneVector.Name", "EPCGExConstantListID::OneVector" },
		{ "RightVector.DisplayName", "Right Vector" },
		{ "RightVector.Name", "EPCGExConstantListID::RightVector" },
		{ "Tens.DisplayName", "Powers of 10" },
		{ "Tens.Name", "EPCGExConstantListID::Tens" },
		{ "ToolTip", "An enum used to identify the constants in the namespace below. This is perhaps a slightly messy way of doing things,\nbut it means we can use PCGMetadataElementCommon::FillPreconfiguredSettingsInfoFromEnum to create different nodes\nfor each." },
		{ "TrueBool.DisplayName", "True" },
		{ "TrueBool.Name", "EPCGExConstantListID::TrueBool" },
		{ "Two.DisplayName", "2" },
		{ "Two.Name", "EPCGExConstantListID::Two" },
		{ "Twos.DisplayName", "0.5 and 2" },
		{ "Twos.Name", "EPCGExConstantListID::Twos" },
		{ "UpVector.DisplayName", "Up Vector" },
		{ "UpVector.Name", "EPCGExConstantListID::UpVector" },
		{ "Vectors.Comment", "// Vectors\n" },
		{ "Vectors.DisplayName", "Axes" },
		{ "Vectors.Name", "EPCGExConstantListID::Vectors" },
		{ "Vectors.ToolTip", "Vectors" },
		{ "Zero.DisplayName", "0" },
		{ "Zero.Name", "EPCGExConstantListID::Zero" },
		{ "ZeroAndOne.Comment", "// Numeric constants\n// These go before the others, as there's more of them, and that way we can just access them by index.\n" },
		{ "ZeroAndOne.DisplayName", "0 and 1" },
		{ "ZeroAndOne.Name", "EPCGExConstantListID::ZeroAndOne" },
		{ "ZeroAndOne.ToolTip", "Numeric constants\nThese go before the others, as there's more of them, and that way we can just access them by index." },
		{ "ZeroVector.DisplayName", "Zero Vector" },
		{ "ZeroVector.Name", "EPCGExConstantListID::ZeroVector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExConstantListID::ZeroAndOne", (int64)EPCGExConstantListID::ZeroAndOne },
		{ "EPCGExConstantListID::MinusOne", (int64)EPCGExConstantListID::MinusOne },
		{ "EPCGExConstantListID::Twos", (int64)EPCGExConstantListID::Twos },
		{ "EPCGExConstantListID::Tens", (int64)EPCGExConstantListID::Tens },
		{ "EPCGExConstantListID::Irrationals", (int64)EPCGExConstantListID::Irrationals },
		{ "EPCGExConstantListID::Angles", (int64)EPCGExConstantListID::Angles },
		{ "EPCGExConstantListID::Zero", (int64)EPCGExConstantListID::Zero },
		{ "EPCGExConstantListID::One", (int64)EPCGExConstantListID::One },
		{ "EPCGExConstantListID::Vectors", (int64)EPCGExConstantListID::Vectors },
		{ "EPCGExConstantListID::Booleans", (int64)EPCGExConstantListID::Booleans },
		{ "EPCGExConstantListID::TrueBool", (int64)EPCGExConstantListID::TrueBool },
		{ "EPCGExConstantListID::FalseBool", (int64)EPCGExConstantListID::FalseBool },
		{ "EPCGExConstantListID::MAX_BOOL", (int64)EPCGExConstantListID::MAX_BOOL },
		{ "EPCGExConstantListID::ADDITIONAL_VECTORS", (int64)EPCGExConstantListID::ADDITIONAL_VECTORS },
		{ "EPCGExConstantListID::OneVector", (int64)EPCGExConstantListID::OneVector },
		{ "EPCGExConstantListID::ZeroVector", (int64)EPCGExConstantListID::ZeroVector },
		{ "EPCGExConstantListID::HalfVector", (int64)EPCGExConstantListID::HalfVector },
		{ "EPCGExConstantListID::UpVector", (int64)EPCGExConstantListID::UpVector },
		{ "EPCGExConstantListID::RightVector", (int64)EPCGExConstantListID::RightVector },
		{ "EPCGExConstantListID::ForwardVector", (int64)EPCGExConstantListID::ForwardVector },
		{ "EPCGExConstantListID::ADDITIONAL_NUMERICS", (int64)EPCGExConstantListID::ADDITIONAL_NUMERICS },
		{ "EPCGExConstantListID::Two", (int64)EPCGExConstantListID::Two },
		{ "EPCGExConstantListID::Half", (int64)EPCGExConstantListID::Half },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExConstantListID",
	"EPCGExConstantListID",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID()
{
	if (!Z_Registration_Info_UEnum_EPCGExConstantListID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExConstantListID.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExConstantListID.InnerSingleton;
}
// ********** End Enum EPCGExConstantListID ********************************************************

// ********** Begin Enum EPCGExConstantType ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExConstantType;
static UEnum* EPCGExConstantType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExConstantType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExConstantType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExConstantType"));
	}
	return Z_Registration_Info_UEnum_EPCGExConstantType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExConstantType>()
{
	return EPCGExConstantType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "EPCGExConstantType::Bool" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantsDefinitions.h" },
		{ "Number.Name", "EPCGExConstantType::Number" },
		{ "Vector.Name", "EPCGExConstantType::Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExConstantType::Number", (int64)EPCGExConstantType::Number },
		{ "EPCGExConstantType::Vector", (int64)EPCGExConstantType::Vector },
		{ "EPCGExConstantType::Bool", (int64)EPCGExConstantType::Bool },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExConstantType",
	"EPCGExConstantType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType()
{
	if (!Z_Registration_Info_UEnum_EPCGExConstantType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExConstantType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExConstantType.InnerSingleton;
}
// ********** End Enum EPCGExConstantType **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantsDefinitions_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExConstantListID_StaticEnum, TEXT("EPCGExConstantListID"), &Z_Registration_Info_UEnum_EPCGExConstantListID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1611283729U) },
		{ EPCGExConstantType_StaticEnum, TEXT("EPCGExConstantType"), &Z_Registration_Info_UEnum_EPCGExConstantType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2505068114U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantsDefinitions_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantsDefinitions_h__Script_PCGExtendedToolkit_364660168{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantsDefinitions_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantsDefinitions_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
