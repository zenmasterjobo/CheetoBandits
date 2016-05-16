// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "Instructions.generated.h"

UCLASS()
class MYPROJECT3_API AInstructions : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInstructions();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
    //FString instructions1;
    
    //UTextRenderComponent* instructions1;
    
    //void UpdateTimerDisplay();
    
    //void AdvanceTimer();
    
    //void CountdownHasFinished();
    
    //FTimerHandle CountdownTimerHandle;
    
};
