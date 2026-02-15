// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorSpin.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorSpin() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorSpinSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorSpinSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSpinFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSpinFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSpinConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorSpinConfig ********************************************
struct Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorSpinConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorSpinConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSpin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction type.*/" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSpin.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Direction type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the direction from a local attribute.*/" },
		{ "DisplayName", "Axis (Attr)" },
		{ "EditCondition", "AxisInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSpin.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the direction from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction axis, read from the input points' transform.*/" },
		{ "DisplayName", "Axis" },
		{ "EditCondition", "AxisInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSpin.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Direction axis, read from the input points' transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the direction is absolute or should be transformed by the owner' transform .*/" },
		{ "EditCondition", "AxisInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSpin.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether the direction is absolute or should be transformed by the owner' transform ." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorSpinConfig constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisConstant_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisTransform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorSpinConfig constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorSpinConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorSpinConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorSpinConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorSpinConfig;
class UScriptStruct* FPCGExTensorSpinConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSpinConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorSpinConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorSpinConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorSpinConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorSpinConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorSpinConfig Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisInput = { "AxisInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSpinConfig, AxisInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisInput_MetaData), NewProp_AxisInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisAttribute = { "AxisAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSpinConfig, AxisAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisAttribute_MetaData), NewProp_AxisAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisConstant_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisConstant = { "AxisConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSpinConfig, AxisConstant), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisConstant_MetaData), NewProp_AxisConstant_MetaData) }; // 1564008668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisTransform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisTransform = { "AxisTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSpinConfig, AxisTransform), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisTransform_MetaData), NewProp_AxisTransform_MetaData) }; // 1160352698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisConstant_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisTransform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewProp_AxisTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorSpinConfig Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorSpinConfig",
	Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::PropPointers),
	sizeof(FPCGExTensorSpinConfig),
	alignof(FPCGExTensorSpinConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSpinConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSpinConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorSpinConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorSpinConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorSpinConfig **********************************************

// ********** Begin Class UPCGExTensorSpinFactory **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorSpinFactory;
UClass* UPCGExTensorSpinFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorSpinFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorSpinFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorSpinFactory"),
			Z_Registration_Info_UClass_UPCGExTensorSpinFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorSpinFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorSpinFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorSpinFactory_NoRegister()
{
	return UPCGExTensorSpinFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorSpinFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorSpin.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSpin.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorSpinFactory constinit property declarations ******************
// ********** End Class UPCGExTensorSpinFactory constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorSpinFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorSpinFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorSpinFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSpinFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorSpinFactory_Statics::ClassParams = {
	&UPCGExTensorSpinFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSpinFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorSpinFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorSpinFactory::StaticRegisterNativesUPCGExTensorSpinFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorSpinFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorSpinFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorSpinFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorSpinFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorSpinFactory.OuterSingleton;
}
UPCGExTensorSpinFactory::UPCGExTensorSpinFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorSpinFactory);
UPCGExTensorSpinFactory::~UPCGExTensorSpinFactory() {}
// ********** End Class UPCGExTensorSpinFactory ****************************************************

// ********** Begin Class UPCGExCreateTensorSpinSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorSpinSettings;
UClass* UPCGExCreateTensorSpinSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorSpinSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorSpinSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorSpinSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorSpinSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorSpinSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorSpinSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorSpinSettings_NoRegister()
{
	return UPCGExCreateTensorSpinSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorSpin.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSpin.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-spin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSpin.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorSpinSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorSpinSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorSpinSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics

// ********** Begin Class UPCGExCreateTensorSpinSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorSpinSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorSpinConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 766960436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorSpinSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::ClassParams = {
	&UPCGExCreateTensorSpinSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorSpinSettings::StaticRegisterNativesUPCGExCreateTensorSpinSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorSpinSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorSpinSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorSpinSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorSpinSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorSpinSettings.OuterSingleton;
}
UPCGExCreateTensorSpinSettings::UPCGExCreateTensorSpinSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorSpinSettings);
UPCGExCreateTensorSpinSettings::~UPCGExCreateTensorSpinSettings() {}
// ********** End Class UPCGExCreateTensorSpinSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSpin_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorSpinConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorSpinConfig_Statics::NewStructOps, TEXT("PCGExTensorSpinConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorSpinConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorSpinConfig), 766960436U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorSpinFactory, UPCGExTensorSpinFactory::StaticClass, TEXT("UPCGExTensorSpinFactory"), &Z_Registration_Info_UClass_UPCGExTensorSpinFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorSpinFactory), 3824577955U) },
		{ Z_Construct_UClass_UPCGExCreateTensorSpinSettings, UPCGExCreateTensorSpinSettings::StaticClass, TEXT("UPCGExCreateTensorSpinSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorSpinSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorSpinSettings), 865649803U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSpin_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSpin_h__Script_PCGExtendedToolkit_1895652882{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSpin_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSpin_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSpin_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSpin_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
