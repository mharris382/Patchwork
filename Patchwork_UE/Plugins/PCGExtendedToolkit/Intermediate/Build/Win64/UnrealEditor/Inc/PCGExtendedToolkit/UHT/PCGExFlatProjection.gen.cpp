// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExFlatProjection.h"
#include "Geometry/PCGExGeo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFlatProjection() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFlatProjectionSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFlatProjectionSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFlatProjectionSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFlatProjectionSettings;
UClass* UPCGExFlatProjectionSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFlatProjectionSettings;
	if (!Z_Registration_Info_UClass_UPCGExFlatProjectionSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFlatProjectionSettings"),
			Z_Registration_Info_UClass_UPCGExFlatProjectionSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFlatProjectionSettings,
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
	return Z_Registration_Info_UClass_UPCGExFlatProjectionSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFlatProjectionSettings_NoRegister()
{
	return UPCGExFlatProjectionSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/PCGExFlatProjection.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCGExNodeLibraryDoc", "transform/flat-projection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestorePreviousProjection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether this is a new projection or an old one*/" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether this is a new projection or an old one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributePrefix_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to write its index to.*/" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write its index to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformPosition_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which position components from the stored transform should be applied to the point.  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Position" },
		{ "EditCondition", "bRestorePreviousProjection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which position components from the stored transform should be applied to the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformRotation_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which rotation components from the stored transform should be applied to the point.  */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Rotation" },
		{ "EditCondition", "bRestorePreviousProjection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which rotation components from the stored transform should be applied to the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which scale components from the stored transform should be applied to the point.  */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Scale" },
		{ "EditCondition", "bRestorePreviousProjection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which scale components from the stored transform should be applied to the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveAttributeForRestore_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether this is a new projection or an old one*/" },
		{ "EditCondition", "!bRestorePreviousProjection" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether this is a new projection or an old one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignLocalTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether this is a new projection or an old one*/" },
		{ "EditCondition", "!bRestorePreviousProjection" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether this is a new projection or an old one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Projection" },
		{ "EditCondition", "!bRestorePreviousProjection" },
		{ "ModuleRelativePath", "Public/Transform/PCGExFlatProjection.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFlatProjectionSettings constinit property declarations *************
	static void NewProp_bRestorePreviousProjection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestorePreviousProjection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributePrefix;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformScale;
	static void NewProp_bSaveAttributeForRestore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAttributeForRestore;
	static void NewProp_bAlignLocalTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignLocalTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFlatProjectionSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFlatProjectionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics

// ********** Begin Class UPCGExFlatProjectionSettings Property Definitions ************************
void Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bRestorePreviousProjection_SetBit(void* Obj)
{
	((UPCGExFlatProjectionSettings*)Obj)->bRestorePreviousProjection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bRestorePreviousProjection = { "bRestorePreviousProjection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFlatProjectionSettings), &Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bRestorePreviousProjection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestorePreviousProjection_MetaData), NewProp_bRestorePreviousProjection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_AttributePrefix = { "AttributePrefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFlatProjectionSettings, AttributePrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributePrefix_MetaData), NewProp_AttributePrefix_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_TransformPosition = { "TransformPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFlatProjectionSettings, TransformPosition), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformPosition_MetaData), NewProp_TransformPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_TransformRotation = { "TransformRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFlatProjectionSettings, TransformRotation), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformRotation_MetaData), NewProp_TransformRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFlatProjectionSettings, TransformScale), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformScale_MetaData), NewProp_TransformScale_MetaData) };
void Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bSaveAttributeForRestore_SetBit(void* Obj)
{
	((UPCGExFlatProjectionSettings*)Obj)->bSaveAttributeForRestore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bSaveAttributeForRestore = { "bSaveAttributeForRestore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFlatProjectionSettings), &Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bSaveAttributeForRestore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveAttributeForRestore_MetaData), NewProp_bSaveAttributeForRestore_MetaData) };
void Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bAlignLocalTransform_SetBit(void* Obj)
{
	((UPCGExFlatProjectionSettings*)Obj)->bAlignLocalTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bAlignLocalTransform = { "bAlignLocalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFlatProjectionSettings), &Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bAlignLocalTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignLocalTransform_MetaData), NewProp_bAlignLocalTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFlatProjectionSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bRestorePreviousProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_AttributePrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_TransformPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_TransformRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_TransformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bSaveAttributeForRestore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_bAlignLocalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::NewProp_ProjectionDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFlatProjectionSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::ClassParams = {
	&UPCGExFlatProjectionSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::Class_MetaDataParams)
};
void UPCGExFlatProjectionSettings::StaticRegisterNativesUPCGExFlatProjectionSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFlatProjectionSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFlatProjectionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFlatProjectionSettings.OuterSingleton, Z_Construct_UClass_UPCGExFlatProjectionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFlatProjectionSettings.OuterSingleton;
}
UPCGExFlatProjectionSettings::UPCGExFlatProjectionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFlatProjectionSettings);
UPCGExFlatProjectionSettings::~UPCGExFlatProjectionSettings() {}
// ********** End Class UPCGExFlatProjectionSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFlatProjection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFlatProjectionSettings, UPCGExFlatProjectionSettings::StaticClass, TEXT("UPCGExFlatProjectionSettings"), &Z_Registration_Info_UClass_UPCGExFlatProjectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFlatProjectionSettings), 3138836752U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFlatProjection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFlatProjection_h__Script_PCGExtendedToolkit_4045613328{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFlatProjection_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExFlatProjection_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
