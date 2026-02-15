// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExCreateSpline.h"
#include "Paths/Tangents/PCGExTangentsInstancedFactory.h"
#include "Transform/PCGExTransform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCreateSpline() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGCreateSplineMode();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateSplineSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateSplineSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttachmentRules();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTangentsDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSplinePointType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSplinePointType;
static UEnum* EPCGExSplinePointType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplinePointType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSplinePointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSplinePointType"));
	}
	return Z_Registration_Info_UEnum_EPCGExSplinePointType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplinePointType>()
{
	return EPCGExSplinePointType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.DisplayName", "Constant (2)" },
		{ "Constant.Name", "EPCGExSplinePointType::Constant" },
		{ "Constant.Tooltip", "Constant (2)." },
		{ "Curve.DisplayName", "Curve (1)" },
		{ "Curve.Name", "EPCGExSplinePointType::Curve" },
		{ "Curve.Tooltip", "Curve (1)." },
		{ "CurveClamped.DisplayName", "CurveClamped (3)" },
		{ "CurveClamped.Name", "EPCGExSplinePointType::CurveClamped" },
		{ "CurveClamped.Tooltip", "CurveClamped (3)." },
		{ "CurveCustomTangent.DisplayName", "CurveCustomTangent (4)" },
		{ "CurveCustomTangent.Name", "EPCGExSplinePointType::CurveCustomTangent" },
		{ "CurveCustomTangent.Tooltip", "CurveCustomTangent (4)." },
		{ "Linear.DisplayName", "Linear (0)" },
		{ "Linear.Name", "EPCGExSplinePointType::Linear" },
		{ "Linear.Tooltip", "Linear (0)." },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSplinePointType::Linear", (int64)EPCGExSplinePointType::Linear },
		{ "EPCGExSplinePointType::Curve", (int64)EPCGExSplinePointType::Curve },
		{ "EPCGExSplinePointType::Constant", (int64)EPCGExSplinePointType::Constant },
		{ "EPCGExSplinePointType::CurveClamped", (int64)EPCGExSplinePointType::CurveClamped },
		{ "EPCGExSplinePointType::CurveCustomTangent", (int64)EPCGExSplinePointType::CurveCustomTangent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSplinePointType",
	"EPCGExSplinePointType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplinePointType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSplinePointType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSplinePointType.InnerSingleton;
}
// ********** End Enum EPCGExSplinePointType *******************************************************

// ********** Begin Class UPCGExCreateSplineSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateSplineSettings;
UClass* UPCGExCreateSplineSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateSplineSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateSplineSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateSplineSettings"),
			Z_Registration_Info_UClass_UPCGExCreateSplineSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateSplineSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateSplineSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateSplineSettings_NoRegister()
{
	return UPCGExCreateSplineSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateSplineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Paths/PCGExCreateSpline.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
		{ "PCGExNodeLibraryDoc", "paths/create-spline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGExPointsProcessorSettings\n" },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPointType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Default spline point type. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Default spline point type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomPointType_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTypeAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bApplyCustomPointType" },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomTangents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Per-point tangent settings. Can't be set if the spline is linear. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point tangent settings. Can't be set if the spline is linear." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessFunctionNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Specify a list of functions to be called on the target actor after spline mesh creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
		{ "ToolTip", "Specify a list of functions to be called on the target actor after spline mesh creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRules_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExCreateSpline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateSplineSettings constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPointType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPointType;
	static void NewProp_bApplyCustomPointType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomPointType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointTypeAttribute;
	static void NewProp_bApplyCustomTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomTangents;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveTangentAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveTangentAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PostProcessFunctionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessFunctionNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateSplineSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateSplineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateSplineSettings_Statics

// ********** Begin Class UPCGExCreateSplineSettings Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, Mode), Z_Construct_UEnum_PCG_EPCGCreateSplineMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3382569484
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_DefaultPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_DefaultPointType = { "DefaultPointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, DefaultPointType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplinePointType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPointType_MetaData), NewProp_DefaultPointType_MetaData) }; // 3497448724
void Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_bApplyCustomPointType_SetBit(void* Obj)
{
	((UPCGExCreateSplineSettings*)Obj)->bApplyCustomPointType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_bApplyCustomPointType = { "bApplyCustomPointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCreateSplineSettings), &Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_bApplyCustomPointType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCustomPointType_MetaData), NewProp_bApplyCustomPointType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_PointTypeAttribute = { "PointTypeAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, PointTypeAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTypeAttribute_MetaData), NewProp_PointTypeAttribute_MetaData) };
void Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_bApplyCustomTangents_SetBit(void* Obj)
{
	((UPCGExCreateSplineSettings*)Obj)->bApplyCustomTangents_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_bApplyCustomTangents = { "bApplyCustomTangents", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCreateSplineSettings), &Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_bApplyCustomTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCustomTangents_MetaData), NewProp_bApplyCustomTangents_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_ArriveTangentAttribute = { "ArriveTangentAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, ArriveTangentAttribute_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentAttribute_MetaData), NewProp_ArriveTangentAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_LeaveTangentAttribute = { "LeaveTangentAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, LeaveTangentAttribute_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentAttribute_MetaData), NewProp_LeaveTangentAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, Tangents), Z_Construct_UScriptStruct_FPCGExTangentsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) }; // 2695381813
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014040000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_PostProcessFunctionNames_Inner = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_PostProcessFunctionNames = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, PostProcessFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessFunctionNames_MetaData), NewProp_PostProcessFunctionNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_AttachmentRules = { "AttachmentRules", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateSplineSettings, AttachmentRules), Z_Construct_UScriptStruct_FPCGExAttachmentRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentRules_MetaData), NewProp_AttachmentRules_MetaData) }; // 2108791550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_DefaultPointType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_DefaultPointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_bApplyCustomPointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_PointTypeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_bApplyCustomTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_ArriveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_LeaveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_PostProcessFunctionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_PostProcessFunctionNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::NewProp_AttachmentRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateSplineSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::ClassParams = {
	&UPCGExCreateSplineSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateSplineSettings::StaticRegisterNativesUPCGExCreateSplineSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateSplineSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateSplineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateSplineSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateSplineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateSplineSettings.OuterSingleton;
}
UPCGExCreateSplineSettings::UPCGExCreateSplineSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateSplineSettings);
UPCGExCreateSplineSettings::~UPCGExCreateSplineSettings() {}
// ********** End Class UPCGExCreateSplineSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSplinePointType_StaticEnum, TEXT("EPCGExSplinePointType"), &Z_Registration_Info_UEnum_EPCGExSplinePointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3497448724U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCreateSplineSettings, UPCGExCreateSplineSettings::StaticClass, TEXT("UPCGExCreateSplineSettings"), &Z_Registration_Info_UClass_UPCGExCreateSplineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateSplineSettings), 519027472U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h__Script_PCGExtendedToolkit_521157685{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
