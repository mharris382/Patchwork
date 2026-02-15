// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExFilterFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFilterFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterNoDataFallback();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFilterProviderSettings Function ShowMissingDataPolicy **************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics
{
	struct PCGExFilterProviderSettings_eventShowMissingDataPolicy_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowMissingDataPolicy constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowMissingDataPolicy constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowMissingDataPolicy Property Definitions ****************************
void Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PCGExFilterProviderSettings_eventShowMissingDataPolicy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGExFilterProviderSettings_eventShowMissingDataPolicy_Parms), &Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::PropPointers) < 2048);
// ********** End Function ShowMissingDataPolicy Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExFilterProviderSettings, nullptr, "ShowMissingDataPolicy", 	Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::PCGExFilterProviderSettings_eventShowMissingDataPolicy_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x60080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::PCGExFilterProviderSettings_eventShowMissingDataPolicy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExFilterProviderSettings::execShowMissingDataPolicy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShowMissingDataPolicy();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExFilterProviderSettings Function ShowMissingDataPolicy ****************

// ********** Begin Class UPCGExFilterProviderSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFilterProviderSettings;
UClass* UPCGExFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFilterProviderSettings_NoRegister()
{
	return UPCGExFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/Filters/PCGExFilterFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Priority.*/" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Filter Priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializationFailurePolicy_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** How to handle failed attribute initialization. Usually, the reason is missing attributes, but can also be unsupported filter type. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How to handle failed attribute initialization. Usually, the reason is missing attributes, but can also be unsupported filter type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissingDataPolicy_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** How to handle missing data. This only applies to filters that rely on local data pins to output meaningful results. */" },
		{ "EditCondition", "ShowMissingDataPolicy()" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExFilterFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How to handle missing data. This only applies to filters that rely on local data pins to output meaningful results." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFilterProviderSettings constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitializationFailurePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitializationFailurePolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MissingDataPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MissingDataPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFilterProviderSettings constinit property declarations ***************
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ShowMissingDataPolicy"), .Pointer = &UPCGExFilterProviderSettings::execShowMissingDataPolicy },
	};
#endif // WITH_EDITOR
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExFilterProviderSettings_ShowMissingDataPolicy, "ShowMissingDataPolicy" }, // 101284021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFilterProviderSettings_Statics

// ********** Begin Class UPCGExFilterProviderSettings Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterProviderSettings, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_InitializationFailurePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_InitializationFailurePolicy = { "InitializationFailurePolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterProviderSettings, InitializationFailurePolicy), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterNoDataFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializationFailurePolicy_MetaData), NewProp_InitializationFailurePolicy_MetaData) }; // 2640879825
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_MissingDataPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_MissingDataPolicy = { "MissingDataPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFilterProviderSettings, MissingDataPolicy), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterNoDataFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissingDataPolicy_MetaData), NewProp_MissingDataPolicy_MetaData) }; // 2640879825
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_InitializationFailurePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_InitializationFailurePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_MissingDataPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::NewProp_MissingDataPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFilterProviderSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::ClassParams = {
	&UPCGExFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFilterProviderSettings::StaticRegisterNativesUPCGExFilterProviderSettings()
{
	UClass* Class = UPCGExFilterProviderSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, IF_WITH_EDITOR(MakeConstArrayView(Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::Funcs), {}));
}
UClass* Z_Construct_UClass_UPCGExFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFilterProviderSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFilterProviderSettings);
UPCGExFilterProviderSettings::~UPCGExFilterProviderSettings() {}
// ********** End Class UPCGExFilterProviderSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFilterProviderSettings, UPCGExFilterProviderSettings::StaticClass, TEXT("UPCGExFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFilterProviderSettings), 993974647U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterFactoryProvider_h__Script_PCGExtendedToolkit_3086037811{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExFilterFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
