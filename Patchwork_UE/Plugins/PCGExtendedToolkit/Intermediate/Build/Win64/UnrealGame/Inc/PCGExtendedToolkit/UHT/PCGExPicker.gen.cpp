// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Pickers/PCGExPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPicker() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPickerConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExPickerConfigBase ********************************************
struct Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPickerConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPickerConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatAsNormalized_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to treat values as discrete indices or relative ones */" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPicker.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to treat values as discrete indices or relative ones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TruncateMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to truncate relative picks */" },
		{ "EditCondition", "bTreatAsNormalized" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPicker.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to truncate relative picks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Safety_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to sanitize index pick when they're out-of-bounds */" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPicker.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to sanitize index pick when they're out-of-bounds" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPickerConfigBase constinit property declarations ************
	static void NewProp_bTreatAsNormalized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatAsNormalized;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TruncateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TruncateMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Safety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Safety;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPickerConfigBase constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPickerConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPickerConfigBase;
class UScriptStruct* FPCGExPickerConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPickerConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPickerConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPickerConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPickerConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPickerConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPickerConfigBase Property Definitions ***********************
void Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_bTreatAsNormalized_SetBit(void* Obj)
{
	((FPCGExPickerConfigBase*)Obj)->bTreatAsNormalized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_bTreatAsNormalized = { "bTreatAsNormalized", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExPickerConfigBase), &Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_bTreatAsNormalized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatAsNormalized_MetaData), NewProp_bTreatAsNormalized_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_TruncateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_TruncateMode = { "TruncateMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPickerConfigBase, TruncateMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TruncateMode_MetaData), NewProp_TruncateMode_MetaData) }; // 3854127603
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_Safety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_Safety = { "Safety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPickerConfigBase, Safety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Safety_MetaData), NewProp_Safety_MetaData) }; // 122057320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_bTreatAsNormalized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_TruncateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_TruncateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_Safety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewProp_Safety,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPickerConfigBase Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPickerConfigBase",
	Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::PropPointers),
	sizeof(FPCGExPickerConfigBase),
	alignof(FPCGExPickerConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPickerConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPickerConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPickerConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPickerConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPickerConfigBase **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPicker_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPickerConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExPickerConfigBase_Statics::NewStructOps, TEXT("PCGExPickerConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExPickerConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPickerConfigBase), 2395601143U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPicker_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPicker_h__Script_PCGExtendedToolkit_3400336358{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPicker_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPicker_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
