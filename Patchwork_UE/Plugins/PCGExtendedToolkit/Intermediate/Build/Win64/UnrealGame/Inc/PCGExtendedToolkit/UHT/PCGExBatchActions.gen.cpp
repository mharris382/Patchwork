// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/PCGExBatchActions.h"
#include "Data/PCGExDataFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBatchActions() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBatchActionsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBatchActionsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBatchActionsSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBatchActionsSettings;
UClass* UPCGExBatchActionsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBatchActionsSettings;
	if (!Z_Registration_Info_UClass_UPCGExBatchActionsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBatchActionsSettings"),
			Z_Registration_Info_UClass_UPCGExBatchActionsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBatchActionsSettings,
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
	return Z_Registration_Info_UClass_UPCGExBatchActionsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBatchActionsSettings_NoRegister()
{
	return UPCGExBatchActionsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBatchActionsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/PCGExBatchActions.h" },
		{ "ModuleRelativePath", "Public/Actions/PCGExBatchActions.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/batch-actions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributesFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGExPointsProcessorSettings\n" },
		{ "ModuleRelativePath", "Public/Actions/PCGExBatchActions.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoConsumeProcessedAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Actions/PCGExBatchActions.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeProcessedAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bDoConsumeProcessedAttributes" },
		{ "ModuleRelativePath", "Public/Actions/PCGExBatchActions.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBatchActionsSettings constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAttributesFilter;
	static void NewProp_bDoConsumeProcessedAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoConsumeProcessedAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumeProcessedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBatchActionsSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBatchActionsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBatchActionsSettings_Statics

// ********** Begin Class UPCGExBatchActionsSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::NewProp_DefaultAttributesFilter = { "DefaultAttributesFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBatchActionsSettings, DefaultAttributesFilter), Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributesFilter_MetaData), NewProp_DefaultAttributesFilter_MetaData) }; // 2865583282
void Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::NewProp_bDoConsumeProcessedAttributes_SetBit(void* Obj)
{
	((UPCGExBatchActionsSettings*)Obj)->bDoConsumeProcessedAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::NewProp_bDoConsumeProcessedAttributes = { "bDoConsumeProcessedAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBatchActionsSettings), &Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::NewProp_bDoConsumeProcessedAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoConsumeProcessedAttributes_MetaData), NewProp_bDoConsumeProcessedAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::NewProp_ConsumeProcessedAttributes = { "ConsumeProcessedAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBatchActionsSettings, ConsumeProcessedAttributes), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeProcessedAttributes_MetaData), NewProp_ConsumeProcessedAttributes_MetaData) }; // 1913362378
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::NewProp_DefaultAttributesFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::NewProp_bDoConsumeProcessedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::NewProp_ConsumeProcessedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBatchActionsSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::ClassParams = {
	&UPCGExBatchActionsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::Class_MetaDataParams)
};
void UPCGExBatchActionsSettings::StaticRegisterNativesUPCGExBatchActionsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBatchActionsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBatchActionsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBatchActionsSettings.OuterSingleton, Z_Construct_UClass_UPCGExBatchActionsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBatchActionsSettings.OuterSingleton;
}
UPCGExBatchActionsSettings::UPCGExBatchActionsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBatchActionsSettings);
UPCGExBatchActionsSettings::~UPCGExBatchActionsSettings() {}
// ********** End Class UPCGExBatchActionsSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExBatchActions_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBatchActionsSettings, UPCGExBatchActionsSettings::StaticClass, TEXT("UPCGExBatchActionsSettings"), &Z_Registration_Info_UClass_UPCGExBatchActionsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBatchActionsSettings), 4079575449U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExBatchActions_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExBatchActions_h__Script_PCGExtendedToolkit_3970871888{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExBatchActions_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExBatchActions_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
