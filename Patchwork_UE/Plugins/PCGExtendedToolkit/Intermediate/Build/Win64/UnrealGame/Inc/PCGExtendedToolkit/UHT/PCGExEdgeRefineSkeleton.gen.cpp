// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineSkeleton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineSkeleton() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineSkeleton();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineSkeleton_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRefineSkeleton *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRefineSkeleton;
UClass* UPCGExEdgeRefineSkeleton::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRefineSkeleton;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRefineSkeleton.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRefineSkeleton"),
			Z_Registration_Info_UClass_UPCGExEdgeRefineSkeleton.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRefineSkeleton,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRefineSkeleton.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRefineSkeleton_NoRegister()
{
	return UPCGExEdgeRefineSkeleton::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Refine : \xce\xb2 Skeleton" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineSkeleton.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineSkeleton.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/v-skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Beta_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineSkeleton.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineSkeleton.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRefineSkeleton constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Beta;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeRefineSkeleton constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRefineSkeleton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics

// ********** Begin Class UPCGExEdgeRefineSkeleton Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::NewProp_Beta = { "Beta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeRefineSkeleton, Beta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Beta_MetaData), NewProp_Beta_MetaData) };
void Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPCGExEdgeRefineSkeleton*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgeRefineSkeleton), &Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::NewProp_Beta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeRefineSkeleton Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::ClassParams = {
	&UPCGExEdgeRefineSkeleton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRefineSkeleton::StaticRegisterNativesUPCGExEdgeRefineSkeleton()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRefineSkeleton()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRefineSkeleton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRefineSkeleton.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRefineSkeleton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRefineSkeleton.OuterSingleton;
}
UPCGExEdgeRefineSkeleton::UPCGExEdgeRefineSkeleton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRefineSkeleton);
UPCGExEdgeRefineSkeleton::~UPCGExEdgeRefineSkeleton() {}
// ********** End Class UPCGExEdgeRefineSkeleton ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineSkeleton_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRefineSkeleton, UPCGExEdgeRefineSkeleton::StaticClass, TEXT("UPCGExEdgeRefineSkeleton"), &Z_Registration_Info_UClass_UPCGExEdgeRefineSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRefineSkeleton), 2716898473U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineSkeleton_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineSkeleton_h__Script_PCGExtendedToolkit_3910175286{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineSkeleton_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineSkeleton_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
