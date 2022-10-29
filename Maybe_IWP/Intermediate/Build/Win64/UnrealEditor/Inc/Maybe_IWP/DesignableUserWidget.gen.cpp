// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maybe_IWP/DesignableUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesignableUserWidget() {}
// Cross Module References
	MAYBE_IWP_API UClass* Z_Construct_UClass_UDesignableUserWidget_NoRegister();
	MAYBE_IWP_API UClass* Z_Construct_UClass_UDesignableUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Maybe_IWP();
// End Cross Module References
	DEFINE_FUNCTION(UDesignableUserWidget::execOnSynchronizeProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSynchronizeProperties_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UDesignableUserWidget_OnSynchronizeProperties = FName(TEXT("OnSynchronizeProperties"));
	void UDesignableUserWidget::OnSynchronizeProperties()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDesignableUserWidget_OnSynchronizeProperties),NULL);
	}
	void UDesignableUserWidget::StaticRegisterNativesUDesignableUserWidget()
	{
		UClass* Class = UDesignableUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSynchronizeProperties", &UDesignableUserWidget::execOnSynchronizeProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDesignableUserWidget_OnSynchronizeProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDesignableUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "DesignableUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDesignableUserWidget_OnSynchronizeProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDesignableUserWidget, nullptr, "OnSynchronizeProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDesignableUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDesignableUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDesignableUserWidget_OnSynchronizeProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDesignableUserWidget_OnSynchronizeProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDesignableUserWidget);
	UClass* Z_Construct_UClass_UDesignableUserWidget_NoRegister()
	{
		return UDesignableUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDesignableUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDesignableUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Maybe_IWP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDesignableUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDesignableUserWidget_OnSynchronizeProperties, "OnSynchronizeProperties" }, // 1359171205
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDesignableUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DesignableUserWidget.h" },
		{ "ModuleRelativePath", "DesignableUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDesignableUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDesignableUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDesignableUserWidget_Statics::ClassParams = {
		&UDesignableUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDesignableUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDesignableUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDesignableUserWidget()
	{
		if (!Z_Registration_Info_UClass_UDesignableUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDesignableUserWidget.OuterSingleton, Z_Construct_UClass_UDesignableUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDesignableUserWidget.OuterSingleton;
	}
	template<> MAYBE_IWP_API UClass* StaticClass<UDesignableUserWidget>()
	{
		return UDesignableUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDesignableUserWidget);
	struct Z_CompiledInDeferFile_FID_Maybe_IWP_Source_Maybe_IWP_DesignableUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maybe_IWP_Source_Maybe_IWP_DesignableUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDesignableUserWidget, UDesignableUserWidget::StaticClass, TEXT("UDesignableUserWidget"), &Z_Registration_Info_UClass_UDesignableUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDesignableUserWidget), 33608299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maybe_IWP_Source_Maybe_IWP_DesignableUserWidget_h_2161906742(TEXT("/Script/Maybe_IWP"),
		Z_CompiledInDeferFile_FID_Maybe_IWP_Source_Maybe_IWP_DesignableUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maybe_IWP_Source_Maybe_IWP_DesignableUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
