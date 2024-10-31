// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/MobuItemBase.h"
#include "Components/SphereComponent.h"


// Sets default values
AMobuItemBase::AMobuItemBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	InteractionRange = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	InteractionRange->SetupAttachment(RootComponent);
	InteractionRange->SetSphereRadius(50.f);
	InteractionText = FText::FromString("Interact");
	TextAttach = CreateDefaultSubobject<USceneComponent>(TEXT("TextAttach"));
	TextAttach->SetupAttachment(RootComponent);
	
}

void AMobuItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (InteractionRange && RootComponent)
	{
		FVector RootLocation = RootComponent->GetComponentLocation();
		InteractionRange->SetWorldLocation(RootLocation);
	}
	
}

void AMobuItemBase::OnMobuInteract_Implementation()
{
	IMobuInterface::OnMobuInteract_Implementation();
}

void AMobuItemBase::OnMobuInteractionRangeEnter_Implementation()
{
	IMobuInterface::OnMobuInteractionRangeEnter_Implementation();
}

void AMobuItemBase::OnMobuInteractionRangeExit_Implementation()
{
	IMobuInterface::OnMobuInteractionRangeExit_Implementation();
}

// Called when the game starts or when spawned
void AMobuItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

FText AMobuItemBase::GetInteractionText()
{
	return InteractionText;
}

USceneComponent* AMobuItemBase::GetInteractionTextAttach() const
{
	return RootComponent;
}


