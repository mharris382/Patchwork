// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/PCGExWriteVtxProperties.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExWriteVtxProperties() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExWriteVtxPropertiesSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExWriteVtxPropertiesSettings;
UClass* UPCGExWriteVtxPropertiesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExWriteVtxPropertiesSettings;
	if (!Z_Registration_Info_UClass_UPCGExWriteVtxPropertiesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExWriteVtxPropertiesSettings"),
			Z_Registration_Info_UClass_UPCGExWriteVtxPropertiesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExWriteVtxPropertiesSettings,
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
	return Z_Registration_Info_UClass_UPCGExWriteVtxPropertiesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_NoRegister()
{
	return UPCGExWriteVtxPropertiesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "PCGExNodeLibraryDoc", "metadata/vtx-properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMutateVtxToOOB_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Mutate Vtx into their OOB based on neighboring connections. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mutate Vtx into their OOB based on neighboring connections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteVtxEdgeCount_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write normal from edges on vertices. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write normal from edges on vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxEdgeCountAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'normal' vertex attribute to write normal to.*/" },
		{ "DisplayName", "EdgeCount" },
		{ "EditCondition", "bWriteVtxEdgeCount" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'normal' vertex attribute to write normal to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteVtxNormal_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write normal from edges on vertices. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write normal from edges on vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxNormalAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'normal' vertex attribute to write normal to.*/" },
		{ "DisplayName", "Normal" },
		{ "EditCondition", "bWriteVtxNormal" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'normal' vertex attribute to write normal to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalAxis_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Which axis of the vtx OOB to use as normal.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Axis" },
		{ "EditCondition", "bWriteVtxNormal" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which axis of the vtx OOB to use as normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeVtxInOOB_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExWriteVtxProperties.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExWriteVtxPropertiesSettings constinit property declarations *********
	static void NewProp_bMutateVtxToOOB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMutateVtxToOOB;
	static void NewProp_bWriteVtxEdgeCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteVtxEdgeCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VtxEdgeCountAttributeName;
	static void NewProp_bWriteVtxNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteVtxNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VtxNormalAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NormalAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalAxis;
	static void NewProp_bIncludeVtxInOOB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeVtxInOOB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExWriteVtxPropertiesSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExWriteVtxPropertiesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics

// ********** Begin Class UPCGExWriteVtxPropertiesSettings Property Definitions ********************
void Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bMutateVtxToOOB_SetBit(void* Obj)
{
	((UPCGExWriteVtxPropertiesSettings*)Obj)->bMutateVtxToOOB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bMutateVtxToOOB = { "bMutateVtxToOOB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteVtxPropertiesSettings), &Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bMutateVtxToOOB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMutateVtxToOOB_MetaData), NewProp_bMutateVtxToOOB_MetaData) };
void Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bWriteVtxEdgeCount_SetBit(void* Obj)
{
	((UPCGExWriteVtxPropertiesSettings*)Obj)->bWriteVtxEdgeCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bWriteVtxEdgeCount = { "bWriteVtxEdgeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteVtxPropertiesSettings), &Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bWriteVtxEdgeCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteVtxEdgeCount_MetaData), NewProp_bWriteVtxEdgeCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_VtxEdgeCountAttributeName = { "VtxEdgeCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteVtxPropertiesSettings, VtxEdgeCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxEdgeCountAttributeName_MetaData), NewProp_VtxEdgeCountAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bWriteVtxNormal_SetBit(void* Obj)
{
	((UPCGExWriteVtxPropertiesSettings*)Obj)->bWriteVtxNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bWriteVtxNormal = { "bWriteVtxNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteVtxPropertiesSettings), &Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bWriteVtxNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteVtxNormal_MetaData), NewProp_bWriteVtxNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_VtxNormalAttributeName = { "VtxNormalAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteVtxPropertiesSettings, VtxNormalAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxNormalAttributeName_MetaData), NewProp_VtxNormalAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_NormalAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_NormalAxis = { "NormalAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWriteVtxPropertiesSettings, NormalAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalAxis_MetaData), NewProp_NormalAxis_MetaData) }; // 904353693
void Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bIncludeVtxInOOB_SetBit(void* Obj)
{
	((UPCGExWriteVtxPropertiesSettings*)Obj)->bIncludeVtxInOOB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bIncludeVtxInOOB = { "bIncludeVtxInOOB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWriteVtxPropertiesSettings), &Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bIncludeVtxInOOB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeVtxInOOB_MetaData), NewProp_bIncludeVtxInOOB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bMutateVtxToOOB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bWriteVtxEdgeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_VtxEdgeCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bWriteVtxNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_VtxNormalAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_NormalAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_NormalAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::NewProp_bIncludeVtxInOOB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExWriteVtxPropertiesSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::ClassParams = {
	&UPCGExWriteVtxPropertiesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::Class_MetaDataParams)
};
void UPCGExWriteVtxPropertiesSettings::StaticRegisterNativesUPCGExWriteVtxPropertiesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExWriteVtxPropertiesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExWriteVtxPropertiesSettings.OuterSingleton, Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExWriteVtxPropertiesSettings.OuterSingleton;
}
UPCGExWriteVtxPropertiesSettings::UPCGExWriteVtxPropertiesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExWriteVtxPropertiesSettings);
UPCGExWriteVtxPropertiesSettings::~UPCGExWriteVtxPropertiesSettings() {}
// ********** End Class UPCGExWriteVtxPropertiesSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteVtxProperties_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExWriteVtxPropertiesSettings, UPCGExWriteVtxPropertiesSettings::StaticClass, TEXT("UPCGExWriteVtxPropertiesSettings"), &Z_Registration_Info_UClass_UPCGExWriteVtxPropertiesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExWriteVtxPropertiesSettings), 3846714098U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteVtxProperties_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteVtxProperties_h__Script_PCGExtendedToolkit_201667473{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteVtxProperties_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExWriteVtxProperties_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
