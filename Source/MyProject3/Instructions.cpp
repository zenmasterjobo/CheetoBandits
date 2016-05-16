// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject3.h"
#include "Instructions.h"


// Sets default values
AInstructions::AInstructions()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;
    
    //instructions1 = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Instructions"));
    //instructions1.SetHorizontalAlignment(EHTA_Center);
    //instructions1.SetWorldSize(150.0f);
    //RootComponent = instructions1;
    
    //instructions1 = "USE WASD to move";

}

// Called when the game starts or when spawned
void AInstructions::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInstructions::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

