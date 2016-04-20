// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Engine/TargetPoint.h"
#include "GameFramework/Actor.h"
#include "Checkpoint.generated.h"

UCLASS()
class MYPROJECT3_API ACheckpoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckpoint();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
    
    UBoxComponent* Checkpoint;
    
    virtual void NotifyActorBeginOverlap(class AActor* Other) override;

	


};
