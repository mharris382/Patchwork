// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineRemoveLowestScore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineRemoveLowestScore() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveLowestScore();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRemoveLowestScore **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRemoveLowestScore;
UClass* UPCGExEdgeRemoveLowestScore::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRemoveLowestScore;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveLowestScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRemoveLowestScore"),
			Z_Registration_Info_UClass_UPCGExEdgeRemoveLowestScore.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRemoveLowestScore,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveLowestScore.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_NoRegister()
{
	return UPCGExEdgeRemoveLowestScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Remove Lowest Score" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineRemoveLowestScore.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveLowestScore.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/edge-score" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRemoveLowestScore constinit property declarations **************
// ********** End Class UPCGExEdgeRemoveLowestScore constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRemoveLowestScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_Statics
UObject* (*const Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_Statics::ClassParams = {
	&UPCGExEdgeRemoveLowestScore::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRemoveLowestScore::StaticRegisterNativesUPCGExEdgeRemoveLowestScore()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveLowestScore()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveLowestScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRemoveLowestScore.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRemoveLowestScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveLowestScore.OuterSingleton;
}
UPCGExEdgeRemoveLowestScore::UPCGExEdgeRemoveLowestScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRemoveLowestScore);
UPCGExEdgeRemoveLowestScore::~UPCGExEdgeRemoveLowestScore() {}
// ********** End Class UPCGExEdgeRemoveLowestScore ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLowestScore_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRemoveLowestScore, UPCGExEdgeRemoveLowestScore::StaticClass, TEXT("UPCGExEdgeRemoveLowestScore"), &Z_Registration_Info_UClass_UPCGExEdgeRemoveLowestScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRemoveLowestScore), 2375859526U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLowestScore_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLowestScore_h__Script_PCGExtendedToolkit_2234053635{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLowestScore_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLowestScore_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
