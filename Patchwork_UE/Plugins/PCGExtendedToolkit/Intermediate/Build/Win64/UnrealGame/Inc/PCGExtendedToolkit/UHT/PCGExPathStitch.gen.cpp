// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathStitch.h"
#include "Data/PCGExDataFilter.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathStitch() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathStitchSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathStitchSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExStitchMethod ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExStitchMethod;
static UEnum* EPCGExStitchMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExStitchMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExStitchMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExStitchMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExStitchMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStitchMethod>()
{
	return EPCGExStitchMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Connect.DisplayName", "Connect" },
		{ "Connect.Name", "EPCGExStitchMethod::Connect" },
		{ "Connect.ToolTip", "Connect existing point with a segment (preserve all input points)" },
		{ "Fuse.DisplayName", "Fuse" },
		{ "Fuse.Name", "EPCGExStitchMethod::Fuse" },
		{ "Fuse.ToolTip", "Merge points that should be connected, only leaving a single one." },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExStitchMethod::Connect", (int64)EPCGExStitchMethod::Connect },
		{ "EPCGExStitchMethod::Fuse", (int64)EPCGExStitchMethod::Fuse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExStitchMethod",
	"EPCGExStitchMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExStitchMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExStitchMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExStitchMethod.InnerSingleton;
}
// ********** End Enum EPCGExStitchMethod **********************************************************

// ********** Begin Enum EPCGExStitchFuseMethod ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExStitchFuseMethod;
static UEnum* EPCGExStitchFuseMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExStitchFuseMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExStitchFuseMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExStitchFuseMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExStitchFuseMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStitchFuseMethod>()
{
	return EPCGExStitchFuseMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "KeepEnd.DisplayName", "Keep End" },
		{ "KeepEnd.Name", "EPCGExStitchFuseMethod::KeepEnd" },
		{ "KeepEnd.ToolTip", "Keep end point during the merge" },
		{ "KeepStart.DisplayName", "Keep Start" },
		{ "KeepStart.Name", "EPCGExStitchFuseMethod::KeepStart" },
		{ "KeepStart.ToolTip", "Keep start point during the merge" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExStitchFuseMethod::KeepStart", (int64)EPCGExStitchFuseMethod::KeepStart },
		{ "EPCGExStitchFuseMethod::KeepEnd", (int64)EPCGExStitchFuseMethod::KeepEnd },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExStitchFuseMethod",
	"EPCGExStitchFuseMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExStitchFuseMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExStitchFuseMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExStitchFuseMethod.InnerSingleton;
}
// ********** End Enum EPCGExStitchFuseMethod ******************************************************

// ********** Begin Enum EPCGExStitchFuseOperation *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExStitchFuseOperation;
static UEnum* EPCGExStitchFuseOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExStitchFuseOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExStitchFuseOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExStitchFuseOperation"));
	}
	return Z_Registration_Info_UEnum_EPCGExStitchFuseOperation.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStitchFuseOperation>()
{
	return EPCGExStitchFuseOperation_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExStitchFuseOperation::Average" },
		{ "Average.ToolTip", "Average connect point position" },
		{ "LineIntersection.DisplayName", "Line Intersection" },
		{ "LineIntersection.Name", "EPCGExStitchFuseOperation::LineIntersection" },
		{ "LineIntersection.ToolTip", "Connection point position is at the line/line intersection" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExStitchFuseOperation::None" },
		{ "None.ToolTip", "Keep the chosen point as-is" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExStitchFuseOperation::None", (int64)EPCGExStitchFuseOperation::None },
		{ "EPCGExStitchFuseOperation::Average", (int64)EPCGExStitchFuseOperation::Average },
		{ "EPCGExStitchFuseOperation::LineIntersection", (int64)EPCGExStitchFuseOperation::LineIntersection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExStitchFuseOperation",
	"EPCGExStitchFuseOperation",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation()
{
	if (!Z_Registration_Info_UEnum_EPCGExStitchFuseOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExStitchFuseOperation.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExStitchFuseOperation.InnerSingleton;
}
// ********** End Enum EPCGExStitchFuseOperation ***************************************************

// ********** Begin Class UPCGExPathStitchSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathStitchSettings;
UClass* UPCGExPathStitchSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathStitchSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathStitchSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathStitchSettings"),
			Z_Registration_Info_UClass_UPCGExPathStitchSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathStitchSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathStitchSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathStitchSettings_NoRegister()
{
	return UPCGExPathStitchSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathStitchSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathStitch.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCGExNodeLibraryDoc", "paths/stitch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Choose how paths are connected. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Choose how paths are connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Choose how paths are connected. */" },
		{ "DisplayName", "Method" },
		{ "EditCondition", "Method == EPCGExStitchMethod::Fuse" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Choose how paths are connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeOperation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Choose how paths are connected. */" },
		{ "DisplayName", "Operation" },
		{ "EditCondition", "Method == EPCGExStitchMethod::Fuse" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Choose how paths are connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyMatchStartAndEnds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, stitching will only happen between a path's end point and another path start point. Otherwise, it's based on spatial proximity alone. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, stitching will only happen between a path's end point and another path start point. Otherwise, it's based on spatial proximity alone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoRequireAlignment_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, foreign segments must be aligned within a given angular threshold. */" },
		{ "DisplayName", "Requires Alignment" },
		{ "EditCondition", "bDoRequireAlignment" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, foreign segments must be aligned within a given angular threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls the order in which data will be sorted */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls the order in which data will be sorted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathStitch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathStitchSettings constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FuseMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FuseMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MergeOperation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeOperation;
	static void NewProp_bOnlyMatchStartAndEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyMatchStartAndEnds;
	static void NewProp_bDoRequireAlignment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoRequireAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DotComparisonDetails;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathStitchSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathStitchSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathStitchSettings_Statics

// ********** Begin Class UPCGExPathStitchSettings Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathStitchSettings, Method), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 3623488896
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_FuseMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_FuseMethod = { "FuseMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathStitchSettings, FuseMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseMethod_MetaData), NewProp_FuseMethod_MetaData) }; // 3302347021
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_MergeOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_MergeOperation = { "MergeOperation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathStitchSettings, MergeOperation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStitchFuseOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeOperation_MetaData), NewProp_MergeOperation_MetaData) }; // 1354007401
void Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_bOnlyMatchStartAndEnds_SetBit(void* Obj)
{
	((UPCGExPathStitchSettings*)Obj)->bOnlyMatchStartAndEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_bOnlyMatchStartAndEnds = { "bOnlyMatchStartAndEnds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathStitchSettings), &Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_bOnlyMatchStartAndEnds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyMatchStartAndEnds_MetaData), NewProp_bOnlyMatchStartAndEnds_MetaData) };
void Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_bDoRequireAlignment_SetBit(void* Obj)
{
	((UPCGExPathStitchSettings*)Obj)->bDoRequireAlignment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_bDoRequireAlignment = { "bDoRequireAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathStitchSettings), &Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_bDoRequireAlignment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoRequireAlignment_MetaData), NewProp_bDoRequireAlignment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_DotComparisonDetails = { "DotComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathStitchSettings, DotComparisonDetails), Z_Construct_UScriptStruct_FPCGExStaticDotComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotComparisonDetails_MetaData), NewProp_DotComparisonDetails_MetaData) }; // 151317088
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathStitchSettings, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathStitchSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathStitchSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathStitchSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_FuseMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_FuseMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_MergeOperation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_MergeOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_bOnlyMatchStartAndEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_bDoRequireAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_DotComparisonDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathStitchSettings_Statics::NewProp_CarryOverDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathStitchSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathStitchSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExPathStitchSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathStitchSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathStitchSettings_Statics::ClassParams = {
	&UPCGExPathStitchSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathStitchSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathStitchSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathStitchSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathStitchSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathStitchSettings::StaticRegisterNativesUPCGExPathStitchSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathStitchSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathStitchSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathStitchSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathStitchSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathStitchSettings.OuterSingleton;
}
UPCGExPathStitchSettings::UPCGExPathStitchSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathStitchSettings);
UPCGExPathStitchSettings::~UPCGExPathStitchSettings() {}
// ********** End Class UPCGExPathStitchSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExStitchMethod_StaticEnum, TEXT("EPCGExStitchMethod"), &Z_Registration_Info_UEnum_EPCGExStitchMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3623488896U) },
		{ EPCGExStitchFuseMethod_StaticEnum, TEXT("EPCGExStitchFuseMethod"), &Z_Registration_Info_UEnum_EPCGExStitchFuseMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3302347021U) },
		{ EPCGExStitchFuseOperation_StaticEnum, TEXT("EPCGExStitchFuseOperation"), &Z_Registration_Info_UEnum_EPCGExStitchFuseOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1354007401U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathStitchSettings, UPCGExPathStitchSettings::StaticClass, TEXT("UPCGExPathStitchSettings"), &Z_Registration_Info_UClass_UPCGExPathStitchSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathStitchSettings), 2326174189U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h__Script_PCGExtendedToolkit_2524479035{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
