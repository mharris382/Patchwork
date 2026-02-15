// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExSplineToPath.h"
#include "Data/PCGExDataFilter.h"
#include "Transform/PCGExFitting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSplineToPath() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSplineToPathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSplineToPathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTagsToDataAction();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExLeanTransformDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSplineToPathSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSplineToPathSettings;
UClass* UPCGExSplineToPathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSplineToPathSettings;
	if (!Z_Registration_Info_UClass_UPCGExSplineToPathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSplineToPathSettings"),
			Z_Registration_Info_UClass_UPCGExSplineToPathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSplineToPathSettings,
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
	return Z_Registration_Info_UClass_UPCGExSplineToPathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSplineToPathSettings_NoRegister()
{
	return UPCGExSplineToPathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSplineToPathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExSplineToPath.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCGExNodeLibraryDoc", "paths/spline-to-path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Point transform */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Point transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleInputs_MetaData[] = {
		{ "Category", "Settings|Sampling" },
		{ "Comment", "/** Sample inputs.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sample inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteArriveTangent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the 'FVector' attribute to write Arrive tangent to.*/" },
		{ "DisplayName", "Arrive Tangent" },
		{ "EditCondition", "bWriteArriveTangent" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write Arrive tangent to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLeaveTangent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the 'FVector' attribute to write Leave tangent to.*/" },
		{ "DisplayName", "Leave Tangent" },
		{ "EditCondition", "bWriteLeaveTangent" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write Leave tangent to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tag handling */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Tag handling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLengthAtPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthAtPointAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the 'double' attribute to write the length at point to.*/" },
		{ "DisplayName", "Length at Point" },
		{ "EditCondition", "bWriteLengthAtPoint" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write the length at point to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the 'double' attribute to write the length at point to.*/" },
		{ "DisplayName", "Alpha" },
		{ "EditCondition", "bWriteAlpha" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write the length at point to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWritePointType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTypeAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the 'int32' attribute that store the point type. */" },
		{ "DisplayName", "Point Type" },
		{ "EditCondition", "bWritePointType" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute that store the point type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagForwarding_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** Tags to be forwarded from source splines */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tags to be forwarded from source splines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExSplineToPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSplineToPathSettings constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleInputs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleInputs;
	static void NewProp_bWriteArriveTangent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteArriveTangent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveTangentAttributeName;
	static void NewProp_bWriteLeaveTangent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLeaveTangent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveTangentAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TagsToData_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TagsToData;
	static void NewProp_bWriteLengthAtPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLengthAtPoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LengthAtPointAttributeName;
	static void NewProp_bWriteAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAlpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaAttributeName;
	static void NewProp_bWritePointType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePointType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointTypeAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagForwarding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSplineToPathSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSplineToPathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSplineToPathSettings_Statics

// ********** Begin Class UPCGExSplineToPathSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_TransformDetails = { "TransformDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, TransformDetails), Z_Construct_UScriptStruct_FPCGExLeanTransformDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformDetails_MetaData), NewProp_TransformDetails_MetaData) }; // 3523214679
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_SampleInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_SampleInputs = { "SampleInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, SampleInputs), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleInputs_MetaData), NewProp_SampleInputs_MetaData) }; // 3557312926
void Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteArriveTangent_SetBit(void* Obj)
{
	((UPCGExSplineToPathSettings*)Obj)->bWriteArriveTangent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteArriveTangent = { "bWriteArriveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplineToPathSettings), &Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteArriveTangent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteArriveTangent_MetaData), NewProp_bWriteArriveTangent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_ArriveTangentAttributeName = { "ArriveTangentAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, ArriveTangentAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentAttributeName_MetaData), NewProp_ArriveTangentAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteLeaveTangent_SetBit(void* Obj)
{
	((UPCGExSplineToPathSettings*)Obj)->bWriteLeaveTangent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteLeaveTangent = { "bWriteLeaveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplineToPathSettings), &Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteLeaveTangent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLeaveTangent_MetaData), NewProp_bWriteLeaveTangent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_LeaveTangentAttributeName = { "LeaveTangentAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, LeaveTangentAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentAttributeName_MetaData), NewProp_LeaveTangentAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_TagsToData_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_TagsToData = { "TagsToData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, TagsToData), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTagsToDataAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToData_MetaData), NewProp_TagsToData_MetaData) }; // 3357466757
void Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteLengthAtPoint_SetBit(void* Obj)
{
	((UPCGExSplineToPathSettings*)Obj)->bWriteLengthAtPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteLengthAtPoint = { "bWriteLengthAtPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplineToPathSettings), &Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteLengthAtPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLengthAtPoint_MetaData), NewProp_bWriteLengthAtPoint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_LengthAtPointAttributeName = { "LengthAtPointAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, LengthAtPointAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthAtPointAttributeName_MetaData), NewProp_LengthAtPointAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteAlpha_SetBit(void* Obj)
{
	((UPCGExSplineToPathSettings*)Obj)->bWriteAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteAlpha = { "bWriteAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplineToPathSettings), &Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAlpha_MetaData), NewProp_bWriteAlpha_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_AlphaAttributeName = { "AlphaAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, AlphaAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaAttributeName_MetaData), NewProp_AlphaAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWritePointType_SetBit(void* Obj)
{
	((UPCGExSplineToPathSettings*)Obj)->bWritePointType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWritePointType = { "bWritePointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSplineToPathSettings), &Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWritePointType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWritePointType_MetaData), NewProp_bWritePointType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_PointTypeAttributeName = { "PointTypeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, PointTypeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTypeAttributeName_MetaData), NewProp_PointTypeAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_TagForwarding = { "TagForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, TagForwarding), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagForwarding_MetaData), NewProp_TagForwarding_MetaData) }; // 1913362378
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSplineToPathSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_TransformDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_SampleInputs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_SampleInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteArriveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_ArriveTangentAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteLeaveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_LeaveTangentAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_TagsToData_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_TagsToData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteLengthAtPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_LengthAtPointAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWriteAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_AlphaAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_bWritePointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_PointTypeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_TagForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::NewProp_CarryOverDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSplineToPathSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::ClassParams = {
	&UPCGExSplineToPathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::Class_MetaDataParams)
};
void UPCGExSplineToPathSettings::StaticRegisterNativesUPCGExSplineToPathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSplineToPathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSplineToPathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSplineToPathSettings.OuterSingleton, Z_Construct_UClass_UPCGExSplineToPathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSplineToPathSettings.OuterSingleton;
}
UPCGExSplineToPathSettings::UPCGExSplineToPathSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSplineToPathSettings);
UPCGExSplineToPathSettings::~UPCGExSplineToPathSettings() {}
// ********** End Class UPCGExSplineToPathSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplineToPath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSplineToPathSettings, UPCGExSplineToPathSettings::StaticClass, TEXT("UPCGExSplineToPathSettings"), &Z_Registration_Info_UClass_UPCGExSplineToPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSplineToPathSettings), 1521905529U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplineToPath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplineToPath_h__Script_PCGExtendedToolkit_2259863202{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplineToPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExSplineToPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
