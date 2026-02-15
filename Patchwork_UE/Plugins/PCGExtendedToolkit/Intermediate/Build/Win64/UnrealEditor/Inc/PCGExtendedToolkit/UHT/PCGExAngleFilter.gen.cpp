// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExAngleFilter.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAngleFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAngleFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAngleFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAngleFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAngleFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAngleFilterConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAngleFilterMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAngleFilterMode;
static UEnum* EPCGExAngleFilterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAngleFilterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAngleFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAngleFilterMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExAngleFilterMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAngleFilterMode>()
{
	return EPCGExAngleFilterMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Curvature.DisplayName", "Curvature" },
		{ "Curvature.Name", "EPCGExAngleFilterMode::Curvature" },
		{ "Curvature.Tooltip", "Check against the dot product of (Prev to Current) -> (Current to Next)" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
		{ "Spread.DisplayName", "Spread" },
		{ "Spread.Name", "EPCGExAngleFilterMode::Spread" },
		{ "Spread.Tooltip", "Check against the dot product of (Current to Prev) -> (Current to Next)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAngleFilterMode::Curvature", (int64)EPCGExAngleFilterMode::Curvature },
		{ "EPCGExAngleFilterMode::Spread", (int64)EPCGExAngleFilterMode::Spread },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAngleFilterMode",
	"EPCGExAngleFilterMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExAngleFilterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAngleFilterMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAngleFilterMode.InnerSingleton;
}
// ********** End Enum EPCGExAngleFilterMode *******************************************************

// ********** Begin ScriptStruct FPCGExAngleFilterConfig *******************************************
struct Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAngleFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAngleFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter mode */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Filter mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPointFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What should this filter return when dealing with first points? (if the data doesn't have @Data.IsClosed = true, otherwise wraps) */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What should this filter return when dealing with first points? (if the data doesn't have @Data.IsClosed = true, otherwise wraps)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPointFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What should this filter return when dealing with last points? (if the data doesn't have @Data.IsClosed = true, otherwise wraps) */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What should this filter return when dealing with last points? (if the data doesn't have @Data.IsClosed = true, otherwise wraps)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Dot comparison settings */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot comparison settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the result of the filter should be inverted or not. Note that this will also invert fallback results! */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether the result of the filter should be inverted or not. Note that this will also invert fallback results!" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAngleFilterConfig constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FirstPointFallback_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FirstPointFallback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastPointFallback_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastPointFallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DotComparisonDetails;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAngleFilterConfig constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAngleFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAngleFilterConfig;
class UScriptStruct* FPCGExAngleFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAngleFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAngleFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAngleFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAngleFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAngleFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAngleFilterConfig Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAngleFilterConfig, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAngleFilterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 583979270
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_FirstPointFallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_FirstPointFallback = { "FirstPointFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAngleFilterConfig, FirstPointFallback), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPointFallback_MetaData), NewProp_FirstPointFallback_MetaData) }; // 3927627996
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_LastPointFallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_LastPointFallback = { "LastPointFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAngleFilterConfig, LastPointFallback), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPointFallback_MetaData), NewProp_LastPointFallback_MetaData) }; // 3927627996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_DotComparisonDetails = { "DotComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAngleFilterConfig, DotComparisonDetails), Z_Construct_UScriptStruct_FPCGExDotComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotComparisonDetails_MetaData), NewProp_DotComparisonDetails_MetaData) }; // 1550145757
void Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExAngleFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAngleFilterConfig), &Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_FirstPointFallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_FirstPointFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_LastPointFallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_LastPointFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_DotComparisonDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAngleFilterConfig Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAngleFilterConfig",
	Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::PropPointers),
	sizeof(FPCGExAngleFilterConfig),
	alignof(FPCGExAngleFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAngleFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAngleFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAngleFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAngleFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAngleFilterConfig *********************************************

// ********** Begin Class UPCGExAngleFilterFactory *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAngleFilterFactory;
UClass* UPCGExAngleFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExAngleFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExAngleFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAngleFilterFactory"),
			Z_Registration_Info_UClass_UPCGExAngleFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExAngleFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExAngleFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAngleFilterFactory_NoRegister()
{
	return UPCGExAngleFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAngleFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExAngleFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAngleFilterFactory constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAngleFilterFactory constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAngleFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAngleFilterFactory_Statics

// ********** Begin Class UPCGExAngleFilterFactory Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAngleFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExAngleFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1118333196
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAngleFilterFactory Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::ClassParams = {
	&UPCGExAngleFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExAngleFilterFactory::StaticRegisterNativesUPCGExAngleFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExAngleFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExAngleFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAngleFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExAngleFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAngleFilterFactory.OuterSingleton;
}
UPCGExAngleFilterFactory::UPCGExAngleFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAngleFilterFactory);
UPCGExAngleFilterFactory::~UPCGExAngleFilterFactory() {}
// ********** End Class UPCGExAngleFilterFactory ***************************************************

// ********** Begin Class UPCGExAngleFilterProviderSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAngleFilterProviderSettings;
UClass* UPCGExAngleFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAngleFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExAngleFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAngleFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExAngleFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAngleFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExAngleFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAngleFilterProviderSettings_NoRegister()
{
	return UPCGExAngleFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExAngleFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/self-comparisons/numeric-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExAngleFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAngleFilterProviderSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAngleFilterProviderSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAngleFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics

// ********** Begin Class UPCGExAngleFilterProviderSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAngleFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExAngleFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1118333196
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAngleFilterProviderSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::ClassParams = {
	&UPCGExAngleFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExAngleFilterProviderSettings::StaticRegisterNativesUPCGExAngleFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAngleFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAngleFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAngleFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExAngleFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAngleFilterProviderSettings.OuterSingleton;
}
UPCGExAngleFilterProviderSettings::UPCGExAngleFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAngleFilterProviderSettings);
UPCGExAngleFilterProviderSettings::~UPCGExAngleFilterProviderSettings() {}
// ********** End Class UPCGExAngleFilterProviderSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAngleFilterMode_StaticEnum, TEXT("EPCGExAngleFilterMode"), &Z_Registration_Info_UEnum_EPCGExAngleFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 583979270U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAngleFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExAngleFilterConfig_Statics::NewStructOps, TEXT("PCGExAngleFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExAngleFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAngleFilterConfig), 1118333196U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAngleFilterFactory, UPCGExAngleFilterFactory::StaticClass, TEXT("UPCGExAngleFilterFactory"), &Z_Registration_Info_UClass_UPCGExAngleFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAngleFilterFactory), 2727276352U) },
		{ Z_Construct_UClass_UPCGExAngleFilterProviderSettings, UPCGExAngleFilterProviderSettings::StaticClass, TEXT("UPCGExAngleFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExAngleFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAngleFilterProviderSettings), 560922074U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_883879152{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExAngleFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
