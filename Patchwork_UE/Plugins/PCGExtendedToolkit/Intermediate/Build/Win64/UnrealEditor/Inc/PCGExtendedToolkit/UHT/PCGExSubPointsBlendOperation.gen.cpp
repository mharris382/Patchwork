// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/SubPoints/DataBlending/PCGExSubPointsBlendOperation.h"
#include "Data/Blending/PCGExDataBlending.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubPointsBlendOperation() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsInstancedFactory();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSubPointsBlendInstancedFactory *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubPointsBlendInstancedFactory;
UClass* UPCGExSubPointsBlendInstancedFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExSubPointsBlendInstancedFactory;
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendInstancedFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubPointsBlendInstancedFactory"),
			Z_Registration_Info_UClass_UPCGExSubPointsBlendInstancedFactory.InnerSingleton,
			StaticRegisterNativesUPCGExSubPointsBlendInstancedFactory,
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
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendInstancedFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister()
{
	return UPCGExSubPointsBlendInstancedFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/SubPoints/DataBlending/PCGExSubPointsBlendOperation.h" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/DataBlending/PCGExSubPointsBlendOperation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/SubPoints/DataBlending/PCGExSubPointsBlendOperation.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubPointsBlendInstancedFactory constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendingDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSubPointsBlendInstancedFactory constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubPointsBlendInstancedFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics

// ********** Begin Class UPCGExSubPointsBlendInstancedFactory Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::NewProp_BlendingDetails = { "BlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubPointsBlendInstancedFactory, BlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingDetails_MetaData), NewProp_BlendingDetails_MetaData) }; // 1694264898
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::NewProp_BlendingDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSubPointsBlendInstancedFactory Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSubPointsInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::ClassParams = {
	&UPCGExSubPointsBlendInstancedFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::Class_MetaDataParams)
};
void UPCGExSubPointsBlendInstancedFactory::StaticRegisterNativesUPCGExSubPointsBlendInstancedFactory()
{
}
UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExSubPointsBlendInstancedFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubPointsBlendInstancedFactory.OuterSingleton, Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubPointsBlendInstancedFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubPointsBlendInstancedFactory);
UPCGExSubPointsBlendInstancedFactory::~UPCGExSubPointsBlendInstancedFactory() {}
// ********** End Class UPCGExSubPointsBlendInstancedFactory ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendOperation_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory, UPCGExSubPointsBlendInstancedFactory::StaticClass, TEXT("UPCGExSubPointsBlendInstancedFactory"), &Z_Registration_Info_UClass_UPCGExSubPointsBlendInstancedFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubPointsBlendInstancedFactory), 1884258678U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendOperation_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendOperation_h__Script_PCGExtendedToolkit_1161892433{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_SubPoints_DataBlending_PCGExSubPointsBlendOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
