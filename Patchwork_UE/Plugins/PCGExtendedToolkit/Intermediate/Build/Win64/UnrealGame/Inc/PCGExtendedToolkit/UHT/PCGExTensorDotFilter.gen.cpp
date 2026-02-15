// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExTensorDotFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "PCGExCompare.h"
#include "Transform/Tensors/PCGExTensorHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorDotFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorDotFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorDotFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorDotFilterConfig ***************************************
struct Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorDotFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorDotFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Vector operand A */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Vector operand A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformOperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Transform OperandA with the local point' transform */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Transform OperandA with the local point' transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Dot comparison settings */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Dot comparison settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorHandlerDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations. */" },
		{ "DisplayName", "Tensor Sampling Settings" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorDotFilterConfig constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandA;
	static void NewProp_bTransformOperandA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformOperandA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DotComparisonDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TensorHandlerDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorDotFilterConfig constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorDotFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorDotFilterConfig;
class UScriptStruct* FPCGExTensorDotFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorDotFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorDotFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorDotFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorDotFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorDotFilterConfig Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorDotFilterConfig, OperandA), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_bTransformOperandA_SetBit(void* Obj)
{
	((FPCGExTensorDotFilterConfig*)Obj)->bTransformOperandA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_bTransformOperandA = { "bTransformOperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorDotFilterConfig), &Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_bTransformOperandA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformOperandA_MetaData), NewProp_bTransformOperandA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_DotComparisonDetails = { "DotComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorDotFilterConfig, DotComparisonDetails), Z_Construct_UScriptStruct_FPCGExDotComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotComparisonDetails_MetaData), NewProp_DotComparisonDetails_MetaData) }; // 1550145757
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_TensorHandlerDetails = { "TensorHandlerDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorDotFilterConfig, TensorHandlerDetails), Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorHandlerDetails_MetaData), NewProp_TensorHandlerDetails_MetaData) }; // 2686898823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_bTransformOperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_DotComparisonDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewProp_TensorHandlerDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorDotFilterConfig Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTensorDotFilterConfig",
	Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::PropPointers),
	sizeof(FPCGExTensorDotFilterConfig),
	alignof(FPCGExTensorDotFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorDotFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorDotFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorDotFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorDotFilterConfig *****************************************

// ********** Begin Class UPCGExTensorDotFilterFactory *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorDotFilterFactory;
UClass* UPCGExTensorDotFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorDotFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorDotFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorDotFilterFactory"),
			Z_Registration_Info_UClass_UPCGExTensorDotFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorDotFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorDotFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorDotFilterFactory_NoRegister()
{
	return UPCGExTensorDotFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExTensorDotFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorDotFilterFactory constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TensorFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TensorFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorDotFilterFactory constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorDotFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics

// ********** Begin Class UPCGExTensorDotFilterFactory Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorDotFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 462790818
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::NewProp_TensorFactories_Inner = { "TensorFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::NewProp_TensorFactories = { "TensorFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorDotFilterFactory, TensorFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorFactories_MetaData), NewProp_TensorFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::NewProp_TensorFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::NewProp_TensorFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorDotFilterFactory Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::ClassParams = {
	&UPCGExTensorDotFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorDotFilterFactory::StaticRegisterNativesUPCGExTensorDotFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorDotFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorDotFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorDotFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorDotFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorDotFilterFactory.OuterSingleton;
}
UPCGExTensorDotFilterFactory::UPCGExTensorDotFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorDotFilterFactory);
UPCGExTensorDotFilterFactory::~UPCGExTensorDotFilterFactory() {}
// ********** End Class UPCGExTensorDotFilterFactory ***********************************************

// ********** Begin Class UPCGExTensorDotFilterProviderSettings ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorDotFilterProviderSettings;
UClass* UPCGExTensorDotFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorDotFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExTensorDotFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorDotFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExTensorDotFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTensorDotFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExTensorDotFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_NoRegister()
{
	return UPCGExTensorDotFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExTensorDotFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/math-checks/tensor-dot-product" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTensorDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorDotFilterProviderSettings constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorDotFilterProviderSettings constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorDotFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics

// ********** Begin Class UPCGExTensorDotFilterProviderSettings Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorDotFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 462790818
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorDotFilterProviderSettings Property Definitions *****************
UObject* (*const Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::ClassParams = {
	&UPCGExTensorDotFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExTensorDotFilterProviderSettings::StaticRegisterNativesUPCGExTensorDotFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorDotFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorDotFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorDotFilterProviderSettings.OuterSingleton;
}
UPCGExTensorDotFilterProviderSettings::UPCGExTensorDotFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorDotFilterProviderSettings);
UPCGExTensorDotFilterProviderSettings::~UPCGExTensorDotFilterProviderSettings() {}
// ********** End Class UPCGExTensorDotFilterProviderSettings **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTensorDotFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorDotFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorDotFilterConfig_Statics::NewStructOps, TEXT("PCGExTensorDotFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorDotFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorDotFilterConfig), 462790818U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorDotFilterFactory, UPCGExTensorDotFilterFactory::StaticClass, TEXT("UPCGExTensorDotFilterFactory"), &Z_Registration_Info_UClass_UPCGExTensorDotFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorDotFilterFactory), 1299900233U) },
		{ Z_Construct_UClass_UPCGExTensorDotFilterProviderSettings, UPCGExTensorDotFilterProviderSettings::StaticClass, TEXT("UPCGExTensorDotFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExTensorDotFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorDotFilterProviderSettings), 4139846696U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTensorDotFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTensorDotFilter_h__Script_PCGExtendedToolkit_2410044432{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTensorDotFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTensorDotFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTensorDotFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTensorDotFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
