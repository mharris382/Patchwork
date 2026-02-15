// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExBoundsToPoints.h"
#include "Data/PCGExDataForward.h"
#include "Transform/PCGExTransform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBoundsToPoints() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsToPointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsToPointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExUVW();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBoundsToPointsSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBoundsToPointsSettings;
UClass* UPCGExBoundsToPointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBoundsToPointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExBoundsToPointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBoundsToPointsSettings"),
			Z_Registration_Info_UClass_UPCGExBoundsToPointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBoundsToPointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExBoundsToPointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBoundsToPointsSettings_NoRegister()
{
	return UPCGExBoundsToPointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/PCGExBoundsToPoints.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCGExNodeLibraryDoc", "misc/bounds-to-points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratePerPointData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Generates a point collections per generated point */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Generates a point collections per generated point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SymmetryAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Generate points in symmetry */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Generate points in symmetry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVW_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetExtents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The extents of the generate point */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The extents of the generate point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bSetExtents" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiplyExtents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Multiplies the existing bounds */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 As multiplier" },
		{ "EditCondition", "bSetExtents" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Multiplies the existing bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bSetScale" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointAttributesToOutputTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "EditCondition", "bGeneratePerPointData" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBoundsToPoints.h" },
		{ "ToolTip", "TBD" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBoundsToPointsSettings constinit property declarations *************
	static void NewProp_bGeneratePerPointData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratePerPointData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SymmetryAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SymmetryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVW;
	static void NewProp_bSetExtents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static void NewProp_bMultiplyExtents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiplyExtents;
	static void NewProp_bSetScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointAttributesToOutputTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBoundsToPointsSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBoundsToPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics

// ********** Begin Class UPCGExBoundsToPointsSettings Property Definitions ************************
void Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bGeneratePerPointData_SetBit(void* Obj)
{
	((UPCGExBoundsToPointsSettings*)Obj)->bGeneratePerPointData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bGeneratePerPointData = { "bGeneratePerPointData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsToPointsSettings), &Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bGeneratePerPointData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratePerPointData_MetaData), NewProp_bGeneratePerPointData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_SymmetryAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_SymmetryAxis = { "SymmetryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsToPointsSettings, SymmetryAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SymmetryAxis_MetaData), NewProp_SymmetryAxis_MetaData) }; // 904353693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_UVW = { "UVW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsToPointsSettings, UVW), Z_Construct_UScriptStruct_FPCGExUVW, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVW_MetaData), NewProp_UVW_MetaData) }; // 389750353
void Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bSetExtents_SetBit(void* Obj)
{
	((UPCGExBoundsToPointsSettings*)Obj)->bSetExtents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bSetExtents = { "bSetExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsToPointsSettings), &Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bSetExtents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetExtents_MetaData), NewProp_bSetExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsToPointsSettings, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
void Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bMultiplyExtents_SetBit(void* Obj)
{
	((UPCGExBoundsToPointsSettings*)Obj)->bMultiplyExtents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bMultiplyExtents = { "bMultiplyExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsToPointsSettings), &Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bMultiplyExtents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiplyExtents_MetaData), NewProp_bMultiplyExtents_MetaData) };
void Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bSetScale_SetBit(void* Obj)
{
	((UPCGExBoundsToPointsSettings*)Obj)->bSetScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bSetScale = { "bSetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBoundsToPointsSettings), &Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bSetScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetScale_MetaData), NewProp_bSetScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsToPointsSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_PointAttributesToOutputTags = { "PointAttributesToOutputTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBoundsToPointsSettings, PointAttributesToOutputTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointAttributesToOutputTags_MetaData), NewProp_PointAttributesToOutputTags_MetaData) }; // 1295694073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bGeneratePerPointData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_SymmetryAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_SymmetryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_UVW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bSetExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_Extents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bMultiplyExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_bSetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::NewProp_PointAttributesToOutputTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBoundsToPointsSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::ClassParams = {
	&UPCGExBoundsToPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExBoundsToPointsSettings::StaticRegisterNativesUPCGExBoundsToPointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBoundsToPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBoundsToPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBoundsToPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExBoundsToPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBoundsToPointsSettings.OuterSingleton;
}
UPCGExBoundsToPointsSettings::UPCGExBoundsToPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBoundsToPointsSettings);
UPCGExBoundsToPointsSettings::~UPCGExBoundsToPointsSettings() {}
// ********** End Class UPCGExBoundsToPointsSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsToPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBoundsToPointsSettings, UPCGExBoundsToPointsSettings::StaticClass, TEXT("UPCGExBoundsToPointsSettings"), &Z_Registration_Info_UClass_UPCGExBoundsToPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBoundsToPointsSettings), 1929645869U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsToPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsToPoints_h__Script_PCGExtendedToolkit_1591486637{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsToPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsToPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
