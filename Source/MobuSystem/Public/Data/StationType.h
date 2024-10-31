// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StationType.generated.h"

UENUM(BlueprintType)
enum class EStationType : uint8
{
	// This station can be used by any NPC randomly
	Regular UMETA(DisplayName = "Regular"),
	// This station is linked to 1 or more other stations and will be part of the Priority queue
	Linked UMETA(DisplayName="Linked"),
	// This station is part of a sequence and will be reserved for NPCs on this sequence only
	Sequence UMETA(DisplayName="Sequence"),
	//Hidden UMETA(Hidden)
};
