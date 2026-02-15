// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Search/PCGExSearchOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSearchOperation() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchInstancedFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSearchInstancedFactory *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSearchInstancedFactory;
UClass* UPCGExSearchInstancedFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExSearchInstancedFactory;
	if (!Z_Registration_Info_UClass_UPCGExSearchInstancedFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSearchInstancedFactory"),
			Z_Registration_Info_UClass_UPCGExSearchInstancedFactory.InnerSingleton,
			StaticRegisterNativesUPCGExSearchInstancedFactory,
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
	return Z_Registration_Info_UClass_UPCGExSearchInstancedFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSearchInstancedFactory_NoRegister()
{
	return UPCGExSearchInstancedFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Pathfinding/Search/PCGExSearchOperation.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Search/PCGExSearchOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEarlyExit_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Search/PCGExSearchOperation.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSearchInstancedFactory constinit property declarations *************
	static void NewProp_bEarlyExit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEarlyExit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSearchInstancedFactory constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSearchInstancedFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics

// ********** Begin Class UPCGExSearchInstancedFactory Property Definitions ************************
void Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::NewProp_bEarlyExit_SetBit(void* Obj)
{
	((UPCGExSearchInstancedFactory*)Obj)->bEarlyExit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::NewProp_bEarlyExit = { "bEarlyExit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSearchInstancedFactory), &Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::NewProp_bEarlyExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEarlyExit_MetaData), NewProp_bEarlyExit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::NewProp_bEarlyExit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSearchInstancedFactory Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::ClassParams = {
	&UPCGExSearchInstancedFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::Class_MetaDataParams)
};
void UPCGExSearchInstancedFactory::StaticRegisterNativesUPCGExSearchInstancedFactory()
{
}
UClass* Z_Construct_UClass_UPCGExSearchInstancedFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExSearchInstancedFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSearchInstancedFactory.OuterSingleton, Z_Construct_UClass_UPCGExSearchInstancedFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSearchInstancedFactory.OuterSingleton;
}
UPCGExSearchInstancedFactory::UPCGExSearchInstancedFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSearchInstancedFactory);
UPCGExSearchInstancedFactory::~UPCGExSearchInstancedFactory() {}
// ********** End Class UPCGExSearchInstancedFactory ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchOperation_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSearchInstancedFactory, UPCGExSearchInstancedFactory::StaticClass, TEXT("UPCGExSearchInstancedFactory"), &Z_Registration_Info_UClass_UPCGExSearchInstancedFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSearchInstancedFactory), 4284005465U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchOperation_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchOperation_h__Script_PCGExtendedToolkit_1231090281{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Search_PCGExSearchOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
