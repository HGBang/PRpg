// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "EngineGlobals.h"
#include "Engine.h"
#include "UObject/NoExportTypes.h"
#include "DrawDebugHelpers.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameInfo.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(BRPG, Log, All);

#define   LOG_CALLINFO   (FString(__FUNCTION__) + TEXT("[") + FString::FromInt(__LINE__) + TEXT("]"))

#define   LOG(Format, ...)   UE_LOG(BRPG, Warning, TEXT("%s : %s"), *LOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

#define   LOGSTRING(str)      UE_LOG(BRPG, Warning, TEXT("%S : %S"), *LOG_CALLINFO, *str)


/**
 * 
 */
UCLASS()
class BRPG_API UGameInfo : public UObject
{
	GENERATED_BODY()
	
};
