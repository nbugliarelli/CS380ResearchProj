// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class PlayerActions : uint8;
class AActor;
#ifdef CS380RESEARCHPROJECT_AIPercievedActionManager_generated_h
#error "AIPercievedActionManager.generated.h already included, missing '#pragma once' in AIPercievedActionManager.h"
#endif
#define CS380RESEARCHPROJECT_AIPercievedActionManager_generated_h

#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecieveAction) \
	{ \
		P_GET_ENUM(PlayerActions,Z_Param_action); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RecieveAction(PlayerActions(Z_Param_action),Z_Param_actor); \
		P_NATIVE_END; \
	}


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecieveAction) \
	{ \
		P_GET_ENUM(PlayerActions,Z_Param_action); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RecieveAction(PlayerActions(Z_Param_action),Z_Param_actor); \
		P_NATIVE_END; \
	}


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPercievedActionManager(); \
	friend CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_UAIPercievedActionManager(); \
public: \
	DECLARE_CLASS(UAIPercievedActionManager, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CS380ResearchProject"), NO_API) \
	DECLARE_SERIALIZER(UAIPercievedActionManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAIPercievedActionManager(); \
	friend CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_UAIPercievedActionManager(); \
public: \
	DECLARE_CLASS(UAIPercievedActionManager, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CS380ResearchProject"), NO_API) \
	DECLARE_SERIALIZER(UAIPercievedActionManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPercievedActionManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPercievedActionManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPercievedActionManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPercievedActionManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPercievedActionManager(UAIPercievedActionManager&&); \
	NO_API UAIPercievedActionManager(const UAIPercievedActionManager&); \
public:


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPercievedActionManager(UAIPercievedActionManager&&); \
	NO_API UAIPercievedActionManager(const UAIPercievedActionManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPercievedActionManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPercievedActionManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIPercievedActionManager)


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_PRIVATE_PROPERTY_OFFSET
#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_17_PROLOG
#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_PRIVATE_PROPERTY_OFFSET \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_RPC_WRAPPERS \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_INCLASS \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_PRIVATE_PROPERTY_OFFSET \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_INCLASS_NO_PURE_DECLS \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h


#define FOREACH_ENUM_PLAYERACTIONS(op) \
	op(PlayerActions::Punch) \
	op(PlayerActions::Kick) \
	op(PlayerActions::Block) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
