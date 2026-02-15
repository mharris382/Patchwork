// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExCopyClustersToPoints.h"
#include "Data/Matching/PCGExMatching.h"
#include "Data/PCGExDataForward.h"
#include "Transform/PCGExFitting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCopyClustersToPoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCopyClustersToPointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTransformDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExCopyClustersToPointsSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCopyClustersToPointsSettings;
UClass* UPCGExCopyClustersToPointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCopyClustersToPointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExCopyClustersToPointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCopyClustersToPointsSettings"),
			Z_Registration_Info_UClass_UPCGExCopyClustersToPointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCopyClustersToPointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExCopyClustersToPointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_NoRegister()
{
	return UPCGExCopyClustersToPointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExCopyClustersToPoints.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCopyClustersToPoints.h" },
		{ "PCGExNodeLibraryDoc", "clusters/copy-clusters-to-points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to pick which input gets copied to which target point. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCopyClustersToPoints.h" },
		{ "ToolTip", "If enabled, allows you to pick which input gets copied to which target point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target inherit behavior */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCopyClustersToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Target inherit behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetsAttributesToClusterTags_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCopyClustersToPoints.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetsForwarding_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** Which target attributes to forward on clusters. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCopyClustersToPoints.h" },
		{ "ToolTip", "Which target attributes to forward on clusters." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCopyClustersToPointsSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetsAttributesToClusterTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetsForwarding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCopyClustersToPointsSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCopyClustersToPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics

// ********** Begin Class UPCGExCopyClustersToPointsSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyClustersToPointsSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::NewProp_TransformDetails = { "TransformDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyClustersToPointsSettings, TransformDetails), Z_Construct_UScriptStruct_FPCGExTransformDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformDetails_MetaData), NewProp_TransformDetails_MetaData) }; // 4231827955
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::NewProp_TargetsAttributesToClusterTags = { "TargetsAttributesToClusterTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyClustersToPointsSettings, TargetsAttributesToClusterTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetsAttributesToClusterTags_MetaData), NewProp_TargetsAttributesToClusterTags_MetaData) }; // 1295694073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::NewProp_TargetsForwarding = { "TargetsForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyClustersToPointsSettings, TargetsForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetsForwarding_MetaData), NewProp_TargetsForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::NewProp_TransformDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::NewProp_TargetsAttributesToClusterTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::NewProp_TargetsForwarding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCopyClustersToPointsSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::ClassParams = {
	&UPCGExCopyClustersToPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExCopyClustersToPointsSettings::StaticRegisterNativesUPCGExCopyClustersToPointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCopyClustersToPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCopyClustersToPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCopyClustersToPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExCopyClustersToPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCopyClustersToPointsSettings.OuterSingleton;
}
UPCGExCopyClustersToPointsSettings::UPCGExCopyClustersToPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCopyClustersToPointsSettings);
UPCGExCopyClustersToPointsSettings::~UPCGExCopyClustersToPointsSettings() {}
// ********** End Class UPCGExCopyClustersToPointsSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCopyClustersToPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCopyClustersToPointsSettings, UPCGExCopyClustersToPointsSettings::StaticClass, TEXT("UPCGExCopyClustersToPointsSettings"), &Z_Registration_Info_UClass_UPCGExCopyClustersToPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCopyClustersToPointsSettings), 1863734943U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCopyClustersToPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCopyClustersToPoints_h__Script_PCGExtendedToolkit_203860674{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCopyClustersToPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCopyClustersToPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
