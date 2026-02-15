// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/Samplers/PCGExTensorSamplerSixPoints.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorSamplerSixPoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSampler();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSamplerSixPoints();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSamplerSixPoints_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExTensorSamplerSixPoints *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorSamplerSixPoints;
UClass* UPCGExTensorSamplerSixPoints::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorSamplerSixPoints;
	if (!Z_Registration_Info_UClass_UPCGExTensorSamplerSixPoints.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorSamplerSixPoints"),
			Z_Registration_Info_UClass_UPCGExTensorSamplerSixPoints.InnerSingleton,
			StaticRegisterNativesUPCGExTensorSamplerSixPoints,
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
	return Z_Registration_Info_UClass_UPCGExTensorSamplerSixPoints.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorSamplerSixPoints_NoRegister()
{
	return UPCGExTensorSamplerSixPoints::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorSamplerSixPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Six Points" },
		{ "IncludePath", "Transform/Tensors/Samplers/PCGExTensorSamplerSixPoints.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/Samplers/PCGExTensorSamplerSixPoints.h" },
		{ "ToolTip", "Samples the field using six points around the sampling target location, and averaging the results." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorSamplerSixPoints constinit property declarations *************
// ********** End Class UPCGExTensorSamplerSixPoints constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorSamplerSixPoints>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorSamplerSixPoints_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorSamplerSixPoints_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorSampler,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSamplerSixPoints_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorSamplerSixPoints_Statics::ClassParams = {
	&UPCGExTensorSamplerSixPoints::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSamplerSixPoints_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorSamplerSixPoints_Statics::Class_MetaDataParams)
};
void UPCGExTensorSamplerSixPoints::StaticRegisterNativesUPCGExTensorSamplerSixPoints()
{
}
UClass* Z_Construct_UClass_UPCGExTensorSamplerSixPoints()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorSamplerSixPoints.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorSamplerSixPoints.OuterSingleton, Z_Construct_UClass_UPCGExTensorSamplerSixPoints_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorSamplerSixPoints.OuterSingleton;
}
UPCGExTensorSamplerSixPoints::UPCGExTensorSamplerSixPoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorSamplerSixPoints);
UPCGExTensorSamplerSixPoints::~UPCGExTensorSamplerSixPoints() {}
// ********** End Class UPCGExTensorSamplerSixPoints ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerSixPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorSamplerSixPoints, UPCGExTensorSamplerSixPoints::StaticClass, TEXT("UPCGExTensorSamplerSixPoints"), &Z_Registration_Info_UClass_UPCGExTensorSamplerSixPoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorSamplerSixPoints), 1797702306U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerSixPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerSixPoints_h__Script_PCGExtendedToolkit_569438365{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerSixPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_Samplers_PCGExTensorSamplerSixPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
