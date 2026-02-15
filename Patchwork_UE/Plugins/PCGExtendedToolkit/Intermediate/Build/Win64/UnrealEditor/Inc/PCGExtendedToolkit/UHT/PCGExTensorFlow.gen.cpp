// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorFlow.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorFlow() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorFlowSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorFlowSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFlowFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFlowFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorFlowConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorFlowConfig ********************************************
struct Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorFlowConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorFlowConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction type.*/" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Direction type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the direction from a local attribute.*/" },
		{ "DisplayName", "Direction (Attr)" },
		{ "EditCondition", "DirectionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the direction from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "DirectionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction axis, read from the input points' transform.*/" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "DirectionInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Direction axis, read from the input points' transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the direction is absolute or should be transformed by the owner' transform .*/" },
		{ "EditCondition", "DirectionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether the direction is absolute or should be transformed by the owner' transform ." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorFlowConfig constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionAttribute;
	static void NewProp_bInvertDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionConstant_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionTransform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorFlowConfig constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorFlowConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorFlowConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorFlowConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorFlowConfig;
class UScriptStruct* FPCGExTensorFlowConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorFlowConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorFlowConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorFlowConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorFlowConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorFlowConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorFlowConfig Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionInput = { "DirectionInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorFlowConfig, DirectionInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionInput_MetaData), NewProp_DirectionInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionAttribute = { "DirectionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorFlowConfig, DirectionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionAttribute_MetaData), NewProp_DirectionAttribute_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((FPCGExTensorFlowConfig*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorFlowConfig), &Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionConstant_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionConstant = { "DirectionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorFlowConfig, DirectionConstant), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionConstant_MetaData), NewProp_DirectionConstant_MetaData) }; // 1564008668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionTransform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionTransform = { "DirectionTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorFlowConfig, DirectionTransform), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionTransform_MetaData), NewProp_DirectionTransform_MetaData) }; // 1160352698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionConstant_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionTransform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewProp_DirectionTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorFlowConfig Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorFlowConfig",
	Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::PropPointers),
	sizeof(FPCGExTensorFlowConfig),
	alignof(FPCGExTensorFlowConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorFlowConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorFlowConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorFlowConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorFlowConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorFlowConfig **********************************************

// ********** Begin Class UPCGExTensorFlowFactory **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorFlowFactory;
UClass* UPCGExTensorFlowFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorFlowFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorFlowFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorFlowFactory"),
			Z_Registration_Info_UClass_UPCGExTensorFlowFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorFlowFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorFlowFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorFlowFactory_NoRegister()
{
	return UPCGExTensorFlowFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorFlowFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorFlow.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorFlowFactory constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorFlowFactory constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorFlowFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorFlowFactory_Statics

// ********** Begin Class UPCGExTensorFlowFactory Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorFlowFactory, Config), Z_Construct_UScriptStruct_FPCGExTensorFlowConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1049624317
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorFlowFactory Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::ClassParams = {
	&UPCGExTensorFlowFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorFlowFactory::StaticRegisterNativesUPCGExTensorFlowFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorFlowFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorFlowFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorFlowFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorFlowFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorFlowFactory.OuterSingleton;
}
UPCGExTensorFlowFactory::UPCGExTensorFlowFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorFlowFactory);
UPCGExTensorFlowFactory::~UPCGExTensorFlowFactory() {}
// ********** End Class UPCGExTensorFlowFactory ****************************************************

// ********** Begin Class UPCGExCreateTensorFlowSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorFlowSettings;
UClass* UPCGExCreateTensorFlowSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorFlowSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorFlowSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorFlowSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorFlowSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorFlowSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorFlowSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorFlowSettings_NoRegister()
{
	return UPCGExCreateTensorFlowSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorFlow.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-inertia-constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorFlowSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorFlowSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorFlowSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics

// ********** Begin Class UPCGExCreateTensorFlowSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorFlowSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorFlowConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1049624317
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorFlowSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::ClassParams = {
	&UPCGExCreateTensorFlowSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorFlowSettings::StaticRegisterNativesUPCGExCreateTensorFlowSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorFlowSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorFlowSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorFlowSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorFlowSettings.OuterSingleton;
}
UPCGExCreateTensorFlowSettings::UPCGExCreateTensorFlowSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorFlowSettings);
UPCGExCreateTensorFlowSettings::~UPCGExCreateTensorFlowSettings() {}
// ********** End Class UPCGExCreateTensorFlowSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorFlowConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics::NewStructOps, TEXT("PCGExTensorFlowConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorFlowConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorFlowConfig), 1049624317U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorFlowFactory, UPCGExTensorFlowFactory::StaticClass, TEXT("UPCGExTensorFlowFactory"), &Z_Registration_Info_UClass_UPCGExTensorFlowFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorFlowFactory), 4291341230U) },
		{ Z_Construct_UClass_UPCGExCreateTensorFlowSettings, UPCGExCreateTensorFlowSettings::StaticClass, TEXT("UPCGExCreateTensorFlowSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorFlowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorFlowSettings), 1492134216U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h__Script_PCGExtendedToolkit_476187377{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
