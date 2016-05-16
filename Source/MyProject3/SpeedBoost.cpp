// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject3.h"
#include "SpeedBoost.h"
#include "MyProject3Pawn.h"
#include "Vehicles/WheeledVehicleMovementComponent4W.h"


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
    UWheeledVehicleMovementComponent4W* Vehicle4W = CastChecked<UWheeledVehicleMovementComponent4W>(Vehicle->GetVehicleMovement());
   
    if(Vehicle)
   {
       Vehicle->KPH = FMath::Abs(Vehicle4W->GetForwardSpeed()) * 10.0f;
       //GetWorldTimerManager().SetTimer(Speed, Vehicle, &AMyProject3Pawn::BoostOfSpeed, 1.5f, false);
        //Vehicle4W->Mass = 5000.0f;
        
        //Take the GetForwardSeed() and moultiply it by 
        
        
        
    }
    
}
