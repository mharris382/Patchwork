// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Tangents/PCGExTangentsFromNeighbors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTangentsFromNeighbors() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFromNeighborsTangents();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFromNeighborsTangents_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFromNeighborsTangents **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFromNeighborsTangents;
UClass* UPCGExFromNeighborsTangents::GetPrivateStaticClass()
{
	using TClass = UPCGExFromNeighborsTangents;
	if (!Z_Registration_Info_UClass_UPCGExFromNeighborsTangents.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFromNeighborsTangents"),
			Z_Registration_Info_UClass_UPCGExFromNeighborsTangents.InnerSingleton,
			StaticRegisterNativesUPCGExFromNeighborsTangents,
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
	return Z_Registration_Info_UClass_UPCGExFromNeighborsTangents.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFromNeighborsTangents_NoRegister()
{
	return UPCGExFromNeighborsTangents::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFromNeighborsTangents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "From Neighbors" },
		{ "IncludePath", "Paths/Tangents/PCGExTangentsFromNeighbors.h" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsFromNeighbors.h" },
		{ "PCGExNodeLibraryDoc", "paths/write-tangents/tangents-neighbors" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFromNeighborsTangents constinit property declarations **************
// ********** End Class UPCGExFromNeighborsTangents constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFromNeighborsTangents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFromNeighborsTangents_Statics
UObject* (*const Z_Construct_UClass_UPCGExFromNeighborsTangents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTangentsInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFromNeighborsTangents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFromNeighborsTangents_Statics::ClassParams = {
	&UPCGExFromNeighborsTangents::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFromNeighborsTangents_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFromNeighborsTangents_Statics::Class_MetaDataParams)
};
void UPCGExFromNeighborsTangents::StaticRegisterNativesUPCGExFromNeighborsTangents()
{
}
UClass* Z_Construct_UClass_UPCGExFromNeighborsTangents()
{
	if (!Z_Registration_Info_UClass_UPCGExFromNeighborsTangents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFromNeighborsTangents.OuterSingleton, Z_Construct_UClass_UPCGExFromNeighborsTangents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFromNeighborsTangents.OuterSingleton;
}
UPCGExFromNeighborsTangents::UPCGExFromNeighborsTangents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFromNeighborsTangents);
UPCGExFromNeighborsTangents::~UPCGExFromNeighborsTangents() {}
// ********** End Class UPCGExFromNeighborsTangents ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromNeighbors_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFromNeighborsTangents, UPCGExFromNeighborsTangents::StaticClass, TEXT("UPCGExFromNeighborsTangents"), &Z_Registration_Info_UClass_UPCGExFromNeighborsTangents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFromNeighborsTangents), 2080953949U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromNeighbors_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromNeighbors_h__Script_PCGExtendedToolkit_686104795{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromNeighbors_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromNeighbors_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
