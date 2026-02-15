// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExLloydRelax2D.h"
#include "Details/PCGExDetailsRelax.h"
#include "Geometry/PCGExGeo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExLloydRelax2D() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExLloydRelax2DSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExLloydRelax2DSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInfluenceDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExLloydRelax2DSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExLloydRelax2DSettings;
UClass* UPCGExLloydRelax2DSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExLloydRelax2DSettings;
	if (!Z_Registration_Info_UClass_UPCGExLloydRelax2DSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExLloydRelax2DSettings"),
			Z_Registration_Info_UClass_UPCGExLloydRelax2DSettings.InnerSingleton,
			StaticRegisterNativesUPCGExLloydRelax2DSettings,
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
	return Z_Registration_Info_UClass_UPCGExLloydRelax2DSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExLloydRelax2DSettings_NoRegister()
{
	return UPCGExLloydRelax2DSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Transform/PCGExLloydRelax2D.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExLloydRelax2D.h" },
		{ "PCGExNodeLibraryDoc", "transform/lloyd-relax-2d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExLloydRelax2D.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Influence Settings*/" },
		{ "ModuleRelativePath", "Public/Transform/PCGExLloydRelax2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Influence Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExLloydRelax2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExLloydRelax2DSettings constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InfluenceDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExLloydRelax2DSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExLloydRelax2DSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics

// ********** Begin Class UPCGExLloydRelax2DSettings Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExLloydRelax2DSettings, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::NewProp_InfluenceDetails = { "InfluenceDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExLloydRelax2DSettings, InfluenceDetails), Z_Construct_UScriptStruct_FPCGExInfluenceDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceDetails_MetaData), NewProp_InfluenceDetails_MetaData) }; // 3063891606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExLloydRelax2DSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::NewProp_InfluenceDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::NewProp_ProjectionDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExLloydRelax2DSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::ClassParams = {
	&UPCGExLloydRelax2DSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::Class_MetaDataParams)
};
void UPCGExLloydRelax2DSettings::StaticRegisterNativesUPCGExLloydRelax2DSettings()
{
}
UClass* Z_Construct_UClass_UPCGExLloydRelax2DSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExLloydRelax2DSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExLloydRelax2DSettings.OuterSingleton, Z_Construct_UClass_UPCGExLloydRelax2DSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExLloydRelax2DSettings.OuterSingleton;
}
UPCGExLloydRelax2DSettings::UPCGExLloydRelax2DSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExLloydRelax2DSettings);
UPCGExLloydRelax2DSettings::~UPCGExLloydRelax2DSettings() {}
// ********** End Class UPCGExLloydRelax2DSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExLloydRelax2D_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExLloydRelax2DSettings, UPCGExLloydRelax2DSettings::StaticClass, TEXT("UPCGExLloydRelax2DSettings"), &Z_Registration_Info_UClass_UPCGExLloydRelax2DSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExLloydRelax2DSettings), 1640332703U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExLloydRelax2D_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExLloydRelax2D_h__Script_PCGExtendedToolkit_2410948413{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExLloydRelax2D_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExLloydRelax2D_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
