// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineRemoveLongest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineRemoveLongest() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveLongest();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRemoveLongest_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRemoveLongest **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRemoveLongest;
UClass* UPCGExEdgeRemoveLongest::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRemoveLongest;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveLongest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRemoveLongest"),
			Z_Registration_Info_UClass_UPCGExEdgeRemoveLongest.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRemoveLongest,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveLongest.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveLongest_NoRegister()
{
	return UPCGExEdgeRemoveLongest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRemoveLongest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Remove Longest" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineRemoveLongest.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineRemoveLongest.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/edge-length" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRemoveLongest constinit property declarations ******************
// ********** End Class UPCGExEdgeRemoveLongest constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRemoveLongest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRemoveLongest_Statics
UObject* (*const Z_Construct_UClass_UPCGExEdgeRemoveLongest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveLongest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRemoveLongest_Statics::ClassParams = {
	&UPCGExEdgeRemoveLongest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRemoveLongest_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRemoveLongest_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRemoveLongest::StaticRegisterNativesUPCGExEdgeRemoveLongest()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRemoveLongest()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRemoveLongest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRemoveLongest.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRemoveLongest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRemoveLongest.OuterSingleton;
}
UPCGExEdgeRemoveLongest::UPCGExEdgeRemoveLongest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRemoveLongest);
UPCGExEdgeRemoveLongest::~UPCGExEdgeRemoveLongest() {}
// ********** End Class UPCGExEdgeRemoveLongest ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLongest_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRemoveLongest, UPCGExEdgeRemoveLongest::StaticClass, TEXT("UPCGExEdgeRemoveLongest"), &Z_Registration_Info_UClass_UPCGExEdgeRemoveLongest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRemoveLongest), 2545943162U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLongest_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLongest_h__Script_PCGExtendedToolkit_405644331{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLongest_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineRemoveLongest_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
