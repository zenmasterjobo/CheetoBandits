// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SpeedBoost.generated.h"

UCLASS()
class MYPROJECT3_API ASpeedBoost : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpeedBoost();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

    UBoxComponent* Boost;
    
    virtual void NotifyActorBeginOverlap(class AActor* Other) override;
	
};
