// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Sharing/PCGExDataSharing.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDataSharing() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDataType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSharedDataLookup();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSharedDataPin();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExDataSharingPushType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDataSharingPushType;
static UEnum* EPCGExDataSharingPushType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataSharingPushType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDataSharingPushType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDataSharingPushType"));
	}
	return Z_Registration_Info_UEnum_EPCGExDataSharingPushType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataSharingPushType>()
{
	return EPCGExDataSharingPushType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Append.DisplayName", "Append" },
		{ "Append.Name", "EPCGExDataSharingPushType::Append" },
		{ "Append.Tooltip", "Append specified data in the target bucket." },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
		{ "Remove.DisplayName", "Remove" },
		{ "Remove.Name", "EPCGExDataSharingPushType::Remove" },
		{ "Remove.Tooltip", "Removes specified data from the target bucket." },
		{ "Replace.DisplayName", "Replace" },
		{ "Replace.Name", "EPCGExDataSharingPushType::Replace" },
		{ "Replace.Tooltip", "Replace specified data in the target bucket." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDataSharingPushType::Replace", (int64)EPCGExDataSharingPushType::Replace },
		{ "EPCGExDataSharingPushType::Append", (int64)EPCGExDataSharingPushType::Append },
		{ "EPCGExDataSharingPushType::Remove", (int64)EPCGExDataSharingPushType::Remove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDataSharingPushType",
	"EPCGExDataSharingPushType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataSharingPushType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDataSharingPushType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataSharingPushType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDataSharingPushType.InnerSingleton;
}
// ********** End Enum EPCGExDataSharingPushType ***************************************************

// ********** Begin Enum EPCGExPinStatus ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPinStatus;
static UEnum* EPCGExPinStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPinStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPinStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPinStatus"));
	}
	return Z_Registration_Info_UEnum_EPCGExPinStatus.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPinStatus>()
{
	return EPCGExPinStatus_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// needed for 5.3\n" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
		{ "Normal.Comment", "/** Normal usage pin. */" },
		{ "Normal.Name", "EPCGExPinStatus::Normal" },
		{ "Normal.ToolTip", "Normal usage pin." },
		{ "Required.Comment", "/** If no data is present, prevent the node from executing. */" },
		{ "Required.Name", "EPCGExPinStatus::Required" },
		{ "Required.ToolTip", "If no data is present, prevent the node from executing." },
		{ "ToolTip", "needed for 5.3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPinStatus::Normal", (int64)EPCGExPinStatus::Normal },
		{ "EPCGExPinStatus::Required", (int64)EPCGExPinStatus::Required },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPinStatus",
	"EPCGExPinStatus",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus()
{
	if (!Z_Registration_Info_UEnum_EPCGExPinStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPinStatus.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPinStatus.InnerSingleton;
}
// ********** End Enum EPCGExPinStatus *************************************************************

// ********** Begin ScriptStruct FPCGExSharedDataPin ***********************************************
struct Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSharedDataPin); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSharedDataPin); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSharedDataPin constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AllowedTypes_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSharedDataPin constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSharedDataPin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSharedDataPin;
class UScriptStruct* FPCGExSharedDataPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSharedDataPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSharedDataPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSharedDataPin, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSharedDataPin"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSharedDataPin.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSharedDataPin Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSharedDataPin, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSharedDataPin, Status), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPinStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 2305080093
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_AllowedTypes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_AllowedTypes = { "AllowedTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSharedDataPin, AllowedTypes), Z_Construct_UEnum_PCG_EPCGDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedTypes_MetaData), NewProp_AllowedTypes_MetaData) }; // 1274701130
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_AllowedTypes_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewProp_AllowedTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSharedDataPin Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSharedDataPin",
	Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::PropPointers),
	sizeof(FPCGExSharedDataPin),
	alignof(FPCGExSharedDataPin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSharedDataPin()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSharedDataPin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSharedDataPin.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSharedDataPin.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSharedDataPin *************************************************

// ********** Begin ScriptStruct FPCGExSharedDataLookup ********************************************
struct Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSharedDataLookup); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSharedDataLookup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BucketId_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bucket ID */" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bucket ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Data ID to look for in the specified bucket */" },
		{ "ModuleRelativePath", "Public/Data/Sharing/PCGExDataSharing.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Data ID to look for in the specified bucket" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSharedDataLookup constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BucketId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSharedDataLookup constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSharedDataLookup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSharedDataLookup;
class UScriptStruct* FPCGExSharedDataLookup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSharedDataLookup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSharedDataLookup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSharedDataLookup, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSharedDataLookup"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSharedDataLookup.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSharedDataLookup Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::NewProp_BucketId = { "BucketId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSharedDataLookup, BucketId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BucketId_MetaData), NewProp_BucketId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSharedDataLookup, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::NewProp_BucketId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSharedDataLookup Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSharedDataLookup",
	Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::PropPointers),
	sizeof(FPCGExSharedDataLookup),
	alignof(FPCGExSharedDataLookup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSharedDataLookup()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSharedDataLookup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSharedDataLookup.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSharedDataLookup.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSharedDataLookup **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExDataSharingPushType_StaticEnum, TEXT("EPCGExDataSharingPushType"), &Z_Registration_Info_UEnum_EPCGExDataSharingPushType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2348827749U) },
		{ EPCGExPinStatus_StaticEnum, TEXT("EPCGExPinStatus"), &Z_Registration_Info_UEnum_EPCGExPinStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2305080093U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSharedDataPin::StaticStruct, Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics::NewStructOps, TEXT("PCGExSharedDataPin"),&Z_Registration_Info_UScriptStruct_FPCGExSharedDataPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSharedDataPin), 3692244350U) },
		{ FPCGExSharedDataLookup::StaticStruct, Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics::NewStructOps, TEXT("PCGExSharedDataLookup"),&Z_Registration_Info_UScriptStruct_FPCGExSharedDataLookup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSharedDataLookup), 4161594687U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h__Script_PCGExtendedToolkit_2404071148{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
