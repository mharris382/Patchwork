// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorPathPole.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorPathPole() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPathPoleFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPathPoleFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFlowFactory();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorPathPoleConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorPathPoleConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorPathPoleConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathPole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which point type to use. Shared amongst all points; if you want tight control, create a fully-fledged spline instead. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathPole.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which point type to use. Shared amongst all points; if you want tight control, create a fully-fledged spline instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothLinear_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Smooth Linear" },
		{ "EditCondition", "PointType == EPCGExSplinePointTypeRedux::Linear" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathPole.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Base radius of the spline. Will be scaled by control points' scale length */" },
		{ "DisplayAfter", "TensorWeight" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathPole.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Base radius of the spline. Will be scaled by control points' scale length" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorPathPoleConfig constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_PointType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PointType;
	static void NewProp_bSmoothLinear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothLinear;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorPathPoleConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorPathPoleConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics
static_assert(std::is_polymorphic<FPCGExTensorPathPoleConfig>() == std::is_polymorphic<FPCGExTensorConfigBase>(), "USTRUCT FPCGExTensorPathPoleConfig cannot be polymorphic unless super FPCGExTensorConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorPathPoleConfig;
class UScriptStruct* FPCGExTensorPathPoleConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorPathPoleConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorPathPoleConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorPathPoleConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorPathPoleConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorPathPoleConfig Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_PointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_PointType = { "PointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorPathPoleConfig, PointType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointTypeRedux, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointType_MetaData), NewProp_PointType_MetaData) }; // 1037731003
void Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_bSmoothLinear_SetBit(void* Obj)
{
	((FPCGExTensorPathPoleConfig*)Obj)->bSmoothLinear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_bSmoothLinear = { "bSmoothLinear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorPathPoleConfig), &Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_bSmoothLinear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothLinear_MetaData), NewProp_bSmoothLinear_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorPathPoleConfig, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_PointType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_PointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_bSmoothLinear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorPathPoleConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExTensorConfigBase,
	&NewStructOps,
	"PCGExTensorPathPoleConfig",
	Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::PropPointers),
	sizeof(FPCGExTensorPathPoleConfig),
	alignof(FPCGExTensorPathPoleConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorPathPoleConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorPathPoleConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorPathPoleConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorPathPoleConfig ******************************************

// ********** Begin Class UPCGExTensorPathPoleFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorPathPoleFactory;
UClass* UPCGExTensorPathPoleFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorPathPoleFactory;
	if (!Z_Registration_Info_UClass_UPCGExTensorPathPoleFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorPathPoleFactory"),
			Z_Registration_Info_UClass_UPCGExTensorPathPoleFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTensorPathPoleFactory,
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
	return Z_Registration_Info_UClass_UPCGExTensorPathPoleFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorPathPoleFactory_NoRegister()
{
	return UPCGExTensorPathPoleFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorPathPoleFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorPathPole.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathPole.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorPathPoleFactory constinit property declarations **************
// ********** End Class UPCGExTensorPathPoleFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorPathPoleFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorPathPoleFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorPathPoleFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSplineFlowFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPathPoleFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorPathPoleFactory_Statics::ClassParams = {
	&UPCGExTensorPathPoleFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPathPoleFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorPathPoleFactory_Statics::Class_MetaDataParams)
};
void UPCGExTensorPathPoleFactory::StaticRegisterNativesUPCGExTensorPathPoleFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTensorPathPoleFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorPathPoleFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorPathPoleFactory.OuterSingleton, Z_Construct_UClass_UPCGExTensorPathPoleFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorPathPoleFactory.OuterSingleton;
}
UPCGExTensorPathPoleFactory::UPCGExTensorPathPoleFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorPathPoleFactory);
UPCGExTensorPathPoleFactory::~UPCGExTensorPathPoleFactory() {}
// ********** End Class UPCGExTensorPathPoleFactory ************************************************

// ********** Begin Class UPCGExCreateTensorPathPoleSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateTensorPathPoleSettings;
UClass* UPCGExCreateTensorPathPoleSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateTensorPathPoleSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorPathPoleSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateTensorPathPoleSettings"),
			Z_Registration_Info_UClass_UPCGExCreateTensorPathPoleSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateTensorPathPoleSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateTensorPathPoleSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_NoRegister()
{
	return UPCGExCreateTensorPathPoleSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Tensors|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorPathPole.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathPole.h" },
		{ "PCGExNodeLibraryDoc", "tensors/effectors/tensor-path-pole" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor properties */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorPathPole.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Tensor properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateTensorPathPoleSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateTensorPathPoleSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateTensorPathPoleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics

// ********** Begin Class UPCGExCreateTensorPathPoleSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateTensorPathPoleSettings, Config), Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4062152021
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateTensorPathPoleSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::ClassParams = {
	&UPCGExCreateTensorPathPoleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateTensorPathPoleSettings::StaticRegisterNativesUPCGExCreateTensorPathPoleSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateTensorPathPoleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateTensorPathPoleSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateTensorPathPoleSettings.OuterSingleton;
}
UPCGExCreateTensorPathPoleSettings::UPCGExCreateTensorPathPoleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateTensorPathPoleSettings);
UPCGExCreateTensorPathPoleSettings::~UPCGExCreateTensorPathPoleSettings() {}
// ********** End Class UPCGExCreateTensorPathPoleSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathPole_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorPathPoleConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorPathPoleConfig_Statics::NewStructOps, TEXT("PCGExTensorPathPoleConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTensorPathPoleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorPathPoleConfig), 4062152021U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorPathPoleFactory, UPCGExTensorPathPoleFactory::StaticClass, TEXT("UPCGExTensorPathPoleFactory"), &Z_Registration_Info_UClass_UPCGExTensorPathPoleFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorPathPoleFactory), 4010749156U) },
		{ Z_Construct_UClass_UPCGExCreateTensorPathPoleSettings, UPCGExCreateTensorPathPoleSettings::StaticClass, TEXT("UPCGExCreateTensorPathPoleSettings"), &Z_Registration_Info_UClass_UPCGExCreateTensorPathPoleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateTensorPathPoleSettings), 1834347703U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathPole_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathPole_h__Script_PCGExtendedToolkit_1900168333{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathPole_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathPole_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathPole_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPathPole_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
