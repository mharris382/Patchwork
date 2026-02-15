// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsDistances.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsDistances() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDistanceDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDistanceDetails *********************************************
struct Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDistanceDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDistanceDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsDistances.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsDistances.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsDistances.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverlapIsZero_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsDistances.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDistanceDetails constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Target;
	static void NewProp_bOverlapIsZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverlapIsZero;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExDistanceDetails constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDistanceDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDistanceDetails;
class UScriptStruct* FPCGExDistanceDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDistanceDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDistanceDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDistanceDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDistanceDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDistanceDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExDistanceDetails Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDistanceDetails, Source), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1812963399
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDistanceDetails, Target), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 1812963399
void Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_bOverlapIsZero_SetBit(void* Obj)
{
	((FPCGExDistanceDetails*)Obj)->bOverlapIsZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_bOverlapIsZero = { "bOverlapIsZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDistanceDetails), &Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_bOverlapIsZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverlapIsZero_MetaData), NewProp_bOverlapIsZero_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_Target_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewProp_bOverlapIsZero,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExDistanceDetails Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExDistanceDetails",
	Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::PropPointers),
	sizeof(FPCGExDistanceDetails),
	alignof(FPCGExDistanceDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDistanceDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDistanceDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDistanceDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDistanceDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDistanceDetails ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsDistances_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDistanceDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExDistanceDetails_Statics::NewStructOps, TEXT("PCGExDistanceDetails"),&Z_Registration_Info_UScriptStruct_FPCGExDistanceDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDistanceDetails), 649156467U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsDistances_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsDistances_h__Script_PCGExtendedToolkit_3920407220{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsDistances_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsDistances_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
