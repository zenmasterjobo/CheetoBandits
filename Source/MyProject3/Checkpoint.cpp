// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject3.h"
#include "Checkpoint.h"
#include "MyProject3Pawn.h"


// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    Checkpoint = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerComp"));
    Checkpoint->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    Checkpoint->SetCollisionResponseToAllChannels(ECR_Ignore);
    Checkpoint->SetCollisionResponseToChannel(ECC_Vehicle, ECR_Overlap);
}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckpoint::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ACheckpoint::NotifyActorBeginOverlap(class AActor* Other)
{
    Super::NotifyActorBeginOverlap(Other);
    AMyProject3Pawn* Vehicle = Cast<AMyProject3Pawn>(Other);
    if(Vehicle)
    {
        Vehicle->OnTrackPointReached();
    }
}


