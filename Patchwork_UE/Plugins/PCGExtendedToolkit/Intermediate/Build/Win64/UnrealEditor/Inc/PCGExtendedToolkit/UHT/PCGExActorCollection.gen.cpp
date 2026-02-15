// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Collections/PCGExActorCollection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExActorCollection() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActorCollection();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActorCollection_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExActorCollectionEntry();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExActorCollectionEntry ****************************************
struct Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExActorCollectionEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExActorCollectionEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Actor Collection Entry" },
		{ "ModuleRelativePath", "Public/Collections/PCGExActorCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExActorCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyCollidingComponents_MetaData[] = {
		{ "Category", "Settings|Bounds" },
		{ "Comment", "/** If enabled, the cached bounds will only account for collicable components on the actor. */" },
		{ "EditCondition", "!bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExActorCollection.h" },
		{ "ToolTip", "If enabled, the cached bounds will only account for collicable components on the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "Category", "Settings|Bounds" },
		{ "Comment", "/** If enabled, the cached bounds will also account for child actors. */" },
		{ "EditCondition", "!bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExActorCollection.h" },
		{ "ToolTip", "If enabled, the cached bounds will also account for child actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubCollection_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "bIsSubCollection" },
		{ "EditCondition", "bIsSubCollection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Collections/PCGExActorCollection.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExActorCollectionEntry constinit property declarations ********
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Actor;
	static void NewProp_bOnlyCollidingComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyCollidingComponents;
	static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExActorCollectionEntry constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExActorCollectionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics
static_assert(std::is_polymorphic<FPCGExActorCollectionEntry>() == std::is_polymorphic<FPCGExAssetCollectionEntry>(), "USTRUCT FPCGExActorCollectionEntry cannot be polymorphic unless super FPCGExAssetCollectionEntry is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExActorCollectionEntry;
class UScriptStruct* FPCGExActorCollectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExActorCollectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExActorCollectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExActorCollectionEntry, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExActorCollectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExActorCollectionEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExActorCollectionEntry Property Definitions *******************
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExActorCollectionEntry, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
void Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_bOnlyCollidingComponents_SetBit(void* Obj)
{
	((FPCGExActorCollectionEntry*)Obj)->bOnlyCollidingComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_bOnlyCollidingComponents = { "bOnlyCollidingComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExActorCollectionEntry), &Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_bOnlyCollidingComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyCollidingComponents_MetaData), NewProp_bOnlyCollidingComponents_MetaData) };
void Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
{
	((FPCGExActorCollectionEntry*)Obj)->bIncludeFromChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExActorCollectionEntry), &Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFromChildActors_MetaData), NewProp_bIncludeFromChildActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_SubCollection = { "SubCollection", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExActorCollectionEntry, SubCollection), Z_Construct_UClass_UPCGExActorCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubCollection_MetaData), NewProp_SubCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_bOnlyCollidingComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_bIncludeFromChildActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewProp_SubCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExActorCollectionEntry Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry,
	&NewStructOps,
	"PCGExActorCollectionEntry",
	Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::PropPointers),
	sizeof(FPCGExActorCollectionEntry),
	alignof(FPCGExActorCollectionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExActorCollectionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExActorCollectionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExActorCollectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExActorCollectionEntry.InnerSingleton);
}
// ********** End ScriptStruct FPCGExActorCollectionEntry ******************************************

// ********** Begin Class UPCGExActorCollection ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExActorCollection;
UClass* UPCGExActorCollection::GetPrivateStaticClass()
{
	using TClass = UPCGExActorCollection;
	if (!Z_Registration_Info_UClass_UPCGExActorCollection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExActorCollection"),
			Z_Registration_Info_UClass_UPCGExActorCollection.InnerSingleton,
			StaticRegisterNativesUPCGExActorCollection,
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
	return Z_Registration_Info_UClass_UPCGExActorCollection.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExActorCollection_NoRegister()
{
	return UPCGExActorCollection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExActorCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "[PCGEx] Actor Collection" },
		{ "IncludePath", "Collections/PCGExActorCollection.h" },
		{ "ModuleRelativePath", "Public/Collections/PCGExActorCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Collections/PCGExActorCollection.h" },
		{ "TitleProperty", "DisplayName" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExActorCollection constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExActorCollection constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExActorCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExActorCollection_Statics

// ********** Begin Class UPCGExActorCollection Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExActorCollection_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExActorCollectionEntry, METADATA_PARAMS(0, nullptr) }; // 1718457406
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExActorCollection_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExActorCollection, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1718457406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExActorCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExActorCollection_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExActorCollection_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActorCollection_Statics::PropPointers) < 2048);
// ********** End Class UPCGExActorCollection Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UPCGExActorCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExAssetCollection,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActorCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExActorCollection_Statics::ClassParams = {
	&UPCGExActorCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExActorCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActorCollection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActorCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExActorCollection_Statics::Class_MetaDataParams)
};
void UPCGExActorCollection::StaticRegisterNativesUPCGExActorCollection()
{
}
UClass* Z_Construct_UClass_UPCGExActorCollection()
{
	if (!Z_Registration_Info_UClass_UPCGExActorCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExActorCollection.OuterSingleton, Z_Construct_UClass_UPCGExActorCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExActorCollection.OuterSingleton;
}
UPCGExActorCollection::UPCGExActorCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExActorCollection);
UPCGExActorCollection::~UPCGExActorCollection() {}
// ********** End Class UPCGExActorCollection ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExActorCollection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExActorCollectionEntry::StaticStruct, Z_Construct_UScriptStruct_FPCGExActorCollectionEntry_Statics::NewStructOps, TEXT("PCGExActorCollectionEntry"),&Z_Registration_Info_UScriptStruct_FPCGExActorCollectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExActorCollectionEntry), 1718457406U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExActorCollection, UPCGExActorCollection::StaticClass, TEXT("UPCGExActorCollection"), &Z_Registration_Info_UClass_UPCGExActorCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExActorCollection), 3769983100U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExActorCollection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExActorCollection_h__Script_PCGExtendedToolkit_3424545226{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExActorCollection_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExActorCollection_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExActorCollection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExActorCollection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
