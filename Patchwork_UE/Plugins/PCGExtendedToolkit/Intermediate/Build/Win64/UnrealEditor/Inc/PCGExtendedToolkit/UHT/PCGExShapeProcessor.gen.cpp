// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shapes/PCGExShapeProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExShapeProcessor() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeProcessorSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExShapeProcessorSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExShapeProcessorSettings;
UClass* UPCGExShapeProcessorSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExShapeProcessorSettings;
	if (!Z_Registration_Info_UClass_UPCGExShapeProcessorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExShapeProcessorSettings"),
			Z_Registration_Info_UClass_UPCGExShapeProcessorSettings.InnerSingleton,
			StaticRegisterNativesUPCGExShapeProcessorSettings,
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
	return Z_Registration_Info_UClass_UPCGExShapeProcessorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExShapeProcessorSettings_NoRegister()
{
	return UPCGExShapeProcessorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Shapes/PCGExShapeProcessor.h" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapeProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to pick which path endpoint to start with */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapeProcessor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to pick which path endpoint to start with" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExShapeProcessorSettings constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExShapeProcessorSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExShapeProcessorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics

// ********** Begin Class UPCGExShapeProcessorSettings Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShapeProcessorSettings, OutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShapeOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 2152615657
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::NewProp_OutputMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExShapeProcessorSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::ClassParams = {
	&UPCGExShapeProcessorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::Class_MetaDataParams)
};
void UPCGExShapeProcessorSettings::StaticRegisterNativesUPCGExShapeProcessorSettings()
{
}
UClass* Z_Construct_UClass_UPCGExShapeProcessorSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExShapeProcessorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExShapeProcessorSettings.OuterSingleton, Z_Construct_UClass_UPCGExShapeProcessorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExShapeProcessorSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExShapeProcessorSettings);
UPCGExShapeProcessorSettings::~UPCGExShapeProcessorSettings() {}
// ********** End Class UPCGExShapeProcessorSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeProcessor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExShapeProcessorSettings, UPCGExShapeProcessorSettings::StaticClass, TEXT("UPCGExShapeProcessorSettings"), &Z_Registration_Info_UClass_UPCGExShapeProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExShapeProcessorSettings), 817115359U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeProcessor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeProcessor_h__Script_PCGExtendedToolkit_2522061228{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
