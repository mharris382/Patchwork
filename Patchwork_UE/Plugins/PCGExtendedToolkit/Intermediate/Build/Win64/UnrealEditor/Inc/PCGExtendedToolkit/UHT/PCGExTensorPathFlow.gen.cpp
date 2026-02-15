// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorPathFlow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorPathFlow() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPathFlowFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPathFlowFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFlowFactory();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorPathFlowConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorPathFlowConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorPathFlowConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathFlow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which point type to use. Shared amongst all points; if you want tight control, create a fully-fledged spline instead. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which point type to use. Shared amongst all points; if you want tight control, create a fully-fledged spline instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothLinear_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Smooth Linear" },
		{ "EditCondition", "PointType == EPCGExSplinePointTypeRedux::Linear" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathFlow.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Base radius of the spline. Will be scaled by control points' scale length */" },
		{ "DisplayAfter", "TensorWeight" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Base radius of the spline. Will be scaled by control points' scale length" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Which spline transform axis is to be used */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which spline transform axis is to be used" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorPathFlowConfig constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_PointType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PointType;
	static void NewProp_bSmoothLinear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothLinear;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorPathFlowConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorPathFlowConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorPathFlowConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorPathFlowConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorPathFlowConfig;
class UScriptStruct* FPCGExTensorPathFlowConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorPathFlowConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorPathFlowConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorPathFlowConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorPathFlowConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorPathFlowConfig Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_PointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_PointType = { "PointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorPathFlowConfig, PointType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointType_MetaData), NewProp_PointType_MetaData) }; // 1037731003
void Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_bSmoothLinear_SetBit(void* Obj)
{
	((FPCGExTensorPathFlowConfig*)Obj)->bSmoothLinear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_bSmoothLinear = { "bSmoothLinear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorPathFlowConfig), &Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_bSmoothLinear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothLinear_MetaData), NewProp_bSmoothLinear_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorPathFlowConfig, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_SplineDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_SplineDirection = { "SplineDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorPathFlowConfig, SplineDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineDirection_MetaData), NewProp_SplineDirection_MetaData) }; // 1564008668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_PointType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_PointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_bSmoothLinear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_SplineDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewProp_SplineDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorPathFlowConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorPathFlowConfig",
	Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::PropPointers),
	sizeof(FPCGExTensorPathFlowConfig),
	alignof(FPCGExTensorPathFlowConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorPathFlowConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorPathFlowConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorPathFlowConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorPathFlowConfig ******************************************

// ********** Begin Class UPCGExTensorPathFlowFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorPathFlowFactory;
UClass* UPCGExTensorPathFlowFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorPathFlowFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorPathFlowFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorPathFlowFactory"),
			Z_Registration_Info_UClass_UPCGExTensorPathFlowFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorPathFlowFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorPathFlowFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorPathFlowFactory_NoRegister()
{
	return UPCGExTensorPathFlowFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorPathFlowFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorPathFlow.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathFlow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorPathFlowFactory constinit property declarations **************
// ********** End Class UPCGExTensorPathFlowFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorPathFlowFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorPathFlowFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorPathFlowFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSplineFlowFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPathFlowFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorPathFlowFactory_Statics::ClassParams = {
	&UPCGExTensorPathFlowFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPathFlowFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorPathFlowFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorPathFlowFactory::StaticRegisterNativesUPCGExTensorPathFlowFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorPathFlowFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorPathFlowFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorPathFlowFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorPathFlowFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorPathFlowFactory.OuterSingleton;
}
UPCGExTensorPathFlowFactory::UPCGExTensorPathFlowFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorPathFlowFactory);
UPCGExTensorPathFlowFactory::~UPCGExTensorPathFlowFactory() {}
// ********** End Class UPCGExTensorPathFlowFactory ************************************************

// ********** Begin Class UPCGExCreateTensorPathFlowSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorPathFlowSettings;
UClass* UPCGExCreateTensorPathFlowSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorPathFlowSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorPathFlowSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorPathFlowSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorPathFlowSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorPathFlowSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorPathFlowSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_NoRegister()
{
	return UPCGExCreateTensorPathFlowSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorPathFlow.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathFlow.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-path-flow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathFlow.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorPathFlowSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorPathFlowSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorPathFlowSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics

// ********** Begin Class UPCGExCreateTensorPathFlowSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorPathFlowSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 448246962
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorPathFlowSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::ClassParams = {
	&UPCGExCreateTensorPathFlowSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorPathFlowSettings::StaticRegisterNativesUPCGExCreateTensorPathFlowSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorPathFlowSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorPathFlowSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorPathFlowSettings.OuterSingleton;
}
UPCGExCreateTensorPathFlowSettings::UPCGExCreateTensorPathFlowSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorPathFlowSettings);
UPCGExCreateTensorPathFlowSettings::~UPCGExCreateTensorPathFlowSettings() {}
// ********** End Class UPCGExCreateTensorPathFlowSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathFlow_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorPathFlowConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorPathFlowConfig_Statics::NewStructOps, TEXT("PCGExTensorPathFlowConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorPathFlowConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorPathFlowConfig), 448246962U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorPathFlowFactory, UPCGExTensorPathFlowFactory::StaticClass, TEXT("UPCGExTensorPathFlowFactory"), &Z_Registration_Info_UClass_UPCGExTensorPathFlowFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorPathFlowFactory), 4011164626U) },
		{ Z_Construct_UClass_UPCGExCreateTensorPathFlowSettings, UPCGExCreateTensorPathFlowSettings::StaticClass, TEXT("UPCGExCreateTensorPathFlowSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorPathFlowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorPathFlowSettings), 464726402U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathFlow_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathFlow_h__Script_PCGExtendedToolkit_1326696168{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathFlow_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathFlow_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathFlow_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathFlow_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
