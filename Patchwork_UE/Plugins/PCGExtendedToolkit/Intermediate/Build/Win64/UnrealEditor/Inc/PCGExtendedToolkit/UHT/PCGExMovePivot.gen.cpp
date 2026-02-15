// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExMovePivot.h"
#include "Transform/PCGExTransform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMovePivot() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMovePivotSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMovePivotSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExUVW();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExMovePivotSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMovePivotSettings;
UClass* UPCGExMovePivotSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExMovePivotSettings;
	if (!Z_Registration_Info_UClass_UPCGExMovePivotSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMovePivotSettings"),
			Z_Registration_Info_UClass_UPCGExMovePivotSettings.InnerSingleton,
			StaticRegisterNativesUPCGExMovePivotSettings,
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
	return Z_Registration_Info_UClass_UPCGExMovePivotSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMovePivotSettings_NoRegister()
{
	return UPCGExMovePivotSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMovePivotSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/PCGExMovePivot.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExMovePivot.h" },
		{ "PCGExNodeLibraryDoc", "transform/move-pivot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVW_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExMovePivot.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMovePivotSettings constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVW;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMovePivotSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMovePivotSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMovePivotSettings_Statics

// ********** Begin Class UPCGExMovePivotSettings Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMovePivotSettings_Statics::NewProp_UVW = { "UVW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMovePivotSettings, UVW), Z_Construct_UScriptStruct_FPCGExUVW, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVW_MetaData), NewProp_UVW_MetaData) }; // 389750353
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMovePivotSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMovePivotSettings_Statics::NewProp_UVW,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMovePivotSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMovePivotSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExMovePivotSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMovePivotSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMovePivotSettings_Statics::ClassParams = {
	&UPCGExMovePivotSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMovePivotSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMovePivotSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMovePivotSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMovePivotSettings_Statics::Class_MetaDataParams)
};
void UPCGExMovePivotSettings::StaticRegisterNativesUPCGExMovePivotSettings()
{
}
UClass* Z_Construct_UClass_UPCGExMovePivotSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExMovePivotSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMovePivotSettings.OuterSingleton, Z_Construct_UClass_UPCGExMovePivotSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMovePivotSettings.OuterSingleton;
}
UPCGExMovePivotSettings::UPCGExMovePivotSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMovePivotSettings);
UPCGExMovePivotSettings::~UPCGExMovePivotSettings() {}
// ********** End Class UPCGExMovePivotSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExMovePivot_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMovePivotSettings, UPCGExMovePivotSettings::StaticClass, TEXT("UPCGExMovePivotSettings"), &Z_Registration_Info_UClass_UPCGExMovePivotSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMovePivotSettings), 1809493643U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExMovePivot_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExMovePivot_h__Script_PCGExtendedToolkit_455531254{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExMovePivot_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExMovePivot_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
