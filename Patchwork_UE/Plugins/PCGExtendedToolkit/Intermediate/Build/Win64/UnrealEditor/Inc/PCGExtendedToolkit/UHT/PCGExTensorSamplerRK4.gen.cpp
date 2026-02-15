// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/Samplers/PCGExTensorSamplerRK4.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorSamplerRK4() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSampler();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSamplerRK4();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSamplerRK4_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExTensorSamplerRK4 ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorSamplerRK4;
UClass* UPCGExTensorSamplerRK4::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorSamplerRK4;
	if (!Z_Registration_Info_UClass_UPCGExTensorSamplerRK4.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorSamplerRK4"),
			Z_Registration_Info_UClass_UPCGExTensorSamplerRK4.InnerSingleton,
			StaticRegisterNativesUPCGExTensorSamplerRK4,
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
	return Z_Registration_Info_UClass_UPCGExTensorSamplerRK4.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorSamplerRK4_NoRegister()
{
	return UPCGExTensorSamplerRK4::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorSamplerRK4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "RK4" },
		{ "IncludePath", "Transform/Tensors/Samplers/PCGExTensorSamplerRK4.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/Samplers/PCGExTensorSamplerRK4.h" },
		{ "ToolTip", "Samples the field using Runge-Kutta 4 method" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorSamplerRK4 constinit property declarations *******************
// ********** End Class UPCGExTensorSamplerRK4 constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorSamplerRK4>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorSamplerRK4_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorSamplerRK4_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSampler,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSamplerRK4_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorSamplerRK4_Statics::ClassParams = {
	&UPCGExTensorSamplerRK4::StaticClass,
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
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSamplerRK4_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorSamplerRK4_Statics::Class_MetaDataParams)
};
void UPCGExTensorSamplerRK4::StaticRegisterNativesUPCGExTensorSamplerRK4()
{
}
UClass* Z_Construct_UClass_UPCGExTensorSamplerRK4()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorSamplerRK4.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorSamplerRK4.OuterSingleton, Z_Construct_UClass_UPCGExTensorSamplerRK4_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorSamplerRK4.OuterSingleton;
}
UPCGExTensorSamplerRK4::UPCGExTensorSamplerRK4(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorSamplerRK4);
UPCGExTensorSamplerRK4::~UPCGExTensorSamplerRK4() {}
// ********** End Class UPCGExTensorSamplerRK4 *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerRK4_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorSamplerRK4, UPCGExTensorSamplerRK4::StaticClass, TEXT("UPCGExTensorSamplerRK4"), &Z_Registration_Info_UClass_UPCGExTensorSamplerRK4, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorSamplerRK4), 1496985125U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerRK4_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerRK4_h__Script_PCGExtendedToolkit_428372831{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerRK4_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerRK4_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
