// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/SubPoints/PCGExSubPointsInstancedFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubPointsInstancedFactory() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsInstancedFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSubPointsInstancedFactory ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubPointsInstancedFactory;
UClass* UPCGExSubPointsInstancedFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExSubPointsInstancedFactory;
	if (!Z_Registration_Info_UClass_UPCGExSubPointsInstancedFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubPointsInstancedFactory"),
			Z_Registration_Info_UClass_UPCGExSubPointsInstancedFactory.InnerSingleton,
			StaticRegisterNativesUPCGExSubPointsInstancedFactory,
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
	return Z_Registration_Info_UClass_UPCGExSubPointsInstancedFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubPointsInstancedFactory_NoRegister()
{
	return UPCGExSubPointsInstancedFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubPointsInstancedFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/SubPoints/PCGExSubPointsInstancedFactory.h" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/PCGExSubPointsInstancedFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubPointsInstancedFactory constinit property declarations **********
// ********** End Class UPCGExSubPointsInstancedFactory constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubPointsInstancedFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubPointsInstancedFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExSubPointsInstancedFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsInstancedFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubPointsInstancedFactory_Statics::ClassParams = {
	&UPCGExSubPointsInstancedFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsInstancedFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubPointsInstancedFactory_Statics::Class_MetaDataParams)
};
void UPCGExSubPointsInstancedFactory::StaticRegisterNativesUPCGExSubPointsInstancedFactory()
{
}
UClass* Z_Construct_UClass_UPCGExSubPointsInstancedFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExSubPointsInstancedFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubPointsInstancedFactory.OuterSingleton, Z_Construct_UClass_UPCGExSubPointsInstancedFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubPointsInstancedFactory.OuterSingleton;
}
UPCGExSubPointsInstancedFactory::UPCGExSubPointsInstancedFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubPointsInstancedFactory);
UPCGExSubPointsInstancedFactory::~UPCGExSubPointsInstancedFactory() {}
// ********** End Class UPCGExSubPointsInstancedFactory ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_PCGExSubPointsInstancedFactory_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubPointsInstancedFactory, UPCGExSubPointsInstancedFactory::StaticClass, TEXT("UPCGExSubPointsInstancedFactory"), &Z_Registration_Info_UClass_UPCGExSubPointsInstancedFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubPointsInstancedFactory), 1888877318U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_PCGExSubPointsInstancedFactory_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_PCGExSubPointsInstancedFactory_h__Script_PCGExtendedToolkit_2977914102{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_PCGExSubPointsInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_PCGExSubPointsInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
