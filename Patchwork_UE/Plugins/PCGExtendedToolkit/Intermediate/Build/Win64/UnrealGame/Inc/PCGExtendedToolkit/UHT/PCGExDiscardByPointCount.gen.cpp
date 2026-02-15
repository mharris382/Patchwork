// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExDiscardByPointCount.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDiscardByPointCount() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDiscardByPointCountSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDiscardByPointCountSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExDiscardByPointCountSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDiscardByPointCountSettings;
UClass* UPCGExDiscardByPointCountSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExDiscardByPointCountSettings;
	if (!Z_Registration_Info_UClass_UPCGExDiscardByPointCountSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDiscardByPointCountSettings"),
			Z_Registration_Info_UClass_UPCGExDiscardByPointCountSettings.InnerSingleton,
			StaticRegisterNativesUPCGExDiscardByPointCountSettings,
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
	return Z_Registration_Info_UClass_UPCGExDiscardByPointCountSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDiscardByPointCountSettings_NoRegister()
{
	return UPCGExDiscardByPointCountSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/PCGExDiscardByPointCount.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByPointCount.h" },
		{ "PCGExNodeLibraryDoc", "filters/discard-by-point-count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveBelow_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Don't output Clusters if they have less points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByPointCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output Clusters if they have less points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Discarded if point count is less than */" },
		{ "EditCondition", "bRemoveBelow" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByPointCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discarded if point count is less than" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveAbove_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Don't output Clusters if they have more points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByPointCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output Clusters if they have more points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Discarded if point count is more than */" },
		{ "EditCondition", "bRemoveAbove" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByPointCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discarded if point count is more than" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowEmptyOutputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether or not to allow empty outputs (either discarded or not) */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardByPointCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether or not to allow empty outputs (either discarded or not)" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDiscardByPointCountSettings constinit property declarations ********
	static void NewProp_bRemoveBelow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveBelow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPointCount;
	static void NewProp_bRemoveAbove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveAbove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointCount;
	static void NewProp_bAllowEmptyOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEmptyOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDiscardByPointCountSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDiscardByPointCountSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics

// ********** Begin Class UPCGExDiscardByPointCountSettings Property Definitions *******************
void Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bRemoveBelow_SetBit(void* Obj)
{
	((UPCGExDiscardByPointCountSettings*)Obj)->bRemoveBelow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bRemoveBelow = { "bRemoveBelow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDiscardByPointCountSettings), &Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bRemoveBelow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveBelow_MetaData), NewProp_bRemoveBelow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_MinPointCount = { "MinPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByPointCountSettings, MinPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPointCount_MetaData), NewProp_MinPointCount_MetaData) };
void Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bRemoveAbove_SetBit(void* Obj)
{
	((UPCGExDiscardByPointCountSettings*)Obj)->bRemoveAbove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bRemoveAbove = { "bRemoveAbove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDiscardByPointCountSettings), &Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bRemoveAbove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveAbove_MetaData), NewProp_bRemoveAbove_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_MaxPointCount = { "MaxPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardByPointCountSettings, MaxPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointCount_MetaData), NewProp_MaxPointCount_MetaData) };
void Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bAllowEmptyOutputs_SetBit(void* Obj)
{
	((UPCGExDiscardByPointCountSettings*)Obj)->bAllowEmptyOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bAllowEmptyOutputs = { "bAllowEmptyOutputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDiscardByPointCountSettings), &Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bAllowEmptyOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowEmptyOutputs_MetaData), NewProp_bAllowEmptyOutputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bRemoveBelow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_MinPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bRemoveAbove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_MaxPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::NewProp_bAllowEmptyOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDiscardByPointCountSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::ClassParams = {
	&UPCGExDiscardByPointCountSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::Class_MetaDataParams)
};
void UPCGExDiscardByPointCountSettings::StaticRegisterNativesUPCGExDiscardByPointCountSettings()
{
}
UClass* Z_Construct_UClass_UPCGExDiscardByPointCountSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExDiscardByPointCountSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDiscardByPointCountSettings.OuterSingleton, Z_Construct_UClass_UPCGExDiscardByPointCountSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDiscardByPointCountSettings.OuterSingleton;
}
UPCGExDiscardByPointCountSettings::UPCGExDiscardByPointCountSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDiscardByPointCountSettings);
UPCGExDiscardByPointCountSettings::~UPCGExDiscardByPointCountSettings() {}
// ********** End Class UPCGExDiscardByPointCountSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByPointCount_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDiscardByPointCountSettings, UPCGExDiscardByPointCountSettings::StaticClass, TEXT("UPCGExDiscardByPointCountSettings"), &Z_Registration_Info_UClass_UPCGExDiscardByPointCountSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDiscardByPointCountSettings), 2460367872U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByPointCount_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByPointCount_h__Script_PCGExtendedToolkit_2242990541{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByPointCount_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByPointCount_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
