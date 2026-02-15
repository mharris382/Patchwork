// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Orient/PCGExOrientAverage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExOrientAverage() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientAverage();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientAverage_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExOrientAverage ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExOrientAverage;
UClass* UPCGExOrientAverage::GetPrivateStaticClass()
{
	using TClass = UPCGExOrientAverage;
	if (!Z_Registration_Info_UClass_UPCGExOrientAverage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExOrientAverage"),
			Z_Registration_Info_UClass_UPCGExOrientAverage.InnerSingleton,
			StaticRegisterNativesUPCGExOrientAverage,
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
	return Z_Registration_Info_UClass_UPCGExOrientAverage.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExOrientAverage_NoRegister()
{
	return UPCGExOrientAverage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExOrientAverage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Average" },
		{ "IncludePath", "Paths/Orient/PCGExOrientAverage.h" },
		{ "ModuleRelativePath", "Public/Paths/Orient/PCGExOrientAverage.h" },
		{ "PCGExNodeLibraryDoc", "paths/orient/orient-average" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExOrientAverage constinit property declarations **********************
// ********** End Class UPCGExOrientAverage constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExOrientAverage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExOrientAverage_Statics
UObject* (*const Z_Construct_UClass_UPCGExOrientAverage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExOrientInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientAverage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExOrientAverage_Statics::ClassParams = {
	&UPCGExOrientAverage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientAverage_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExOrientAverage_Statics::Class_MetaDataParams)
};
void UPCGExOrientAverage::StaticRegisterNativesUPCGExOrientAverage()
{
}
UClass* Z_Construct_UClass_UPCGExOrientAverage()
{
	if (!Z_Registration_Info_UClass_UPCGExOrientAverage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExOrientAverage.OuterSingleton, Z_Construct_UClass_UPCGExOrientAverage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExOrientAverage.OuterSingleton;
}
UPCGExOrientAverage::UPCGExOrientAverage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExOrientAverage);
UPCGExOrientAverage::~UPCGExOrientAverage() {}
// ********** End Class UPCGExOrientAverage ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientAverage_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExOrientAverage, UPCGExOrientAverage::StaticClass, TEXT("UPCGExOrientAverage"), &Z_Registration_Info_UClass_UPCGExOrientAverage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExOrientAverage), 3410023453U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientAverage_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientAverage_h__Script_PCGExtendedToolkit_929960830{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientAverage_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientAverage_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
