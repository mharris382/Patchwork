// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineRemoveLeaves.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineRemoveLeaves() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveLeaves();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveLeaves_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRemoveLeaves ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRemoveLeaves;
UClass* UPCGExEdgeRemoveLeaves::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRemoveLeaves;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveLeaves.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRemoveLeaves"),
			Z_Registration_Info_UClass_UPCGExEdgeRemoveLeaves.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRemoveLeaves,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveLeaves.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveLeaves_NoRegister()
{
	return UPCGExEdgeRemoveLeaves::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRemoveLeaves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Remove Leaves" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineRemoveLeaves.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveLeaves.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/remove-leaves" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRemoveLeaves constinit property declarations *******************
// ********** End Class UPCGExEdgeRemoveLeaves constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRemoveLeaves>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRemoveLeaves_Statics
UObject* (*const Z_Construct_UClass_UPCGExEdgeRemoveLeaves_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveLeaves_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRemoveLeaves_Statics::ClassParams = {
	&UPCGExEdgeRemoveLeaves::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveLeaves_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRemoveLeaves_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRemoveLeaves::StaticRegisterNativesUPCGExEdgeRemoveLeaves()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveLeaves()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveLeaves.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRemoveLeaves.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRemoveLeaves_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveLeaves.OuterSingleton;
}
UPCGExEdgeRemoveLeaves::UPCGExEdgeRemoveLeaves(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRemoveLeaves);
UPCGExEdgeRemoveLeaves::~UPCGExEdgeRemoveLeaves() {}
// ********** End Class UPCGExEdgeRemoveLeaves *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLeaves_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRemoveLeaves, UPCGExEdgeRemoveLeaves::StaticClass, TEXT("UPCGExEdgeRemoveLeaves"), &Z_Registration_Info_UClass_UPCGExEdgeRemoveLeaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRemoveLeaves), 713860324U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLeaves_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLeaves_h__Script_PCGExtendedToolkit_3798531072{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLeaves_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLeaves_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
