// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Relaxing/PCGExBoxFittingRelax.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBoxFittingRelax() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoxFittingRelax();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoxFittingRelax_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFittingRelaxBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBoxFittingRelax ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBoxFittingRelax;
UClass* UPCGExBoxFittingRelax::GetPrivateStaticClass()
{
	using TClass = UPCGExBoxFittingRelax;
	if (!Z_Registration_Info_UClass_UPCGExBoxFittingRelax.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBoxFittingRelax"),
			Z_Registration_Info_UClass_UPCGExBoxFittingRelax.InnerSingleton,
			StaticRegisterNativesUPCGExBoxFittingRelax,
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
	return Z_Registration_Info_UClass_UPCGExBoxFittingRelax.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBoxFittingRelax_NoRegister()
{
	return UPCGExBoxFittingRelax::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBoxFittingRelax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Box Fitting" },
		{ "IncludePath", "Graph/Edges/Relaxing/PCGExBoxFittingRelax.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExBoxFittingRelax.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "clusters/relax-cluster/box-fitting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A padding value added to the box bounds to attempt to reduce overlap or add more spacing between boxes. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExBoxFittingRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A padding value added to the box bounds to attempt to reduce overlap or add more spacing between boxes." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBoxFittingRelax constinit property declarations ********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Padding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBoxFittingRelax constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBoxFittingRelax>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBoxFittingRelax_Statics

// ********** Begin Class UPCGExBoxFittingRelax Property Definitions *******************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoxFittingRelax, Padding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::NewProp_Padding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBoxFittingRelax Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFittingRelaxBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::ClassParams = {
	&UPCGExBoxFittingRelax::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::Class_MetaDataParams)
};
void UPCGExBoxFittingRelax::StaticRegisterNativesUPCGExBoxFittingRelax()
{
}
UClass* Z_Construct_UClass_UPCGExBoxFittingRelax()
{
	if (!Z_Registration_Info_UClass_UPCGExBoxFittingRelax.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBoxFittingRelax.OuterSingleton, Z_Construct_UClass_UPCGExBoxFittingRelax_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBoxFittingRelax.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBoxFittingRelax);
UPCGExBoxFittingRelax::~UPCGExBoxFittingRelax() {}
// ********** End Class UPCGExBoxFittingRelax ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExBoxFittingRelax_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBoxFittingRelax, UPCGExBoxFittingRelax::StaticClass, TEXT("UPCGExBoxFittingRelax"), &Z_Registration_Info_UClass_UPCGExBoxFittingRelax, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBoxFittingRelax), 1690912818U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExBoxFittingRelax_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExBoxFittingRelax_h__Script_PCGExtendedToolkit_733129982{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExBoxFittingRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExBoxFittingRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
