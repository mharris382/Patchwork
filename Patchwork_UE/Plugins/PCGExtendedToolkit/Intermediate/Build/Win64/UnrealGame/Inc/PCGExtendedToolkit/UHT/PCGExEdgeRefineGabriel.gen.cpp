// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineGabriel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineGabriel() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineGabriel();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineGabriel_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRefineGabriel **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRefineGabriel;
UClass* UPCGExEdgeRefineGabriel::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRefineGabriel;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRefineGabriel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRefineGabriel"),
			Z_Registration_Info_UClass_UPCGExEdgeRefineGabriel.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRefineGabriel,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRefineGabriel.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRefineGabriel_NoRegister()
{
	return UPCGExEdgeRefineGabriel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Refine : Gabriel" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineGabriel.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineGabriel.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/gabriel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineGabriel.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRefineGabriel constinit property declarations ******************
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeRefineGabriel constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRefineGabriel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics

// ********** Begin Class UPCGExEdgeRefineGabriel Property Definitions *****************************
void Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPCGExEdgeRefineGabriel*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgeRefineGabriel), &Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeRefineGabriel Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::ClassParams = {
	&UPCGExEdgeRefineGabriel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRefineGabriel::StaticRegisterNativesUPCGExEdgeRefineGabriel()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRefineGabriel()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRefineGabriel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRefineGabriel.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRefineGabriel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRefineGabriel.OuterSingleton;
}
UPCGExEdgeRefineGabriel::UPCGExEdgeRefineGabriel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRefineGabriel);
UPCGExEdgeRefineGabriel::~UPCGExEdgeRefineGabriel() {}
// ********** End Class UPCGExEdgeRefineGabriel ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineGabriel_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRefineGabriel, UPCGExEdgeRefineGabriel::StaticClass, TEXT("UPCGExEdgeRefineGabriel"), &Z_Registration_Info_UClass_UPCGExEdgeRefineGabriel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRefineGabriel), 3131175917U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineGabriel_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineGabriel_h__Script_PCGExtendedToolkit_526994109{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineGabriel_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineGabriel_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
