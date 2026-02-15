// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Topology/PCGExSpawnDynamicMesh.h"
#include "Collections/PCGExComponentDescriptors.h"
#include "Metadata/PCGObjectPropertyOverride.h"
#include "Transform/PCGExTransform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSpawnDynamicMesh() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGObjectPropertyOverrideDescription();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttachmentRules();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSpawnDynamicMeshSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSpawnDynamicMeshSettings;
UClass* UPCGExSpawnDynamicMeshSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSpawnDynamicMeshSettings;
	if (!Z_Registration_Info_UClass_UPCGExSpawnDynamicMeshSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSpawnDynamicMeshSettings"),
			Z_Registration_Info_UClass_UPCGExSpawnDynamicMeshSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSpawnDynamicMeshSettings,
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
	return Z_Registration_Info_UClass_UPCGExSpawnDynamicMeshSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_NoRegister()
{
	return UPCGExSpawnDynamicMeshSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Topology/PCGExSpawnDynamicMesh.h" },
		{ "ModuleRelativePath", "Public/Topology/PCGExSpawnDynamicMesh.h" },
		{ "PCGExNodeLibraryDoc", "topology/cluster-surface/toggle-topology" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGSettings\n" },
		{ "ModuleRelativePath", "Public/Topology/PCGExSpawnDynamicMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExSpawnDynamicMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOverrideDescriptions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExSpawnDynamicMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRules_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExSpawnDynamicMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessFunctionNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Specify a list of functions to be called on the target actor after instances are spawned. Functions need to be parameter-less and with \"CallInEditor\" flag enabled. */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExSpawnDynamicMesh.h" },
		{ "ToolTip", "Specify a list of functions to be called on the target actor after instances are spawned. Functions need to be parameter-less and with \"CallInEditor\" flag enabled." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSpawnDynamicMeshSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateDescriptor;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyOverrideDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyOverrideDescriptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentRules;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PostProcessFunctionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessFunctionNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSpawnDynamicMeshSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSpawnDynamicMeshSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics

// ********** Begin Class UPCGExSpawnDynamicMeshSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_TemplateDescriptor = { "TemplateDescriptor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSpawnDynamicMeshSettings, TemplateDescriptor), Z_Construct_UScriptStruct_FPCGExDynamicMeshDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateDescriptor_MetaData), NewProp_TemplateDescriptor_MetaData) }; // 2595669215
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSpawnDynamicMeshSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_PropertyOverrideDescriptions_Inner = { "PropertyOverrideDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGObjectPropertyOverrideDescription, METADATA_PARAMS(0, nullptr) }; // 2847192473
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_PropertyOverrideDescriptions = { "PropertyOverrideDescriptions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSpawnDynamicMeshSettings, PropertyOverrideDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyOverrideDescriptions_MetaData), NewProp_PropertyOverrideDescriptions_MetaData) }; // 2847192473
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_AttachmentRules = { "AttachmentRules", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSpawnDynamicMeshSettings, AttachmentRules), Z_Construct_UScriptStruct_FPCGExAttachmentRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentRules_MetaData), NewProp_AttachmentRules_MetaData) }; // 2108791550
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_PostProcessFunctionNames_Inner = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_PostProcessFunctionNames = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSpawnDynamicMeshSettings, PostProcessFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessFunctionNames_MetaData), NewProp_PostProcessFunctionNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_TemplateDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_PropertyOverrideDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_PropertyOverrideDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_AttachmentRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_PostProcessFunctionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::NewProp_PostProcessFunctionNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSpawnDynamicMeshSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::ClassParams = {
	&UPCGExSpawnDynamicMeshSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::Class_MetaDataParams)
};
void UPCGExSpawnDynamicMeshSettings::StaticRegisterNativesUPCGExSpawnDynamicMeshSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSpawnDynamicMeshSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSpawnDynamicMeshSettings.OuterSingleton, Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSpawnDynamicMeshSettings.OuterSingleton;
}
UPCGExSpawnDynamicMeshSettings::UPCGExSpawnDynamicMeshSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSpawnDynamicMeshSettings);
UPCGExSpawnDynamicMeshSettings::~UPCGExSpawnDynamicMeshSettings() {}
// ********** End Class UPCGExSpawnDynamicMeshSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExSpawnDynamicMesh_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSpawnDynamicMeshSettings, UPCGExSpawnDynamicMeshSettings::StaticClass, TEXT("UPCGExSpawnDynamicMeshSettings"), &Z_Registration_Info_UClass_UPCGExSpawnDynamicMeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSpawnDynamicMeshSettings), 2117766293U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExSpawnDynamicMesh_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExSpawnDynamicMesh_h__Script_PCGExtendedToolkit_1314784760{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExSpawnDynamicMesh_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExSpawnDynamicMesh_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
