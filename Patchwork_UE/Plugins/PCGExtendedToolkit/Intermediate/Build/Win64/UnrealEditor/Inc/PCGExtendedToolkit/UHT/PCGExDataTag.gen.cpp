// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PCGExDataTag.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDataTag() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSupportedTagValue ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSupportedTagValue;
static UEnum* EPCGExSupportedTagValue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSupportedTagValue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSupportedTagValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSupportedTagValue"));
	}
	return Z_Registration_Info_UEnum_EPCGExSupportedTagValue.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSupportedTagValue>()
{
	return EPCGExSupportedTagValue_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FloatingPoint.DisplayName", "Floating Point" },
		{ "FloatingPoint.Name", "EPCGExSupportedTagValue::FloatingPoint" },
		{ "FloatingPoint.ToolTip", "Double / float" },
		{ "Integer.DisplayName", "Integer" },
		{ "Integer.Name", "EPCGExSupportedTagValue::Integer" },
		{ "Integer.ToolTip", "Int32 / Int64" },
		{ "ModuleRelativePath", "Public/Data/PCGExDataTag.h" },
		{ "String.DisplayName", "String" },
		{ "String.Name", "EPCGExSupportedTagValue::String" },
		{ "String.ToolTip", "String" },
		{ "Vector.DisplayName", "Vector" },
		{ "Vector.Name", "EPCGExSupportedTagValue::Vector" },
		{ "Vector.ToolTip", "Vector" },
		{ "Vector2.DisplayName", "Vector 2D" },
		{ "Vector2.Name", "EPCGExSupportedTagValue::Vector2" },
		{ "Vector2.ToolTip", "Vector 2D" },
		{ "Vector4.DisplayName", "Vector 4" },
		{ "Vector4.Name", "EPCGExSupportedTagValue::Vector4" },
		{ "Vector4.ToolTip", "Vector 4" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSupportedTagValue::Integer", (int64)EPCGExSupportedTagValue::Integer },
		{ "EPCGExSupportedTagValue::FloatingPoint", (int64)EPCGExSupportedTagValue::FloatingPoint },
		{ "EPCGExSupportedTagValue::String", (int64)EPCGExSupportedTagValue::String },
		{ "EPCGExSupportedTagValue::Vector2", (int64)EPCGExSupportedTagValue::Vector2 },
		{ "EPCGExSupportedTagValue::Vector", (int64)EPCGExSupportedTagValue::Vector },
		{ "EPCGExSupportedTagValue::Vector4", (int64)EPCGExSupportedTagValue::Vector4 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSupportedTagValue",
	"EPCGExSupportedTagValue",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue()
{
	if (!Z_Registration_Info_UEnum_EPCGExSupportedTagValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSupportedTagValue.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSupportedTagValue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSupportedTagValue.InnerSingleton;
}
// ********** End Enum EPCGExSupportedTagValue *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataTag_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSupportedTagValue_StaticEnum, TEXT("EPCGExSupportedTagValue"), &Z_Registration_Info_UEnum_EPCGExSupportedTagValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2400971398U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataTag_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataTag_h__Script_PCGExtendedToolkit_386868343{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataTag_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExDataTag_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
