// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CS380ResearchProject.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1CS380ResearchProject() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();

	CS380RESEARCHPROJECT_API class UEnum* Z_Construct_UEnum_CS380ResearchProject_PlayerActions();
	CS380RESEARCHPROJECT_API class UFunction* Z_Construct_UFunction_UAIPercievedActionManager_RecieveAction();
	CS380RESEARCHPROJECT_API class UFunction* Z_Construct_UFunction_UAIPercievedActionManager_SetGameTime();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_UAIPercievedActionManager_NoRegister();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_UAIPercievedActionManager();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_ABaseCharacter();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_ACS380ResearchProjectCharacter_NoRegister();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_ACS380ResearchProjectCharacter();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_ACS380ResearchProjectGameMode_NoRegister();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_ACS380ResearchProjectGameMode();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_AMyDude_NoRegister();
	CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_AMyDude();
	CS380RESEARCHPROJECT_API class UPackage* Z_Construct_UPackage__Script_CS380ResearchProject();
static UEnum* PlayerActions_StaticEnum()
{
	extern CS380RESEARCHPROJECT_API class UPackage* Z_Construct_UPackage__Script_CS380ResearchProject();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern CS380RESEARCHPROJECT_API class UEnum* Z_Construct_UEnum_CS380ResearchProject_PlayerActions();
		Singleton = GetStaticEnum(Z_Construct_UEnum_CS380ResearchProject_PlayerActions, Z_Construct_UPackage__Script_CS380ResearchProject(), TEXT("PlayerActions"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PlayerActions(PlayerActions_StaticEnum, TEXT("/Script/CS380ResearchProject"), TEXT("PlayerActions"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CS380ResearchProject_PlayerActions()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_CS380ResearchProject();
		extern uint32 Get_Z_Construct_UEnum_CS380ResearchProject_PlayerActions_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PlayerActions"), 0, Get_Z_Construct_UEnum_CS380ResearchProject_PlayerActions_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlayerActions"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("PlayerActions::Punch"), 0);
			EnumNames.Emplace(TEXT("PlayerActions::Kick"), 1);
			EnumNames.Emplace(TEXT("PlayerActions::Block"), 2);
			EnumNames.Emplace(TEXT("PlayerActions::PlayerActions_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("PlayerActions");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Block.DisplayName"), TEXT("Block"));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Kick.DisplayName"), TEXT("Kick"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("AIPercievedActionManager.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Punch.DisplayName"), TEXT("Punch"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CS380ResearchProject_PlayerActions_CRC() { return 2063454778U; }
	void UAIPercievedActionManager::StaticRegisterNativesUAIPercievedActionManager()
	{
		UClass* Class = UAIPercievedActionManager::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "RecieveAction", (Native)&UAIPercievedActionManager::execRecieveAction },
			{ "SetGameTime", (Native)&UAIPercievedActionManager::execSetGameTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_UAIPercievedActionManager_RecieveAction()
	{
		struct AIPercievedActionManager_eventRecieveAction_Parms
		{
			PlayerActions action;
			AActor* actor;
		};
		UObject* Outer=Z_Construct_UClass_UAIPercievedActionManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RecieveAction"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(AIPercievedActionManager_eventRecieveAction_Parms));
			UProperty* NewProp_actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(actor, AIPercievedActionManager_eventRecieveAction_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_action = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("action"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(action, AIPercievedActionManager_eventRecieveAction_Parms), 0x0010000000000080, Z_Construct_UEnum_CS380ResearchProject_PlayerActions());
			UProperty* NewProp_action_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_action, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AIPercievedActionManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPercievedActionManager_SetGameTime()
	{
		struct AIPercievedActionManager_eventSetGameTime_Parms
		{
			float Time;
		};
		UObject* Outer=Z_Construct_UClass_UAIPercievedActionManager();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetGameTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(AIPercievedActionManager_eventSetGameTime_Parms));
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, AIPercievedActionManager_eventSetGameTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AIPercievedActionManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPercievedActionManager_NoRegister()
	{
		return UAIPercievedActionManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIPercievedActionManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_CS380ResearchProject();
			OuterClass = UAIPercievedActionManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UAIPercievedActionManager_RecieveAction());
				OuterClass->LinkChild(Z_Construct_UFunction_UAIPercievedActionManager_SetGameTime());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAIPercievedActionManager_RecieveAction(), "RecieveAction"); // 439394419
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAIPercievedActionManager_SetGameTime(), "SetGameTime"); // 2526141100
				static TCppClassTypeInfo<TCppClassTypeTraits<UAIPercievedActionManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AIPercievedActionManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AIPercievedActionManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPercievedActionManager, 4177066235);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPercievedActionManager(Z_Construct_UClass_UAIPercievedActionManager, &UAIPercievedActionManager::StaticClass, TEXT("/Script/CS380ResearchProject"), TEXT("UAIPercievedActionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPercievedActionManager);
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_CS380ResearchProject();
			OuterClass = ABaseCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABaseCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BaseCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCharacter, 3706582638);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCharacter(Z_Construct_UClass_ABaseCharacter, &ABaseCharacter::StaticClass, TEXT("/Script/CS380ResearchProject"), TEXT("ABaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
	void ACS380ResearchProjectCharacter::StaticRegisterNativesACS380ResearchProjectCharacter()
	{
	}
	UClass* Z_Construct_UClass_ACS380ResearchProjectCharacter_NoRegister()
	{
		return ACS380ResearchProjectCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ACS380ResearchProjectCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_CS380ResearchProject();
			OuterClass = ACS380ResearchProjectCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ACS380ResearchProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_SideViewCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SideViewCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SideViewCameraComponent, ACS380ResearchProjectCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ACS380ResearchProjectCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CS380ResearchProjectCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CS380ResearchProjectCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("CS380ResearchProjectCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera beside the character"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ModuleRelativePath"), TEXT("CS380ResearchProjectCharacter.h"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ToolTip"), TEXT("Side view camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACS380ResearchProjectCharacter, 3275957320);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACS380ResearchProjectCharacter(Z_Construct_UClass_ACS380ResearchProjectCharacter, &ACS380ResearchProjectCharacter::StaticClass, TEXT("/Script/CS380ResearchProject"), TEXT("ACS380ResearchProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACS380ResearchProjectCharacter);
	void ACS380ResearchProjectGameMode::StaticRegisterNativesACS380ResearchProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACS380ResearchProjectGameMode_NoRegister()
	{
		return ACS380ResearchProjectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ACS380ResearchProjectGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_CS380ResearchProject();
			OuterClass = ACS380ResearchProjectGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ACS380ResearchProjectGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CS380ResearchProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CS380ResearchProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACS380ResearchProjectGameMode, 623987613);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACS380ResearchProjectGameMode(Z_Construct_UClass_ACS380ResearchProjectGameMode, &ACS380ResearchProjectGameMode::StaticClass, TEXT("/Script/CS380ResearchProject"), TEXT("ACS380ResearchProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACS380ResearchProjectGameMode);
	void AMyDude::StaticRegisterNativesAMyDude()
	{
	}
	UClass* Z_Construct_UClass_AMyDude_NoRegister()
	{
		return AMyDude::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyDude()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CS380ResearchProject();
			OuterClass = AMyDude::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyDude> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyDude.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyDude.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyDude, 2683608651);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyDude(Z_Construct_UClass_AMyDude, &AMyDude::StaticClass, TEXT("/Script/CS380ResearchProject"), TEXT("AMyDude"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDude);
	UPackage* Z_Construct_UPackage__Script_CS380ResearchProject()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/CS380ResearchProject")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x0A648478;
			Guid.B = 0x111B8E75;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
