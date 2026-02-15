// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/PCGExFlushDebug.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFlushDebug() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDebugSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDebugSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExDebugSettings ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDebugSettings;
UClass* UPCGExDebugSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExDebugSettings;
	if (!Z_Registration_Info_UClass_UPCGExDebugSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDebugSettings"),
			Z_Registration_Info_UClass_UPCGExDebugSettings.InnerSingleton,
			StaticRegisterNativesUPCGExDebugSettings,
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
	return Z_Registration_Info_UClass_UPCGExDebugSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDebugSettings_NoRegister()
{
	return UPCGExDebugSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDebugSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Debug/PCGExFlushDebug.h" },
		{ "ModuleRelativePath", "Public/Debug/PCGExFlushDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPCGExDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Debug drawing toggle. Exposed to have more control on debug draw in sub-graph. */" },
		{ "ModuleRelativePath", "Public/Debug/PCGExFlushDebug.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Debug drawing toggle. Exposed to have more control on debug draw in sub-graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Debug drawing toggle. Exposed to have more control on debug draw in sub-graph. */" },
		{ "ModuleRelativePath", "Public/Debug/PCGExFlushDebug.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Debug drawing toggle. Exposed to have more control on debug draw in sub-graph." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDebugSettings constinit property declarations **********************
	static void NewProp_bPCGExDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPCGExDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDebugSettings constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDebugSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDebugSettings_Statics

// ********** Begin Class UPCGExDebugSettings Property Definitions *********************************
void Z_Construct_UClass_UPCGExDebugSettings_Statics::NewProp_bPCGExDebug_SetBit(void* Obj)
{
	((UPCGExDebugSettings*)Obj)->bPCGExDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDebugSettings_Statics::NewProp_bPCGExDebug = { "bPCGExDebug", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDebugSettings), &Z_Construct_UClass_UPCGExDebugSettings_Statics::NewProp_bPCGExDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPCGExDebug_MetaData), NewProp_bPCGExDebug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExDebugSettings_Statics::NewProp_CustomColor = { "CustomColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDebugSettings, CustomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomColor_MetaData), NewProp_CustomColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDebugSettings_Statics::NewProp_bPCGExDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDebugSettings_Statics::NewProp_CustomColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDebugSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDebugSettings Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UPCGExDebugSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDebugSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDebugSettings_Statics::ClassParams = {
	&UPCGExDebugSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDebugSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDebugSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDebugSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDebugSettings_Statics::Class_MetaDataParams)
};
void UPCGExDebugSettings::StaticRegisterNativesUPCGExDebugSettings()
{
}
UClass* Z_Construct_UClass_UPCGExDebugSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExDebugSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDebugSettings.OuterSingleton, Z_Construct_UClass_UPCGExDebugSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDebugSettings.OuterSingleton;
}
UPCGExDebugSettings::UPCGExDebugSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDebugSettings);
UPCGExDebugSettings::~UPCGExDebugSettings() {}
// ********** End Class UPCGExDebugSettings ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExFlushDebug_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDebugSettings, UPCGExDebugSettings::StaticClass, TEXT("UPCGExDebugSettings"), &Z_Registration_Info_UClass_UPCGExDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDebugSettings), 766995698U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExFlushDebug_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExFlushDebug_h__Script_PCGExtendedToolkit_1270638258{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExFlushDebug_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Debug_PCGExFlushDebug_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
