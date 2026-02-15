// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Search/PCGExSearchDijkstra.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSearchDijkstra() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchDijkstra();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchDijkstra_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSearchDijkstra *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSearchDijkstra;
UClass* UPCGExSearchDijkstra::GetPrivateStaticClass()
{
	using TClass = UPCGExSearchDijkstra;
	if (!Z_Registration_Info_UClass_UPCGExSearchDijkstra.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSearchDijkstra"),
			Z_Registration_Info_UClass_UPCGExSearchDijkstra.InnerSingleton,
			StaticRegisterNativesUPCGExSearchDijkstra,
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
	return Z_Registration_Info_UClass_UPCGExSearchDijkstra.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSearchDijkstra_NoRegister()
{
	return UPCGExSearchDijkstra::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSearchDijkstra_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Dijkstra" },
		{ "IncludePath", "Graph/Pathfinding/Search/PCGExSearchDijkstra.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Search/PCGExSearchDijkstra.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/search-algorithms/dijkstra" },
		{ "ToolTip", "Dijkstra search. Slower than A* but more respectful of modifiers and weights." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSearchDijkstra constinit property declarations *********************
// ********** End Class UPCGExSearchDijkstra constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSearchDijkstra>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSearchDijkstra_Statics
UObject* (*const Z_Construct_UClass_UPCGExSearchDijkstra_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSearchInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSearchDijkstra_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSearchDijkstra_Statics::ClassParams = {
	&UPCGExSearchDijkstra::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSearchDijkstra_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSearchDijkstra_Statics::Class_MetaDataParams)
};
void UPCGExSearchDijkstra::StaticRegisterNativesUPCGExSearchDijkstra()
{
}
UClass* Z_Construct_UClass_UPCGExSearchDijkstra()
{
	if (!Z_Registration_Info_UClass_UPCGExSearchDijkstra.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSearchDijkstra.OuterSingleton, Z_Construct_UClass_UPCGExSearchDijkstra_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSearchDijkstra.OuterSingleton;
}
UPCGExSearchDijkstra::UPCGExSearchDijkstra(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSearchDijkstra);
UPCGExSearchDijkstra::~UPCGExSearchDijkstra() {}
// ********** End Class UPCGExSearchDijkstra *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchDijkstra_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSearchDijkstra, UPCGExSearchDijkstra::StaticClass, TEXT("UPCGExSearchDijkstra"), &Z_Registration_Info_UClass_UPCGExSearchDijkstra, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSearchDijkstra), 2798704548U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchDijkstra_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchDijkstra_h__Script_PCGExtendedToolkit_4140534721{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchDijkstra_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchDijkstra_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
