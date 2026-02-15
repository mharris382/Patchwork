// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGExtendedToolkit_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	PCGEXTENDEDTOOLKIT_API UFunction* Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature();
	PCGEXTENDEDTOOLKIT_API UFunction* Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PCGExtendedToolkit;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit()
	{
		if (!Z_Registration_Info_UPackage__Script_PCGExtendedToolkit.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnBeaconContentAdded__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_PCGExtendedToolkit_OnGlobalEvent__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/PCGExtendedToolkit",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xADD730DF,
			0x0D51A31E,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PCGExtendedToolkit.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_PCGExtendedToolkit.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PCGExtendedToolkit(Z_Construct_UPackage__Script_PCGExtendedToolkit, TEXT("/Script/PCGExtendedToolkit"), Z_Registration_Info_UPackage__Script_PCGExtendedToolkit, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xADD730DF, 0x0D51A31E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
