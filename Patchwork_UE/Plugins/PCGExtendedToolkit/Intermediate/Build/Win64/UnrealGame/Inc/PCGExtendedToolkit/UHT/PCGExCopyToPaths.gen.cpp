// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExCopyToPaths.h"
#include "Data/Matching/PCGExMatching.h"
#include "Paths/Tangents/PCGExTangentsInstancedFactory.h"
#include "Transform/PCGExTransform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCopyToPaths() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCopyToPathsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCopyToPathsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAxisDeformDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTangentsDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExCopyToPathsUnit *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCopyToPathsUnit;
static UEnum* EPCGExCopyToPathsUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCopyToPathsUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCopyToPathsUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCopyToPathsUnit"));
	}
	return Z_Registration_Info_UEnum_EPCGExCopyToPathsUnit.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCopyToPathsUnit>()
{
	return EPCGExCopyToPathsUnit_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.DisplayName", "Alpha" },
		{ "Alpha.Name", "EPCGExCopyToPathsUnit::Alpha" },
		{ "Alpha.Tooltip", "..." },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExCopyToPathsUnit::Distance" },
		{ "Distance.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCopyToPathsUnit::Alpha", (int64)EPCGExCopyToPathsUnit::Alpha },
		{ "EPCGExCopyToPathsUnit::Distance", (int64)EPCGExCopyToPathsUnit::Distance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCopyToPathsUnit",
	"EPCGExCopyToPathsUnit",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit()
{
	if (!Z_Registration_Info_UEnum_EPCGExCopyToPathsUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCopyToPathsUnit.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCopyToPathsUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCopyToPathsUnit.InnerSingleton;
}
// ********** End Enum EPCGExCopyToPathsUnit *******************************************************

// ********** Begin Class UPCGExCopyToPathsSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCopyToPathsSettings;
UClass* UPCGExCopyToPathsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCopyToPathsSettings;
	if (!Z_Registration_Info_UClass_UPCGExCopyToPathsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCopyToPathsSettings"),
			Z_Registration_Info_UClass_UPCGExCopyToPathsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCopyToPathsSettings,
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
	return Z_Registration_Info_UClass_UPCGExCopyToPathsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCopyToPathsSettings_NoRegister()
{
	return UPCGExCopyToPathsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/PCGExCopyToPaths.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCGExNodeLibraryDoc", "transform/copy-to-path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to filter out which targets get sampled by which data */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "ToolTip", "If enabled, allows you to filter out which targets get sampled by which data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPointType_MetaData[] = {
		{ "Category", "Settings|Spline" },
		{ "Comment", "/** Default spline point type. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Default spline point type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomPointType_MetaData[] = {
		{ "Category", "Settings|Spline" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTypeAttribute_MetaData[] = {
		{ "Category", "Settings|Spline" },
		{ "EditCondition", "bApplyCustomPointType" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "Category", "Settings|Spline" },
		{ "EditCondition", "bApplyCustomPointType || DefaultPointType == EPCGExSplinePointType::CurveCustomTangent" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSource_MetaData[] = {
		{ "Category", "Settings|Deform|Bounds" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinBoundsOffset_MetaData[] = {
		{ "Category", "Settings|Deform|Bounds" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBoundsOffset_MetaData[] = {
		{ "Category", "Settings|Deform|Bounds" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "Comment", "/** Axis transformation order. [Main Axis] > [Cross Axis] > [...]*/" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Axis transformation order. [Main Axis] > [Cross Axis] > [...]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which scale components from the sampled transform should be applied to the point.  */" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which scale components from the sampled transform should be applied to the point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveOriginalInputScale_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveAspectRatio_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlattenAxis_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWrapClosedLoops_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAxisSettings_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "Comment", "// Main axis is \"along the spline\"\n" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Main axis is \"along the spline\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoTwist_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistSettings_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "EditCondition", "bDoTwist" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaskSettings_MetaData[] = {
		{ "Category", "Settings|Deform" },
		{ "Comment", "/** Used to shrink the scope per-target, to distribute points only on a subselection. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExCopyToPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Used to shrink the scope per-target, to distribute points only on a subselection." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCopyToPathsSettings constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPointType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPointType;
	static void NewProp_bApplyCustomPointType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomPointType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointTypeAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinBoundsOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxBoundsOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformScale;
	static void NewProp_bPreserveOriginalInputScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveOriginalInputScale;
	static void NewProp_bPreserveAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveAspectRatio;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlattenAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FlattenAxis;
	static void NewProp_bWrapClosedLoops_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapClosedLoops;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MainAxisSettings;
	static void NewProp_bDoTwist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoTwist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetMaskSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCopyToPathsSettings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCopyToPathsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics

// ********** Begin Class UPCGExCopyToPathsSettings Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_DefaultPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_DefaultPointType = { "DefaultPointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, DefaultPointType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPointType_MetaData), NewProp_DefaultPointType_MetaData) }; // 3497448724
void Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bApplyCustomPointType_SetBit(void* Obj)
{
	((UPCGExCopyToPathsSettings*)Obj)->bApplyCustomPointType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bApplyCustomPointType = { "bApplyCustomPointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCopyToPathsSettings), &Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bApplyCustomPointType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCustomPointType_MetaData), NewProp_bApplyCustomPointType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_PointTypeAttribute = { "PointTypeAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, PointTypeAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTypeAttribute_MetaData), NewProp_PointTypeAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, Tangents), Z_Construct_UScriptStruct_FPCGExTangentsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) }; // 2695381813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_BoundsSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_BoundsSource = { "BoundsSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, BoundsSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSource_MetaData), NewProp_BoundsSource_MetaData) }; // 926722312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_MinBoundsOffset = { "MinBoundsOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, MinBoundsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinBoundsOffset_MetaData), NewProp_MinBoundsOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_MaxBoundsOffset = { "MaxBoundsOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, MaxBoundsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBoundsOffset_MetaData), NewProp_MaxBoundsOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_AxisOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, AxisOrder), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) }; // 3484752427
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, TransformScale), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformScale_MetaData), NewProp_TransformScale_MetaData) };
void Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bPreserveOriginalInputScale_SetBit(void* Obj)
{
	((UPCGExCopyToPathsSettings*)Obj)->bPreserveOriginalInputScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bPreserveOriginalInputScale = { "bPreserveOriginalInputScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCopyToPathsSettings), &Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bPreserveOriginalInputScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveOriginalInputScale_MetaData), NewProp_bPreserveOriginalInputScale_MetaData) };
void Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bPreserveAspectRatio_SetBit(void* Obj)
{
	((UPCGExCopyToPathsSettings*)Obj)->bPreserveAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bPreserveAspectRatio = { "bPreserveAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCopyToPathsSettings), &Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bPreserveAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveAspectRatio_MetaData), NewProp_bPreserveAspectRatio_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_FlattenAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_FlattenAxis = { "FlattenAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, FlattenAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlattenAxis_MetaData), NewProp_FlattenAxis_MetaData) }; // 904353693
void Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bWrapClosedLoops_SetBit(void* Obj)
{
	((UPCGExCopyToPathsSettings*)Obj)->bWrapClosedLoops = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bWrapClosedLoops = { "bWrapClosedLoops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCopyToPathsSettings), &Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bWrapClosedLoops_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWrapClosedLoops_MetaData), NewProp_bWrapClosedLoops_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_MainAxisSettings = { "MainAxisSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, MainAxisSettings), Z_Construct_UScriptStruct_FPCGExAxisDeformDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAxisSettings_MetaData), NewProp_MainAxisSettings_MetaData) }; // 2035062236
void Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bDoTwist_SetBit(void* Obj)
{
	((UPCGExCopyToPathsSettings*)Obj)->bDoTwist = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bDoTwist = { "bDoTwist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCopyToPathsSettings), &Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bDoTwist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoTwist_MetaData), NewProp_bDoTwist_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_TwistSettings = { "TwistSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, TwistSettings), Z_Construct_UScriptStruct_FPCGExAxisDeformDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistSettings_MetaData), NewProp_TwistSettings_MetaData) }; // 2035062236
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_TargetMaskSettings = { "TargetMaskSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCopyToPathsSettings, TargetMaskSettings), Z_Construct_UScriptStruct_FPCGExAxisDeformDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMaskSettings_MetaData), NewProp_TargetMaskSettings_MetaData) }; // 2035062236
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_DefaultPointType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_DefaultPointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bApplyCustomPointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_PointTypeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_BoundsSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_BoundsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_MinBoundsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_MaxBoundsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_AxisOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_TransformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bPreserveOriginalInputScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bPreserveAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_FlattenAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_FlattenAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bWrapClosedLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_MainAxisSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_bDoTwist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_TwistSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::NewProp_TargetMaskSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCopyToPathsSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::ClassParams = {
	&UPCGExCopyToPathsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::Class_MetaDataParams)
};
void UPCGExCopyToPathsSettings::StaticRegisterNativesUPCGExCopyToPathsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCopyToPathsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCopyToPathsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCopyToPathsSettings.OuterSingleton, Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCopyToPathsSettings.OuterSingleton;
}
UPCGExCopyToPathsSettings::UPCGExCopyToPathsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCopyToPathsSettings);
UPCGExCopyToPathsSettings::~UPCGExCopyToPathsSettings() {}
// ********** End Class UPCGExCopyToPathsSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExCopyToPathsUnit_StaticEnum, TEXT("EPCGExCopyToPathsUnit"), &Z_Registration_Info_UEnum_EPCGExCopyToPathsUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2520988600U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCopyToPathsSettings, UPCGExCopyToPathsSettings::StaticClass, TEXT("UPCGExCopyToPathsSettings"), &Z_Registration_Info_UClass_UPCGExCopyToPathsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCopyToPathsSettings), 2885274043U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h__Script_PCGExtendedToolkit_1816004045{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
