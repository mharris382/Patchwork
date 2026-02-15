// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Probes/PCGExProbeOperation.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExProbeOperation() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExProbeConfigBase *********************************************
struct Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExProbeConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExProbeConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeOperation.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadiusInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bSupportRadius" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeOperation.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadiusAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Search Radius (Attr)" },
		{ "EditCondition", "bSupportRadius && SearchRadiusInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeOperation.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadiusConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Search Radius" },
		{ "EditCondition", "bSupportRadius && SearchRadiusInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeOperation.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadiusOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A convenient static offset added to the attribute value. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Offset" },
		{ "EditCondition", "bSupportRadius && SearchRadiusInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeOperation.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A convenient static offset added to the attribute value." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExProbeConfigBase constinit property declarations *************
	static void NewProp_bSupportRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchRadiusInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchRadiusInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchRadiusAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SearchRadiusConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SearchRadiusOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExProbeConfigBase constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExProbeConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExProbeConfigBase;
class UScriptStruct* FPCGExProbeConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExProbeConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExProbeConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExProbeConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExProbeConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExProbeConfigBase Property Definitions ************************
void Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_bSupportRadius_SetBit(void* Obj)
{
	((FPCGExProbeConfigBase*)Obj)->bSupportRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_bSupportRadius = { "bSupportRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigBase), &Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_bSupportRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportRadius_MetaData), NewProp_bSupportRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusInput = { "SearchRadiusInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigBase, SearchRadiusInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadiusInput_MetaData), NewProp_SearchRadiusInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusAttribute = { "SearchRadiusAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigBase, SearchRadiusAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadiusAttribute_MetaData), NewProp_SearchRadiusAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusConstant = { "SearchRadiusConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigBase, SearchRadiusConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadiusConstant_MetaData), NewProp_SearchRadiusConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusOffset = { "SearchRadiusOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigBase, SearchRadiusOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadiusOffset_MetaData), NewProp_SearchRadiusOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_bSupportRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewProp_SearchRadiusOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExProbeConfigBase Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExProbeConfigBase",
	Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::PropPointers),
	sizeof(FPCGExProbeConfigBase),
	alignof(FPCGExProbeConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExProbeConfigBase ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeOperation_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExProbeConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExProbeConfigBase_Statics::NewStructOps, TEXT("PCGExProbeConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExProbeConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExProbeConfigBase), 693431100U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeOperation_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeOperation_h__Script_PCGExtendedToolkit_3379438896{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeOperation_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeOperation_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
