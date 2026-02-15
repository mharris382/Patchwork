// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExSortPoints.h"
#include "PCGExSorting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSortPoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortPointsBaseSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortPointsBaseSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortPointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortPointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSortRuleConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSortPointsBaseSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSortPointsBaseSettings;
UClass* UPCGExSortPointsBaseSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSortPointsBaseSettings;
	if (!Z_Registration_Info_UClass_UPCGExSortPointsBaseSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSortPointsBaseSettings"),
			Z_Registration_Info_UClass_UPCGExSortPointsBaseSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSortPointsBaseSettings,
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
	return Z_Registration_Info_UClass_UPCGExSortPointsBaseSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSortPointsBaseSettings_NoRegister()
{
	return UPCGExSortPointsBaseSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExSortPoints.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExSortPoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls the order in which points will be ordered. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExSortPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls the order in which points will be ordered." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSortPointsBaseSettings constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSortPointsBaseSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSortPointsBaseSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics

// ********** Begin Class UPCGExSortPointsBaseSettings Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSortPointsBaseSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::NewProp_SortDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSortPointsBaseSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::ClassParams = {
	&UPCGExSortPointsBaseSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::Class_MetaDataParams)
};
void UPCGExSortPointsBaseSettings::StaticRegisterNativesUPCGExSortPointsBaseSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSortPointsBaseSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSortPointsBaseSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSortPointsBaseSettings.OuterSingleton, Z_Construct_UClass_UPCGExSortPointsBaseSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSortPointsBaseSettings.OuterSingleton;
}
UPCGExSortPointsBaseSettings::UPCGExSortPointsBaseSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSortPointsBaseSettings);
UPCGExSortPointsBaseSettings::~UPCGExSortPointsBaseSettings() {}
// ********** End Class UPCGExSortPointsBaseSettings ***********************************************

// ********** Begin Class UPCGExSortPointsSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSortPointsSettings;
UClass* UPCGExSortPointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSortPointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExSortPointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSortPointsSettings"),
			Z_Registration_Info_UClass_UPCGExSortPointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSortPointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExSortPointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSortPointsSettings_NoRegister()
{
	return UPCGExSortPointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSortPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExSortPoints.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExSortPoints.h" },
		{ "PCGExNodeLibraryDoc", "misc/sort-points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Ordered list of attribute to check to sort over. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExSortPoints.h" },
		{ "PCG_Overridable", "" },
		{ "TitleProperty", "{TitlePropertyName}" },
		{ "ToolTip", "Ordered list of attribute to check to sort over." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSortPointsSettings constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSortPointsSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSortPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSortPointsSettings_Statics

// ********** Begin Class UPCGExSortPointsSettings Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSortPointsSettings_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExSortRuleConfig, METADATA_PARAMS(0, nullptr) }; // 3286425527
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExSortPointsSettings_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSortPointsSettings, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) }; // 3286425527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSortPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSortPointsSettings_Statics::NewProp_Rules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSortPointsSettings_Statics::NewProp_Rules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortPointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSortPointsSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExSortPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSortPointsBaseSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSortPointsSettings_Statics::ClassParams = {
	&UPCGExSortPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSortPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortPointsSettings_Statics::PropPointers),
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSortPointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExSortPointsSettings::StaticRegisterNativesUPCGExSortPointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSortPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSortPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSortPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExSortPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSortPointsSettings.OuterSingleton;
}
UPCGExSortPointsSettings::UPCGExSortPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSortPointsSettings);
UPCGExSortPointsSettings::~UPCGExSortPointsSettings() {}
// ********** End Class UPCGExSortPointsSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSortPointsBaseSettings, UPCGExSortPointsBaseSettings::StaticClass, TEXT("UPCGExSortPointsBaseSettings"), &Z_Registration_Info_UClass_UPCGExSortPointsBaseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSortPointsBaseSettings), 2489493527U) },
		{ Z_Construct_UClass_UPCGExSortPointsSettings, UPCGExSortPointsSettings::StaticClass, TEXT("UPCGExSortPointsSettings"), &Z_Registration_Info_UClass_UPCGExSortPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSortPointsSettings), 3537354521U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortPoints_h__Script_PCGExtendedToolkit_372622932{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
