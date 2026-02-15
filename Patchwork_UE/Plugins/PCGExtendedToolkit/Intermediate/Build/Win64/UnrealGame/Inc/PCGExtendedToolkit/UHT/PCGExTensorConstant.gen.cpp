// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorConstant.h"
#include "Transform/Tensors/PCGExTensor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorConstant() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorConstantSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorConstantSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorConstantFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorConstantFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConstantConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorConstantConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorConstantConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorConstantConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorConstantConfig constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorConstantConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorConstantConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorConstantConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorConstantConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorConstantConfig;
class UScriptStruct* FPCGExTensorConstantConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorConstantConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorConstantConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorConstantConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorConstantConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorConstantConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorConstantConfig Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorConstantConfig, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorConstantConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorConstantConfig",
	Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::PropPointers),
	sizeof(FPCGExTensorConstantConfig),
	alignof(FPCGExTensorConstantConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConstantConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorConstantConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorConstantConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorConstantConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorConstantConfig ******************************************

// ********** Begin Class UPCGExTensorConstantFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorConstantFactory;
UClass* UPCGExTensorConstantFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorConstantFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorConstantFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorConstantFactory"),
			Z_Registration_Info_UClass_UPCGExTensorConstantFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorConstantFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorConstantFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorConstantFactory_NoRegister()
{
	return UPCGExTensorConstantFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorConstantFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorConstant.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorConstantFactory constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorConstantFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorConstantFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorConstantFactory_Statics

// ********** Begin Class UPCGExTensorConstantFactory Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorConstantFactory, Config), Z_Construct_UScriptStruct_FPCGExTensorConstantConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 662428241
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorConstantFactory, Constant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::NewProp_Constant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorConstantFactory Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::ClassParams = {
	&UPCGExTensorConstantFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorConstantFactory::StaticRegisterNativesUPCGExTensorConstantFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorConstantFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorConstantFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorConstantFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorConstantFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorConstantFactory.OuterSingleton;
}
UPCGExTensorConstantFactory::UPCGExTensorConstantFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorConstantFactory);
UPCGExTensorConstantFactory::~UPCGExTensorConstantFactory() {}
// ********** End Class UPCGExTensorConstantFactory ************************************************

// ********** Begin Class UPCGExCreateTensorConstantSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorConstantSettings;
UClass* UPCGExCreateTensorConstantSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorConstantSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorConstantSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorConstantSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorConstantSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorConstantSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorConstantSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorConstantSettings_NoRegister()
{
	return UPCGExCreateTensorConstantSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorConstant.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Potency_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mutations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor mutations settings. */" },
		{ "DisplayName", "Sampling Mutations" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tensor mutations settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Comment", "/** Tensor properties */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorConstant.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorConstantSettings constinit property declarations *******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TensorWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Potency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mutations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorConstantSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorConstantSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics

// ********** Begin Class UPCGExCreateTensorConstantSettings Property Definitions ******************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_TensorWeight = { "TensorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorConstantSettings, TensorWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorWeight_MetaData), NewProp_TensorWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorConstantSettings, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_Potency = { "Potency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorConstantSettings, Potency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Potency_MetaData), NewProp_Potency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_Mutations = { "Mutations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorConstantSettings, Mutations), Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mutations_MetaData), NewProp_Mutations_MetaData) }; // 115199747
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorConstantSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorConstantConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 662428241
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_TensorWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_Potency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_Mutations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorConstantSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::ClassParams = {
	&UPCGExCreateTensorConstantSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorConstantSettings::StaticRegisterNativesUPCGExCreateTensorConstantSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorConstantSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorConstantSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorConstantSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorConstantSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorConstantSettings.OuterSingleton;
}
UPCGExCreateTensorConstantSettings::UPCGExCreateTensorConstantSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorConstantSettings);
UPCGExCreateTensorConstantSettings::~UPCGExCreateTensorConstantSettings() {}
// ********** End Class UPCGExCreateTensorConstantSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorConstant_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorConstantConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorConstantConfig_Statics::NewStructOps, TEXT("PCGExTensorConstantConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorConstantConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorConstantConfig), 662428241U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorConstantFactory, UPCGExTensorConstantFactory::StaticClass, TEXT("UPCGExTensorConstantFactory"), &Z_Registration_Info_UClass_UPCGExTensorConstantFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorConstantFactory), 2866912858U) },
		{ Z_Construct_UClass_UPCGExCreateTensorConstantSettings, UPCGExCreateTensorConstantSettings::StaticClass, TEXT("UPCGExCreateTensorConstantSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorConstantSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorConstantSettings), 1539509908U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorConstant_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorConstant_h__Script_PCGExtendedToolkit_877077545{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorConstant_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorConstant_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorConstant_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorConstant_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
