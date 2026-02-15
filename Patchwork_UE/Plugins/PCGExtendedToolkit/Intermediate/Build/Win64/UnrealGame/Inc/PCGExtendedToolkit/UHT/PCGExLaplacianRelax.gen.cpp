// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Relaxing/PCGExLaplacianRelax.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExLaplacianRelax() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExLaplacianRelax();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExLaplacianRelax_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExLaplacianRelax *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExLaplacianRelax;
UClass* UPCGExLaplacianRelax::GetPrivateStaticClass()
{
	using TClass = UPCGExLaplacianRelax;
	if (!Z_Registration_Info_UClass_UPCGExLaplacianRelax.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExLaplacianRelax"),
			Z_Registration_Info_UClass_UPCGExLaplacianRelax.InnerSingleton,
			StaticRegisterNativesUPCGExLaplacianRelax,
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
	return Z_Registration_Info_UClass_UPCGExLaplacianRelax.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExLaplacianRelax_NoRegister()
{
	return UPCGExLaplacianRelax::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExLaplacianRelax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Laplacian (Poisson)" },
		{ "IncludePath", "Graph/Edges/Relaxing/PCGExLaplacianRelax.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExLaplacianRelax.h" },
		{ "PCGExNodeLibraryDoc", "clusters/relax-cluster/laplacian-poisson" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExLaplacianRelax constinit property declarations *********************
// ********** End Class UPCGExLaplacianRelax constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExLaplacianRelax>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExLaplacianRelax_Statics
UObject* (*const Z_Construct_UClass_UPCGExLaplacianRelax_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExRelaxClusterOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExLaplacianRelax_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExLaplacianRelax_Statics::ClassParams = {
	&UPCGExLaplacianRelax::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExLaplacianRelax_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExLaplacianRelax_Statics::Class_MetaDataParams)
};
void UPCGExLaplacianRelax::StaticRegisterNativesUPCGExLaplacianRelax()
{
}
UClass* Z_Construct_UClass_UPCGExLaplacianRelax()
{
	if (!Z_Registration_Info_UClass_UPCGExLaplacianRelax.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExLaplacianRelax.OuterSingleton, Z_Construct_UClass_UPCGExLaplacianRelax_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExLaplacianRelax.OuterSingleton;
}
UPCGExLaplacianRelax::UPCGExLaplacianRelax(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExLaplacianRelax);
UPCGExLaplacianRelax::~UPCGExLaplacianRelax() {}
// ********** End Class UPCGExLaplacianRelax *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExLaplacianRelax_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExLaplacianRelax, UPCGExLaplacianRelax::StaticClass, TEXT("UPCGExLaplacianRelax"), &Z_Registration_Info_UClass_UPCGExLaplacianRelax, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExLaplacianRelax), 3139774174U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExLaplacianRelax_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExLaplacianRelax_h__Script_PCGExtendedToolkit_934557512{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExLaplacianRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExLaplacianRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
