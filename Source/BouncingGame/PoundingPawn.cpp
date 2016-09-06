// Fill out your copyright notice in the Description page of Project Settings.

#include "BouncingGame.h"
#include "PoundingPawn.h"


// Sets default values
APoundingPawn::APoundingPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APoundingPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APoundingPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void APoundingPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

