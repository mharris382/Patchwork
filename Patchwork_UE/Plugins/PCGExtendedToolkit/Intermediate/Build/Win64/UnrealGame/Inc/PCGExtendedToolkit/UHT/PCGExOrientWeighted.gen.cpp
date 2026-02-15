// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Orient/PCGExOrientWeighted.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExOrientWeighted() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientWeighted();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientWeighted_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExOrientWeighted *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExOrientWeighted;
UClass* UPCGExOrientWeighted::GetPrivateStaticClass()
{
	using TClass = UPCGExOrientWeighted;
	if (!Z_Registration_Info_UClass_UPCGExOrientWeighted.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExOrientWeighted"),
			Z_Registration_Info_UClass_UPCGExOrientWeighted.InnerSingleton,
			StaticRegisterNativesUPCGExOrientWeighted,
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
	return Z_Registration_Info_UClass_UPCGExOrientWeighted.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExOrientWeighted_NoRegister()
{
	return UPCGExOrientWeighted::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExOrientWeighted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Weighted" },
		{ "IncludePath", "Paths/Orient/PCGExOrientWeighted.h" },
		{ "ModuleRelativePath", "Public/Paths/Orient/PCGExOrientWeighted.h" },
		{ "PCGExNodeLibraryDoc", "paths/orient/orient-weighted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInverseWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/Orient/PCGExOrientWeighted.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExOrientWeighted constinit property declarations *********************
	static void NewProp_bInverseWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverseWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExOrientWeighted constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExOrientWeighted>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExOrientWeighted_Statics

// ********** Begin Class UPCGExOrientWeighted Property Definitions ********************************
void Z_Construct_UClass_UPCGExOrientWeighted_Statics::NewProp_bInverseWeight_SetBit(void* Obj)
{
	((UPCGExOrientWeighted*)Obj)->bInverseWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExOrientWeighted_Statics::NewProp_bInverseWeight = { "bInverseWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExOrientWeighted), &Z_Construct_UClass_UPCGExOrientWeighted_Statics::NewProp_bInverseWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInverseWeight_MetaData), NewProp_bInverseWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExOrientWeighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientWeighted_Statics::NewProp_bInverseWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientWeighted_Statics::PropPointers) < 2048);
// ********** End Class UPCGExOrientWeighted Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UPCGExOrientWeighted_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExOrientInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientWeighted_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExOrientWeighted_Statics::ClassParams = {
	&UPCGExOrientWeighted::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExOrientWeighted_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientWeighted_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientWeighted_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExOrientWeighted_Statics::Class_MetaDataParams)
};
void UPCGExOrientWeighted::StaticRegisterNativesUPCGExOrientWeighted()
{
}
UClass* Z_Construct_UClass_UPCGExOrientWeighted()
{
	if (!Z_Registration_Info_UClass_UPCGExOrientWeighted.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExOrientWeighted.OuterSingleton, Z_Construct_UClass_UPCGExOrientWeighted_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExOrientWeighted.OuterSingleton;
}
UPCGExOrientWeighted::UPCGExOrientWeighted(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExOrientWeighted);
UPCGExOrientWeighted::~UPCGExOrientWeighted() {}
// ********** End Class UPCGExOrientWeighted *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientWeighted_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExOrientWeighted, UPCGExOrientWeighted::StaticClass, TEXT("UPCGExOrientWeighted"), &Z_Registration_Info_UClass_UPCGExOrientWeighted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExOrientWeighted), 2987100605U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientWeighted_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientWeighted_h__Script_PCGExtendedToolkit_885591931{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientWeighted_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientWeighted_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
