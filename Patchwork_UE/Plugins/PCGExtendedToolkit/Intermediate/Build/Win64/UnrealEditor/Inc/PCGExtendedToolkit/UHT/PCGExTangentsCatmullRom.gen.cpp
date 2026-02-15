// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Tangents/PCGExTangentsCatmullRom.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTangentsCatmullRom() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCatmullRomTangents();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCatmullRomTangents_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExCatmullRomTangents *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCatmullRomTangents;
UClass* UPCGExCatmullRomTangents::GetPrivateStaticClass()
{
	using TClass = UPCGExCatmullRomTangents;
	if (!Z_Registration_Info_UClass_UPCGExCatmullRomTangents.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCatmullRomTangents"),
			Z_Registration_Info_UClass_UPCGExCatmullRomTangents.InnerSingleton,
			StaticRegisterNativesUPCGExCatmullRomTangents,
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
	return Z_Registration_Info_UClass_UPCGExCatmullRomTangents.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCatmullRomTangents_NoRegister()
{
	return UPCGExCatmullRomTangents::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCatmullRomTangents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Catmull-Rom" },
		{ "IncludePath", "Paths/Tangents/PCGExTangentsCatmullRom.h" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsCatmullRom.h" },
		{ "PCGExNodeLibraryDoc", "paths/write-tangents/tangents-catmull-rom" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCatmullRomTangents constinit property declarations *****************
// ********** End Class UPCGExCatmullRomTangents constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCatmullRomTangents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCatmullRomTangents_Statics
UObject* (*const Z_Construct_UClass_UPCGExCatmullRomTangents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTangentsInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCatmullRomTangents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCatmullRomTangents_Statics::ClassParams = {
	&UPCGExCatmullRomTangents::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCatmullRomTangents_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCatmullRomTangents_Statics::Class_MetaDataParams)
};
void UPCGExCatmullRomTangents::StaticRegisterNativesUPCGExCatmullRomTangents()
{
}
UClass* Z_Construct_UClass_UPCGExCatmullRomTangents()
{
	if (!Z_Registration_Info_UClass_UPCGExCatmullRomTangents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCatmullRomTangents.OuterSingleton, Z_Construct_UClass_UPCGExCatmullRomTangents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCatmullRomTangents.OuterSingleton;
}
UPCGExCatmullRomTangents::UPCGExCatmullRomTangents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCatmullRomTangents);
UPCGExCatmullRomTangents::~UPCGExCatmullRomTangents() {}
// ********** End Class UPCGExCatmullRomTangents ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsCatmullRom_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCatmullRomTangents, UPCGExCatmullRomTangents::StaticClass, TEXT("UPCGExCatmullRomTangents"), &Z_Registration_Info_UClass_UPCGExCatmullRomTangents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCatmullRomTangents), 744277424U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsCatmullRom_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsCatmullRom_h__Script_PCGExtendedToolkit_2739666120{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsCatmullRom_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsCatmullRom_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
