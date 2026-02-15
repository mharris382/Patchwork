// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExGameplayTagsFilter.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGameplayTagsFilter() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGameplayTagsFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExGameplayTagsFilterConfig ************************************
struct Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExGameplayTagsFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExGameplayTagsFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReference_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute that contains a path to an actor in the level, usually from a GetActorData PCG Node in point mode.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute that contains a path to an actor in the level, usually from a GetActorData PCG Node in point mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Path to the tag container to be tested, resolve from the actor reference as root. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Path to the tag container to be tested, resolve from the actor reference as root." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Query. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "ToolTip", "Query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFallbackMissingActor_MetaData[] = {
		{ "Category", "Settings|Fallbacks" },
		{ "Comment", "/** Value the filter will return for point which actor reference cannot be resolved */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "ToolTip", "Value the filter will return for point which actor reference cannot be resolved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFallbackPropertyPath_MetaData[] = {
		{ "Category", "Settings|Fallbacks" },
		{ "Comment", "/** Value the filter will return if the actor is found, but the property path could not be resolved  */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "ToolTip", "Value the filter will return if the actor is found, but the property path could not be resolved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietMissingPropertyWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExGameplayTagsFilterConfig constinit property declarations ****
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReference;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
	static void NewProp_bFallbackMissingActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallbackMissingActor;
	static void NewProp_bFallbackPropertyPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallbackPropertyPath;
	static void NewProp_bQuietMissingPropertyWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietMissingPropertyWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExGameplayTagsFilterConfig constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExGameplayTagsFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExGameplayTagsFilterConfig;
class UScriptStruct* FPCGExGameplayTagsFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGameplayTagsFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExGameplayTagsFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExGameplayTagsFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExGameplayTagsFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExGameplayTagsFilterConfig Property Definitions ***************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_ActorReference = { "ActorReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGameplayTagsFilterConfig, ActorReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReference_MetaData), NewProp_ActorReference_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGameplayTagsFilterConfig, PropertyPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyPath_MetaData), NewProp_PropertyPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGameplayTagsFilterConfig, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagQuery_MetaData), NewProp_TagQuery_MetaData) }; // 3075344437
void Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bFallbackMissingActor_SetBit(void* Obj)
{
	((FPCGExGameplayTagsFilterConfig*)Obj)->bFallbackMissingActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bFallbackMissingActor = { "bFallbackMissingActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGameplayTagsFilterConfig), &Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bFallbackMissingActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFallbackMissingActor_MetaData), NewProp_bFallbackMissingActor_MetaData) };
void Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bFallbackPropertyPath_SetBit(void* Obj)
{
	((FPCGExGameplayTagsFilterConfig*)Obj)->bFallbackPropertyPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bFallbackPropertyPath = { "bFallbackPropertyPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGameplayTagsFilterConfig), &Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bFallbackPropertyPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFallbackPropertyPath_MetaData), NewProp_bFallbackPropertyPath_MetaData) };
void Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bQuietMissingPropertyWarning_SetBit(void* Obj)
{
	((FPCGExGameplayTagsFilterConfig*)Obj)->bQuietMissingPropertyWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bQuietMissingPropertyWarning = { "bQuietMissingPropertyWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGameplayTagsFilterConfig), &Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bQuietMissingPropertyWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietMissingPropertyWarning_MetaData), NewProp_bQuietMissingPropertyWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_ActorReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_PropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_TagQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bFallbackMissingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bFallbackPropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewProp_bQuietMissingPropertyWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExGameplayTagsFilterConfig Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExGameplayTagsFilterConfig",
	Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::PropPointers),
	sizeof(FPCGExGameplayTagsFilterConfig),
	alignof(FPCGExGameplayTagsFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGameplayTagsFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExGameplayTagsFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExGameplayTagsFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExGameplayTagsFilterConfig **************************************

// ********** Begin Class UPCGExGameplayTagsFilterFactory ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExGameplayTagsFilterFactory;
UClass* UPCGExGameplayTagsFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExGameplayTagsFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExGameplayTagsFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExGameplayTagsFilterFactory"),
			Z_Registration_Info_UClass_UPCGExGameplayTagsFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExGameplayTagsFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExGameplayTagsFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_NoRegister()
{
	return UPCGExGameplayTagsFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExGameplayTagsFilterFactory constinit property declarations **********
// ********** End Class UPCGExGameplayTagsFilterFactory constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExGameplayTagsFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_Statics::ClassParams = {
	&UPCGExGameplayTagsFilterFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExGameplayTagsFilterFactory::StaticRegisterNativesUPCGExGameplayTagsFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExGameplayTagsFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExGameplayTagsFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExGameplayTagsFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExGameplayTagsFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExGameplayTagsFilterFactory.OuterSingleton;
}
UPCGExGameplayTagsFilterFactory::UPCGExGameplayTagsFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExGameplayTagsFilterFactory);
UPCGExGameplayTagsFilterFactory::~UPCGExGameplayTagsFilterFactory() {}
// ********** End Class UPCGExGameplayTagsFilterFactory ********************************************

// ********** Begin Class UPCGExGameplayTagsFilterProviderSettings *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExGameplayTagsFilterProviderSettings;
UClass* UPCGExGameplayTagsFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExGameplayTagsFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExGameplayTagsFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExGameplayTagsFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExGameplayTagsFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExGameplayTagsFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExGameplayTagsFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_NoRegister()
{
	return UPCGExGameplayTagsFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/gameplay-tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExGameplayTagsFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExGameplayTagsFilterProviderSettings constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExGameplayTagsFilterProviderSettings constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExGameplayTagsFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics

// ********** Begin Class UPCGExGameplayTagsFilterProviderSettings Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGameplayTagsFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3280988793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExGameplayTagsFilterProviderSettings Property Definitions **************
UObject* (*const Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::ClassParams = {
	&UPCGExGameplayTagsFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExGameplayTagsFilterProviderSettings::StaticRegisterNativesUPCGExGameplayTagsFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExGameplayTagsFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExGameplayTagsFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExGameplayTagsFilterProviderSettings.OuterSingleton;
}
UPCGExGameplayTagsFilterProviderSettings::UPCGExGameplayTagsFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExGameplayTagsFilterProviderSettings);
UPCGExGameplayTagsFilterProviderSettings::~UPCGExGameplayTagsFilterProviderSettings() {}
// ********** End Class UPCGExGameplayTagsFilterProviderSettings ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExGameplayTagsFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExGameplayTagsFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExGameplayTagsFilterConfig_Statics::NewStructOps, TEXT("PCGExGameplayTagsFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExGameplayTagsFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExGameplayTagsFilterConfig), 3280988793U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExGameplayTagsFilterFactory, UPCGExGameplayTagsFilterFactory::StaticClass, TEXT("UPCGExGameplayTagsFilterFactory"), &Z_Registration_Info_UClass_UPCGExGameplayTagsFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExGameplayTagsFilterFactory), 2531715875U) },
		{ Z_Construct_UClass_UPCGExGameplayTagsFilterProviderSettings, UPCGExGameplayTagsFilterProviderSettings::StaticClass, TEXT("UPCGExGameplayTagsFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExGameplayTagsFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExGameplayTagsFilterProviderSettings), 1798549820U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExGameplayTagsFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExGameplayTagsFilter_h__Script_PCGExtendedToolkit_3522814998{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExGameplayTagsFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExGameplayTagsFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExGameplayTagsFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExGameplayTagsFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
