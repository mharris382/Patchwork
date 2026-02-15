// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineKeepShortest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineKeepShortest() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeKeepShortest();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeKeepShortest_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeKeepShortest ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeKeepShortest;
UClass* UPCGExEdgeKeepShortest::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeKeepShortest;
	if (!Z_Registration_Info_UClass_UPCGExEdgeKeepShortest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeKeepShortest"),
			Z_Registration_Info_UClass_UPCGExEdgeKeepShortest.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeKeepShortest,
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
	return Z_Registration_Info_UClass_UPCGExEdgeKeepShortest.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeKeepShortest_NoRegister()
{
	return UPCGExEdgeKeepShortest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeKeepShortest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Keep Shortest" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineKeepShortest.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineKeepShortest.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/edge-length" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeKeepShortest constinit property declarations *******************
// ********** End Class UPCGExEdgeKeepShortest constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeKeepShortest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeKeepShortest_Statics
UObject* (*const Z_Construct_UClass_UPCGExEdgeKeepShortest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeKeepShortest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeKeepShortest_Statics::ClassParams = {
	&UPCGExEdgeKeepShortest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeKeepShortest_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeKeepShortest_Statics::Class_MetaDataParams)
};
void UPCGExEdgeKeepShortest::StaticRegisterNativesUPCGExEdgeKeepShortest()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeKeepShortest()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeKeepShortest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeKeepShortest.OuterSingleton, Z_Construct_UClass_UPCGExEdgeKeepShortest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeKeepShortest.OuterSingleton;
}
UPCGExEdgeKeepShortest::UPCGExEdgeKeepShortest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeKeepShortest);
UPCGExEdgeKeepShortest::~UPCGExEdgeKeepShortest() {}
// ********** End Class UPCGExEdgeKeepShortest *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepShortest_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeKeepShortest, UPCGExEdgeKeepShortest::StaticClass, TEXT("UPCGExEdgeKeepShortest"), &Z_Registration_Info_UClass_UPCGExEdgeKeepShortest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeKeepShortest), 2112664365U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepShortest_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepShortest_h__Script_PCGExtendedToolkit_2705707674{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepShortest_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepShortest_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
