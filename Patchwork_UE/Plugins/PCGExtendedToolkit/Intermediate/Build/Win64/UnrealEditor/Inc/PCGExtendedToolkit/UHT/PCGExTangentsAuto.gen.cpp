// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Tangents/PCGExTangentsAuto.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTangentsAuto() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAutoTangents();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAutoTangents_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExAutoTangents *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAutoTangents;
UClass* UPCGExAutoTangents::GetPrivateStaticClass()
{
	using TClass = UPCGExAutoTangents;
	if (!Z_Registration_Info_UClass_UPCGExAutoTangents.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAutoTangents"),
			Z_Registration_Info_UClass_UPCGExAutoTangents.InnerSingleton,
			StaticRegisterNativesUPCGExAutoTangents,
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
	return Z_Registration_Info_UClass_UPCGExAutoTangents.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAutoTangents_NoRegister()
{
	return UPCGExAutoTangents::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAutoTangents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Auto" },
		{ "IncludePath", "Paths/Tangents/PCGExTangentsAuto.h" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsAuto.h" },
		{ "PCGExNodeLibraryDoc", "paths/write-tangents/tangents-auto" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAutoTangents constinit property declarations ***********************
// ********** End Class UPCGExAutoTangents constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAutoTangents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAutoTangents_Statics
UObject* (*const Z_Construct_UClass_UPCGExAutoTangents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTangentsInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAutoTangents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAutoTangents_Statics::ClassParams = {
	&UPCGExAutoTangents::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAutoTangents_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAutoTangents_Statics::Class_MetaDataParams)
};
void UPCGExAutoTangents::StaticRegisterNativesUPCGExAutoTangents()
{
}
UClass* Z_Construct_UClass_UPCGExAutoTangents()
{
	if (!Z_Registration_Info_UClass_UPCGExAutoTangents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAutoTangents.OuterSingleton, Z_Construct_UClass_UPCGExAutoTangents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAutoTangents.OuterSingleton;
}
UPCGExAutoTangents::UPCGExAutoTangents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAutoTangents);
UPCGExAutoTangents::~UPCGExAutoTangents() {}
// ********** End Class UPCGExAutoTangents *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsAuto_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAutoTangents, UPCGExAutoTangents::StaticClass, TEXT("UPCGExAutoTangents"), &Z_Registration_Info_UClass_UPCGExAutoTangents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAutoTangents), 1377777201U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsAuto_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsAuto_h__Script_PCGExtendedToolkit_2501568579{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsAuto_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsAuto_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
