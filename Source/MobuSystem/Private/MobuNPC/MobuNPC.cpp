// Fill out your copyright notice in the Description page of Project Settings.


#include "MobuNPC/MobuNPC.h"
#include "AI/MobuAIController.h"
#include "Component/MobuController.h"

// Sets default values
AMobuNPC::AMobuNPC()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MobuController = CreateDefaultSubobject<UMobuController>(TEXT("MobuControllerComponent"));
	AIControllerClass = AMobuAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	
}

// Called when the game starts or when spawned
void AMobuNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMobuNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


