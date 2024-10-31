// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/MobuAIController.h"
#include "AI/MobuRoutineTree.h"
//#include "BehaviorTree/BehaviorTree.h"
#include "Navigation/CrowdFollowingComponent.h"


AMobuAIController::AMobuAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	// Initial stuff
}

void AMobuAIController::BeginPlay()
{
	Super::BeginPlay();

	if (MobuRoutineTree)
	{
		RunBehaviorTree(MobuRoutineTree);
	}
	
}
