// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Probes/PCGExProbeTensor.h"
#include "Transform/Tensors/PCGExTensorHandler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExProbeTensor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryTensor();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryTensor_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeTensorProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeTensorProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigTensor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExProbeConfigTensor *******************************************
struct Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExProbeConfigTensor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExProbeConfigTensor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertTensorDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mirror (*-1) the direction sampled from the tensors. */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mirror (*-1) the direction sampled from the tensors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Favor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What matters more? */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What matters more?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseComponentWiseAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max angle to search within. */" },
		{ "EditCondition", "!bUseComponentWiseAngle" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max angle to search within." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngles_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max angle to search within. */" },
		{ "EditCondition", "bUseComponentWiseAngle" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max angle to search within." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoChainedProcessing_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This probe will sample candidates after the other. Can yield different results. */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "This probe will sample candidates after the other. Can yield different results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorHandlerDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations. */" },
		{ "DisplayName", "Tensor Sampling Settings" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tensor sampling settings. Note that these are applied on the flattened sample, e.g after & on top of individual tensors' mutations." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExProbeConfigTensor constinit property declarations ***********
	static void NewProp_bInvertTensorDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertTensorDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Favor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Favor;
	static void NewProp_bUseComponentWiseAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComponentWiseAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAngles;
	static void NewProp_bDoChainedProcessing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoChainedProcessing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TensorHandlerDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExProbeConfigTensor constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExProbeConfigTensor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics
static_assert(std::is_polymorphic<FPCGExProbeConfigTensor>() == std::is_polymorphic<FPCGExProbeConfigBase>(), "USTRUCT FPCGExProbeConfigTensor cannot be polymorphic unless super FPCGExProbeConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExProbeConfigTensor;
class UScriptStruct* FPCGExProbeConfigTensor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigTensor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExProbeConfigTensor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExProbeConfigTensor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExProbeConfigTensor"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExProbeConfigTensor.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExProbeConfigTensor Property Definitions **********************
void Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bInvertTensorDirection_SetBit(void* Obj)
{
	((FPCGExProbeConfigTensor*)Obj)->bInvertTensorDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bInvertTensorDirection = { "bInvertTensorDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigTensor), &Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bInvertTensorDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertTensorDirection_MetaData), NewProp_bInvertTensorDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_Favor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_Favor = { "Favor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigTensor, Favor), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeDirectionPriorization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Favor_MetaData), NewProp_Favor_MetaData) }; // 1029997031
void Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bUseComponentWiseAngle_SetBit(void* Obj)
{
	((FPCGExProbeConfigTensor*)Obj)->bUseComponentWiseAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bUseComponentWiseAngle = { "bUseComponentWiseAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigTensor), &Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bUseComponentWiseAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseComponentWiseAngle_MetaData), NewProp_bUseComponentWiseAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigTensor, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngle_MetaData), NewProp_MaxAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_MaxAngles = { "MaxAngles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigTensor, MaxAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngles_MetaData), NewProp_MaxAngles_MetaData) };
void Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bDoChainedProcessing_SetBit(void* Obj)
{
	((FPCGExProbeConfigTensor*)Obj)->bDoChainedProcessing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bDoChainedProcessing = { "bDoChainedProcessing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigTensor), &Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bDoChainedProcessing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoChainedProcessing_MetaData), NewProp_bDoChainedProcessing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_TensorHandlerDetails = { "TensorHandlerDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigTensor, TensorHandlerDetails), Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorHandlerDetails_MetaData), NewProp_TensorHandlerDetails_MetaData) }; // 2686898823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bInvertTensorDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_Favor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_Favor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bUseComponentWiseAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_MaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_MaxAngles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_bDoChainedProcessing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewProp_TensorHandlerDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExProbeConfigTensor Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExProbeConfigBase,
	&NewStructOps,
	"PCGExProbeConfigTensor",
	Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::PropPointers),
	sizeof(FPCGExProbeConfigTensor),
	alignof(FPCGExProbeConfigTensor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigTensor()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigTensor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigTensor.InnerSingleton, Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigTensor.InnerSingleton);
}
// ********** End ScriptStruct FPCGExProbeConfigTensor *********************************************

// ********** Begin Class UPCGExProbeFactoryTensor *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeFactoryTensor;
UClass* UPCGExProbeFactoryTensor::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeFactoryTensor;
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryTensor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeFactoryTensor"),
			Z_Registration_Info_UClass_UPCGExProbeFactoryTensor.InnerSingleton,
			StaticRegisterNativesUPCGExProbeFactoryTensor,
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
	return Z_Registration_Info_UClass_UPCGExProbeFactoryTensor.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryTensor_NoRegister()
{
	return UPCGExProbeFactoryTensor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Probes/PCGExProbeTensor.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TensorFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeFactoryTensor constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TensorFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TensorFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeFactoryTensor constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeFactoryTensor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics

// ********** Begin Class UPCGExProbeFactoryTensor Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeFactoryTensor, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigTensor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2019958788
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::NewProp_TensorFactories_Inner = { "TensorFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::NewProp_TensorFactories = { "TensorFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeFactoryTensor, TensorFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TensorFactories_MetaData), NewProp_TensorFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::NewProp_TensorFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::NewProp_TensorFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeFactoryTensor Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::ClassParams = {
	&UPCGExProbeFactoryTensor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::Class_MetaDataParams)
};
void UPCGExProbeFactoryTensor::StaticRegisterNativesUPCGExProbeFactoryTensor()
{
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryTensor()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryTensor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeFactoryTensor.OuterSingleton, Z_Construct_UClass_UPCGExProbeFactoryTensor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeFactoryTensor.OuterSingleton;
}
UPCGExProbeFactoryTensor::UPCGExProbeFactoryTensor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeFactoryTensor);
UPCGExProbeFactoryTensor::~UPCGExProbeFactoryTensor() {}
// ********** End Class UPCGExProbeFactoryTensor ***************************************************

// ********** Begin Class UPCGExProbeTensorProviderSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeTensorProviderSettings;
UClass* UPCGExProbeTensorProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeTensorProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExProbeTensorProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeTensorProviderSettings"),
			Z_Registration_Info_UClass_UPCGExProbeTensorProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExProbeTensorProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExProbeTensorProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeTensorProviderSettings_NoRegister()
{
	return UPCGExProbeTensorProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Probes/PCGExProbeTensor.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCGExNodeLibraryDoc", "clusters/connect-points/probe-direction-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeTensor.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeTensorProviderSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeTensorProviderSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeTensorProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics

// ********** Begin Class UPCGExProbeTensorProviderSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeTensorProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigTensor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2019958788
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeTensorProviderSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::ClassParams = {
	&UPCGExProbeTensorProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExProbeTensorProviderSettings::StaticRegisterNativesUPCGExProbeTensorProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExProbeTensorProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeTensorProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeTensorProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExProbeTensorProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeTensorProviderSettings.OuterSingleton;
}
UPCGExProbeTensorProviderSettings::UPCGExProbeTensorProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeTensorProviderSettings);
UPCGExProbeTensorProviderSettings::~UPCGExProbeTensorProviderSettings() {}
// ********** End Class UPCGExProbeTensorProviderSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeTensor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExProbeConfigTensor::StaticStruct, Z_Construct_UScriptStruct_FPCGExProbeConfigTensor_Statics::NewStructOps, TEXT("PCGExProbeConfigTensor"),&Z_Registration_Info_UScriptStruct_FPCGExProbeConfigTensor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExProbeConfigTensor), 2019958788U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExProbeFactoryTensor, UPCGExProbeFactoryTensor::StaticClass, TEXT("UPCGExProbeFactoryTensor"), &Z_Registration_Info_UClass_UPCGExProbeFactoryTensor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeFactoryTensor), 2787591533U) },
		{ Z_Construct_UClass_UPCGExProbeTensorProviderSettings, UPCGExProbeTensorProviderSettings::StaticClass, TEXT("UPCGExProbeTensorProviderSettings"), &Z_Registration_Info_UClass_UPCGExProbeTensorProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeTensorProviderSettings), 2127674341U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeTensor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeTensor_h__Script_PCGExtendedToolkit_3326352632{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeTensor_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeTensor_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeTensor_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeTensor_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
