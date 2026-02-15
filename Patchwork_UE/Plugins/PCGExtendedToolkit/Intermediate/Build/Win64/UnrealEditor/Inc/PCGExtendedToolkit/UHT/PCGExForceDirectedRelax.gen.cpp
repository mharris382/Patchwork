// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Relaxing/PCGExForceDirectedRelax.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExForceDirectedRelax() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExForceDirectedRelax();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExForceDirectedRelax_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExForceDirectedRelax *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExForceDirectedRelax;
UClass* UPCGExForceDirectedRelax::GetPrivateStaticClass()
{
	using TClass = UPCGExForceDirectedRelax;
	if (!Z_Registration_Info_UClass_UPCGExForceDirectedRelax.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExForceDirectedRelax"),
			Z_Registration_Info_UClass_UPCGExForceDirectedRelax.InnerSingleton,
			StaticRegisterNativesUPCGExForceDirectedRelax,
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
	return Z_Registration_Info_UClass_UPCGExForceDirectedRelax.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExForceDirectedRelax_NoRegister()
{
	return UPCGExForceDirectedRelax::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExForceDirectedRelax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Force Directed" },
		{ "IncludePath", "Graph/Edges/Relaxing/PCGExForceDirectedRelax.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExForceDirectedRelax.h" },
		{ "PCGExNodeLibraryDoc", "clusters/relax-cluster/force-directed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExForceDirectedRelax.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElectrostaticConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExForceDirectedRelax.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExForceDirectedRelax constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SpringConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ElectrostaticConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExForceDirectedRelax constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExForceDirectedRelax>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExForceDirectedRelax_Statics

// ********** Begin Class UPCGExForceDirectedRelax Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::NewProp_SpringConstant = { "SpringConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExForceDirectedRelax, SpringConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringConstant_MetaData), NewProp_SpringConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::NewProp_ElectrostaticConstant = { "ElectrostaticConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExForceDirectedRelax, ElectrostaticConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElectrostaticConstant_MetaData), NewProp_ElectrostaticConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::NewProp_SpringConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::NewProp_ElectrostaticConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::PropPointers) < 2048);
// ********** End Class UPCGExForceDirectedRelax Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExRelaxClusterOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::ClassParams = {
	&UPCGExForceDirectedRelax::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::Class_MetaDataParams)
};
void UPCGExForceDirectedRelax::StaticRegisterNativesUPCGExForceDirectedRelax()
{
}
UClass* Z_Construct_UClass_UPCGExForceDirectedRelax()
{
	if (!Z_Registration_Info_UClass_UPCGExForceDirectedRelax.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExForceDirectedRelax.OuterSingleton, Z_Construct_UClass_UPCGExForceDirectedRelax_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExForceDirectedRelax.OuterSingleton;
}
UPCGExForceDirectedRelax::UPCGExForceDirectedRelax(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExForceDirectedRelax);
UPCGExForceDirectedRelax::~UPCGExForceDirectedRelax() {}
// ********** End Class UPCGExForceDirectedRelax ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExForceDirectedRelax_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExForceDirectedRelax, UPCGExForceDirectedRelax::StaticClass, TEXT("UPCGExForceDirectedRelax"), &Z_Registration_Info_UClass_UPCGExForceDirectedRelax, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExForceDirectedRelax), 3182863733U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExForceDirectedRelax_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExForceDirectedRelax_h__Script_PCGExtendedToolkit_73216182{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExForceDirectedRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExForceDirectedRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
