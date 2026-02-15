// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Smoothing/PCGExSmoothingInstancedFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSmoothingInstancedFactory() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSmoothingInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSmoothingInstancedFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSmoothingInstancedFactory ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSmoothingInstancedFactory;
UClass* UPCGExSmoothingInstancedFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExSmoothingInstancedFactory;
	if (!Z_Registration_Info_UClass_UPCGExSmoothingInstancedFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSmoothingInstancedFactory"),
			Z_Registration_Info_UClass_UPCGExSmoothingInstancedFactory.InnerSingleton,
			StaticRegisterNativesUPCGExSmoothingInstancedFactory,
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
	return Z_Registration_Info_UClass_UPCGExSmoothingInstancedFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSmoothingInstancedFactory_NoRegister()
{
	return UPCGExSmoothingInstancedFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSmoothingInstancedFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/Smoothing/PCGExSmoothingInstancedFactory.h" },
		{ "ModuleRelativePath", "Public/Paths/Smoothing/PCGExSmoothingInstancedFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSmoothingInstancedFactory constinit property declarations **********
// ********** End Class UPCGExSmoothingInstancedFactory constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSmoothingInstancedFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSmoothingInstancedFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExSmoothingInstancedFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSmoothingInstancedFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSmoothingInstancedFactory_Statics::ClassParams = {
	&UPCGExSmoothingInstancedFactory::StaticClass,
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
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSmoothingInstancedFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSmoothingInstancedFactory_Statics::Class_MetaDataParams)
};
void UPCGExSmoothingInstancedFactory::StaticRegisterNativesUPCGExSmoothingInstancedFactory()
{
}
UClass* Z_Construct_UClass_UPCGExSmoothingInstancedFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExSmoothingInstancedFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSmoothingInstancedFactory.OuterSingleton, Z_Construct_UClass_UPCGExSmoothingInstancedFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSmoothingInstancedFactory.OuterSingleton;
}
UPCGExSmoothingInstancedFactory::UPCGExSmoothingInstancedFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSmoothingInstancedFactory);
UPCGExSmoothingInstancedFactory::~UPCGExSmoothingInstancedFactory() {}
// ********** End Class UPCGExSmoothingInstancedFactory ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExSmoothingInstancedFactory_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSmoothingInstancedFactory, UPCGExSmoothingInstancedFactory::StaticClass, TEXT("UPCGExSmoothingInstancedFactory"), &Z_Registration_Info_UClass_UPCGExSmoothingInstancedFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSmoothingInstancedFactory), 3144737123U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExSmoothingInstancedFactory_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExSmoothingInstancedFactory_h__Script_PCGExtendedToolkit_437753404{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExSmoothingInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExSmoothingInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
