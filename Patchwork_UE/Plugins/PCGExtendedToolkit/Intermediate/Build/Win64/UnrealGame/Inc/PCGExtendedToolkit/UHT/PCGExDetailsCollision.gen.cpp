// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsCollision.h"
#include "Elements/PCGActorSelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsCollision() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGActorSelectorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCollisionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExCollisionFilterType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCollisionFilterType;
static UEnum* EPCGExCollisionFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCollisionFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCollisionFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCollisionFilterType"));
	}
	return Z_Registration_Info_UEnum_EPCGExCollisionFilterType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCollisionFilterType>()
{
	return EPCGExCollisionFilterType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Channel.DisplayName", "Channel" },
		{ "Channel.Name", "EPCGExCollisionFilterType::Channel" },
		{ "Channel.ToolTip", "Channel" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "ObjectType.DisplayName", "Object Type" },
		{ "ObjectType.Name", "EPCGExCollisionFilterType::ObjectType" },
		{ "ObjectType.ToolTip", "Object Type" },
		{ "Profile.DisplayName", "Profile" },
		{ "Profile.Name", "EPCGExCollisionFilterType::Profile" },
		{ "Profile.ToolTip", "Profile" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCollisionFilterType::Channel", (int64)EPCGExCollisionFilterType::Channel },
		{ "EPCGExCollisionFilterType::ObjectType", (int64)EPCGExCollisionFilterType::ObjectType },
		{ "EPCGExCollisionFilterType::Profile", (int64)EPCGExCollisionFilterType::Profile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCollisionFilterType",
	"EPCGExCollisionFilterType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType()
{
	if (!Z_Registration_Info_UEnum_EPCGExCollisionFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCollisionFilterType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCollisionFilterType.InnerSingleton;
}
// ********** End Enum EPCGExCollisionFilterType ***************************************************

// ********** Begin ScriptStruct FPCGExCollisionDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExCollisionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExCollisionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Collision type to check against */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Collision type to check against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Engine.ECollisionChannel" },
		{ "Category", "Settings" },
		{ "Comment", "/** Collision channel to check against */" },
		{ "EditCondition", "CollisionType == EPCGExCollisionFilterType::Channel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Collision channel to check against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectType_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Engine.EObjectTypeQuery" },
		{ "Category", "Settings" },
		{ "Comment", "/** Collision object type to check against */" },
		{ "EditCondition", "CollisionType == EPCGExCollisionFilterType::ObjectType" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Collision object type to check against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Collision profile to check against */" },
		{ "EditCondition", "CollisionType == EPCGExCollisionFilterType::Profile" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Collision profile to check against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Ignore this graph' PCG content */" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Ignore this graph' PCG content" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreActors_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Ignore a procedural selection of actors */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Ignore a procedural selection of actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredActorSelector_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bIgnoreActors" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsCollision.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExCollisionDetails constinit property declarations ************
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionObjectType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static void NewProp_bIgnoreActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredActorSelector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExCollisionDetails constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExCollisionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExCollisionDetails;
class UScriptStruct* FPCGExCollisionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCollisionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExCollisionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExCollisionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExCollisionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExCollisionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExCollisionDetails Property Definitions ***********************
void Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((FPCGExCollisionDetails*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCollisionDetails), &Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplex_MetaData), NewProp_bTraceComplex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollisionDetails, CollisionType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollisionFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 2628365532
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollisionDetails, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 838391399
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionObjectType = { "CollisionObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollisionDetails, CollisionObjectType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionObjectType_MetaData), NewProp_CollisionObjectType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollisionDetails, CollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfileName_MetaData), NewProp_CollisionProfileName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((FPCGExCollisionDetails*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCollisionDetails), &Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
void Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bIgnoreActors_SetBit(void* Obj)
{
	((FPCGExCollisionDetails*)Obj)->bIgnoreActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bIgnoreActors = { "bIgnoreActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExCollisionDetails), &Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bIgnoreActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreActors_MetaData), NewProp_bIgnoreActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_IgnoredActorSelector = { "IgnoredActorSelector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExCollisionDetails, IgnoredActorSelector), Z_Construct_UScriptStruct_FPCGActorSelectorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredActorSelector_MetaData), NewProp_IgnoredActorSelector_MetaData) }; // 802855026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_CollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_bIgnoreActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewProp_IgnoredActorSelector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExCollisionDetails Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExCollisionDetails",
	Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::PropPointers),
	sizeof(FPCGExCollisionDetails),
	alignof(FPCGExCollisionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExCollisionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExCollisionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExCollisionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExCollisionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExCollisionDetails **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExCollisionFilterType_StaticEnum, TEXT("EPCGExCollisionFilterType"), &Z_Registration_Info_UEnum_EPCGExCollisionFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2628365532U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExCollisionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics::NewStructOps, TEXT("PCGExCollisionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExCollisionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExCollisionDetails), 1813010668U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h__Script_PCGExtendedToolkit_653791681{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
