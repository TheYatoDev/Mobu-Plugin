// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TaskMode.generated.h"

UENUM(BlueprintType)
enum class ETaskMode : uint8
{
	POI UMETA(DisplayName = "POI"),
	StandardTask UMETA(DisplayName = "Standard Task"),
	Location UMETA(DisplayName = "Location"),
	CustomTask UMETA(DisplayName = "Custom	Task"),
	//Hidden UMETA(Hidden)
};
