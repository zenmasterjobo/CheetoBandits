// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject3.h"
#include "SpeedBoost.h"
#include "MyProject3Pawn.h"


// Sets default values
ASpeedBoost::ASpeedBoost()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    Boost = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerComp"));
    Boost->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    Boost->SetCollisionResponseToAllChannels(ECR_Ignore);
    Boost->SetCollisionResponseToChannel(ECC_Vehicle, ECR_Overlap);
    
}

// Called when the game starts or when spawned
void ASpeedBoost::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpeedBoost::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


void ASpeedBoost::NotifyActorBeginOverlap(class AActor* Other)
{
    Super::NotifyActorBeginOverlap(Other);
    AMyProject3Pawn* Vehicle = Cast<AMyProject3Pawn>(Other);
    if(Vehicle)
    {
        Vehicle->BoostOfSpeed();
    }
}
