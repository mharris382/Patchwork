// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Search/PCGExSearchAStar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSearchAStar() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchAStar();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchAStar_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSearchAStar ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSearchAStar;
UClass* UPCGExSearchAStar::GetPrivateStaticClass()
{
	using TClass = UPCGExSearchAStar;
	if (!Z_Registration_Info_UClass_UPCGExSearchAStar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSearchAStar"),
			Z_Registration_Info_UClass_UPCGExSearchAStar.InnerSingleton,
			StaticRegisterNativesUPCGExSearchAStar,
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
	return Z_Registration_Info_UClass_UPCGExSearchAStar.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSearchAStar_NoRegister()
{
	return UPCGExSearchAStar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSearchAStar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "A*" },
		{ "IncludePath", "Graph/Pathfinding/Search/PCGExSearchAStar.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Search/PCGExSearchAStar.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/search-algorithms/a-a-star" },
		{ "ToolTip", "A* Search. Returns early with the least possible amount of traversed nodes." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSearchAStar constinit property declarations ************************
// ********** End Class UPCGExSearchAStar constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSearchAStar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSearchAStar_Statics
UObject* (*const Z_Construct_UClass_UPCGExSearchAStar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSearchInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSearchAStar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSearchAStar_Statics::ClassParams = {
	&UPCGExSearchAStar::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSearchAStar_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSearchAStar_Statics::Class_MetaDataParams)
};
void UPCGExSearchAStar::StaticRegisterNativesUPCGExSearchAStar()
{
}
UClass* Z_Construct_UClass_UPCGExSearchAStar()
{
	if (!Z_Registration_Info_UClass_UPCGExSearchAStar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSearchAStar.OuterSingleton, Z_Construct_UClass_UPCGExSearchAStar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSearchAStar.OuterSingleton;
}
UPCGExSearchAStar::UPCGExSearchAStar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSearchAStar);
UPCGExSearchAStar::~UPCGExSearchAStar() {}
// ********** End Class UPCGExSearchAStar **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchAStar_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSearchAStar, UPCGExSearchAStar::StaticClass, TEXT("UPCGExSearchAStar"), &Z_Registration_Info_UClass_UPCGExSearchAStar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSearchAStar), 2605065385U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchAStar_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchAStar_h__Script_PCGExtendedToolkit_1209703760{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchAStar_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchAStar_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
