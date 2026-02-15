// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Relaxing/PCGExRelaxClusterOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExRelaxClusterOperation() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExRelaxClusterOperation **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExRelaxClusterOperation;
UClass* UPCGExRelaxClusterOperation::GetPrivateStaticClass()
{
	using TClass = UPCGExRelaxClusterOperation;
	if (!Z_Registration_Info_UClass_UPCGExRelaxClusterOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExRelaxClusterOperation"),
			Z_Registration_Info_UClass_UPCGExRelaxClusterOperation.InnerSingleton,
			StaticRegisterNativesUPCGExRelaxClusterOperation,
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
	return Z_Registration_Info_UClass_UPCGExRelaxClusterOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation_NoRegister()
{
	return UPCGExRelaxClusterOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Edges/Relaxing/PCGExRelaxClusterOperation.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExRelaxClusterOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Under the hood updates are operated on a FInt64Vector3. The regular FVector value is multiplied by this factor, and later divided by it. Default value of 100 means .00 precision. */" },
		{ "DisplayName", "Floating Point Precision" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExRelaxClusterOperation.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Under the hood updates are operated on a FInt64Vector3. The regular FVector value is multiplied by this factor, and later divided by it. Default value of 100 means .00 precision." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExRelaxClusterOperation constinit property declarations **************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Precision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExRelaxClusterOperation constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExRelaxClusterOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics

// ********** Begin Class UPCGExRelaxClusterOperation Property Definitions *************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRelaxClusterOperation, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precision_MetaData), NewProp_Precision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::NewProp_Precision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::PropPointers) < 2048);
// ********** End Class UPCGExRelaxClusterOperation Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::ClassParams = {
	&UPCGExRelaxClusterOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::Class_MetaDataParams)
};
void UPCGExRelaxClusterOperation::StaticRegisterNativesUPCGExRelaxClusterOperation()
{
}
UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation()
{
	if (!Z_Registration_Info_UClass_UPCGExRelaxClusterOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExRelaxClusterOperation.OuterSingleton, Z_Construct_UClass_UPCGExRelaxClusterOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExRelaxClusterOperation.OuterSingleton;
}
UPCGExRelaxClusterOperation::UPCGExRelaxClusterOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExRelaxClusterOperation);
UPCGExRelaxClusterOperation::~UPCGExRelaxClusterOperation() {}
// ********** End Class UPCGExRelaxClusterOperation ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRelaxClusterOperation_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExRelaxClusterOperation, UPCGExRelaxClusterOperation::StaticClass, TEXT("UPCGExRelaxClusterOperation"), &Z_Registration_Info_UClass_UPCGExRelaxClusterOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExRelaxClusterOperation), 3067111858U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRelaxClusterOperation_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRelaxClusterOperation_h__Script_PCGExtendedToolkit_4055992147{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRelaxClusterOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRelaxClusterOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
