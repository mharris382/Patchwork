// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineKeepLowestScore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineKeepLowestScore() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeKeepLowestScore();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeKeepLowestScore_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeKeepLowestScore ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeKeepLowestScore;
UClass* UPCGExEdgeKeepLowestScore::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeKeepLowestScore;
	if (!Z_Registration_Info_UClass_UPCGExEdgeKeepLowestScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeKeepLowestScore"),
			Z_Registration_Info_UClass_UPCGExEdgeKeepLowestScore.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeKeepLowestScore,
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
	return Z_Registration_Info_UClass_UPCGExEdgeKeepLowestScore.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeKeepLowestScore_NoRegister()
{
	return UPCGExEdgeKeepLowestScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeKeepLowestScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Keep Lowest Score" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineKeepLowestScore.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineKeepLowestScore.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/edge-score" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeKeepLowestScore constinit property declarations ****************
// ********** End Class UPCGExEdgeKeepLowestScore constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeKeepLowestScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeKeepLowestScore_Statics
UObject* (*const Z_Construct_UClass_UPCGExEdgeKeepLowestScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeKeepLowestScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeKeepLowestScore_Statics::ClassParams = {
	&UPCGExEdgeKeepLowestScore::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeKeepLowestScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeKeepLowestScore_Statics::Class_MetaDataParams)
};
void UPCGExEdgeKeepLowestScore::StaticRegisterNativesUPCGExEdgeKeepLowestScore()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeKeepLowestScore()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeKeepLowestScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeKeepLowestScore.OuterSingleton, Z_Construct_UClass_UPCGExEdgeKeepLowestScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeKeepLowestScore.OuterSingleton;
}
UPCGExEdgeKeepLowestScore::UPCGExEdgeKeepLowestScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeKeepLowestScore);
UPCGExEdgeKeepLowestScore::~UPCGExEdgeKeepLowestScore() {}
// ********** End Class UPCGExEdgeKeepLowestScore **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepLowestScore_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeKeepLowestScore, UPCGExEdgeKeepLowestScore::StaticClass, TEXT("UPCGExEdgeKeepLowestScore"), &Z_Registration_Info_UClass_UPCGExEdgeKeepLowestScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeKeepLowestScore), 243416452U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepLowestScore_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepLowestScore_h__Script_PCGExtendedToolkit_406582353{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepLowestScore_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineKeepLowestScore_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
