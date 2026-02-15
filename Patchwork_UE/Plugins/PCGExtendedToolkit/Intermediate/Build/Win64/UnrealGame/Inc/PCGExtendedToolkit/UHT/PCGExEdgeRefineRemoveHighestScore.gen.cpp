// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineRemoveHighestScore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineRemoveHighestScore() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveHighestScore();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRemoveHighestScore *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRemoveHighestScore;
UClass* UPCGExEdgeRemoveHighestScore::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRemoveHighestScore;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveHighestScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRemoveHighestScore"),
			Z_Registration_Info_UClass_UPCGExEdgeRemoveHighestScore.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRemoveHighestScore,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveHighestScore.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_NoRegister()
{
	return UPCGExEdgeRemoveHighestScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Remove Highest Score" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineRemoveHighestScore.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveHighestScore.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/edge-score" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRemoveHighestScore constinit property declarations *************
// ********** End Class UPCGExEdgeRemoveHighestScore constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRemoveHighestScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_Statics
UObject* (*const Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_Statics::ClassParams = {
	&UPCGExEdgeRemoveHighestScore::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRemoveHighestScore::StaticRegisterNativesUPCGExEdgeRemoveHighestScore()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveHighestScore()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveHighestScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRemoveHighestScore.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRemoveHighestScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveHighestScore.OuterSingleton;
}
UPCGExEdgeRemoveHighestScore::UPCGExEdgeRemoveHighestScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRemoveHighestScore);
UPCGExEdgeRemoveHighestScore::~UPCGExEdgeRemoveHighestScore() {}
// ********** End Class UPCGExEdgeRemoveHighestScore ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveHighestScore_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRemoveHighestScore, UPCGExEdgeRemoveHighestScore::StaticClass, TEXT("UPCGExEdgeRemoveHighestScore"), &Z_Registration_Info_UClass_UPCGExEdgeRemoveHighestScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRemoveHighestScore), 597664535U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveHighestScore_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveHighestScore_h__Script_PCGExtendedToolkit_673809019{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveHighestScore_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveHighestScore_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
