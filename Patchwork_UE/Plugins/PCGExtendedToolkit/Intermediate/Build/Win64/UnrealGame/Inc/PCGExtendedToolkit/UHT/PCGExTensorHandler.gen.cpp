// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorHandler.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorHandler() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSampler_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTensorSamplerDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorSamplerDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorSamplerDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sampler_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sampler type */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sampler type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sampling radius. Whether it has any effect depends on the selected sampler. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sampling radius. Whether it has any effect depends on the selected sampler." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorSamplerDetails constinit property declarations ********
	static const UECodeGen_Private::FClassPropertyParams NewProp_Sampler;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorSamplerDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorSamplerDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorSamplerDetails;
class UScriptStruct* FPCGExTensorSamplerDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSamplerDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorSamplerDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorSamplerDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorSamplerDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorSamplerDetails Property Definitions *******************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::NewProp_Sampler = { "Sampler", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSamplerDetails, Sampler), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UPCGExTensorSampler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sampler_MetaData), NewProp_Sampler_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorSamplerDetails, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::NewProp_Sampler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorSamplerDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTensorSamplerDetails",
	Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::PropPointers),
	sizeof(FPCGExTensorSamplerDetails),
	alignof(FPCGExTensorSamplerDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorSamplerDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorSamplerDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorSamplerDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorSamplerDetails ******************************************

// ********** Begin ScriptStruct FPCGExTensorHandlerDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTensorHandlerDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTensorHandlerDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, sampling direction will be inverted. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, sampling direction will be inverted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, normalize sampling. This effectively negates the influence of effectors potency. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, normalize sampling. This effectively negates the influence of effectors potency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Size */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Size Input" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of Size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Start Offset Attribute (Vector 2 expected)*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Size (Attr)" },
		{ "EditCondition", "bNormalize && SizeInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Start Offset Attribute (Vector 2 expected)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant size applied after normalization. This will be scaled */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Size" },
		{ "EditCondition", "bNormalize && SizeInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant size applied after normalization. This will be scaled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Uniform scale factor applied to sampling after all other mutations are accounted for. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Uniform scale factor applied to sampling after all other mutations are accounted for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplerSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Uniform scale factor applied to sampling after all other mutations are accounted for. */" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorHandler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Uniform scale factor applied to sampling after all other mutations are accounted for." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTensorHandlerDetails constinit property declarations ********
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static void NewProp_bNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SizeInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SizeConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UniformScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplerSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTensorHandlerDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTensorHandlerDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTensorHandlerDetails;
class UScriptStruct* FPCGExTensorHandlerDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorHandlerDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTensorHandlerDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTensorHandlerDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTensorHandlerDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTensorHandlerDetails Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExTensorHandlerDetails*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorHandlerDetails), &Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_bNormalize_SetBit(void* Obj)
{
	((FPCGExTensorHandlerDetails*)Obj)->bNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTensorHandlerDetails), &Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalize_MetaData), NewProp_bNormalize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SizeInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SizeInput = { "SizeInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorHandlerDetails, SizeInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeInput_MetaData), NewProp_SizeInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SizeAttribute = { "SizeAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorHandlerDetails, SizeAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeAttribute_MetaData), NewProp_SizeAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SizeConstant = { "SizeConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorHandlerDetails, SizeConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeConstant_MetaData), NewProp_SizeConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_UniformScale = { "UniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorHandlerDetails, UniformScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformScale_MetaData), NewProp_UniformScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SamplerSettings = { "SamplerSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTensorHandlerDetails, SamplerSettings), Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplerSettings_MetaData), NewProp_SamplerSettings_MetaData) }; // 1146537242
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_bNormalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SizeInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SizeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SizeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SizeConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_UniformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewProp_SamplerSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTensorHandlerDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTensorHandlerDetails",
	Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::PropPointers),
	sizeof(FPCGExTensorHandlerDetails),
	alignof(FPCGExTensorHandlerDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTensorHandlerDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTensorHandlerDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTensorHandlerDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTensorHandlerDetails ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorHandler_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTensorSamplerDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorSamplerDetails_Statics::NewStructOps, TEXT("PCGExTensorSamplerDetails"),&Z_Registration_Info_UScriptStruct_FPCGExTensorSamplerDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorSamplerDetails), 1146537242U) },
		{ FPCGExTensorHandlerDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExTensorHandlerDetails_Statics::NewStructOps, TEXT("PCGExTensorHandlerDetails"),&Z_Registration_Info_UScriptStruct_FPCGExTensorHandlerDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTensorHandlerDetails), 2686898823U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorHandler_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorHandler_h__Script_PCGExtendedToolkit_829529885{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorHandler_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorHandler_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
