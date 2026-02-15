// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineRemoveShortest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineRemoveShortest() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveShortest();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveShortest_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRemoveShortest *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRemoveShortest;
UClass* UPCGExEdgeRemoveShortest::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRemoveShortest;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveShortest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRemoveShortest"),
			Z_Registration_Info_UClass_UPCGExEdgeRemoveShortest.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRemoveShortest,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveShortest.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveShortest_NoRegister()
{
	return UPCGExEdgeRemoveShortest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRemoveShortest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Remove Shortest" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineRemoveShortest.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveShortest.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/edge-length" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRemoveShortest constinit property declarations *****************
// ********** End Class UPCGExEdgeRemoveShortest constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRemoveShortest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRemoveShortest_Statics
UObject* (*const Z_Construct_UClass_UPCGExEdgeRemoveShortest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveShortest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRemoveShortest_Statics::ClassParams = {
	&UPCGExEdgeRemoveShortest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveShortest_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRemoveShortest_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRemoveShortest::StaticRegisterNativesUPCGExEdgeRemoveShortest()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveShortest()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveShortest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRemoveShortest.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRemoveShortest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveShortest.OuterSingleton;
}
UPCGExEdgeRemoveShortest::UPCGExEdgeRemoveShortest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRemoveShortest);
UPCGExEdgeRemoveShortest::~UPCGExEdgeRemoveShortest() {}
// ********** End Class UPCGExEdgeRemoveShortest ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveShortest_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRemoveShortest, UPCGExEdgeRemoveShortest::StaticClass, TEXT("UPCGExEdgeRemoveShortest"), &Z_Registration_Info_UClass_UPCGExEdgeRemoveShortest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRemoveShortest), 3388277425U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveShortest_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveShortest_h__Script_PCGExtendedToolkit_2484626126{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveShortest_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveShortest_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
