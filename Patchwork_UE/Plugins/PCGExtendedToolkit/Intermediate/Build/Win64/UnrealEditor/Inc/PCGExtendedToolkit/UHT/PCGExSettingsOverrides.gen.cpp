// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PCGExSettingsOverrides.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSettingsOverrides() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExPerInputOverrideDetails *************************************
struct Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPerInputOverrideDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPerInputOverrideDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/PCGExSettingsOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Is forwarding enabled. */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Data/PCGExSettingsOverrides.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Is forwarding enabled." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPerInputOverrideDetails constinit property declarations *****
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPerInputOverrideDetails constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPerInputOverrideDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPerInputOverrideDetails;
class UScriptStruct* FPCGExPerInputOverrideDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPerInputOverrideDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPerInputOverrideDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPerInputOverrideDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPerInputOverrideDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPerInputOverrideDetails Property Definitions ****************
void Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FPCGExPerInputOverrideDetails*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPerInputOverrideDetails), &Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPerInputOverrideDetails Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPerInputOverrideDetails",
	Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::PropPointers),
	sizeof(FPCGExPerInputOverrideDetails),
	alignof(FPCGExPerInputOverrideDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPerInputOverrideDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPerInputOverrideDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPerInputOverrideDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPerInputOverrideDetails ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExSettingsOverrides_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPerInputOverrideDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExPerInputOverrideDetails_Statics::NewStructOps, TEXT("PCGExPerInputOverrideDetails"),&Z_Registration_Info_UScriptStruct_FPCGExPerInputOverrideDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPerInputOverrideDetails), 2351797342U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExSettingsOverrides_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExSettingsOverrides_h__Script_PCGExtendedToolkit_2491278066{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExSettingsOverrides_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExSettingsOverrides_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
