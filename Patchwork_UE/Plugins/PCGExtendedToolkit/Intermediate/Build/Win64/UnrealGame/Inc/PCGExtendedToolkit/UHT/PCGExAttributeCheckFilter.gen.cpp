// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/CollectionFilters/PCGExAttributeCheckFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAttributeCheckFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeCheckFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterCollectionFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAttribtueDomainCheck ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAttribtueDomainCheck;
static UEnum* EPCGExAttribtueDomainCheck_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttribtueDomainCheck.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAttribtueDomainCheck.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAttribtueDomainCheck"));
	}
	return Z_Registration_Info_UEnum_EPCGExAttribtueDomainCheck.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttribtueDomainCheck>()
{
	return EPCGExAttribtueDomainCheck_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "Any" },
		{ "Any.Name", "EPCGExAttribtueDomainCheck::Any" },
		{ "Any.Tooltip", "Ignore domain check" },
		{ "Data.DisplayName", "Data" },
		{ "Data.Name", "EPCGExAttribtueDomainCheck::Data" },
		{ "Data.Tooltip", "Check data domain" },
		{ "Elements.DisplayName", "Elements" },
		{ "Elements.Name", "EPCGExAttribtueDomainCheck::Elements" },
		{ "Elements.Tooltip", "Check elements domain" },
		{ "Match.DisplayName", "Match" },
		{ "Match.Name", "EPCGExAttribtueDomainCheck::Match" },
		{ "Match.Tooltip", "Domains must match (must be set as part of the attribute name)" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAttribtueDomainCheck::Any", (int64)EPCGExAttribtueDomainCheck::Any },
		{ "EPCGExAttribtueDomainCheck::Data", (int64)EPCGExAttribtueDomainCheck::Data },
		{ "EPCGExAttribtueDomainCheck::Elements", (int64)EPCGExAttribtueDomainCheck::Elements },
		{ "EPCGExAttribtueDomainCheck::Match", (int64)EPCGExAttribtueDomainCheck::Match },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAttribtueDomainCheck",
	"EPCGExAttribtueDomainCheck",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck()
{
	if (!Z_Registration_Info_UEnum_EPCGExAttribtueDomainCheck.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAttribtueDomainCheck.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAttribtueDomainCheck.InnerSingleton;
}
// ********** End Enum EPCGExAttribtueDomainCheck **************************************************

// ********** Begin ScriptStruct FPCGExAttributeCheckFilterConfig **********************************
struct Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeCheckFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeCheckFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant tag name value. */" },
		{ "DisplayName", "Attribute Name" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant tag name value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Match" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoCheckType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bDoCheckType" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the result of this filter. */" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Invert the result of this filter." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeCheckFilterConfig constinit property declarations **
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Match_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Match;
	static void NewProp_bDoCheckType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCheckType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeCheckFilterConfig constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeCheckFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeCheckFilterConfig;
class UScriptStruct* FPCGExAttributeCheckFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeCheckFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeCheckFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeCheckFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeCheckFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeCheckFilterConfig Property Definitions *************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeCheckFilterConfig, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeCheckFilterConfig, Domain), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAttribtueDomainCheck, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) }; // 1074673023
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Match_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeCheckFilterConfig, Match), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Match_MetaData), NewProp_Match_MetaData) }; // 2911749281
void Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_bDoCheckType_SetBit(void* Obj)
{
	((FPCGExAttributeCheckFilterConfig*)Obj)->bDoCheckType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_bDoCheckType = { "bDoCheckType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeCheckFilterConfig), &Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_bDoCheckType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoCheckType_MetaData), NewProp_bDoCheckType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeCheckFilterConfig, Type), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 77595749
void Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExAttributeCheckFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeCheckFilterConfig), &Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Domain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Domain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Match_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Match,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_bDoCheckType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeCheckFilterConfig Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeCheckFilterConfig",
	Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::PropPointers),
	sizeof(FPCGExAttributeCheckFilterConfig),
	alignof(FPCGExAttributeCheckFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeCheckFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeCheckFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeCheckFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeCheckFilterConfig ************************************

// ********** Begin Class UPCGExAttributeCheckFilterFactory ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAttributeCheckFilterFactory;
UClass* UPCGExAttributeCheckFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExAttributeCheckFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExAttributeCheckFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAttributeCheckFilterFactory"),
			Z_Registration_Info_UClass_UPCGExAttributeCheckFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExAttributeCheckFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExAttributeCheckFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_NoRegister()
{
	return UPCGExAttributeCheckFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-collections/attribute-check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAttributeCheckFilterFactory constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAttributeCheckFilterFactory constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAttributeCheckFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics

// ********** Begin Class UPCGExAttributeCheckFilterFactory Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeCheckFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3518969536
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAttributeCheckFilterFactory Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterCollectionFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::ClassParams = {
	&UPCGExAttributeCheckFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExAttributeCheckFilterFactory::StaticRegisterNativesUPCGExAttributeCheckFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExAttributeCheckFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExAttributeCheckFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAttributeCheckFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExAttributeCheckFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAttributeCheckFilterFactory.OuterSingleton;
}
UPCGExAttributeCheckFilterFactory::UPCGExAttributeCheckFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAttributeCheckFilterFactory);
UPCGExAttributeCheckFilterFactory::~UPCGExAttributeCheckFilterFactory() {}
// ********** End Class UPCGExAttributeCheckFilterFactory ******************************************

// ********** Begin Class UPCGExAttributeCheckFilterProviderSettings *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAttributeCheckFilterProviderSettings;
UClass* UPCGExAttributeCheckFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAttributeCheckFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExAttributeCheckFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAttributeCheckFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExAttributeCheckFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAttributeCheckFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExAttributeCheckFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_NoRegister()
{
	return UPCGExAttributeCheckFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExAttributeCheckFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAttributeCheckFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAttributeCheckFilterProviderSettings constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAttributeCheckFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics

// ********** Begin Class UPCGExAttributeCheckFilterProviderSettings Property Definitions **********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeCheckFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3518969536
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAttributeCheckFilterProviderSettings Property Definitions ************
UObject* (*const Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::ClassParams = {
	&UPCGExAttributeCheckFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExAttributeCheckFilterProviderSettings::StaticRegisterNativesUPCGExAttributeCheckFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAttributeCheckFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAttributeCheckFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAttributeCheckFilterProviderSettings.OuterSingleton;
}
UPCGExAttributeCheckFilterProviderSettings::UPCGExAttributeCheckFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAttributeCheckFilterProviderSettings);
UPCGExAttributeCheckFilterProviderSettings::~UPCGExAttributeCheckFilterProviderSettings() {}
// ********** End Class UPCGExAttributeCheckFilterProviderSettings *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAttribtueDomainCheck_StaticEnum, TEXT("EPCGExAttribtueDomainCheck"), &Z_Registration_Info_UEnum_EPCGExAttribtueDomainCheck, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1074673023U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAttributeCheckFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeCheckFilterConfig_Statics::NewStructOps, TEXT("PCGExAttributeCheckFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeCheckFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeCheckFilterConfig), 3518969536U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAttributeCheckFilterFactory, UPCGExAttributeCheckFilterFactory::StaticClass, TEXT("UPCGExAttributeCheckFilterFactory"), &Z_Registration_Info_UClass_UPCGExAttributeCheckFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAttributeCheckFilterFactory), 3534497U) },
		{ Z_Construct_UClass_UPCGExAttributeCheckFilterProviderSettings, UPCGExAttributeCheckFilterProviderSettings::StaticClass, TEXT("UPCGExAttributeCheckFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExAttributeCheckFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAttributeCheckFilterProviderSettings), 1538552831U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_2482989001{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExAttributeCheckFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
