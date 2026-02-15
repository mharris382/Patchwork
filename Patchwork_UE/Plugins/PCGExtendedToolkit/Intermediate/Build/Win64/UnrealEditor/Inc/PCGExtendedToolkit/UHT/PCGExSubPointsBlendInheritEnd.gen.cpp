// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/SubPoints/DataBlending/PCGExSubPointsBlendInheritEnd.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubPointsBlendInheritEnd() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSubPointsBlendInheritEnd *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritEnd;
UClass* UPCGExSubPointsBlendInheritEnd::GetPrivateStaticClass()
{
	using TClass = UPCGExSubPointsBlendInheritEnd;
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritEnd.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubPointsBlendInheritEnd"),
			Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritEnd.InnerSingleton,
			StaticRegisterNativesUPCGExSubPointsBlendInheritEnd,
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
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritEnd.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_NoRegister()
{
	return UPCGExSubPointsBlendInheritEnd::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Inherit Last" },
		{ "IncludePath", "Paths/SubPoints/DataBlending/PCGExSubPointsBlendInheritEnd.h" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/DataBlending/PCGExSubPointsBlendInheritEnd.h" },
		{ "PCGExNodeLibraryDoc", "paths/sub-point-blending/inherit-end" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubPointsBlendInheritEnd constinit property declarations ***********
// ********** End Class UPCGExSubPointsBlendInheritEnd constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubPointsBlendInheritEnd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_Statics
UObject* (*const Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_Statics::ClassParams = {
	&UPCGExSubPointsBlendInheritEnd::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_Statics::Class_MetaDataParams)
};
void UPCGExSubPointsBlendInheritEnd::StaticRegisterNativesUPCGExSubPointsBlendInheritEnd()
{
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd()
{
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritEnd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritEnd.OuterSingleton, Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritEnd.OuterSingleton;
}
UPCGExSubPointsBlendInheritEnd::UPCGExSubPointsBlendInheritEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubPointsBlendInheritEnd);
UPCGExSubPointsBlendInheritEnd::~UPCGExSubPointsBlendInheritEnd() {}
// ********** End Class UPCGExSubPointsBlendInheritEnd *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritEnd_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubPointsBlendInheritEnd, UPCGExSubPointsBlendInheritEnd::StaticClass, TEXT("UPCGExSubPointsBlendInheritEnd"), &Z_Registration_Info_UClass_UPCGExSubPointsBlendInheritEnd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubPointsBlendInheritEnd), 3486802348U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritEnd_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritEnd_h__Script_PCGExtendedToolkit_3295988912{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritEnd_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInheritEnd_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
