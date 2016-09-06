// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "FloatingCube.generated.h"

UCLASS()
class BOUNCINGGAME_API AFloatingCube : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere)
	int32 Delta;

	// Sets default values for this actor's properties
	AFloatingCube();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	float RunningTime;
	
};
