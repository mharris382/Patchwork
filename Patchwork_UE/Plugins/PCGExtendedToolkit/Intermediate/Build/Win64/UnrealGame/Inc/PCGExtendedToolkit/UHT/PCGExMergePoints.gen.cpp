// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExMergePoints.h"
#include "Data/PCGExDataFilter.h"
#include "PCGExSorting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMergePoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMergePointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMergePointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExMergePointsSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMergePointsSettings;
UClass* UPCGExMergePointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExMergePointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExMergePointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMergePointsSettings"),
			Z_Registration_Info_UClass_UPCGExMergePointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExMergePointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExMergePointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMergePointsSettings_NoRegister()
{
	return UPCGExMergePointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMergePointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "// Hidden for now because buggy, concurrent writing occurs and I don't know why; need to look into it\n" },
		{ "IncludePath", "Misc/PCGExMergePoints.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePoints.h" },
		{ "PCGExNodeLibraryDoc", "misc/merge-points" },
		{ "ToolTip", "Hidden for now because buggy, concurrent writing occurs and I don't know why; need to look into it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortingDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sorting settings. */" },
		{ "DisplayName", "Collection Sorting" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sorting settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagToAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will convert tags into attributes. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will convert tags into attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tags that will be converted to attributes. Simple tags will be converted to boolean values, other supported formats are int32, double, FString, and FVector 2-3-4. */" },
		{ "EditCondition", "bTagToAttributes" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tags that will be converted to attributes. Simple tags will be converted to boolean values, other supported formats are int32, double, FString, and FVector 2-3-4." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietTagOverlapWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePoints.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMergePointsSettings constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortingDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static void NewProp_bTagToAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagToAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToAttributes;
	static void NewProp_bQuietTagOverlapWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietTagOverlapWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMergePointsSettings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMergePointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMergePointsSettings_Statics

// ********** Begin Class UPCGExMergePointsSettings Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_SortingDetails = { "SortingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsSettings, SortingDetails), Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortingDetails_MetaData), NewProp_SortingDetails_MetaData) }; // 2157303676
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
void Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_bTagToAttributes_SetBit(void* Obj)
{
	((UPCGExMergePointsSettings*)Obj)->bTagToAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_bTagToAttributes = { "bTagToAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExMergePointsSettings), &Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_bTagToAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagToAttributes_MetaData), NewProp_bTagToAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_TagsToAttributes = { "TagsToAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsSettings, TagsToAttributes), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToAttributes_MetaData), NewProp_TagsToAttributes_MetaData) }; // 1913362378
void Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_bQuietTagOverlapWarning_SetBit(void* Obj)
{
	((UPCGExMergePointsSettings*)Obj)->bQuietTagOverlapWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_bQuietTagOverlapWarning = { "bQuietTagOverlapWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExMergePointsSettings), &Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_bQuietTagOverlapWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietTagOverlapWarning_MetaData), NewProp_bQuietTagOverlapWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMergePointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_SortingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_CarryOverDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_bTagToAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_TagsToAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsSettings_Statics::NewProp_bQuietTagOverlapWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMergePointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMergePointsSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExMergePointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMergePointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMergePointsSettings_Statics::ClassParams = {
	&UPCGExMergePointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMergePointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMergePointsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMergePointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMergePointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExMergePointsSettings::StaticRegisterNativesUPCGExMergePointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExMergePointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExMergePointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMergePointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExMergePointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMergePointsSettings.OuterSingleton;
}
UPCGExMergePointsSettings::UPCGExMergePointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMergePointsSettings);
UPCGExMergePointsSettings::~UPCGExMergePointsSettings() {}
// ********** End Class UPCGExMergePointsSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMergePointsSettings, UPCGExMergePointsSettings::StaticClass, TEXT("UPCGExMergePointsSettings"), &Z_Registration_Info_UClass_UPCGExMergePointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMergePointsSettings), 3148139998U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePoints_h__Script_PCGExtendedToolkit_2935037536{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
