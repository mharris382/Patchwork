// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Tangents/PCGExTangentsFromTransform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTangentsFromTransform() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFromTransformTangents();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFromTransformTangents_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFromTransformTangents **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFromTransformTangents;
UClass* UPCGExFromTransformTangents::GetPrivateStaticClass()
{
	using TClass = UPCGExFromTransformTangents;
	if (!Z_Registration_Info_UClass_UPCGExFromTransformTangents.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFromTransformTangents"),
			Z_Registration_Info_UClass_UPCGExFromTransformTangents.InnerSingleton,
			StaticRegisterNativesUPCGExFromTransformTangents,
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
	return Z_Registration_Info_UClass_UPCGExFromTransformTangents.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFromTransformTangents_NoRegister()
{
	return UPCGExFromTransformTangents::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFromTransformTangents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "From Transform" },
		{ "IncludePath", "Paths/Tangents/PCGExTangentsFromTransform.h" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsFromTransform.h" },
		{ "PCGExNodeLibraryDoc", "paths/write-tangents/tangents-transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Tangents" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsFromTransform.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFromTransformTangents constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFromTransformTangents constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFromTransformTangents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFromTransformTangents_Statics

// ********** Begin Class UPCGExFromTransformTangents Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFromTransformTangents_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFromTransformTangents_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFromTransformTangents, Axis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) }; // 1564008668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFromTransformTangents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFromTransformTangents_Statics::NewProp_Axis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFromTransformTangents_Statics::NewProp_Axis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFromTransformTangents_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFromTransformTangents Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExFromTransformTangents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTangentsInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFromTransformTangents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFromTransformTangents_Statics::ClassParams = {
	&UPCGExFromTransformTangents::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFromTransformTangents_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFromTransformTangents_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFromTransformTangents_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFromTransformTangents_Statics::Class_MetaDataParams)
};
void UPCGExFromTransformTangents::StaticRegisterNativesUPCGExFromTransformTangents()
{
}
UClass* Z_Construct_UClass_UPCGExFromTransformTangents()
{
	if (!Z_Registration_Info_UClass_UPCGExFromTransformTangents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFromTransformTangents.OuterSingleton, Z_Construct_UClass_UPCGExFromTransformTangents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFromTransformTangents.OuterSingleton;
}
UPCGExFromTransformTangents::UPCGExFromTransformTangents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFromTransformTangents);
UPCGExFromTransformTangents::~UPCGExFromTransformTangents() {}
// ********** End Class UPCGExFromTransformTangents ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromTransform_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFromTransformTangents, UPCGExFromTransformTangents::StaticClass, TEXT("UPCGExFromTransformTangents"), &Z_Registration_Info_UClass_UPCGExFromTransformTangents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFromTransformTangents), 2033461631U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromTransform_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromTransform_h__Script_PCGExtendedToolkit_3630534093{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromTransform_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsFromTransform_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
