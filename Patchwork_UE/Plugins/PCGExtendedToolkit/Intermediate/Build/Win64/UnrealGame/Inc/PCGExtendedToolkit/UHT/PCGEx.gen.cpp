// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEx.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGEx() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExOptionState *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOptionState;
static UEnum* EPCGExOptionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOptionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOptionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOptionState"));
	}
	return Z_Registration_Info_UEnum_EPCGExOptionState.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOptionState>()
{
	return EPCGExOptionState_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.ActionIcon", "Default" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EPCGExOptionState::Default" },
		{ "Default.Tooltip", "Uses the default value selected in settings" },
		{ "Disabled.ActionIcon", "Disabled" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EPCGExOptionState::Disabled" },
		{ "Disabled.Tooltip", "Option is disabled, if supported." },
		{ "Enabled.ActionIcon", "Enabled" },
		{ "Enabled.DisplayName", "Enabled" },
		{ "Enabled.Name", "EPCGExOptionState::Enabled" },
		{ "Enabled.Tooltip", "Option is enabled, if supported." },
		{ "ModuleRelativePath", "Public/PCGEx.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOptionState::Default", (int64)EPCGExOptionState::Default },
		{ "EPCGExOptionState::Enabled", (int64)EPCGExOptionState::Enabled },
		{ "EPCGExOptionState::Disabled", (int64)EPCGExOptionState::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOptionState",
	"EPCGExOptionState",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState()
{
	if (!Z_Registration_Info_UEnum_EPCGExOptionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOptionState.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOptionState.InnerSingleton;
}
// ********** End Enum EPCGExOptionState ***********************************************************

// ********** Begin Enum EPCGExAttributeSetPackingMode *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAttributeSetPackingMode;
static UEnum* EPCGExAttributeSetPackingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeSetPackingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAttributeSetPackingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAttributeSetPackingMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeSetPackingMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeSetPackingMode>()
{
	return EPCGExAttributeSetPackingMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Merged.DisplayName", "Merged" },
		{ "Merged.Name", "EPCGExAttributeSetPackingMode::Merged" },
		{ "Merged.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/PCGEx.h" },
		{ "PerInput.DisplayName", "Per Input" },
		{ "PerInput.Name", "EPCGExAttributeSetPackingMode::PerInput" },
		{ "PerInput.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAttributeSetPackingMode::PerInput", (int64)EPCGExAttributeSetPackingMode::PerInput },
		{ "EPCGExAttributeSetPackingMode::Merged", (int64)EPCGExAttributeSetPackingMode::Merged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAttributeSetPackingMode",
	"EPCGExAttributeSetPackingMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttributeSetPackingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAttributeSetPackingMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttributeSetPackingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAttributeSetPackingMode.InnerSingleton;
}
// ********** End Enum EPCGExAttributeSetPackingMode ***********************************************

// ********** Begin Enum EPCGExWinding *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExWinding;
static UEnum* EPCGExWinding_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExWinding.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExWinding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExWinding"));
	}
	return Z_Registration_Info_UEnum_EPCGExWinding.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExWinding>()
{
	return EPCGExWinding_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clockwise.ActionIcon", "CW" },
		{ "Clockwise.DisplayName", "Clockwise" },
		{ "Clockwise.Name", "EPCGExWinding::Clockwise" },
		{ "Clockwise.ToolTip", "Clockwise" },
		{ "CounterClockwise.ActionIcon", "CCW" },
		{ "CounterClockwise.DisplayName", "Counter Clockwise" },
		{ "CounterClockwise.Name", "EPCGExWinding::CounterClockwise" },
		{ "CounterClockwise.ToolTip", "Counter Clockwise" },
		{ "ModuleRelativePath", "Public/PCGEx.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExWinding::Clockwise", (int64)EPCGExWinding::Clockwise },
		{ "EPCGExWinding::CounterClockwise", (int64)EPCGExWinding::CounterClockwise },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExWinding",
	"EPCGExWinding",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding()
{
	if (!Z_Registration_Info_UEnum_EPCGExWinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExWinding.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExWinding.InnerSingleton;
}
// ********** End Enum EPCGExWinding ***************************************************************

// ********** Begin Enum EPCGExWindingMutation *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExWindingMutation;
static UEnum* EPCGExWindingMutation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExWindingMutation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExWindingMutation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExWindingMutation"));
	}
	return Z_Registration_Info_UEnum_EPCGExWindingMutation.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExWindingMutation>()
{
	return EPCGExWindingMutation_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clockwise.ActionIcon", "CW" },
		{ "Clockwise.DisplayName", "Clockwise" },
		{ "Clockwise.Name", "EPCGExWindingMutation::Clockwise" },
		{ "Clockwise.ToolTip", "Clockwise" },
		{ "CounterClockwise.ActionIcon", "CCW" },
		{ "CounterClockwise.DisplayName", "CounterClockwise" },
		{ "CounterClockwise.Name", "EPCGExWindingMutation::CounterClockwise" },
		{ "CounterClockwise.ToolTip", "Counter Clockwise" },
		{ "ModuleRelativePath", "Public/PCGEx.h" },
		{ "Unchanged.ActionIcon", "Unchanged" },
		{ "Unchanged.DisplayName", "Unchanged" },
		{ "Unchanged.Name", "EPCGExWindingMutation::Unchanged" },
		{ "Unchanged.ToolTip", "Unchanged" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExWindingMutation::Unchanged", (int64)EPCGExWindingMutation::Unchanged },
		{ "EPCGExWindingMutation::Clockwise", (int64)EPCGExWindingMutation::Clockwise },
		{ "EPCGExWindingMutation::CounterClockwise", (int64)EPCGExWindingMutation::CounterClockwise },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExWindingMutation",
	"EPCGExWindingMutation",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation()
{
	if (!Z_Registration_Info_UEnum_EPCGExWindingMutation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExWindingMutation.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExWindingMutation.InnerSingleton;
}
// ********** End Enum EPCGExWindingMutation *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGEx_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExOptionState_StaticEnum, TEXT("EPCGExOptionState"), &Z_Registration_Info_UEnum_EPCGExOptionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2151781571U) },
		{ EPCGExAttributeSetPackingMode_StaticEnum, TEXT("EPCGExAttributeSetPackingMode"), &Z_Registration_Info_UEnum_EPCGExAttributeSetPackingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1840281174U) },
		{ EPCGExWinding_StaticEnum, TEXT("EPCGExWinding"), &Z_Registration_Info_UEnum_EPCGExWinding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 57580146U) },
		{ EPCGExWindingMutation_StaticEnum, TEXT("EPCGExWindingMutation"), &Z_Registration_Info_UEnum_EPCGExWindingMutation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4046642856U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGEx_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGEx_h__Script_PCGExtendedToolkit_399817692{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGEx_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGEx_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
