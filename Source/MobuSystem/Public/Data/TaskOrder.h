// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TaskOrder.generated.h"

UENUM(BlueprintType)
enum class ETaskOrder : uint8
{
	// Tasks as executed in the order they were added in the Profile
	Sequential UMETA(DisplayName = "Sequential"),
	// The NPC will pick a random Task to execute. The Profile will never end
	Random UMETA(DisplayName = "Random"),
	// You can override function ovSelectTask and add your own logic to select the Task to execute
	Custom UMETA(DisplayName = "Custom"),
	//Hidden UMETA(Hidden)
};
