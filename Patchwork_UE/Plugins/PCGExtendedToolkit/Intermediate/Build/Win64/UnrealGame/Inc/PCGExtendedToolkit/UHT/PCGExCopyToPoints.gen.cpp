// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExCopyToPoints.h"
#include "Data/Matching/PCGExMatching.h"
#include "Data/PCGExDataForward.h"
#include "Transform/PCGExFitting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCopyToPoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCopyToPointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCopyToPointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTransformDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExCopyToPointsSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCopyToPointsSettings;
UClass* UPCGExCopyToPointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCopyToPointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExCopyToPointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCopyToPointsSettings"),
			Z_Registration_Info_UClass_UPCGExCopyToPointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCopyToPointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExCopyToPointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCopyToPointsSettings_NoRegister()
{
	return UPCGExCopyToPointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExCopyToPoints.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCopyToPoints.h" },
		{ "PCGExNodeLibraryDoc", "misc/copy-to-points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to pick which input gets copied to which target point. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCopyToPoints.h" },
		{ "ToolTip", "If enabled, allows you to pick which input gets copied to which target point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target inherit behavior */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCopyToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Target inherit behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetsAttributesToCopyTags_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCopyToPoints.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetsForwarding_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** Which target attributes to forward on copied points. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCopyToPoints.h" },
		{ "ToolTip", "Which target attributes to forward on copied points." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCopyToPointsSettings constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetsAttributesToCopyTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetsForwarding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCopyToPointsSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCopyToPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics

// ********** Begin Class UPCGExCopyToPointsSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPointsSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::NewProp_TransformDetails = { "TransformDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPointsSettings, TransformDetails), Z_Construct_UScriptStruct_FPCGExTransformDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformDetails_MetaData), NewProp_TransformDetails_MetaData) }; // 4231827955
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::NewProp_TargetsAttributesToCopyTags = { "TargetsAttributesToCopyTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPointsSettings, TargetsAttributesToCopyTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetsAttributesToCopyTags_MetaData), NewProp_TargetsAttributesToCopyTags_MetaData) }; // 1295694073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::NewProp_TargetsForwarding = { "TargetsForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPointsSettings, TargetsForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetsForwarding_MetaData), NewProp_TargetsForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::NewProp_TransformDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::NewProp_TargetsAttributesToCopyTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::NewProp_TargetsForwarding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCopyToPointsSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::ClassParams = {
	&UPCGExCopyToPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExCopyToPointsSettings::StaticRegisterNativesUPCGExCopyToPointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCopyToPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCopyToPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCopyToPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExCopyToPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCopyToPointsSettings.OuterSingleton;
}
UPCGExCopyToPointsSettings::UPCGExCopyToPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCopyToPointsSettings);
UPCGExCopyToPointsSettings::~UPCGExCopyToPointsSettings() {}
// ********** End Class UPCGExCopyToPointsSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCopyToPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCopyToPointsSettings, UPCGExCopyToPointsSettings::StaticClass, TEXT("UPCGExCopyToPointsSettings"), &Z_Registration_Info_UClass_UPCGExCopyToPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCopyToPointsSettings), 583549241U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCopyToPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCopyToPoints_h__Script_PCGExtendedToolkit_4100899232{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCopyToPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCopyToPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
