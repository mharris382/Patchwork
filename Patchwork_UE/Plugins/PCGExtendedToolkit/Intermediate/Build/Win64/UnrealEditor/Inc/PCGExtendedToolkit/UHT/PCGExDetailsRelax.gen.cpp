// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsRelax.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsRelax() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInfluenceDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExInfluenceDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExInfluenceDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExInfluenceDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsRelax.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Weight */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Weight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalInfluence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the size from a local attribute. The regular Size parameter then act as a scale.*/" },
		{ "DisplayName", "Influence (Attr)" },
		{ "EditCondition", "InfluenceInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the size from a local attribute. The regular Size parameter then act as a scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Influence_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Draw size. What it means depends on the selected debug type. */" },
		{ "DisplayName", "Influence" },
		{ "EditCondition", "InfluenceInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Draw size. What it means depends on the selected debug type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProgressiveInfluence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, applies influence after each iteration; otherwise applies once at the end of the relaxing.*/" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, applies influence after each iteration; otherwise applies once at the end of the relaxing." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExInfluenceDetails constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InfluenceInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InfluenceInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalInfluence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Influence;
	static void NewProp_bProgressiveInfluence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProgressiveInfluence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExInfluenceDetails constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExInfluenceDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExInfluenceDetails;
class UScriptStruct* FPCGExInfluenceDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExInfluenceDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExInfluenceDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExInfluenceDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExInfluenceDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExInfluenceDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExInfluenceDetails Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_InfluenceInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_InfluenceInput = { "InfluenceInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInfluenceDetails, InfluenceInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceInput_MetaData), NewProp_InfluenceInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_LocalInfluence = { "LocalInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInfluenceDetails, LocalInfluence), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalInfluence_MetaData), NewProp_LocalInfluence_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_Influence = { "Influence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInfluenceDetails, Influence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Influence_MetaData), NewProp_Influence_MetaData) };
void Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_bProgressiveInfluence_SetBit(void* Obj)
{
	((FPCGExInfluenceDetails*)Obj)->bProgressiveInfluence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_bProgressiveInfluence = { "bProgressiveInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExInfluenceDetails), &Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_bProgressiveInfluence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProgressiveInfluence_MetaData), NewProp_bProgressiveInfluence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_InfluenceInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_InfluenceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_LocalInfluence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_Influence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewProp_bProgressiveInfluence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExInfluenceDetails Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExInfluenceDetails",
	Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::PropPointers),
	sizeof(FPCGExInfluenceDetails),
	alignof(FPCGExInfluenceDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExInfluenceDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExInfluenceDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExInfluenceDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExInfluenceDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExInfluenceDetails **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsRelax_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExInfluenceDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExInfluenceDetails_Statics::NewStructOps, TEXT("PCGExInfluenceDetails"),&Z_Registration_Info_UScriptStruct_FPCGExInfluenceDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExInfluenceDetails), 3063891606U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsRelax_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsRelax_h__Script_PCGExtendedToolkit_906897473{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsRelax_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsRelax_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
