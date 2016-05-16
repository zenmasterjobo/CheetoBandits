// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT3_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
    
    
    
public:
    AEnemyAIController();
    
    virtual void BeginPlay() override;
    
    virtual void Tick(float DeltaSeconds) override;
    
    virtual void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result) override;
	
	
	
};
