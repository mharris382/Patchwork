// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/SubPoints/DataBlending/PCGExSubPointsBlendInterpolate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubPointsBlendInterpolate() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInterpolate();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSubPointsBlendInterpolate ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubPointsBlendInterpolate;
UClass* UPCGExSubPointsBlendInterpolate::GetPrivateStaticClass()
{
	using TClass = UPCGExSubPointsBlendInterpolate;
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendInterpolate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubPointsBlendInterpolate"),
			Z_Registration_Info_UClass_UPCGExSubPointsBlendInterpolate.InnerSingleton,
			StaticRegisterNativesUPCGExSubPointsBlendInterpolate,
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
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendInterpolate.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_NoRegister()
{
	return UPCGExSubPointsBlendInterpolate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Interpolate" },
		{ "IncludePath", "Paths/SubPoints/DataBlending/PCGExSubPointsBlendInterpolate.h" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/DataBlending/PCGExSubPointsBlendInterpolate.h" },
		{ "PCGExNodeLibraryDoc", "paths/sub-point-blending/interpolate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOver_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/DataBlending/PCGExSubPointsBlendInterpolate.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lerp_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "BlendOver == EPCGExBlendOver::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/DataBlending/PCGExSubPointsBlendInterpolate.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubPointsBlendInterpolate constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOver_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOver;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Lerp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSubPointsBlendInterpolate constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubPointsBlendInterpolate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics

// ********** Begin Class UPCGExSubPointsBlendInterpolate Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::NewProp_BlendOver_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::NewProp_BlendOver = { "BlendOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubPointsBlendInterpolate, BlendOver), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOver, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOver_MetaData), NewProp_BlendOver_MetaData) }; // 336339527
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::NewProp_Lerp = { "Lerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubPointsBlendInterpolate, Lerp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lerp_MetaData), NewProp_Lerp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::NewProp_BlendOver_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::NewProp_BlendOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::NewProp_Lerp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSubPointsBlendInterpolate Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::ClassParams = {
	&UPCGExSubPointsBlendInterpolate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::Class_MetaDataParams)
};
void UPCGExSubPointsBlendInterpolate::StaticRegisterNativesUPCGExSubPointsBlendInterpolate()
{
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendInterpolate()
{
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendInterpolate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubPointsBlendInterpolate.OuterSingleton, Z_Construct_UClass_UPCGExSubPointsBlendInterpolate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendInterpolate.OuterSingleton;
}
UPCGExSubPointsBlendInterpolate::UPCGExSubPointsBlendInterpolate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubPointsBlendInterpolate);
UPCGExSubPointsBlendInterpolate::~UPCGExSubPointsBlendInterpolate() {}
// ********** End Class UPCGExSubPointsBlendInterpolate ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInterpolate_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubPointsBlendInterpolate, UPCGExSubPointsBlendInterpolate::StaticClass, TEXT("UPCGExSubPointsBlendInterpolate"), &Z_Registration_Info_UClass_UPCGExSubPointsBlendInterpolate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubPointsBlendInterpolate), 897439734U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInterpolate_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInterpolate_h__Script_PCGExtendedToolkit_3510445124{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInterpolate_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendInterpolate_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
