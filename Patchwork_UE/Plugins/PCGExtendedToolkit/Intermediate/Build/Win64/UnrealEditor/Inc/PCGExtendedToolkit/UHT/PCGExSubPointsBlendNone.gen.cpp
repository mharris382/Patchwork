// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/SubPoints/DataBlending/PCGExSubPointsBlendNone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubPointsBlendNone() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendNone();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendNone_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSubPointsBlendNone *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubPointsBlendNone;
UClass* UPCGExSubPointsBlendNone::GetPrivateStaticClass()
{
	using TClass = UPCGExSubPointsBlendNone;
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendNone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubPointsBlendNone"),
			Z_Registration_Info_UClass_UPCGExSubPointsBlendNone.InnerSingleton,
			StaticRegisterNativesUPCGExSubPointsBlendNone,
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
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendNone.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendNone_NoRegister()
{
	return UPCGExSubPointsBlendNone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubPointsBlendNone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "No Blending" },
		{ "IncludePath", "Paths/SubPoints/DataBlending/PCGExSubPointsBlendNone.h" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/DataBlending/PCGExSubPointsBlendNone.h" },
		{ "PCGExNodeLibraryDoc", "paths/sub-point-blending/none" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubPointsBlendNone constinit property declarations *****************
// ********** End Class UPCGExSubPointsBlendNone constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubPointsBlendNone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubPointsBlendNone_Statics
UObject* (*const Z_Construct_UClass_UPCGExSubPointsBlendNone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendNone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubPointsBlendNone_Statics::ClassParams = {
	&UPCGExSubPointsBlendNone::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendNone_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubPointsBlendNone_Statics::Class_MetaDataParams)
};
void UPCGExSubPointsBlendNone::StaticRegisterNativesUPCGExSubPointsBlendNone()
{
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendNone()
{
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendNone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubPointsBlendNone.OuterSingleton, Z_Construct_UClass_UPCGExSubPointsBlendNone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendNone.OuterSingleton;
}
UPCGExSubPointsBlendNone::UPCGExSubPointsBlendNone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubPointsBlendNone);
UPCGExSubPointsBlendNone::~UPCGExSubPointsBlendNone() {}
// ********** End Class UPCGExSubPointsBlendNone ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendNone_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubPointsBlendNone, UPCGExSubPointsBlendNone::StaticClass, TEXT("UPCGExSubPointsBlendNone"), &Z_Registration_Info_UClass_UPCGExSubPointsBlendNone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubPointsBlendNone), 3745339165U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendNone_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendNone_h__Script_PCGExtendedToolkit_4167145793{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendNone_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendNone_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
