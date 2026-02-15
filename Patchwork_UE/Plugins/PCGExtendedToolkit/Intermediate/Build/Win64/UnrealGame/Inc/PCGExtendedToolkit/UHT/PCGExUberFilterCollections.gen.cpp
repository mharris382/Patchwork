// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExUberFilterCollections.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExUberFilterCollections() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberFilterCollectionsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExUberFilterCollectionsMode *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExUberFilterCollectionsMode;
static UEnum* EPCGExUberFilterCollectionsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExUberFilterCollectionsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExUberFilterCollectionsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExUberFilterCollectionsMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExUberFilterCollectionsMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExUberFilterCollectionsMode>()
{
	return EPCGExUberFilterCollectionsMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExUberFilterCollectionsMode::All" },
		{ "All.ToolTip", "All points must pass the filters." },
		{ "Any.DisplayName", "Any" },
		{ "Any.Name", "EPCGExUberFilterCollectionsMode::Any" },
		{ "Any.ToolTip", "At least one point must pass the filter." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "Partial.DisplayName", "Partial" },
		{ "Partial.Name", "EPCGExUberFilterCollectionsMode::Partial" },
		{ "Partial.ToolTip", "A given amount of points must pass the filter." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExUberFilterCollectionsMode::All", (int64)EPCGExUberFilterCollectionsMode::All },
		{ "EPCGExUberFilterCollectionsMode::Any", (int64)EPCGExUberFilterCollectionsMode::Any },
		{ "EPCGExUberFilterCollectionsMode::Partial", (int64)EPCGExUberFilterCollectionsMode::Partial },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExUberFilterCollectionsMode",
	"EPCGExUberFilterCollectionsMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExUberFilterCollectionsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExUberFilterCollectionsMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExUberFilterCollectionsMode.InnerSingleton;
}
// ********** End Enum EPCGExUberFilterCollectionsMode *********************************************

// ********** Begin Class UPCGExUberFilterCollectionsSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExUberFilterCollectionsSettings;
UClass* UPCGExUberFilterCollectionsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExUberFilterCollectionsSettings;
	if (!Z_Registration_Info_UClass_UPCGExUberFilterCollectionsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExUberFilterCollectionsSettings"),
			Z_Registration_Info_UClass_UPCGExUberFilterCollectionsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExUberFilterCollectionsSettings,
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
	return Z_Registration_Info_UClass_UPCGExUberFilterCollectionsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_NoRegister()
{
	return UPCGExUberFilterCollectionsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExUberFilterCollections.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "PCGExNodeLibraryDoc", "filters/uber-filter-collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write result to point instead of split outputs */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write result to point instead of split outputs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Measure_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Partial value type */" },
		{ "EditCondition", "Mode == EPCGExUberFilterCollectionsMode::Partial" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Partial value type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Partial value comparison */" },
		{ "EditCondition", "Mode == EPCGExUberFilterCollectionsMode::Partial" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Partial value comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DblThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Partial value type */" },
		{ "EditCondition", "Mode == EPCGExUberFilterCollectionsMode::Partial && Measure == EPCGExMeanMeasure::Relative" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Partial value type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Partial value type */" },
		{ "EditCondition", "Mode == EPCGExUberFilterCollectionsMode::Partial && Measure == EPCGExMeanMeasure::Discrete" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Partial value type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the filter result */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilterCollections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Invert the filter result" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExUberFilterCollectionsSettings constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Measure_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Measure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DblThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bSwap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExUberFilterCollectionsSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExUberFilterCollectionsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics

// ********** Begin Class UPCGExUberFilterCollectionsSettings Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterCollectionsSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterCollectionsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3299440371
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Measure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Measure = { "Measure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterCollectionsSettings, Measure), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Measure_MetaData), NewProp_Measure_MetaData) }; // 356721050
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterCollectionsSettings, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_DblThreshold = { "DblThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterCollectionsSettings, DblThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DblThreshold_MetaData), NewProp_DblThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_IntThreshold = { "IntThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterCollectionsSettings, IntThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntThreshold_MetaData), NewProp_IntThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterCollectionsSettings, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_bSwap_SetBit(void* Obj)
{
	((UPCGExUberFilterCollectionsSettings*)Obj)->bSwap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_bSwap = { "bSwap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExUberFilterCollectionsSettings), &Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_bSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwap_MetaData), NewProp_bSwap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Measure_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Measure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_DblThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_IntThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::NewProp_bSwap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExUberFilterCollectionsSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::ClassParams = {
	&UPCGExUberFilterCollectionsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::Class_MetaDataParams)
};
void UPCGExUberFilterCollectionsSettings::StaticRegisterNativesUPCGExUberFilterCollectionsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExUberFilterCollectionsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExUberFilterCollectionsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExUberFilterCollectionsSettings.OuterSingleton, Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExUberFilterCollectionsSettings.OuterSingleton;
}
UPCGExUberFilterCollectionsSettings::UPCGExUberFilterCollectionsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExUberFilterCollectionsSettings);
UPCGExUberFilterCollectionsSettings::~UPCGExUberFilterCollectionsSettings() {}
// ********** End Class UPCGExUberFilterCollectionsSettings ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExUberFilterCollectionsMode_StaticEnum, TEXT("EPCGExUberFilterCollectionsMode"), &Z_Registration_Info_UEnum_EPCGExUberFilterCollectionsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3299440371U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExUberFilterCollectionsSettings, UPCGExUberFilterCollectionsSettings::StaticClass, TEXT("UPCGExUberFilterCollectionsSettings"), &Z_Registration_Info_UClass_UPCGExUberFilterCollectionsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExUberFilterCollectionsSettings), 1248710327U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h__Script_PCGExtendedToolkit_2068974702{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
