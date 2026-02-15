// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExIntersections.h"
#include "Data/PCGExDataForward.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExIntersections() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExBoxIntersectionDetails **************************************
struct Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExBoxIntersectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExBoxIntersectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bounds type. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bounds type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsIntersection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, flag newly created intersection points. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, flag newly created intersection points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsIntersectionAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write point intersection boolean to. */" },
		{ "DisplayName", "IsIntersection" },
		{ "EditCondition", "bWriteIsIntersection" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write point intersection boolean to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCutType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark non-intersecting points inside the volume with a boolean value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, mark non-intersecting points inside the volume with a boolean value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutTypeAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write point toward inside boolean to. */" },
		{ "DisplayName", "CutType" },
		{ "EditCondition", "bWriteCutType" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write point toward inside boolean to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutTypeValueMapping_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Pick which value will be written for each cut type. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Mapping" },
		{ "EditCondition", "bWriteCutType" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "ReadOnlyKeys", "" },
		{ "ToolTip", "Pick which value will be written for each cut type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNormal_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, mark non-intersecting points inside the volume with a boolean value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, mark non-intersecting points inside the volume with a boolean value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write point intersection normal to. */" },
		{ "DisplayName", "Normal" },
		{ "EditCondition", "bWriteNormal" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write point intersection normal to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteBoundIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundIndexAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "BoundIndex" },
		{ "EditCondition", "bWriteBoundIndex" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionForwarding_MetaData[] = {
		{ "Category", "Settings|Forwarding" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExIntersections.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExBoxIntersectionDetails constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsSource;
	static void NewProp_bWriteIsIntersection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIsIntersection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsIntersectionAttributeName;
	static void NewProp_bWriteCutType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCutType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CutTypeAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CutTypeValueMapping_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CutTypeValueMapping_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CutTypeValueMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CutTypeValueMapping;
	static void NewProp_bWriteNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NormalAttributeName;
	static void NewProp_bWriteBoundIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteBoundIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundIndexAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionForwarding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExBoxIntersectionDetails constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExBoxIntersectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExBoxIntersectionDetails;
class UScriptStruct* FPCGExBoxIntersectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBoxIntersectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExBoxIntersectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExBoxIntersectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExBoxIntersectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExBoxIntersectionDetails Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_BoundsSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_BoundsSource = { "BoundsSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoxIntersectionDetails, BoundsSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSource_MetaData), NewProp_BoundsSource_MetaData) }; // 926722312
void Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteIsIntersection_SetBit(void* Obj)
{
	((FPCGExBoxIntersectionDetails*)Obj)->bWriteIsIntersection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteIsIntersection = { "bWriteIsIntersection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExBoxIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteIsIntersection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsIntersection_MetaData), NewProp_bWriteIsIntersection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_IsIntersectionAttributeName = { "IsIntersectionAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoxIntersectionDetails, IsIntersectionAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsIntersectionAttributeName_MetaData), NewProp_IsIntersectionAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteCutType_SetBit(void* Obj)
{
	((FPCGExBoxIntersectionDetails*)Obj)->bWriteCutType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteCutType = { "bWriteCutType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExBoxIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteCutType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCutType_MetaData), NewProp_bWriteCutType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeAttributeName = { "CutTypeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoxIntersectionDetails, CutTypeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutTypeAttributeName_MetaData), NewProp_CutTypeAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeValueMapping_ValueProp = { "CutTypeValueMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeValueMapping_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeValueMapping_Key_KeyProp = { "CutTypeValueMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutType, METADATA_PARAMS(0, nullptr) }; // 1606751436
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeValueMapping = { "CutTypeValueMapping", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoxIntersectionDetails, CutTypeValueMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutTypeValueMapping_MetaData), NewProp_CutTypeValueMapping_MetaData) }; // 1606751436
void Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteNormal_SetBit(void* Obj)
{
	((FPCGExBoxIntersectionDetails*)Obj)->bWriteNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteNormal = { "bWriteNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExBoxIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNormal_MetaData), NewProp_bWriteNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_NormalAttributeName = { "NormalAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoxIntersectionDetails, NormalAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalAttributeName_MetaData), NewProp_NormalAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteBoundIndex_SetBit(void* Obj)
{
	((FPCGExBoxIntersectionDetails*)Obj)->bWriteBoundIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteBoundIndex = { "bWriteBoundIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExBoxIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteBoundIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteBoundIndex_MetaData), NewProp_bWriteBoundIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_BoundIndexAttributeName = { "BoundIndexAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoxIntersectionDetails, BoundIndexAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundIndexAttributeName_MetaData), NewProp_BoundIndexAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_IntersectionForwarding = { "IntersectionForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBoxIntersectionDetails, IntersectionForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionForwarding_MetaData), NewProp_IntersectionForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_BoundsSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_BoundsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteIsIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_IsIntersectionAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteCutType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeValueMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeValueMapping_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeValueMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_CutTypeValueMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_NormalAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_bWriteBoundIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_BoundIndexAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewProp_IntersectionForwarding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExBoxIntersectionDetails Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExBoxIntersectionDetails",
	Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::PropPointers),
	sizeof(FPCGExBoxIntersectionDetails),
	alignof(FPCGExBoxIntersectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBoxIntersectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExBoxIntersectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExBoxIntersectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExBoxIntersectionDetails ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExIntersections_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExBoxIntersectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExBoxIntersectionDetails_Statics::NewStructOps, TEXT("PCGExBoxIntersectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExBoxIntersectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExBoxIntersectionDetails), 3109000267U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExIntersections_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExIntersections_h__Script_PCGExtendedToolkit_2923601653{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExIntersections_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExIntersections_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
