// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Geometry/PCGExGeo.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGeo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExProjectionMethod ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExProjectionMethod;
static UEnum* EPCGExProjectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExProjectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExProjectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExProjectionMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExProjectionMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExProjectionMethod>()
{
	return EPCGExProjectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BestFit.DisplayName", "Best Fit" },
		{ "BestFit.Name", "EPCGExProjectionMethod::BestFit" },
		{ "BestFit.ToolTip", "Compute eigen values to find the best-fit plane" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeo.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EPCGExProjectionMethod::Normal" },
		{ "Normal.ToolTip", "Uses a normal to project on a plane." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExProjectionMethod::Normal", (int64)EPCGExProjectionMethod::Normal },
		{ "EPCGExProjectionMethod::BestFit", (int64)EPCGExProjectionMethod::BestFit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExProjectionMethod",
	"EPCGExProjectionMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExProjectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExProjectionMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExProjectionMethod.InnerSingleton;
}
// ********** End Enum EPCGExProjectionMethod ******************************************************

// ********** Begin Enum EPCGExCellCenter **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCellCenter;
static UEnum* EPCGExCellCenter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellCenter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCellCenter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCellCenter"));
	}
	return Z_Registration_Info_UEnum_EPCGExCellCenter.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCellCenter>()
{
	return EPCGExCellCenter_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "EPCGExCellCenter::Balanced" },
		{ "Balanced.ToolTip", "Pick centroid if circumcenter is out of bounds, otherwise uses circumcenter." },
		{ "Centroid.DisplayName", "Centroid" },
		{ "Centroid.Name", "EPCGExCellCenter::Centroid" },
		{ "Centroid.ToolTip", "Uses Delaunay cells' averaged vertice positions." },
		{ "Circumcenter.DisplayName", "Canon (Circumcenter)" },
		{ "Circumcenter.Name", "EPCGExCellCenter::Circumcenter" },
		{ "Circumcenter.ToolTip", "Uses Delaunay cells' circumcenter." },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeo.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCellCenter::Balanced", (int64)EPCGExCellCenter::Balanced },
		{ "EPCGExCellCenter::Circumcenter", (int64)EPCGExCellCenter::Circumcenter },
		{ "EPCGExCellCenter::Centroid", (int64)EPCGExCellCenter::Centroid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCellCenter",
	"EPCGExCellCenter",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter()
{
	if (!Z_Registration_Info_UEnum_EPCGExCellCenter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCellCenter.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCellCenter.InnerSingleton;
}
// ********** End Enum EPCGExCellCenter ************************************************************

// ********** Begin ScriptStruct FPCGExGeo2DProjectionDetails **************************************
struct Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExGeo2DProjectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExGeo2DProjectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLocalNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeo.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionNormal_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Normal vector of the 2D projection plane. Defaults to Up for XY projection. Used as fallback when using invalid local normal. */" },
		{ "EditCondition", "Method == EPCGExProjectionMethod::Normal" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeo.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Normal vector of the 2D projection plane. Defaults to Up for XY projection. Used as fallback when using invalid local normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalProjectionNormal_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "Method == EPCGExProjectionMethod::Normal && bSupportLocalNormal" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeo.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalNormal_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Local attribute to fetch projection normal from */" },
		{ "EditCondition", "Method == EPCGExProjectionMethod::Normal && bSupportLocalNormal && bLocalProjectionNormal" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Geometry/PCGExGeo.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Local attribute to fetch projection normal from" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExGeo2DProjectionDetails constinit property declarations ******
	static void NewProp_bSupportLocalNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLocalNormal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionNormal;
	static void NewProp_bLocalProjectionNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalProjectionNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExGeo2DProjectionDetails constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExGeo2DProjectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExGeo2DProjectionDetails;
class UScriptStruct* FPCGExGeo2DProjectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGeo2DProjectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExGeo2DProjectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExGeo2DProjectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExGeo2DProjectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExGeo2DProjectionDetails Property Definitions *****************
void Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_bSupportLocalNormal_SetBit(void* Obj)
{
	((FPCGExGeo2DProjectionDetails*)Obj)->bSupportLocalNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_bSupportLocalNormal = { "bSupportLocalNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGeo2DProjectionDetails), &Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_bSupportLocalNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportLocalNormal_MetaData), NewProp_bSupportLocalNormal_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGeo2DProjectionDetails, Method), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProjectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 2974940063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_ProjectionNormal = { "ProjectionNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGeo2DProjectionDetails, ProjectionNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionNormal_MetaData), NewProp_ProjectionNormal_MetaData) };
void Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_bLocalProjectionNormal_SetBit(void* Obj)
{
	((FPCGExGeo2DProjectionDetails*)Obj)->bLocalProjectionNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_bLocalProjectionNormal = { "bLocalProjectionNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGeo2DProjectionDetails), &Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_bLocalProjectionNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalProjectionNormal_MetaData), NewProp_bLocalProjectionNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_LocalNormal = { "LocalNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGeo2DProjectionDetails, LocalNormal), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalNormal_MetaData), NewProp_LocalNormal_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_bSupportLocalNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_ProjectionNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_bLocalProjectionNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewProp_LocalNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExGeo2DProjectionDetails Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExGeo2DProjectionDetails",
	Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::PropPointers),
	sizeof(FPCGExGeo2DProjectionDetails),
	alignof(FPCGExGeo2DProjectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGeo2DProjectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExGeo2DProjectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExGeo2DProjectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExGeo2DProjectionDetails ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExProjectionMethod_StaticEnum, TEXT("EPCGExProjectionMethod"), &Z_Registration_Info_UEnum_EPCGExProjectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2974940063U) },
		{ EPCGExCellCenter_StaticEnum, TEXT("EPCGExCellCenter"), &Z_Registration_Info_UEnum_EPCGExCellCenter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3191491460U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExGeo2DProjectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails_Statics::NewStructOps, TEXT("PCGExGeo2DProjectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExGeo2DProjectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExGeo2DProjectionDetails), 1019281773U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h__Script_PCGExtendedToolkit_1905068471{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeo_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
