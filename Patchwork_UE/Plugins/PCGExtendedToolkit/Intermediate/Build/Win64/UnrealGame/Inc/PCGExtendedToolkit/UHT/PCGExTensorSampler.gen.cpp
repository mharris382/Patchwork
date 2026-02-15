// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/Samplers/PCGExTensorSampler.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorSampler() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSampler();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSampler_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExTensorSampler ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorSampler;
UClass* UPCGExTensorSampler::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorSampler;
	if (!Z_Registration_Info_UClass_UPCGExTensorSampler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorSampler"),
			Z_Registration_Info_UClass_UPCGExTensorSampler.InnerSingleton,
			StaticRegisterNativesUPCGExTensorSampler,
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
	return Z_Registration_Info_UClass_UPCGExTensorSampler.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorSampler_NoRegister()
{
	return UPCGExTensorSampler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Default" },
		{ "IncludePath", "Transform/Tensors/Samplers/PCGExTensorSampler.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/Samplers/PCGExTensorSampler.h" },
		{ "ToolTip", "Samples a single location in the tensor field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/Samplers/PCGExTensorSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorSampler constinit property declarations **********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorSampler constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorSampler_Statics

// ********** Begin Class UPCGExTensorSampler Property Definitions *********************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExTensorSampler_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorSampler, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorSampler_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSampler_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorSampler Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UPCGExTensorSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorSampler_Statics::ClassParams = {
	&UPCGExTensorSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSampler_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorSampler_Statics::Class_MetaDataParams)
};
void UPCGExTensorSampler::StaticRegisterNativesUPCGExTensorSampler()
{
}
UClass* Z_Construct_UClass_UPCGExTensorSampler()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorSampler.OuterSingleton, Z_Construct_UClass_UPCGExTensorSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorSampler.OuterSingleton;
}
UPCGExTensorSampler::UPCGExTensorSampler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorSampler);
UPCGExTensorSampler::~UPCGExTensorSampler() {}
// ********** End Class UPCGExTensorSampler ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSampler_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorSampler, UPCGExTensorSampler::StaticClass, TEXT("UPCGExTensorSampler"), &Z_Registration_Info_UClass_UPCGExTensorSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorSampler), 1179889310U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSampler_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSampler_h__Script_PCGExtendedToolkit_1035001126{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSampler_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSampler_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
