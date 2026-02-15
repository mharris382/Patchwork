// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExEdgesProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgesProcessor() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExEdgesProcessorSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgesProcessorSettings;
UClass* UPCGExEdgesProcessorSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgesProcessorSettings;
	if (!Z_Registration_Info_UClass_UPCGExEdgesProcessorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgesProcessorSettings"),
			Z_Registration_Info_UClass_UPCGExEdgesProcessorSettings.InnerSingleton,
			StaticRegisterNativesUPCGExEdgesProcessorSettings,
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
	return Z_Registration_Info_UClass_UPCGExEdgesProcessorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings_NoRegister()
{
	return UPCGExEdgesProcessorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExEdgesProcessor.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdgesProcessor.h" },
		{ "PCGExNodeLibraryDoc", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopedIndexLookupBuild_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Performance" },
		{ "Comment", "/** Whether scoped attribute read is enabled or not. Disabling this on small dataset may greatly improve performance. It's enabled by default for legacy reasons. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdgesProcessor.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether scoped attribute read is enabled or not. Disabling this on small dataset may greatly improve performance. It's enabled by default for legacy reasons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietMissingClusterPairElement_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExEdgesProcessor.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgesProcessorSettings constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScopedIndexLookupBuild_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScopedIndexLookupBuild;
	static void NewProp_bQuietMissingClusterPairElement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietMissingClusterPairElement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgesProcessorSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgesProcessorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics

// ********** Begin Class UPCGExEdgesProcessorSettings Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::NewProp_ScopedIndexLookupBuild_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::NewProp_ScopedIndexLookupBuild = { "ScopedIndexLookupBuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgesProcessorSettings, ScopedIndexLookupBuild), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopedIndexLookupBuild_MetaData), NewProp_ScopedIndexLookupBuild_MetaData) }; // 2151781571
void Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::NewProp_bQuietMissingClusterPairElement_SetBit(void* Obj)
{
	((UPCGExEdgesProcessorSettings*)Obj)->bQuietMissingClusterPairElement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::NewProp_bQuietMissingClusterPairElement = { "bQuietMissingClusterPairElement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExEdgesProcessorSettings), &Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::NewProp_bQuietMissingClusterPairElement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietMissingClusterPairElement_MetaData), NewProp_bQuietMissingClusterPairElement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::NewProp_ScopedIndexLookupBuild_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::NewProp_ScopedIndexLookupBuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::NewProp_bQuietMissingClusterPairElement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgesProcessorSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::ClassParams = {
	&UPCGExEdgesProcessorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::Class_MetaDataParams)
};
void UPCGExEdgesProcessorSettings::StaticRegisterNativesUPCGExEdgesProcessorSettings()
{
}
UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgesProcessorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgesProcessorSettings.OuterSingleton, Z_Construct_UClass_UPCGExEdgesProcessorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgesProcessorSettings.OuterSingleton;
}
UPCGExEdgesProcessorSettings::UPCGExEdgesProcessorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgesProcessorSettings);
UPCGExEdgesProcessorSettings::~UPCGExEdgesProcessorSettings() {}
// ********** End Class UPCGExEdgesProcessorSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgesProcessor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgesProcessorSettings, UPCGExEdgesProcessorSettings::StaticClass, TEXT("UPCGExEdgesProcessorSettings"), &Z_Registration_Info_UClass_UPCGExEdgesProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgesProcessorSettings), 3800068433U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgesProcessor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgesProcessor_h__Script_PCGExtendedToolkit_838618574{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgesProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdgesProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
