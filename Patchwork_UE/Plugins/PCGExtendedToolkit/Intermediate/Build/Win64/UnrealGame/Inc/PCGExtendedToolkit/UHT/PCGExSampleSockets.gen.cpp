// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleSockets.h"
#include "Details/PCGExDetailsStaging.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleSockets() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleSocketsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleSocketsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocketOutputDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSampleSocketsSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleSocketsSettings;
UClass* UPCGExSampleSocketsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleSocketsSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleSocketsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleSocketsSettings"),
			Z_Registration_Info_UClass_UPCGExSampleSocketsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleSocketsSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleSocketsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleSocketsSettings_NoRegister()
{
	return UPCGExSampleSocketsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Sampling/PCGExSampleSockets.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSockets.h" },
		{ "PCGExNodeLibraryDoc", "sampling/sockets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How the asset gets selected */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSockets.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How the asset gets selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to read asset path from.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Asset (Attr)" },
		{ "EditCondition", "AssetType != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSockets.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to read asset path from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant static mesh .*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Asset" },
		{ "EditCondition", "AssetType == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSockets.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant static mesh ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputSocketDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleSockets.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleSocketsSettings constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathAttributeName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputSocketDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleSocketsSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleSocketsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics

// ********** Begin Class UPCGExSampleSocketsSettings Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSocketsSettings, AssetType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_AssetPathAttributeName = { "AssetPathAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSocketsSettings, AssetPathAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathAttributeName_MetaData), NewProp_AssetPathAttributeName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSocketsSettings, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_OutputSocketDetails = { "OutputSocketDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleSocketsSettings, OutputSocketDetails), Z_Construct_UScriptStruct_FPCGExSocketOutputDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputSocketDetails_MetaData), NewProp_OutputSocketDetails_MetaData) }; // 3220705066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_AssetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_AssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_AssetPathAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::NewProp_OutputSocketDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleSocketsSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::ClassParams = {
	&UPCGExSampleSocketsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleSocketsSettings::StaticRegisterNativesUPCGExSampleSocketsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleSocketsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleSocketsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleSocketsSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleSocketsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleSocketsSettings.OuterSingleton;
}
UPCGExSampleSocketsSettings::UPCGExSampleSocketsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleSocketsSettings);
UPCGExSampleSocketsSettings::~UPCGExSampleSocketsSettings() {}
// ********** End Class UPCGExSampleSocketsSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSockets_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleSocketsSettings, UPCGExSampleSocketsSettings::StaticClass, TEXT("UPCGExSampleSocketsSettings"), &Z_Registration_Info_UClass_UPCGExSampleSocketsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleSocketsSettings), 1986824942U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSockets_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSockets_h__Script_PCGExtendedToolkit_3341169351{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSockets_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSockets_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
