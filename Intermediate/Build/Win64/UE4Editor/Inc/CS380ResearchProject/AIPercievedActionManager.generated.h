// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CS380RESEARCHPROJECT_AIPercievedActionManager_generated_h
#error "AIPercievedActionManager.generated.h already included, missing '#pragma once' in AIPercievedActionManager.h"
#endif
#define CS380RESEARCHPROJECT_AIPercievedActionManager_generated_h

#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNgram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNgram(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPercentCertain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPercentCertain(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreditction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<PlayerActions>*)Z_Param__Result=this->GetPreditction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGameTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGameTime(Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecieveAction) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_action); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RecieveAction(PlayerActions(Z_Param_action),Z_Param_actor); \
		P_NATIVE_END; \
	}


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNgram) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNgram(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPercentCertain) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPercentCertain(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreditction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<PlayerActions>*)Z_Param__Result=this->GetPreditction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGameTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGameTime(Z_Param_Time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecieveAction) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_action); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RecieveAction(PlayerActions(Z_Param_action),Z_Param_actor); \
		P_NATIVE_END; \
	}


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPercievedActionManager(); \
	friend CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_UAIPercievedActionManager(); \
public: \
	DECLARE_CLASS(UAIPercievedActionManager, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CS380ResearchProject"), NO_API) \
	DECLARE_SERIALIZER(UAIPercievedActionManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUAIPercievedActionManager(); \
	friend CS380RESEARCHPROJECT_API class UClass* Z_Construct_UClass_UAIPercievedActionManager(); \
public: \
	DECLARE_CLASS(UAIPercievedActionManager, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CS380ResearchProject"), NO_API) \
	DECLARE_SERIALIZER(UAIPercievedActionManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_STANDARD_CONSTRUCTORS \
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


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPercievedActionManager(UAIPercievedActionManager&&); \
	NO_API UAIPercievedActionManager(const UAIPercievedActionManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPercievedActionManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPercievedActionManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIPercievedActionManager)


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_PRIVATE_PROPERTY_OFFSET
#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_78_PROLOG
#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_PRIVATE_PROPERTY_OFFSET \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_RPC_WRAPPERS \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_INCLASS \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_PRIVATE_PROPERTY_OFFSET \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_INCLASS_NO_PURE_DECLS \
	CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CS380ResearchProj_Source_CS380ResearchProject_AIPercievedActionManager_h


#define FOREACH_ENUM_PLAYERACTIONS(op) \
	op(NoPrediction) \
	op(Foward) \
	op(Backward) \
	op(Idle) \
	op(Uppercut) \
	op(Hook) \
	op(WithinRange) \
	op(Crouch) \
	op(Counter) \
	op(TOTAL) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
