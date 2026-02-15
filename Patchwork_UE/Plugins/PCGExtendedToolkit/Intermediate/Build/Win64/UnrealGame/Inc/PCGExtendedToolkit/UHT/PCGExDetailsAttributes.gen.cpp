// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsAttributes() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExAttributeSourceToTargetDetails ******************************
struct Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeSourceToTargetDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeSourceToTargetDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read on input */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read on input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputToDifferentName_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAttributes.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to write on output, if different from input */" },
		{ "EditCondition", "bOutputToDifferentName" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to write on output, if different from input" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeSourceToTargetDetails constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_Source;
	static void NewProp_bOutputToDifferentName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputToDifferentName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeSourceToTargetDetails constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeSourceToTargetDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetDetails;
class UScriptStruct* FPCGExAttributeSourceToTargetDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeSourceToTargetDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeSourceToTargetDetails Property Definitions *********
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeSourceToTargetDetails, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewProp_bOutputToDifferentName_SetBit(void* Obj)
{
	((FPCGExAttributeSourceToTargetDetails*)Obj)->bOutputToDifferentName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewProp_bOutputToDifferentName = { "bOutputToDifferentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeSourceToTargetDetails), &Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewProp_bOutputToDifferentName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputToDifferentName_MetaData), NewProp_bOutputToDifferentName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeSourceToTargetDetails, Target), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewProp_bOutputToDifferentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeSourceToTargetDetails Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeSourceToTargetDetails",
	Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::PropPointers),
	sizeof(FPCGExAttributeSourceToTargetDetails),
	alignof(FPCGExAttributeSourceToTargetDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeSourceToTargetDetails ********************************

// ********** Begin ScriptStruct FPCGExAttributeSourceToTargetList *********************************
struct Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeSourceToTargetList); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeSourceToTargetList); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAttributes.h" },
		{ "PCG_Overridable", "" },
		{ "TitleProperty", "{Source}" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeSourceToTargetList constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeSourceToTargetList constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeSourceToTargetList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetList;
class UScriptStruct* FPCGExAttributeSourceToTargetList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeSourceToTargetList"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetList.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeSourceToTargetList Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails, METADATA_PARAMS(0, nullptr) }; // 2258194026
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeSourceToTargetList, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 2258194026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeSourceToTargetList Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeSourceToTargetList",
	Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::PropPointers),
	sizeof(FPCGExAttributeSourceToTargetList),
	alignof(FPCGExAttributeSourceToTargetList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetList.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetList.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeSourceToTargetList ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAttributes_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAttributeSourceToTargetDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails_Statics::NewStructOps, TEXT("PCGExAttributeSourceToTargetDetails"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeSourceToTargetDetails), 2258194026U) },
		{ FPCGExAttributeSourceToTargetList::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList_Statics::NewStructOps, TEXT("PCGExAttributeSourceToTargetList"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeSourceToTargetList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeSourceToTargetList), 2362630701U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAttributes_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAttributes_h__Script_PCGExtendedToolkit_2294802701{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAttributes_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAttributes_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
