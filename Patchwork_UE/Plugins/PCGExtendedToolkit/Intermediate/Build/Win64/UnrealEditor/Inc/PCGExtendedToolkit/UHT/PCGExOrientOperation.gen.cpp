// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Orient/PCGExOrientOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExOrientOperation() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientInstancedFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExOrientInstancedFactory *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExOrientInstancedFactory;
UClass* UPCGExOrientInstancedFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExOrientInstancedFactory;
	if (!Z_Registration_Info_UClass_UPCGExOrientInstancedFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExOrientInstancedFactory"),
			Z_Registration_Info_UClass_UPCGExOrientInstancedFactory.InnerSingleton,
			StaticRegisterNativesUPCGExOrientInstancedFactory,
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
	return Z_Registration_Info_UClass_UPCGExOrientInstancedFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExOrientInstancedFactory_NoRegister()
{
	return UPCGExOrientInstancedFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExOrientInstancedFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/Orient/PCGExOrientOperation.h" },
		{ "ModuleRelativePath", "Public/Paths/Orient/PCGExOrientOperation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExOrientInstancedFactory constinit property declarations *************
// ********** End Class UPCGExOrientInstancedFactory constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExOrientInstancedFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExOrientInstancedFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExOrientInstancedFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientInstancedFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExOrientInstancedFactory_Statics::ClassParams = {
	&UPCGExOrientInstancedFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientInstancedFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExOrientInstancedFactory_Statics::Class_MetaDataParams)
};
void UPCGExOrientInstancedFactory::StaticRegisterNativesUPCGExOrientInstancedFactory()
{
}
UClass* Z_Construct_UClass_UPCGExOrientInstancedFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExOrientInstancedFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExOrientInstancedFactory.OuterSingleton, Z_Construct_UClass_UPCGExOrientInstancedFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExOrientInstancedFactory.OuterSingleton;
}
UPCGExOrientInstancedFactory::UPCGExOrientInstancedFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExOrientInstancedFactory);
UPCGExOrientInstancedFactory::~UPCGExOrientInstancedFactory() {}
// ********** End Class UPCGExOrientInstancedFactory ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientOperation_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExOrientInstancedFactory, UPCGExOrientInstancedFactory::StaticClass, TEXT("UPCGExOrientInstancedFactory"), &Z_Registration_Info_UClass_UPCGExOrientInstancedFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExOrientInstancedFactory), 1085210710U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientOperation_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientOperation_h__Script_PCGExtendedToolkit_962905360{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
