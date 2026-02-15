// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Smoothing/PCGExMovingAverageSmoothing.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMovingAverageSmoothing() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMovingAverageSmoothing();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMovingAverageSmoothing_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSmoothingInstancedFactory();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExMovingAverageSmoothing *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMovingAverageSmoothing;
UClass* UPCGExMovingAverageSmoothing::GetPrivateStaticClass()
{
	using TClass = UPCGExMovingAverageSmoothing;
	if (!Z_Registration_Info_UClass_UPCGExMovingAverageSmoothing.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMovingAverageSmoothing"),
			Z_Registration_Info_UClass_UPCGExMovingAverageSmoothing.InnerSingleton,
			StaticRegisterNativesUPCGExMovingAverageSmoothing,
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
	return Z_Registration_Info_UClass_UPCGExMovingAverageSmoothing.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMovingAverageSmoothing_NoRegister()
{
	return UPCGExMovingAverageSmoothing::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Moving Average" },
		{ "IncludePath", "Paths/Smoothing/PCGExMovingAverageSmoothing.h" },
		{ "ModuleRelativePath", "Public/Paths/Smoothing/PCGExMovingAverageSmoothing.h" },
		{ "PCGExNodeLibraryDoc", "paths/smooth/smooth-moving-average" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/Smoothing/PCGExMovingAverageSmoothing.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMovingAverageSmoothing constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexSafety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexSafety;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMovingAverageSmoothing constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMovingAverageSmoothing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics

// ********** Begin Class UPCGExMovingAverageSmoothing Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMovingAverageSmoothing, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::NewProp_IndexSafety,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMovingAverageSmoothing Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSmoothingInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::ClassParams = {
	&UPCGExMovingAverageSmoothing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::Class_MetaDataParams)
};
void UPCGExMovingAverageSmoothing::StaticRegisterNativesUPCGExMovingAverageSmoothing()
{
}
UClass* Z_Construct_UClass_UPCGExMovingAverageSmoothing()
{
	if (!Z_Registration_Info_UClass_UPCGExMovingAverageSmoothing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMovingAverageSmoothing.OuterSingleton, Z_Construct_UClass_UPCGExMovingAverageSmoothing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMovingAverageSmoothing.OuterSingleton;
}
UPCGExMovingAverageSmoothing::UPCGExMovingAverageSmoothing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMovingAverageSmoothing);
UPCGExMovingAverageSmoothing::~UPCGExMovingAverageSmoothing() {}
// ********** End Class UPCGExMovingAverageSmoothing ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExMovingAverageSmoothing_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMovingAverageSmoothing, UPCGExMovingAverageSmoothing::StaticClass, TEXT("UPCGExMovingAverageSmoothing"), &Z_Registration_Info_UClass_UPCGExMovingAverageSmoothing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMovingAverageSmoothing), 3608422035U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExMovingAverageSmoothing_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExMovingAverageSmoothing_h__Script_PCGExtendedToolkit_3512655157{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExMovingAverageSmoothing_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Smoothing_PCGExMovingAverageSmoothing_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
