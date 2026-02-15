// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h"
#include "Transform/Tensors/PCGExTensorHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristicTensor() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryTensor();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExHeuristicConfigTensor ***************************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExHeuristicConfigTensor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExHeuristicConfigTensor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsolute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorHandlerDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations. */" },
		{ "DisplayName", "Tensor Sampling Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExHeuristicConfigTensor constinit property declarations *******
	static void NewProp_bAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TensorHandlerDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExHeuristicConfigTensor constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExHeuristicConfigTensor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics
static_assert(std::is_polymorphic<FPCGExHeuristicConfigTensor>() == std::is_polymorphic<FPCGExHeuristicConfigBase>(), "USTRUCT FPCGExHeuristicConfigTensor cannot be polymorphic unless super FPCGExHeuristicConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigTensor;
class UScriptStruct* FPCGExHeuristicConfigTensor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigTensor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigTensor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExHeuristicConfigTensor"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigTensor.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExHeuristicConfigTensor Property Definitions ******************
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::NewProp_bAbsolute_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigTensor*)Obj)->bAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigTensor), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsolute_MetaData), NewProp_bAbsolute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::NewProp_TensorHandlerDetails = { "TensorHandlerDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigTensor, TensorHandlerDetails), Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorHandlerDetails_MetaData), NewProp_TensorHandlerDetails_MetaData) }; // 2686898823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::NewProp_bAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::NewProp_TensorHandlerDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExHeuristicConfigTensor Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase,
	&NewStructOps,
	"PCGExHeuristicConfigTensor",
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::PropPointers),
	sizeof(FPCGExHeuristicConfigTensor),
	alignof(FPCGExHeuristicConfigTensor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigTensor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigTensor.InnerSingleton, Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigTensor.InnerSingleton);
}
// ********** End ScriptStruct FPCGExHeuristicConfigTensor *****************************************

// ********** Begin Class UPCGExHeuristicsFactoryTensor ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactoryTensor;
UClass* UPCGExHeuristicsFactoryTensor::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactoryTensor;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryTensor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactoryTensor"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactoryTensor.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactoryTensor,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryTensor.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_NoRegister()
{
	return UPCGExHeuristicsFactoryTensor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactoryTensor constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TensorFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TensorFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsFactoryTensor constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactoryTensor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics

// ********** Begin Class UPCGExHeuristicsFactoryTensor Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsFactoryTensor, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3550960539
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::NewProp_TensorFactories_Inner = { "TensorFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::NewProp_TensorFactories = { "TensorFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsFactoryTensor, TensorFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorFactories_MetaData), NewProp_TensorFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::NewProp_TensorFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::NewProp_TensorFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsFactoryTensor Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::ClassParams = {
	&UPCGExHeuristicsFactoryTensor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactoryTensor::StaticRegisterNativesUPCGExHeuristicsFactoryTensor()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryTensor()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryTensor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactoryTensor.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactoryTensor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryTensor.OuterSingleton;
}
UPCGExHeuristicsFactoryTensor::UPCGExHeuristicsFactoryTensor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactoryTensor);
UPCGExHeuristicsFactoryTensor::~UPCGExHeuristicsFactoryTensor() {}
// ********** End Class UPCGExHeuristicsFactoryTensor **********************************************

// ********** Begin Class UPCGExHeuristicsTensorProviderSettings ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsTensorProviderSettings;
UClass* UPCGExHeuristicsTensorProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsTensorProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsTensorProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsTensorProviderSettings"),
			Z_Registration_Info_UClass_UPCGExHeuristicsTensorProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsTensorProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsTensorProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_NoRegister()
{
	return UPCGExHeuristicsTensorProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/heuristics/hx-tensor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsTensorProviderSettings constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsTensorProviderSettings constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsTensorProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics

// ********** Begin Class UPCGExHeuristicsTensorProviderSettings Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsTensorProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3550960539
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsTensorProviderSettings Property Definitions ****************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::ClassParams = {
	&UPCGExHeuristicsTensorProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsTensorProviderSettings::StaticRegisterNativesUPCGExHeuristicsTensorProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsTensorProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsTensorProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsTensorProviderSettings.OuterSingleton;
}
UPCGExHeuristicsTensorProviderSettings::UPCGExHeuristicsTensorProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsTensorProviderSettings);
UPCGExHeuristicsTensorProviderSettings::~UPCGExHeuristicsTensorProviderSettings() {}
// ********** End Class UPCGExHeuristicsTensorProviderSettings *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicTensor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExHeuristicConfigTensor::StaticStruct, Z_Construct_UScriptStruct_FPCGExHeuristicConfigTensor_Statics::NewStructOps, TEXT("PCGExHeuristicConfigTensor"),&Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigTensor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExHeuristicConfigTensor), 3550960539U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExHeuristicsFactoryTensor, UPCGExHeuristicsFactoryTensor::StaticClass, TEXT("UPCGExHeuristicsFactoryTensor"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactoryTensor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactoryTensor), 1910679186U) },
		{ Z_Construct_UClass_UPCGExHeuristicsTensorProviderSettings, UPCGExHeuristicsTensorProviderSettings::StaticClass, TEXT("UPCGExHeuristicsTensorProviderSettings"), &Z_Registration_Info_UClass_UPCGExHeuristicsTensorProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsTensorProviderSettings), 2592862986U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicTensor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicTensor_h__Script_PCGExtendedToolkit_1066294205{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicTensor_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicTensor_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicTensor_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicTensor_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
