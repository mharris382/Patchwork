// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorInertiaConstant.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorInertiaConstant() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorInertiaConstantFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorInertiaConstantConfig *********************************
struct Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorInertiaConstantConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorInertiaConstantConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetInertiaOnce_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will set a constant per-point inertia based on the original point transform */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will set a constant per-point inertia based on the original point transform" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorInertiaConstantConfig constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static void NewProp_bSetInertiaOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetInertiaOnce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorInertiaConstantConfig constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorInertiaConstantConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorInertiaConstantConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorInertiaConstantConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConstantConfig;
class UScriptStruct* FPCGExTensorInertiaConstantConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConstantConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConstantConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorInertiaConstantConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConstantConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorInertiaConstantConfig Property Definitions ************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorInertiaConstantConfig, Axis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) }; // 1564008668
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorInertiaConstantConfig, Offset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_bSetInertiaOnce_SetBit(void* Obj)
{
	((FPCGExTensorInertiaConstantConfig*)Obj)->bSetInertiaOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_bSetInertiaOnce = { "bSetInertiaOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorInertiaConstantConfig), &Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_bSetInertiaOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetInertiaOnce_MetaData), NewProp_bSetInertiaOnce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewProp_bSetInertiaOnce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorInertiaConstantConfig Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorInertiaConstantConfig",
	Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::PropPointers),
	sizeof(FPCGExTensorInertiaConstantConfig),
	alignof(FPCGExTensorInertiaConstantConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConstantConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConstantConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConstantConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorInertiaConstantConfig ***********************************

// ********** Begin Class UPCGExTensorInertiaConstantFactory ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorInertiaConstantFactory;
UClass* UPCGExTensorInertiaConstantFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorInertiaConstantFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorInertiaConstantFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorInertiaConstantFactory"),
			Z_Registration_Info_UClass_UPCGExTensorInertiaConstantFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorInertiaConstantFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorInertiaConstantFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_NoRegister()
{
	return UPCGExTensorInertiaConstantFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorInertiaConstantFactory constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorInertiaConstantFactory constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorInertiaConstantFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics

// ********** Begin Class UPCGExTensorInertiaConstantFactory Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorInertiaConstantFactory, Config), Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1416162938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorInertiaConstantFactory Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::ClassParams = {
	&UPCGExTensorInertiaConstantFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorInertiaConstantFactory::StaticRegisterNativesUPCGExTensorInertiaConstantFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorInertiaConstantFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorInertiaConstantFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorInertiaConstantFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorInertiaConstantFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorInertiaConstantFactory.OuterSingleton;
}
UPCGExTensorInertiaConstantFactory::UPCGExTensorInertiaConstantFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorInertiaConstantFactory);
UPCGExTensorInertiaConstantFactory::~UPCGExTensorInertiaConstantFactory() {}
// ********** End Class UPCGExTensorInertiaConstantFactory *****************************************

// ********** Begin Class UPCGExCreateTensorInertiaConstantSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorInertiaConstantSettings;
UClass* UPCGExCreateTensorInertiaConstantSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorInertiaConstantSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorInertiaConstantSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorInertiaConstantSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorInertiaConstantSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorInertiaConstantSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorInertiaConstantSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_NoRegister()
{
	return UPCGExCreateTensorInertiaConstantSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-inertia-constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Potency_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetInertiaOnce_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will set a constant per-point inertia based on the original point transform */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will set a constant per-point inertia based on the original point transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Comment", "/** Tensor properties */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorInertiaConstant.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorInertiaConstantSettings constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TensorWeight;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Potency;
	static void NewProp_bSetInertiaOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetInertiaOnce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorInertiaConstantSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorInertiaConstantSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics

// ********** Begin Class UPCGExCreateTensorInertiaConstantSettings Property Definitions ***********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorInertiaConstantSettings, Axis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) }; // 1564008668
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorInertiaConstantSettings, Offset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_TensorWeight = { "TensorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorInertiaConstantSettings, TensorWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorWeight_MetaData), NewProp_TensorWeight_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Potency = { "Potency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorInertiaConstantSettings, Potency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Potency_MetaData), NewProp_Potency_MetaData) };
void Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_bSetInertiaOnce_SetBit(void* Obj)
{
	((UPCGExCreateTensorInertiaConstantSettings*)Obj)->bSetInertiaOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_bSetInertiaOnce = { "bSetInertiaOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCreateTensorInertiaConstantSettings), &Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_bSetInertiaOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetInertiaOnce_MetaData), NewProp_bSetInertiaOnce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorInertiaConstantSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1416162938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_TensorWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Potency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_bSetInertiaOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorInertiaConstantSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::ClassParams = {
	&UPCGExCreateTensorInertiaConstantSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorInertiaConstantSettings::StaticRegisterNativesUPCGExCreateTensorInertiaConstantSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorInertiaConstantSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorInertiaConstantSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorInertiaConstantSettings.OuterSingleton;
}
UPCGExCreateTensorInertiaConstantSettings::UPCGExCreateTensorInertiaConstantSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorInertiaConstantSettings);
UPCGExCreateTensorInertiaConstantSettings::~UPCGExCreateTensorInertiaConstantSettings() {}
// ********** End Class UPCGExCreateTensorInertiaConstantSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertiaConstant_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorInertiaConstantConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorInertiaConstantConfig_Statics::NewStructOps, TEXT("PCGExTensorInertiaConstantConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorInertiaConstantConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorInertiaConstantConfig), 1416162938U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorInertiaConstantFactory, UPCGExTensorInertiaConstantFactory::StaticClass, TEXT("UPCGExTensorInertiaConstantFactory"), &Z_Registration_Info_UClass_UPCGExTensorInertiaConstantFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorInertiaConstantFactory), 2967112888U) },
		{ Z_Construct_UClass_UPCGExCreateTensorInertiaConstantSettings, UPCGExCreateTensorInertiaConstantSettings::StaticClass, TEXT("UPCGExCreateTensorInertiaConstantSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorInertiaConstantSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorInertiaConstantSettings), 194896367U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertiaConstant_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertiaConstant_h__Script_PCGExtendedToolkit_4234655860{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertiaConstant_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertiaConstant_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertiaConstant_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorInertiaConstant_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
