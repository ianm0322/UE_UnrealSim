// Fill out your copyright notice in the Description page of Project Settings.


#include "PG_PlayerPawn.h"

// Sets default values
APG_PlayerPawn::APG_PlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APG_PlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APG_PlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APG_PlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

