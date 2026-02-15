// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/States/PCGExFlagNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFlagNodes() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFlagNodesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFlagNodesSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFlagNodesSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFlagNodesSettings;
UClass* UPCGExFlagNodesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFlagNodesSettings;
	if (!Z_Registration_Info_UClass_UPCGExFlagNodesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFlagNodesSettings"),
			Z_Registration_Info_UClass_UPCGExFlagNodesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFlagNodesSettings,
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
	return Z_Registration_Info_UClass_UPCGExFlagNodesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFlagNodesSettings_NoRegister()
{
	return UPCGExFlagNodesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFlagNodesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/States/PCGExFlagNodes.h" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExFlagNodes.h" },
		{ "PCGExNodeLibraryDoc", "clusters/metadata/flag-nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to output flags to */" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExFlagNodes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to output flags to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialFlags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Initial flags */" },
		{ "ModuleRelativePath", "Public/Graph/States/PCGExFlagNodes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Initial flags" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFlagNodesSettings constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlagAttribute;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InitialFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFlagNodesSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFlagNodesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFlagNodesSettings_Statics

// ********** Begin Class UPCGExFlagNodesSettings Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::NewProp_FlagAttribute = { "FlagAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFlagNodesSettings, FlagAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagAttribute_MetaData), NewProp_FlagAttribute_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::NewProp_InitialFlags = { "InitialFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFlagNodesSettings, InitialFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialFlags_MetaData), NewProp_InitialFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::NewProp_FlagAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::NewProp_InitialFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFlagNodesSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::ClassParams = {
	&UPCGExFlagNodesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::Class_MetaDataParams)
};
void UPCGExFlagNodesSettings::StaticRegisterNativesUPCGExFlagNodesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFlagNodesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFlagNodesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFlagNodesSettings.OuterSingleton, Z_Construct_UClass_UPCGExFlagNodesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFlagNodesSettings.OuterSingleton;
}
UPCGExFlagNodesSettings::UPCGExFlagNodesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFlagNodesSettings);
UPCGExFlagNodesSettings::~UPCGExFlagNodesSettings() {}
// ********** End Class UPCGExFlagNodesSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExFlagNodes_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFlagNodesSettings, UPCGExFlagNodesSettings::StaticClass, TEXT("UPCGExFlagNodesSettings"), &Z_Registration_Info_UClass_UPCGExFlagNodesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFlagNodesSettings), 3442659617U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExFlagNodes_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExFlagNodes_h__Script_PCGExtendedToolkit_4288830852{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExFlagNodes_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_States_PCGExFlagNodes_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
