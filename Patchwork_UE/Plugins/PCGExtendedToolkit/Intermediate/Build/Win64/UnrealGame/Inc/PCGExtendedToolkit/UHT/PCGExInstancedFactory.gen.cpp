// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExInstancedFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExInstancedFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExManagedObjectInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExInstancedFactory ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExInstancedFactory;
UClass* UPCGExInstancedFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExInstancedFactory;
	if (!Z_Registration_Info_UClass_UPCGExInstancedFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExInstancedFactory"),
			Z_Registration_Info_UClass_UPCGExInstancedFactory.InnerSingleton,
			StaticRegisterNativesUPCGExInstancedFactory,
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
	return Z_Registration_Info_UClass_UPCGExInstancedFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExInstancedFactory_NoRegister()
{
	return UPCGExInstancedFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExInstancedFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PCGExInstancedFactory.h" },
		{ "ModuleRelativePath", "Public/PCGExInstancedFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExInstancedFactory constinit property declarations *******************
// ********** End Class UPCGExInstancedFactory constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExInstancedFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExInstancedFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExInstancedFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInstancedFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPCGExInstancedFactory_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPCGExManagedObjectInterface_NoRegister, (int32)VTABLE_OFFSET(UPCGExInstancedFactory, IPCGExManagedObjectInterface), false },  // 4290676775
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExInstancedFactory_Statics::ClassParams = {
	&UPCGExInstancedFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInstancedFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExInstancedFactory_Statics::Class_MetaDataParams)
};
void UPCGExInstancedFactory::StaticRegisterNativesUPCGExInstancedFactory()
{
}
UClass* Z_Construct_UClass_UPCGExInstancedFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExInstancedFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExInstancedFactory.OuterSingleton, Z_Construct_UClass_UPCGExInstancedFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExInstancedFactory.OuterSingleton;
}
UPCGExInstancedFactory::UPCGExInstancedFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExInstancedFactory);
UPCGExInstancedFactory::~UPCGExInstancedFactory() {}
// ********** End Class UPCGExInstancedFactory *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExInstancedFactory_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExInstancedFactory, UPCGExInstancedFactory::StaticClass, TEXT("UPCGExInstancedFactory"), &Z_Registration_Info_UClass_UPCGExInstancedFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExInstancedFactory), 2201356790U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExInstancedFactory_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExInstancedFactory_h__Script_PCGExtendedToolkit_185880279{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
