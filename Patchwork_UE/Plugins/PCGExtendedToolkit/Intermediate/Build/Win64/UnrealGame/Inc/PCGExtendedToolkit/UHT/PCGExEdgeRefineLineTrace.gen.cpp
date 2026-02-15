// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h"
#include "Details/PCGExDetailsCollision.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeRefineLineTrace() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineLineTrace();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeRefineLineTrace_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCollisionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgeRefineLineTrace ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeRefineLineTrace;
UClass* UPCGExEdgeRefineLineTrace::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeRefineLineTrace;
	if (!Z_Registration_Info_UClass_UPCGExEdgeRefineLineTrace.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeRefineLineTrace"),
			Z_Registration_Info_UClass_UPCGExEdgeRefineLineTrace.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeRefineLineTrace,
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
	return Z_Registration_Info_UClass_UPCGExEdgeRefineLineTrace.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeRefineLineTrace_NoRegister()
{
	return UPCGExEdgeRefineLineTrace::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Refine : Line Trace" },
		{ "IncludePath", "Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h" },
		{ "PCGExNodeLibraryDoc", "clusters/refine-cluster/line-trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwoWayCheck_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the first linecast fails, tries the other way around. This is to ensure we don't fail against backfacing, but has high cost.*/" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If the first linecast fails, tries the other way around. This is to ensure we don't fail against backfacing, but has high cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScatter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScatterSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Samples" },
		{ "EditCondition", "bScatter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScatterRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Radius" },
		{ "EditCondition", "bScatter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Refining/PCGExEdgeRefineLineTrace.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeRefineLineTrace constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSettings;
	static void NewProp_bTwoWayCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwoWayCheck;
	static void NewProp_bScatter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScatter;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ScatterSamples;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ScatterRadius;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeRefineLineTrace constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeRefineLineTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics

// ********** Begin Class UPCGExEdgeRefineLineTrace Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeRefineLineTrace, CollisionSettings), Z_Construct_UScriptStruct_FPCGExCollisionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSettings_MetaData), NewProp_CollisionSettings_MetaData) }; // 1813010668
void Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bTwoWayCheck_SetBit(void* Obj)
{
	((UPCGExEdgeRefineLineTrace*)Obj)->bTwoWayCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bTwoWayCheck = { "bTwoWayCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgeRefineLineTrace), &Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bTwoWayCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwoWayCheck_MetaData), NewProp_bTwoWayCheck_MetaData) };
void Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bScatter_SetBit(void* Obj)
{
	((UPCGExEdgeRefineLineTrace*)Obj)->bScatter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bScatter = { "bScatter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgeRefineLineTrace), &Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bScatter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScatter_MetaData), NewProp_bScatter_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_ScatterSamples = { "ScatterSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeRefineLineTrace, ScatterSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScatterSamples_MetaData), NewProp_ScatterSamples_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_ScatterRadius = { "ScatterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeRefineLineTrace, ScatterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScatterRadius_MetaData), NewProp_ScatterRadius_MetaData) };
void Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPCGExEdgeRefineLineTrace*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgeRefineLineTrace), &Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_CollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bTwoWayCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bScatter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_ScatterSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_ScatterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeRefineLineTrace Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeRefineInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::ClassParams = {
	&UPCGExEdgeRefineLineTrace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::Class_MetaDataParams)
};
void UPCGExEdgeRefineLineTrace::StaticRegisterNativesUPCGExEdgeRefineLineTrace()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeRefineLineTrace()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeRefineLineTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeRefineLineTrace.OuterSingleton, Z_Construct_UClass_UPCGExEdgeRefineLineTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeRefineLineTrace.OuterSingleton;
}
UPCGExEdgeRefineLineTrace::UPCGExEdgeRefineLineTrace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeRefineLineTrace);
UPCGExEdgeRefineLineTrace::~UPCGExEdgeRefineLineTrace() {}
// ********** End Class UPCGExEdgeRefineLineTrace **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineLineTrace_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeRefineLineTrace, UPCGExEdgeRefineLineTrace::StaticClass, TEXT("UPCGExEdgeRefineLineTrace"), &Z_Registration_Info_UClass_UPCGExEdgeRefineLineTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeRefineLineTrace), 2917790156U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineLineTrace_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineLineTrace_h__Script_PCGExtendedToolkit_928545753{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineLineTrace_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Refining_PCGExEdgeRefineLineTrace_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
