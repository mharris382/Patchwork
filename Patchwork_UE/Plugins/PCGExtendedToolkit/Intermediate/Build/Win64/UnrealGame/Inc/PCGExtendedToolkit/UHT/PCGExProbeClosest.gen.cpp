// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Probes/PCGExProbeClosest.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExProbeClosest() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeClosestProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeClosestProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryClosest();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryClosest_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigClosest();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExProbeConfigClosest ******************************************
struct Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExProbeConfigClosest); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExProbeConfigClosest); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConnectionsInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConnectionsAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Max Connections (Attr)" },
		{ "EditCondition", "MaxConnectionsInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConnectionsConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max Connections" },
		{ "EditCondition", "MaxConnectionsInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventCoincidence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attempts to prevent connections that are roughly in the same direction */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attempts to prevent connections that are roughly in the same direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoincidencePreventionTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.000010" },
		{ "Comment", "/** Attempts to prevent connections that are roughly in the same direction */" },
		{ "EditCondition", "bPreventCoincidence" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attempts to prevent connections that are roughly in the same direction" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExProbeConfigClosest constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxConnectionsInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxConnectionsInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxConnectionsAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConnectionsConstant;
	static void NewProp_bPreventCoincidence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventCoincidence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CoincidencePreventionTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExProbeConfigClosest constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExProbeConfigClosest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics
static_assert(std::is_polymorphic<FPCGExProbeConfigClosest>() == std::is_polymorphic<FPCGExProbeConfigBase>(), "USTRUCT FPCGExProbeConfigClosest cannot be polymorphic unless super FPCGExProbeConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExProbeConfigClosest;
class UScriptStruct* FPCGExProbeConfigClosest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigClosest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExProbeConfigClosest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExProbeConfigClosest, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExProbeConfigClosest"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExProbeConfigClosest.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExProbeConfigClosest Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_MaxConnectionsInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_MaxConnectionsInput = { "MaxConnectionsInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigClosest, MaxConnectionsInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConnectionsInput_MetaData), NewProp_MaxConnectionsInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_MaxConnectionsAttribute = { "MaxConnectionsAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigClosest, MaxConnectionsAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConnectionsAttribute_MetaData), NewProp_MaxConnectionsAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_MaxConnectionsConstant = { "MaxConnectionsConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigClosest, MaxConnectionsConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConnectionsConstant_MetaData), NewProp_MaxConnectionsConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_bPreventCoincidence_SetBit(void* Obj)
{
	((FPCGExProbeConfigClosest*)Obj)->bPreventCoincidence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_bPreventCoincidence = { "bPreventCoincidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExProbeConfigClosest), &Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_bPreventCoincidence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventCoincidence_MetaData), NewProp_bPreventCoincidence_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_CoincidencePreventionTolerance = { "CoincidencePreventionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigClosest, CoincidencePreventionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoincidencePreventionTolerance_MetaData), NewProp_CoincidencePreventionTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_MaxConnectionsInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_MaxConnectionsInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_MaxConnectionsAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_MaxConnectionsConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_bPreventCoincidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewProp_CoincidencePreventionTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExProbeConfigClosest Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExProbeConfigBase,
	&NewStructOps,
	"PCGExProbeConfigClosest",
	Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::PropPointers),
	sizeof(FPCGExProbeConfigClosest),
	alignof(FPCGExProbeConfigClosest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigClosest()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigClosest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigClosest.InnerSingleton, Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigClosest.InnerSingleton);
}
// ********** End ScriptStruct FPCGExProbeConfigClosest ********************************************

// ********** Begin Class UPCGExProbeFactoryClosest ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeFactoryClosest;
UClass* UPCGExProbeFactoryClosest::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeFactoryClosest;
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryClosest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeFactoryClosest"),
			Z_Registration_Info_UClass_UPCGExProbeFactoryClosest.InnerSingleton,
			StaticRegisterNativesUPCGExProbeFactoryClosest,
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
	return Z_Registration_Info_UClass_UPCGExProbeFactoryClosest.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryClosest_NoRegister()
{
	return UPCGExProbeFactoryClosest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Probes/PCGExProbeClosest.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeFactoryClosest constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeFactoryClosest constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeFactoryClosest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics

// ********** Begin Class UPCGExProbeFactoryClosest Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeFactoryClosest, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigClosest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4283411959
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeFactoryClosest Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::ClassParams = {
	&UPCGExProbeFactoryClosest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::Class_MetaDataParams)
};
void UPCGExProbeFactoryClosest::StaticRegisterNativesUPCGExProbeFactoryClosest()
{
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryClosest()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryClosest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeFactoryClosest.OuterSingleton, Z_Construct_UClass_UPCGExProbeFactoryClosest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeFactoryClosest.OuterSingleton;
}
UPCGExProbeFactoryClosest::UPCGExProbeFactoryClosest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeFactoryClosest);
UPCGExProbeFactoryClosest::~UPCGExProbeFactoryClosest() {}
// ********** End Class UPCGExProbeFactoryClosest **************************************************

// ********** Begin Class UPCGExProbeClosestProviderSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeClosestProviderSettings;
UClass* UPCGExProbeClosestProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeClosestProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExProbeClosestProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeClosestProviderSettings"),
			Z_Registration_Info_UClass_UPCGExProbeClosestProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExProbeClosestProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExProbeClosestProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeClosestProviderSettings_NoRegister()
{
	return UPCGExProbeClosestProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Probes/PCGExProbeClosest.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
		{ "PCGExNodeLibraryDoc", "clusters/connect-points/probe-closest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeClosest.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeClosestProviderSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeClosestProviderSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeClosestProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics

// ********** Begin Class UPCGExProbeClosestProviderSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeClosestProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigClosest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4283411959
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeClosestProviderSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::ClassParams = {
	&UPCGExProbeClosestProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExProbeClosestProviderSettings::StaticRegisterNativesUPCGExProbeClosestProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExProbeClosestProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeClosestProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeClosestProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExProbeClosestProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeClosestProviderSettings.OuterSingleton;
}
UPCGExProbeClosestProviderSettings::UPCGExProbeClosestProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeClosestProviderSettings);
UPCGExProbeClosestProviderSettings::~UPCGExProbeClosestProviderSettings() {}
// ********** End Class UPCGExProbeClosestProviderSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeClosest_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExProbeConfigClosest::StaticStruct, Z_Construct_UScriptStruct_FPCGExProbeConfigClosest_Statics::NewStructOps, TEXT("PCGExProbeConfigClosest"),&Z_Registration_Info_UScriptStruct_FPCGExProbeConfigClosest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExProbeConfigClosest), 4283411959U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExProbeFactoryClosest, UPCGExProbeFactoryClosest::StaticClass, TEXT("UPCGExProbeFactoryClosest"), &Z_Registration_Info_UClass_UPCGExProbeFactoryClosest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeFactoryClosest), 3458109388U) },
		{ Z_Construct_UClass_UPCGExProbeClosestProviderSettings, UPCGExProbeClosestProviderSettings::StaticClass, TEXT("UPCGExProbeClosestProviderSettings"), &Z_Registration_Info_UClass_UPCGExProbeClosestProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeClosestProviderSettings), 2934580364U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeClosest_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeClosest_h__Script_PCGExtendedToolkit_1993373615{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeClosest_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeClosest_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeClosest_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeClosest_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
