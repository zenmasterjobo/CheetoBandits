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

    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laps")
    float laps;
	
    UPROPERTY(EditAnywhere, Category="Finish")
    bool finished;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Finished")
    float done;
    
    UBoxComponent* Checkpoint;
    
    //void AWaypoint(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
    
    //TArray<class ATargetPoint*> Laps;
    
    virtual void NotifyActorBeginOverlap(class AActor* Other) override;
};
