// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineKeepHighestScore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineKeepHighestScore() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeKeepHighestScore();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeKeepHighestScore_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeKeepHighestScore ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeKeepHighestScore;
UClass* UPCGExEdgeKeepHighestScore::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeKeepHighestScore;
	if (!Z_Registration_Info_UClass_UPCGExEdgeKeepHighestScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeKeepHighestScore"),
			Z_Registration_Info_UClass_UPCGExEdgeKeepHighestScore.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeKeepHighestScore,
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
	return Z_Registration_Info_UClass_UPCGExEdgeKeepHighestScore.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeKeepHighestScore_NoRegister()
{
	return UPCGExEdgeKeepHighestScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeKeepHighestScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Keep Highest Score" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineKeepHighestScore.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineKeepHighestScore.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/edge-score" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeKeepHighestScore constinit property declarations ***************
// ********** End Class UPCGExEdgeKeepHighestScore constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeKeepHighestScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeKeepHighestScore_Statics
UObject* (*const Z_Construct_UClass_UPCGExEdgeKeepHighestScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeKeepHighestScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeKeepHighestScore_Statics::ClassParams = {
	&UPCGExEdgeKeepHighestScore::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeKeepHighestScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeKeepHighestScore_Statics::Class_MetaDataParams)
};
void UPCGExEdgeKeepHighestScore::StaticRegisterNativesUPCGExEdgeKeepHighestScore()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeKeepHighestScore()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeKeepHighestScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeKeepHighestScore.OuterSingleton, Z_Construct_UClass_UPCGExEdgeKeepHighestScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeKeepHighestScore.OuterSingleton;
}
UPCGExEdgeKeepHighestScore::UPCGExEdgeKeepHighestScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeKeepHighestScore);
UPCGExEdgeKeepHighestScore::~UPCGExEdgeKeepHighestScore() {}
// ********** End Class UPCGExEdgeKeepHighestScore *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepHighestScore_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeKeepHighestScore, UPCGExEdgeKeepHighestScore::StaticClass, TEXT("UPCGExEdgeKeepHighestScore"), &Z_Registration_Info_UClass_UPCGExEdgeKeepHighestScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeKeepHighestScore), 3703795420U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepHighestScore_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepHighestScore_h__Script_PCGExtendedToolkit_3915803439{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepHighestScore_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepHighestScore_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
