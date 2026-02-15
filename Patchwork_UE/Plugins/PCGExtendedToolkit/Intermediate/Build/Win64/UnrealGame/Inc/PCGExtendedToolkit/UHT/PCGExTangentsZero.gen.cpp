// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Tangents/PCGExTangentsZero.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTangentsZero() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExZeroTangents();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExZeroTangents_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExZeroTangents *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExZeroTangents;
UClass* UPCGExZeroTangents::GetPrivateStaticClass()
{
	using TClass = UPCGExZeroTangents;
	if (!Z_Registration_Info_UClass_UPCGExZeroTangents.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExZeroTangents"),
			Z_Registration_Info_UClass_UPCGExZeroTangents.InnerSingleton,
			StaticRegisterNativesUPCGExZeroTangents,
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
	return Z_Registration_Info_UClass_UPCGExZeroTangents.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExZeroTangents_NoRegister()
{
	return UPCGExZeroTangents::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExZeroTangents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Zero" },
		{ "IncludePath", "Paths/Tangents/PCGExTangentsZero.h" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsZero.h" },
		{ "PCGExNodeLibraryDoc", "paths/write-tangents/tangents-zero" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExZeroTangents constinit property declarations ***********************
// ********** End Class UPCGExZeroTangents constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExZeroTangents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExZeroTangents_Statics
UObject* (*const Z_Construct_UClass_UPCGExZeroTangents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTangentsInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExZeroTangents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExZeroTangents_Statics::ClassParams = {
	&UPCGExZeroTangents::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExZeroTangents_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExZeroTangents_Statics::Class_MetaDataParams)
};
void UPCGExZeroTangents::StaticRegisterNativesUPCGExZeroTangents()
{
}
UClass* Z_Construct_UClass_UPCGExZeroTangents()
{
	if (!Z_Registration_Info_UClass_UPCGExZeroTangents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExZeroTangents.OuterSingleton, Z_Construct_UClass_UPCGExZeroTangents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExZeroTangents.OuterSingleton;
}
UPCGExZeroTangents::UPCGExZeroTangents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExZeroTangents);
UPCGExZeroTangents::~UPCGExZeroTangents() {}
// ********** End Class UPCGExZeroTangents *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsZero_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExZeroTangents, UPCGExZeroTangents::StaticClass, TEXT("UPCGExZeroTangents"), &Z_Registration_Info_UClass_UPCGExZeroTangents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExZeroTangents), 1378782730U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsZero_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsZero_h__Script_PCGExtendedToolkit_3985831{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsZero_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsZero_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
