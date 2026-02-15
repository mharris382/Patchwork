// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineByFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineByFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineByFilter();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineByFilter_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRefineByFilter *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRefineByFilter;
UClass* UPCGExEdgeRefineByFilter::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRefineByFilter;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRefineByFilter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRefineByFilter"),
			Z_Registration_Info_UClass_UPCGExEdgeRefineByFilter.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRefineByFilter,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRefineByFilter.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRefineByFilter_NoRegister()
{
	return UPCGExEdgeRefineByFilter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Refine : Filter" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineByFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineByFilter.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/filters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, filtered out edges are kept, while edges that pass the filter are removed. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineByFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, filtered out edges are kept, while edges that pass the filter are removed." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRefineByFilter constinit property declarations *****************
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeRefineByFilter constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRefineByFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics

// ********** Begin Class UPCGExEdgeRefineByFilter Property Definitions ****************************
void Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPCGExEdgeRefineByFilter*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgeRefineByFilter), &Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeRefineByFilter Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::ClassParams = {
	&UPCGExEdgeRefineByFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRefineByFilter::StaticRegisterNativesUPCGExEdgeRefineByFilter()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRefineByFilter()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRefineByFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRefineByFilter.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRefineByFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRefineByFilter.OuterSingleton;
}
UPCGExEdgeRefineByFilter::UPCGExEdgeRefineByFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRefineByFilter);
UPCGExEdgeRefineByFilter::~UPCGExEdgeRefineByFilter() {}
// ********** End Class UPCGExEdgeRefineByFilter ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineByFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRefineByFilter, UPCGExEdgeRefineByFilter::StaticClass, TEXT("UPCGExEdgeRefineByFilter"), &Z_Registration_Info_UClass_UPCGExEdgeRefineByFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRefineByFilter), 2206758216U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineByFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineByFilter_h__Script_PCGExtendedToolkit_4140393766{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineByFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineByFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
