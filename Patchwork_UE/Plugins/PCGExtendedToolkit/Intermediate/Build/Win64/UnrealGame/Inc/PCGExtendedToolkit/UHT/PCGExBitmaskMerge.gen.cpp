// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExBitmaskMerge.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBitmaskMerge() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitmaskMergeSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitmaskMergeSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBitmaskMergeSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBitmaskMergeSettings;
UClass* UPCGExBitmaskMergeSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBitmaskMergeSettings;
	if (!Z_Registration_Info_UClass_UPCGExBitmaskMergeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBitmaskMergeSettings"),
			Z_Registration_Info_UClass_UPCGExBitmaskMergeSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBitmaskMergeSettings,
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
	return Z_Registration_Info_UClass_UPCGExBitmaskMergeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBitmaskMergeSettings_NoRegister()
{
	return UPCGExBitmaskMergeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExBitmaskMerge.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBitmaskMerge.h" },
		{ "PCGExNodeLibraryDoc", "metadata/bitmasks/bitmask-merge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBitmaskMerge.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBitmaskMergeSettings constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBitmaskMergeSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBitmaskMergeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics

// ********** Begin Class UPCGExBitmaskMergeSettings Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitmaskMergeSettings, Operation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 1700527728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::NewProp_Operation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBitmaskMergeSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::ClassParams = {
	&UPCGExBitmaskMergeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::Class_MetaDataParams)
};
void UPCGExBitmaskMergeSettings::StaticRegisterNativesUPCGExBitmaskMergeSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBitmaskMergeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBitmaskMergeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBitmaskMergeSettings.OuterSingleton, Z_Construct_UClass_UPCGExBitmaskMergeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBitmaskMergeSettings.OuterSingleton;
}
UPCGExBitmaskMergeSettings::UPCGExBitmaskMergeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBitmaskMergeSettings);
UPCGExBitmaskMergeSettings::~UPCGExBitmaskMergeSettings() {}
// ********** End Class UPCGExBitmaskMergeSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitmaskMerge_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBitmaskMergeSettings, UPCGExBitmaskMergeSettings::StaticClass, TEXT("UPCGExBitmaskMergeSettings"), &Z_Registration_Info_UClass_UPCGExBitmaskMergeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBitmaskMergeSettings), 3154596442U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitmaskMerge_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitmaskMerge_h__Script_PCGExtendedToolkit_331130318{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitmaskMerge_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitmaskMerge_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
