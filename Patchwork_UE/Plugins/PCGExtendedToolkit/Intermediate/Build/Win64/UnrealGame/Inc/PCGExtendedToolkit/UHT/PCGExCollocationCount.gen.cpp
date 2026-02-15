// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExCollocationCount.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCollocationCount() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCollocationCountSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCollocationCountSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExCollocationCountSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCollocationCountSettings;
UClass* UPCGExCollocationCountSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCollocationCountSettings;
	if (!Z_Registration_Info_UClass_UPCGExCollocationCountSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCollocationCountSettings"),
			Z_Registration_Info_UClass_UPCGExCollocationCountSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCollocationCountSettings,
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
	return Z_Registration_Info_UClass_UPCGExCollocationCountSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCollocationCountSettings_NoRegister()
{
	return UPCGExCollocationCountSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCollocationCountSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExCollocationCount.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCollocationCount.h" },
		{ "PCGExNodeLibraryDoc", "misc/collocation-count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollicationNumAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to write collocation to.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCollocationCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write collocation to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLinearOccurences_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCollocationCount.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearOccurencesAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to write linear occurences to.*/" },
		{ "EditCondition", "bWriteLinearOccurences" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCollocationCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write linear occurences to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCollocationCount.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCollocationCountSettings constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollicationNumAttributeName;
	static void NewProp_bWriteLinearOccurences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLinearOccurences;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LinearOccurencesAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCollocationCountSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCollocationCountSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCollocationCountSettings_Statics

// ********** Begin Class UPCGExCollocationCountSettings Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_CollicationNumAttributeName = { "CollicationNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCollocationCountSettings, CollicationNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollicationNumAttributeName_MetaData), NewProp_CollicationNumAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_bWriteLinearOccurences_SetBit(void* Obj)
{
	((UPCGExCollocationCountSettings*)Obj)->bWriteLinearOccurences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_bWriteLinearOccurences = { "bWriteLinearOccurences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCollocationCountSettings), &Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_bWriteLinearOccurences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLinearOccurences_MetaData), NewProp_bWriteLinearOccurences_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_LinearOccurencesAttributeName = { "LinearOccurencesAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCollocationCountSettings, LinearOccurencesAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearOccurencesAttributeName_MetaData), NewProp_LinearOccurencesAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCollocationCountSettings, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_CollicationNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_bWriteLinearOccurences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_LinearOccurencesAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCollocationCountSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::ClassParams = {
	&UPCGExCollocationCountSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::Class_MetaDataParams)
};
void UPCGExCollocationCountSettings::StaticRegisterNativesUPCGExCollocationCountSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCollocationCountSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCollocationCountSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCollocationCountSettings.OuterSingleton, Z_Construct_UClass_UPCGExCollocationCountSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCollocationCountSettings.OuterSingleton;
}
UPCGExCollocationCountSettings::UPCGExCollocationCountSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCollocationCountSettings);
UPCGExCollocationCountSettings::~UPCGExCollocationCountSettings() {}
// ********** End Class UPCGExCollocationCountSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCollocationCount_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCollocationCountSettings, UPCGExCollocationCountSettings::StaticClass, TEXT("UPCGExCollocationCountSettings"), &Z_Registration_Info_UClass_UPCGExCollocationCountSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCollocationCountSettings), 4167681680U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCollocationCount_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCollocationCount_h__Script_PCGExtendedToolkit_1374974564{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCollocationCount_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCollocationCount_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
