// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsIntersection.h"
#include "Details/PCGExDetailsFusing.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsIntersection() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFuseDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInclusionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSourceFuseDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExInclusionDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExInclusionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExInclusionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset applied to projected polygon for inclusion tests. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Offset applied to projected polygon for inclusion tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage of points that can lie outside a path and still be considered inside it */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Percentage of points that can lie outside a path and still be considered inside it" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExInclusionDetails constinit property declarations ************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InclusionOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InclusionTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExInclusionDetails constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExInclusionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExInclusionDetails;
class UScriptStruct* FPCGExInclusionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExInclusionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExInclusionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExInclusionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExInclusionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExInclusionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExInclusionDetails Property Definitions ***********************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::NewProp_InclusionOffset = { "InclusionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionDetails, InclusionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionOffset_MetaData), NewProp_InclusionOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::NewProp_InclusionTolerance = { "InclusionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionDetails, InclusionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionTolerance_MetaData), NewProp_InclusionTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::NewProp_InclusionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::NewProp_InclusionTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExInclusionDetails Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExInclusionDetails",
	Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::PropPointers),
	sizeof(FPCGExInclusionDetails),
	alignof(FPCGExInclusionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExInclusionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExInclusionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExInclusionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExInclusionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExInclusionDetails **********************************************

// ********** Begin ScriptStruct FPCGExUnionMetadataDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExUnionMetadataDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExUnionMetadataDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsUnion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsUnionAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to mark point as union or not */" },
		{ "DisplayName", "Is Union" },
		{ "EditCondition", "bWriteIsUnion" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to mark point as union or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteUnionSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnionSizeAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to mark the number of fused point held */" },
		{ "DisplayName", "Union Size" },
		{ "EditCondition", "bWriteUnionSize" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to mark the number of fused point held" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExUnionMetadataDetails constinit property declarations ********
	static void NewProp_bWriteIsUnion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIsUnion;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsUnionAttributeName;
	static void NewProp_bWriteUnionSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteUnionSize;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnionSizeAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExUnionMetadataDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExUnionMetadataDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExUnionMetadataDetails;
class UScriptStruct* FPCGExUnionMetadataDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExUnionMetadataDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExUnionMetadataDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExUnionMetadataDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExUnionMetadataDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExUnionMetadataDetails Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_bWriteIsUnion_SetBit(void* Obj)
{
	((FPCGExUnionMetadataDetails*)Obj)->bWriteIsUnion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_bWriteIsUnion = { "bWriteIsUnion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExUnionMetadataDetails), &Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_bWriteIsUnion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsUnion_MetaData), NewProp_bWriteIsUnion_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_IsUnionAttributeName = { "IsUnionAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUnionMetadataDetails, IsUnionAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsUnionAttributeName_MetaData), NewProp_IsUnionAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_bWriteUnionSize_SetBit(void* Obj)
{
	((FPCGExUnionMetadataDetails*)Obj)->bWriteUnionSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_bWriteUnionSize = { "bWriteUnionSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExUnionMetadataDetails), &Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_bWriteUnionSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteUnionSize_MetaData), NewProp_bWriteUnionSize_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_UnionSizeAttributeName = { "UnionSizeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExUnionMetadataDetails, UnionSizeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnionSizeAttributeName_MetaData), NewProp_UnionSizeAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_bWriteIsUnion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_IsUnionAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_bWriteUnionSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewProp_UnionSizeAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExUnionMetadataDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExUnionMetadataDetails",
	Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::PropPointers),
	sizeof(FPCGExUnionMetadataDetails),
	alignof(FPCGExUnionMetadataDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExUnionMetadataDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExUnionMetadataDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExUnionMetadataDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExUnionMetadataDetails ******************************************

// ********** Begin ScriptStruct FPCGExPointUnionMetadataDetails ***********************************
struct Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPointUnionMetadataDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPointUnionMetadataDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPointUnionMetadataDetails constinit property declarations ***
// ********** End ScriptStruct FPCGExPointUnionMetadataDetails constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPointUnionMetadataDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails_Statics
static_assert(std::is_polymorphic<FPCGExPointUnionMetadataDetails>() == std::is_polymorphic<FPCGExUnionMetadataDetails>(), "USTRUCT FPCGExPointUnionMetadataDetails cannot be polymorphic unless super FPCGExUnionMetadataDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPointUnionMetadataDetails;
class UScriptStruct* FPCGExPointUnionMetadataDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointUnionMetadataDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPointUnionMetadataDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPointUnionMetadataDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPointUnionMetadataDetails.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails,
	&NewStructOps,
	"PCGExPointUnionMetadataDetails",
	nullptr,
	0,
	sizeof(FPCGExPointUnionMetadataDetails),
	alignof(FPCGExPointUnionMetadataDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointUnionMetadataDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPointUnionMetadataDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPointUnionMetadataDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPointUnionMetadataDetails *************************************

// ********** Begin ScriptStruct FPCGExEdgeUnionMetadataDetails ************************************
struct Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeUnionMetadataDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeUnionMetadataDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsSubEdge_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSubEdgeAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to mark edge as sub edge or not */" },
		{ "DisplayName", "Is Sub Edge" },
		{ "EditCondition", "bWriteIsSubEdge" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to mark edge as sub edge or not" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeUnionMetadataDetails constinit property declarations ****
	static void NewProp_bWriteIsSubEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIsSubEdge;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsSubEdgeAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeUnionMetadataDetails constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeUnionMetadataDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics
static_assert(std::is_polymorphic<FPCGExEdgeUnionMetadataDetails>() == std::is_polymorphic<FPCGExUnionMetadataDetails>(), "USTRUCT FPCGExEdgeUnionMetadataDetails cannot be polymorphic unless super FPCGExUnionMetadataDetails is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeUnionMetadataDetails;
class UScriptStruct* FPCGExEdgeUnionMetadataDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeUnionMetadataDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeUnionMetadataDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeUnionMetadataDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeUnionMetadataDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeUnionMetadataDetails Property Definitions ***************
void Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::NewProp_bWriteIsSubEdge_SetBit(void* Obj)
{
	((FPCGExEdgeUnionMetadataDetails*)Obj)->bWriteIsSubEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::NewProp_bWriteIsSubEdge = { "bWriteIsSubEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeUnionMetadataDetails), &Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::NewProp_bWriteIsSubEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsSubEdge_MetaData), NewProp_bWriteIsSubEdge_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::NewProp_IsSubEdgeAttributeName = { "IsSubEdgeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeUnionMetadataDetails, IsSubEdgeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSubEdgeAttributeName_MetaData), NewProp_IsSubEdgeAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::NewProp_bWriteIsSubEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::NewProp_IsSubEdgeAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeUnionMetadataDetails Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails,
	&NewStructOps,
	"PCGExEdgeUnionMetadataDetails",
	Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::PropPointers),
	sizeof(FPCGExEdgeUnionMetadataDetails),
	alignof(FPCGExEdgeUnionMetadataDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeUnionMetadataDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeUnionMetadataDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeUnionMetadataDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeUnionMetadataDetails **************************************

// ********** Begin ScriptStruct FPCGExPointPointIntersectionDetails *******************************
struct Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPointPointIntersectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPointPointIntersectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fuse Settings */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Fuse Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointUnionData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Point Union Data */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Point Union Data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeUnionData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Edge Union Data */" },
		{ "EditCondition", "bSupportsEdges" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Edge Union Data" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPointPointIntersectionDetails constinit property declarations 
	static void NewProp_bSupportsEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FuseDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointUnionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeUnionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPointPointIntersectionDetails constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPointPointIntersectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPointPointIntersectionDetails;
class UScriptStruct* FPCGExPointPointIntersectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointPointIntersectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPointPointIntersectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPointPointIntersectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPointPointIntersectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPointPointIntersectionDetails Property Definitions **********
void Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_bSupportsEdges_SetBit(void* Obj)
{
	((FPCGExPointPointIntersectionDetails*)Obj)->bSupportsEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_bSupportsEdges = { "bSupportsEdges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointPointIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_bSupportsEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsEdges_MetaData), NewProp_bSupportsEdges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_FuseDetails = { "FuseDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPointIntersectionDetails, FuseDetails), Z_Construct_UScriptStruct_FPCGExFuseDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseDetails_MetaData), NewProp_FuseDetails_MetaData) }; // 83583742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_PointUnionData = { "PointUnionData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPointIntersectionDetails, PointUnionData), Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointUnionData_MetaData), NewProp_PointUnionData_MetaData) }; // 1946227828
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_EdgeUnionData = { "EdgeUnionData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointPointIntersectionDetails, EdgeUnionData), Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeUnionData_MetaData), NewProp_EdgeUnionData_MetaData) }; // 959195692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_bSupportsEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_FuseDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_PointUnionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewProp_EdgeUnionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPointPointIntersectionDetails Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPointPointIntersectionDetails",
	Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::PropPointers),
	sizeof(FPCGExPointPointIntersectionDetails),
	alignof(FPCGExPointPointIntersectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointPointIntersectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPointPointIntersectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPointPointIntersectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPointPointIntersectionDetails *********************************

// ********** Begin ScriptStruct FPCGExPointEdgeIntersectionDetails ********************************
struct Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPointEdgeIntersectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPointEdgeIntersectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSelfIntersection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If disabled, points will only check edges they aren't mapped to. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If disabled, points will only check edges they aren't mapped to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fuse Settings */" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Fuse Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapOnEdge_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When enabled, point will be moved exactly on the edge. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "When enabled, point will be moved exactly on the edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsIntersector_MetaData[] = {
		{ "Category", "Settings|Metadata" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsIntersectorAttributeName_MetaData[] = {
		{ "Category", "Settings|Metadata" },
		{ "Comment", "/** Name of the attribute to flag point as intersector (result of an Point/Edge intersection) */" },
		{ "EditCondition", "bWriteIsIntersector" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to flag point as intersector (result of an Point/Edge intersection)" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPointEdgeIntersectionDetails constinit property declarations 
	static void NewProp_bEnableSelfIntersection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSelfIntersection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FuseDetails;
	static void NewProp_bSnapOnEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapOnEdge;
	static void NewProp_bWriteIsIntersector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIsIntersector;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsIntersectorAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPointEdgeIntersectionDetails constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPointEdgeIntersectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPointEdgeIntersectionDetails;
class UScriptStruct* FPCGExPointEdgeIntersectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointEdgeIntersectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPointEdgeIntersectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPointEdgeIntersectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPointEdgeIntersectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPointEdgeIntersectionDetails Property Definitions ***********
void Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection_SetBit(void* Obj)
{
	((FPCGExPointEdgeIntersectionDetails*)Obj)->bEnableSelfIntersection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection = { "bEnableSelfIntersection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSelfIntersection_MetaData), NewProp_bEnableSelfIntersection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_FuseDetails = { "FuseDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointEdgeIntersectionDetails, FuseDetails), Z_Construct_UScriptStruct_FPCGExSourceFuseDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseDetails_MetaData), NewProp_FuseDetails_MetaData) }; // 1284790224
void Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bSnapOnEdge_SetBit(void* Obj)
{
	((FPCGExPointEdgeIntersectionDetails*)Obj)->bSnapOnEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bSnapOnEdge = { "bSnapOnEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bSnapOnEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapOnEdge_MetaData), NewProp_bSnapOnEdge_MetaData) };
void Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bWriteIsIntersector_SetBit(void* Obj)
{
	((FPCGExPointEdgeIntersectionDetails*)Obj)->bWriteIsIntersector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bWriteIsIntersector = { "bWriteIsIntersector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPointEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bWriteIsIntersector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsIntersector_MetaData), NewProp_bWriteIsIntersector_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_IsIntersectorAttributeName = { "IsIntersectorAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPointEdgeIntersectionDetails, IsIntersectorAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsIntersectorAttributeName_MetaData), NewProp_IsIntersectorAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_FuseDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bSnapOnEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_bWriteIsIntersector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewProp_IsIntersectorAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPointEdgeIntersectionDetails Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPointEdgeIntersectionDetails",
	Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::PropPointers),
	sizeof(FPCGExPointEdgeIntersectionDetails),
	alignof(FPCGExPointEdgeIntersectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPointEdgeIntersectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPointEdgeIntersectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPointEdgeIntersectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPointEdgeIntersectionDetails **********************************

// ********** Begin ScriptStruct FPCGExEdgeEdgeIntersectionDetails *********************************
struct Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeEdgeIntersectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeEdgeIntersectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSelfIntersection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If disabled, edges will only be checked against other datasets. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If disabled, edges will only be checked against other datasets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Distance at which two edges are considered intersecting. */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance at which two edges are considered intersecting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Min angle. */" },
		{ "EditCondition", "bUseMinAngle" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Min angle." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** . */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum angle. */" },
		{ "EditCondition", "bUseMaxAngle" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum angle." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCrossing_MetaData[] = {
		{ "Category", "Settings|Metadata" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingAttributeName_MetaData[] = {
		{ "Category", "Settings|Metadata" },
		{ "Comment", "/** Name of the attribute to flag point as crossing (result of an Edge/Edge intersection) */" },
		{ "EditCondition", "bWriteCrossing" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsIntersection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to flag point as crossing (result of an Edge/Edge intersection)" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeEdgeIntersectionDetails constinit property declarations *
	static void NewProp_bEnableSelfIntersection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSelfIntersection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bUseMinAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinAngle;
	static void NewProp_bUseMaxAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAngle;
	static void NewProp_bWriteCrossing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCrossing;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CrossingAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeEdgeIntersectionDetails constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeEdgeIntersectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails;
class UScriptStruct* FPCGExEdgeEdgeIntersectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeEdgeIntersectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeEdgeIntersectionDetails Property Definitions ************
void Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection_SetBit(void* Obj)
{
	((FPCGExEdgeEdgeIntersectionDetails*)Obj)->bEnableSelfIntersection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection = { "bEnableSelfIntersection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSelfIntersection_MetaData), NewProp_bEnableSelfIntersection_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEdgeIntersectionDetails, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bUseMinAngle_SetBit(void* Obj)
{
	((FPCGExEdgeEdgeIntersectionDetails*)Obj)->bUseMinAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bUseMinAngle = { "bUseMinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bUseMinAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMinAngle_MetaData), NewProp_bUseMinAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEdgeIntersectionDetails, MinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAngle_MetaData), NewProp_MinAngle_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bUseMaxAngle_SetBit(void* Obj)
{
	((FPCGExEdgeEdgeIntersectionDetails*)Obj)->bUseMaxAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bUseMaxAngle = { "bUseMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bUseMaxAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxAngle_MetaData), NewProp_bUseMaxAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEdgeIntersectionDetails, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngle_MetaData), NewProp_MaxAngle_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bWriteCrossing_SetBit(void* Obj)
{
	((FPCGExEdgeEdgeIntersectionDetails*)Obj)->bWriteCrossing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bWriteCrossing = { "bWriteCrossing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeEdgeIntersectionDetails), &Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bWriteCrossing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCrossing_MetaData), NewProp_bWriteCrossing_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_CrossingAttributeName = { "CrossingAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeEdgeIntersectionDetails, CrossingAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingAttributeName_MetaData), NewProp_CrossingAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bEnableSelfIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bUseMinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_MinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bUseMaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_MaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_bWriteCrossing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewProp_CrossingAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeEdgeIntersectionDetails Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEdgeEdgeIntersectionDetails",
	Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::PropPointers),
	sizeof(FPCGExEdgeEdgeIntersectionDetails),
	alignof(FPCGExEdgeEdgeIntersectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeEdgeIntersectionDetails ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsIntersection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExInclusionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExInclusionDetails_Statics::NewStructOps, TEXT("PCGExInclusionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExInclusionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExInclusionDetails), 620301397U) },
		{ FPCGExUnionMetadataDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExUnionMetadataDetails_Statics::NewStructOps, TEXT("PCGExUnionMetadataDetails"),&Z_Registration_Info_UScriptStruct_FPCGExUnionMetadataDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExUnionMetadataDetails), 2171110961U) },
		{ FPCGExPointUnionMetadataDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPointUnionMetadataDetails_Statics::NewStructOps, TEXT("PCGExPointUnionMetadataDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPointUnionMetadataDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPointUnionMetadataDetails), 1946227828U) },
		{ FPCGExEdgeUnionMetadataDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails_Statics::NewStructOps, TEXT("PCGExEdgeUnionMetadataDetails"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeUnionMetadataDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeUnionMetadataDetails), 959195692U) },
		{ FPCGExPointPointIntersectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails_Statics::NewStructOps, TEXT("PCGExPointPointIntersectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPointPointIntersectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPointPointIntersectionDetails), 2944920897U) },
		{ FPCGExPointEdgeIntersectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails_Statics::NewStructOps, TEXT("PCGExPointEdgeIntersectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPointEdgeIntersectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPointEdgeIntersectionDetails), 2141664578U) },
		{ FPCGExEdgeEdgeIntersectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails_Statics::NewStructOps, TEXT("PCGExEdgeEdgeIntersectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeEdgeIntersectionDetails), 715389155U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsIntersection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsIntersection_h__Script_PCGExtendedToolkit_2801076748{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsIntersection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsIntersection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
