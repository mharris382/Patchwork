// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExConnectPoints.h"
#include "Geometry/PCGExGeo.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExConnectPoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConnectPointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConnectPointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExConnectPointsSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExConnectPointsSettings;
UClass* UPCGExConnectPointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExConnectPointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExConnectPointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExConnectPointsSettings"),
			Z_Registration_Info_UClass_UPCGExConnectPointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExConnectPointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExConnectPointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExConnectPointsSettings_NoRegister()
{
	return UPCGExConnectPointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExConnectPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/PCGExConnectPoints.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectPoints.h" },
		{ "PCGExNodeLibraryDoc", "clusters/connect-points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventCoincidence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoincidenceTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.000010" },
		{ "EditCondition", "bPreventCoincidence" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectPoints_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Project Points" },
		{ "EditCondition", "bProjectPoints" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExConnectPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExConnectPointsSettings constinit property declarations **************
	static void NewProp_bPreventCoincidence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventCoincidence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CoincidenceTolerance;
	static void NewProp_bProjectPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExConnectPointsSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExConnectPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExConnectPointsSettings_Statics

// ********** Begin Class UPCGExConnectPointsSettings Property Definitions *************************
void Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_bPreventCoincidence_SetBit(void* Obj)
{
	((UPCGExConnectPointsSettings*)Obj)->bPreventCoincidence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_bPreventCoincidence = { "bPreventCoincidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConnectPointsSettings), &Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_bPreventCoincidence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventCoincidence_MetaData), NewProp_bPreventCoincidence_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_CoincidenceTolerance = { "CoincidenceTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectPointsSettings, CoincidenceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoincidenceTolerance_MetaData), NewProp_CoincidenceTolerance_MetaData) };
void Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_bProjectPoints_SetBit(void* Obj)
{
	((UPCGExConnectPointsSettings*)Obj)->bProjectPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_bProjectPoints = { "bProjectPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConnectPointsSettings), &Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_bProjectPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectPoints_MetaData), NewProp_bProjectPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectPointsSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConnectPointsSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_bPreventCoincidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_CoincidenceTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_bProjectPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExConnectPointsSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::ClassParams = {
	&UPCGExConnectPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExConnectPointsSettings::StaticRegisterNativesUPCGExConnectPointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExConnectPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExConnectPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExConnectPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExConnectPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExConnectPointsSettings.OuterSingleton;
}
UPCGExConnectPointsSettings::UPCGExConnectPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExConnectPointsSettings);
UPCGExConnectPointsSettings::~UPCGExConnectPointsSettings() {}
// ********** End Class UPCGExConnectPointsSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExConnectPointsSettings, UPCGExConnectPointsSettings::StaticClass, TEXT("UPCGExConnectPointsSettings"), &Z_Registration_Info_UClass_UPCGExConnectPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExConnectPointsSettings), 2059697771U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectPoints_h__Script_PCGExtendedToolkit_420763777{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExConnectPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
