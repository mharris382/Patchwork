// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExVtxPropertyFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExSimpleEdgeOutputSettings ************************************
struct Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSimpleEdgeOutputSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSimpleEdgeOutputSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to output the direction to. */" },
		{ "EditCondition", "bWriteDirection" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the direction to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the direction */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "bWriteDirection" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Invert the direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to output the length to. */" },
		{ "EditCondition", "bWriteLength" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the length to." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSimpleEdgeOutputSettings constinit property declarations ****
	static void NewProp_bWriteDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionAttribute;
	static void NewProp_bInvertDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDirection;
	static void NewProp_bWriteLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLength;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LengthAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSimpleEdgeOutputSettings constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSimpleEdgeOutputSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSimpleEdgeOutputSettings;
class UScriptStruct* FPCGExSimpleEdgeOutputSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSimpleEdgeOutputSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSimpleEdgeOutputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSimpleEdgeOutputSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSimpleEdgeOutputSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSimpleEdgeOutputSettings Property Definitions ***************
void Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bWriteDirection_SetBit(void* Obj)
{
	((FPCGExSimpleEdgeOutputSettings*)Obj)->bWriteDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bWriteDirection = { "bWriteDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSimpleEdgeOutputSettings), &Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bWriteDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDirection_MetaData), NewProp_bWriteDirection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_DirectionAttribute = { "DirectionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSimpleEdgeOutputSettings, DirectionAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionAttribute_MetaData), NewProp_DirectionAttribute_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((FPCGExSimpleEdgeOutputSettings*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSimpleEdgeOutputSettings), &Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bWriteLength_SetBit(void* Obj)
{
	((FPCGExSimpleEdgeOutputSettings*)Obj)->bWriteLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bWriteLength = { "bWriteLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSimpleEdgeOutputSettings), &Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bWriteLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteLength_MetaData), NewProp_bWriteLength_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_LengthAttribute = { "LengthAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSimpleEdgeOutputSettings, LengthAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthAttribute_MetaData), NewProp_LengthAttribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bWriteDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_DirectionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_bWriteLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewProp_LengthAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSimpleEdgeOutputSettings Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSimpleEdgeOutputSettings",
	Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::PropPointers),
	sizeof(FPCGExSimpleEdgeOutputSettings),
	alignof(FPCGExSimpleEdgeOutputSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSimpleEdgeOutputSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSimpleEdgeOutputSettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSimpleEdgeOutputSettings.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSimpleEdgeOutputSettings **************************************

// ********** Begin ScriptStruct FPCGExEdgeOutputWithIndexSettings *********************************
struct Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeOutputWithIndexSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeOutputWithIndexSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEdgeIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayAfter", "LengthAttribute" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeIndexAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "DisplayAfter", "bWriteEdgeIndex" },
		{ "EditCondition", "bWriteEdgeIndex" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteVtxIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayAfter", "EdgeIndexAttribute" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxIndexAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "DisplayAfter", "bWriteVtxIndex" },
		{ "EditCondition", "bWriteVtxIndex" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteNeighborCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayAfter", "VtxIndexAttribute" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighborCountAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "DisplayAfter", "bWriteNeighborCount" },
		{ "EditCondition", "bWriteNeighborCount" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeOutputWithIndexSettings constinit property declarations *
	static void NewProp_bWriteEdgeIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEdgeIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EdgeIndexAttribute;
	static void NewProp_bWriteVtxIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteVtxIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VtxIndexAttribute;
	static void NewProp_bWriteNeighborCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNeighborCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NeighborCountAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeOutputWithIndexSettings constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeOutputWithIndexSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics
static_assert(std::is_polymorphic<FPCGExEdgeOutputWithIndexSettings>() == std::is_polymorphic<FPCGExSimpleEdgeOutputSettings>(), "USTRUCT FPCGExEdgeOutputWithIndexSettings cannot be polymorphic unless super FPCGExSimpleEdgeOutputSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeOutputWithIndexSettings;
class UScriptStruct* FPCGExEdgeOutputWithIndexSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeOutputWithIndexSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeOutputWithIndexSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeOutputWithIndexSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeOutputWithIndexSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeOutputWithIndexSettings Property Definitions ************
void Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteEdgeIndex_SetBit(void* Obj)
{
	((FPCGExEdgeOutputWithIndexSettings*)Obj)->bWriteEdgeIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteEdgeIndex = { "bWriteEdgeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeOutputWithIndexSettings), &Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteEdgeIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEdgeIndex_MetaData), NewProp_bWriteEdgeIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_EdgeIndexAttribute = { "EdgeIndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeOutputWithIndexSettings, EdgeIndexAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeIndexAttribute_MetaData), NewProp_EdgeIndexAttribute_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteVtxIndex_SetBit(void* Obj)
{
	((FPCGExEdgeOutputWithIndexSettings*)Obj)->bWriteVtxIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteVtxIndex = { "bWriteVtxIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeOutputWithIndexSettings), &Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteVtxIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteVtxIndex_MetaData), NewProp_bWriteVtxIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_VtxIndexAttribute = { "VtxIndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeOutputWithIndexSettings, VtxIndexAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxIndexAttribute_MetaData), NewProp_VtxIndexAttribute_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteNeighborCount_SetBit(void* Obj)
{
	((FPCGExEdgeOutputWithIndexSettings*)Obj)->bWriteNeighborCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteNeighborCount = { "bWriteNeighborCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeOutputWithIndexSettings), &Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteNeighborCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteNeighborCount_MetaData), NewProp_bWriteNeighborCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_NeighborCountAttribute = { "NeighborCountAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeOutputWithIndexSettings, NeighborCountAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighborCountAttribute_MetaData), NewProp_NeighborCountAttribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteEdgeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_EdgeIndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteVtxIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_VtxIndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_bWriteNeighborCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewProp_NeighborCountAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeOutputWithIndexSettings Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings,
	&NewStructOps,
	"PCGExEdgeOutputWithIndexSettings",
	Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::PropPointers),
	sizeof(FPCGExEdgeOutputWithIndexSettings),
	alignof(FPCGExEdgeOutputWithIndexSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeOutputWithIndexSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeOutputWithIndexSettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeOutputWithIndexSettings.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeOutputWithIndexSettings ***********************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoVtxProperty *************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoVtxProperty); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoVtxProperty); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoVtxProperty constinit property declarations *****
// ********** End ScriptStruct FPCGExDataTypeInfoVtxProperty constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoVtxProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoVtxProperty>() == std::is_polymorphic<FPCGDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoVtxProperty cannot be polymorphic unless super FPCGDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtxProperty;
class UScriptStruct* FPCGExDataTypeInfoVtxProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtxProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtxProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoVtxProperty"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtxProperty.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoVtxProperty",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoVtxProperty),
	alignof(FPCGExDataTypeInfoVtxProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtxProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtxProperty.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtxProperty.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoVtxProperty ***************************************

// ********** Begin Class UPCGExVtxPropertyFactoryData *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertyFactoryData;
UClass* UPCGExVtxPropertyFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertyFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertyFactoryData"),
			Z_Registration_Info_UClass_UPCGExVtxPropertyFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertyFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertyFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyFactoryData_NoRegister()
{
	return UPCGExVtxPropertyFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertyFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertyFactoryData constinit property declarations *************
// ********** End Class UPCGExVtxPropertyFactoryData constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertyFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertyFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertyFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertyFactoryData_Statics::ClassParams = {
	&UPCGExVtxPropertyFactoryData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertyFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertyFactoryData::StaticRegisterNativesUPCGExVtxPropertyFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertyFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertyFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertyFactoryData.OuterSingleton;
}
UPCGExVtxPropertyFactoryData::UPCGExVtxPropertyFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertyFactoryData);
UPCGExVtxPropertyFactoryData::~UPCGExVtxPropertyFactoryData() {}
// ********** End Class UPCGExVtxPropertyFactoryData ***********************************************

// ********** Begin Class UPCGExVtxPropertyProviderSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertyProviderSettings;
UClass* UPCGExVtxPropertyProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertyProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertyProviderSettings"),
			Z_Registration_Info_UClass_UPCGExVtxPropertyProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertyProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertyProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_NoRegister()
{
	return UPCGExVtxPropertyProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|VtxProperty" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h" },
		{ "PCGExNodeLibraryDoc", "TBD" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertyProviderSettings constinit property declarations ********
// ********** End Class UPCGExVtxPropertyProviderSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertyProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_Statics::ClassParams = {
	&UPCGExVtxPropertyProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertyProviderSettings::StaticRegisterNativesUPCGExVtxPropertyProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertyProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertyProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertyProviderSettings.OuterSingleton;
}
UPCGExVtxPropertyProviderSettings::UPCGExVtxPropertyProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertyProviderSettings);
UPCGExVtxPropertyProviderSettings::~UPCGExVtxPropertyProviderSettings() {}
// ********** End Class UPCGExVtxPropertyProviderSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSimpleEdgeOutputSettings::StaticStruct, Z_Construct_UScriptStruct_FPCGExSimpleEdgeOutputSettings_Statics::NewStructOps, TEXT("PCGExSimpleEdgeOutputSettings"),&Z_Registration_Info_UScriptStruct_FPCGExSimpleEdgeOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSimpleEdgeOutputSettings), 2357795501U) },
		{ FPCGExEdgeOutputWithIndexSettings::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings_Statics::NewStructOps, TEXT("PCGExEdgeOutputWithIndexSettings"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeOutputWithIndexSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeOutputWithIndexSettings), 2378656728U) },
		{ FPCGExDataTypeInfoVtxProperty::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoVtxProperty_Statics::NewStructOps, TEXT("PCGExDataTypeInfoVtxProperty"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoVtxProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoVtxProperty), 2897011675U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExVtxPropertyFactoryData, UPCGExVtxPropertyFactoryData::StaticClass, TEXT("UPCGExVtxPropertyFactoryData"), &Z_Registration_Info_UClass_UPCGExVtxPropertyFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertyFactoryData), 2931685035U) },
		{ Z_Construct_UClass_UPCGExVtxPropertyProviderSettings, UPCGExVtxPropertyProviderSettings::StaticClass, TEXT("UPCGExVtxPropertyProviderSettings"), &Z_Registration_Info_UClass_UPCGExVtxPropertyProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertyProviderSettings), 3136904886U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyFactoryProvider_h__Script_PCGExtendedToolkit_3771867234{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
