// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExCherryPickPoints.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCherryPickPoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCherryPickPointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCherryPickPointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExCherryPickSource ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCherryPickSource;
static UEnum* EPCGExCherryPickSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCherryPickSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCherryPickSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCherryPickSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExCherryPickSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCherryPickSource>()
{
	return EPCGExCherryPickSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExCherryPickPoints.h" },
		{ "Self.DisplayName", "Self" },
		{ "Self.Name", "EPCGExCherryPickSource::Self" },
		{ "Self.ToolTip", "Read indices from an attribute on the currently cherry-picked data set." },
		{ "Sources.DisplayName", "Sources" },
		{ "Sources.Name", "EPCGExCherryPickSource::Sources" },
		{ "Sources.ToolTip", "Read indices from a list of sources inputs." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCherryPickSource::Self", (int64)EPCGExCherryPickSource::Self },
		{ "EPCGExCherryPickSource::Sources", (int64)EPCGExCherryPickSource::Sources },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCherryPickSource",
	"EPCGExCherryPickSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExCherryPickSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCherryPickSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCherryPickSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCherryPickSource.InnerSingleton;
}
// ********** End Enum EPCGExCherryPickSource ******************************************************

// ********** Begin Class UPCGExCherryPickPointsSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCherryPickPointsSettings;
UClass* UPCGExCherryPickPointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCherryPickPointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExCherryPickPointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCherryPickPointsSettings"),
			Z_Registration_Info_UClass_UPCGExCherryPickPointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCherryPickPointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExCherryPickPointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCherryPickPointsSettings_NoRegister()
{
	return UPCGExCherryPickPointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExCherryPickPoints.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCherryPickPoints.h" },
		{ "PCGExNodeLibraryDoc", "filters/cherry-pick-points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to invert the picking (picked indices will be discarded instead or kept) */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCherryPickPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to invert the picking (picked indices will be discarded instead or kept)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDiscardedPoints_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to output discard points to their own dataset */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCherryPickPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output discard points to their own dataset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowEmptyOutputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to output discard points collections to be empty */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExCherryPickPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output discard points collections to be empty" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCherryPickPointsSettings constinit property declarations ***********
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static void NewProp_bOutputDiscardedPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDiscardedPoints;
	static void NewProp_bAllowEmptyOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowEmptyOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCherryPickPointsSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCherryPickPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics

// ********** Begin Class UPCGExCherryPickPointsSettings Property Definitions **********************
void Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPCGExCherryPickPointsSettings*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCherryPickPointsSettings), &Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
void Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bOutputDiscardedPoints_SetBit(void* Obj)
{
	((UPCGExCherryPickPointsSettings*)Obj)->bOutputDiscardedPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bOutputDiscardedPoints = { "bOutputDiscardedPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCherryPickPointsSettings), &Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bOutputDiscardedPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputDiscardedPoints_MetaData), NewProp_bOutputDiscardedPoints_MetaData) };
void Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bAllowEmptyOutputs_SetBit(void* Obj)
{
	((UPCGExCherryPickPointsSettings*)Obj)->bAllowEmptyOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bAllowEmptyOutputs = { "bAllowEmptyOutputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCherryPickPointsSettings), &Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bAllowEmptyOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowEmptyOutputs_MetaData), NewProp_bAllowEmptyOutputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bOutputDiscardedPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::NewProp_bAllowEmptyOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCherryPickPointsSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::ClassParams = {
	&UPCGExCherryPickPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExCherryPickPointsSettings::StaticRegisterNativesUPCGExCherryPickPointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCherryPickPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCherryPickPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCherryPickPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCherryPickPointsSettings.OuterSingleton;
}
UPCGExCherryPickPointsSettings::UPCGExCherryPickPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCherryPickPointsSettings);
UPCGExCherryPickPointsSettings::~UPCGExCherryPickPointsSettings() {}
// ********** End Class UPCGExCherryPickPointsSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExCherryPickSource_StaticEnum, TEXT("EPCGExCherryPickSource"), &Z_Registration_Info_UEnum_EPCGExCherryPickSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1544974358U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCherryPickPointsSettings, UPCGExCherryPickPointsSettings::StaticClass, TEXT("UPCGExCherryPickPointsSettings"), &Z_Registration_Info_UClass_UPCGExCherryPickPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCherryPickPointsSettings), 3568060061U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h__Script_PCGExtendedToolkit_1117712849{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
