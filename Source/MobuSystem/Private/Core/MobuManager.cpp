// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/MobuManager.h"
#include "Components/BillboardComponent.h"


// Sets default values
AMobuManager::AMobuManager()
{
	PrimaryActorTick.bCanEverTick = true;

	MobuBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Mobu Billboard"));
	MobuBillboard->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void AMobuManager::BeginPlay()
{
	Super::BeginPlay();
	
	
}


