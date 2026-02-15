// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExBreakClustersToPaths.h"
#include "Geometry/PCGExGeo.h"
#include "Graph/PCGExEdgeDirectionSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBreakClustersToPaths() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBreakClustersToPathsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBreakClusterOperationTarget *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBreakClusterOperationTarget;
static UEnum* EPCGExBreakClusterOperationTarget_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBreakClusterOperationTarget.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBreakClusterOperationTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBreakClusterOperationTarget"));
	}
	return Z_Registration_Info_UEnum_EPCGExBreakClusterOperationTarget.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBreakClusterOperationTarget>()
{
	return EPCGExBreakClusterOperationTarget_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Edges.DisplayName", "Edges" },
		{ "Edges.Name", "EPCGExBreakClusterOperationTarget::Edges" },
		{ "Edges.ToolTip", "Operate on each edge individually (very expensive)" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "Paths.DisplayName", "Paths" },
		{ "Paths.Name", "EPCGExBreakClusterOperationTarget::Paths" },
		{ "Paths.ToolTip", "Operate on edge chains which form paths with no crossings.  e.g, nodes with only two neighbors." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBreakClusterOperationTarget::Paths", (int64)EPCGExBreakClusterOperationTarget::Paths },
		{ "EPCGExBreakClusterOperationTarget::Edges", (int64)EPCGExBreakClusterOperationTarget::Edges },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBreakClusterOperationTarget",
	"EPCGExBreakClusterOperationTarget",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget()
{
	if (!Z_Registration_Info_UEnum_EPCGExBreakClusterOperationTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBreakClusterOperationTarget.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBreakClusterOperationTarget.InnerSingleton;
}
// ********** End Enum EPCGExBreakClusterOperationTarget *******************************************

// ********** Begin Enum EPCGExBreakClusterLeavesHandling ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBreakClusterLeavesHandling;
static UEnum* EPCGExBreakClusterLeavesHandling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBreakClusterLeavesHandling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBreakClusterLeavesHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBreakClusterLeavesHandling"));
	}
	return Z_Registration_Info_UEnum_EPCGExBreakClusterLeavesHandling.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBreakClusterLeavesHandling>()
{
	return EPCGExBreakClusterLeavesHandling_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Exclude.DisplayName", "Exclude Leaves" },
		{ "Exclude.Name", "EPCGExBreakClusterLeavesHandling::Exclude" },
		{ "Exclude.ToolTip", "Exclude leaves." },
		{ "Include.DisplayName", "Include Leaves" },
		{ "Include.Name", "EPCGExBreakClusterLeavesHandling::Include" },
		{ "Include.ToolTip", "Include leaves." },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "Only.DisplayName", "Only Leaves" },
		{ "Only.Name", "EPCGExBreakClusterLeavesHandling::Only" },
		{ "Only.ToolTip", "Only process leaves." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBreakClusterLeavesHandling::Include", (int64)EPCGExBreakClusterLeavesHandling::Include },
		{ "EPCGExBreakClusterLeavesHandling::Exclude", (int64)EPCGExBreakClusterLeavesHandling::Exclude },
		{ "EPCGExBreakClusterLeavesHandling::Only", (int64)EPCGExBreakClusterLeavesHandling::Only },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBreakClusterLeavesHandling",
	"EPCGExBreakClusterLeavesHandling",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling()
{
	if (!Z_Registration_Info_UEnum_EPCGExBreakClusterLeavesHandling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBreakClusterLeavesHandling.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBreakClusterLeavesHandling.InnerSingleton;
}
// ********** End Enum EPCGExBreakClusterLeavesHandling ********************************************

// ********** Begin Class UPCGExBreakClustersToPathsSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBreakClustersToPathsSettings;
UClass* UPCGExBreakClustersToPathsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBreakClustersToPathsSettings;
	if (!Z_Registration_Info_UClass_UPCGExBreakClustersToPathsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBreakClustersToPathsSettings"),
			Z_Registration_Info_UClass_UPCGExBreakClustersToPathsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBreakClustersToPathsSettings,
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
	return Z_Registration_Info_UClass_UPCGExBreakClustersToPathsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_NoRegister()
{
	return UPCGExBreakClustersToPathsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExBreakClustersToPaths.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCGExNodeLibraryDoc", "clusters/paths-interop/break-cluster-to-paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeavesHandling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to handle leaves */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to handle leaves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperateOn_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operation target mode */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operation target mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the direction in which points will be ordered to form the final paths. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines the direction in which points will be ordered to form the final paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Winding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enforce a winding order for paths. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Enforce a winding order for paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWindOnlyClosedLoops_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to apply winding on closed loops only or all paths. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to apply winding on closed loops only or all paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. Winding is computed on a 2D plane. */" },
		{ "EditCondition", "Winding != EPCGExWindingMutation::Unchanged" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings. Winding is computed on a 2D plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Do not output paths that have less points that this value */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Do not output paths that have less points that this value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitAbovePointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Do not output paths that have more points that this value */" },
		{ "EditCondition", "bOmitAbovePointCount" },
		{ "ModuleRelativePath", "Public/Graph/PCGExBreakClustersToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Do not output paths that have more points that this value" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBreakClustersToPathsSettings constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeavesHandling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeavesHandling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperateOn_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OperateOn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Winding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Winding;
	static void NewProp_bWindOnlyClosedLoops_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWindOnlyClosedLoops;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPointCount;
	static void NewProp_bOmitAbovePointCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitAbovePointCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBreakClustersToPathsSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBreakClustersToPathsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics

// ********** Begin Class UPCGExBreakClustersToPathsSettings Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_LeavesHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_LeavesHandling = { "LeavesHandling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBreakClustersToPathsSettings, LeavesHandling), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterLeavesHandling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeavesHandling_MetaData), NewProp_LeavesHandling_MetaData) }; // 3731384119
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_OperateOn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_OperateOn = { "OperateOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBreakClustersToPathsSettings, OperateOn), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBreakClusterOperationTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperateOn_MetaData), NewProp_OperateOn_MetaData) }; // 4094259354
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_DirectionSettings = { "DirectionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBreakClustersToPathsSettings, DirectionSettings), Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionSettings_MetaData), NewProp_DirectionSettings_MetaData) }; // 1520832441
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_Winding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_Winding = { "Winding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBreakClustersToPathsSettings, Winding), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Winding_MetaData), NewProp_Winding_MetaData) }; // 4046642856
void Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_bWindOnlyClosedLoops_SetBit(void* Obj)
{
	((UPCGExBreakClustersToPathsSettings*)Obj)->bWindOnlyClosedLoops = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_bWindOnlyClosedLoops = { "bWindOnlyClosedLoops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBreakClustersToPathsSettings), &Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_bWindOnlyClosedLoops_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWindOnlyClosedLoops_MetaData), NewProp_bWindOnlyClosedLoops_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBreakClustersToPathsSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_MinPointCount = { "MinPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBreakClustersToPathsSettings, MinPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPointCount_MetaData), NewProp_MinPointCount_MetaData) };
void Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_bOmitAbovePointCount_SetBit(void* Obj)
{
	((UPCGExBreakClustersToPathsSettings*)Obj)->bOmitAbovePointCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_bOmitAbovePointCount = { "bOmitAbovePointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBreakClustersToPathsSettings), &Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_bOmitAbovePointCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitAbovePointCount_MetaData), NewProp_bOmitAbovePointCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_MaxPointCount = { "MaxPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBreakClustersToPathsSettings, MaxPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointCount_MetaData), NewProp_MaxPointCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_LeavesHandling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_LeavesHandling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_OperateOn_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_OperateOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_DirectionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_Winding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_Winding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_bWindOnlyClosedLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_MinPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_bOmitAbovePointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::NewProp_MaxPointCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBreakClustersToPathsSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::ClassParams = {
	&UPCGExBreakClustersToPathsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::Class_MetaDataParams)
};
void UPCGExBreakClustersToPathsSettings::StaticRegisterNativesUPCGExBreakClustersToPathsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBreakClustersToPathsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBreakClustersToPathsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBreakClustersToPathsSettings.OuterSingleton, Z_Construct_UClass_UPCGExBreakClustersToPathsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBreakClustersToPathsSettings.OuterSingleton;
}
UPCGExBreakClustersToPathsSettings::UPCGExBreakClustersToPathsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBreakClustersToPathsSettings);
UPCGExBreakClustersToPathsSettings::~UPCGExBreakClustersToPathsSettings() {}
// ********** End Class UPCGExBreakClustersToPathsSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBreakClusterOperationTarget_StaticEnum, TEXT("EPCGExBreakClusterOperationTarget"), &Z_Registration_Info_UEnum_EPCGExBreakClusterOperationTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4094259354U) },
		{ EPCGExBreakClusterLeavesHandling_StaticEnum, TEXT("EPCGExBreakClusterLeavesHandling"), &Z_Registration_Info_UEnum_EPCGExBreakClusterLeavesHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3731384119U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBreakClustersToPathsSettings, UPCGExBreakClustersToPathsSettings::StaticClass, TEXT("UPCGExBreakClustersToPathsSettings"), &Z_Registration_Info_UClass_UPCGExBreakClustersToPathsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBreakClustersToPathsSettings), 1109679425U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h__Script_PCGExtendedToolkit_3425567330{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExBreakClustersToPaths_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
