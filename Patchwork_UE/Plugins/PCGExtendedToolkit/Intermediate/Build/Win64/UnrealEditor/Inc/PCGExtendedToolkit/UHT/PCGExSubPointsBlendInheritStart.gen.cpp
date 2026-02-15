// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/SubPoints/DataBlending/PCGExSubPointsBlendInheritStart.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubPointsBlendInheritStart() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInheritStart();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSubPointsBlendInheritStart *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritStart;
UClass* UPCGExSubPointsBlendInheritStart::GetPrivateStaticClass()
{
	using TClass = UPCGExSubPointsBlendInheritStart;
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritStart.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubPointsBlendInheritStart"),
			Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritStart.InnerSingleton,
			StaticRegisterNativesUPCGExSubPointsBlendInheritStart,
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
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritStart.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_NoRegister()
{
	return UPCGExSubPointsBlendInheritStart::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Inherit First" },
		{ "IncludePath", "Paths/SubPoints/DataBlending/PCGExSubPointsBlendInheritStart.h" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/DataBlending/PCGExSubPointsBlendInheritStart.h" },
		{ "PCGExNodeLibraryDoc", "paths/sub-point-blending/inherit-first" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubPointsBlendInheritStart constinit property declarations *********
// ********** End Class UPCGExSubPointsBlendInheritStart constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubPointsBlendInheritStart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_Statics
UObject* (*const Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_Statics::ClassParams = {
	&UPCGExSubPointsBlendInheritStart::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_Statics::Class_MetaDataParams)
};
void UPCGExSubPointsBlendInheritStart::StaticRegisterNativesUPCGExSubPointsBlendInheritStart()
{
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendInheritStart()
{
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritStart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritStart.OuterSingleton, Z_Construct_UClass_UPCGExSubPointsBlendInheritStart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritStart.OuterSingleton;
}
UPCGExSubPointsBlendInheritStart::UPCGExSubPointsBlendInheritStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubPointsBlendInheritStart);
UPCGExSubPointsBlendInheritStart::~UPCGExSubPointsBlendInheritStart() {}
// ********** End Class UPCGExSubPointsBlendInheritStart *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritStart_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubPointsBlendInheritStart, UPCGExSubPointsBlendInheritStart::StaticClass, TEXT("UPCGExSubPointsBlendInheritStart"), &Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubPointsBlendInheritStart), 1674319803U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritStart_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritStart_h__Script_PCGExtendedToolkit_2022805851{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritStart_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritStart_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
