// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "StandardTasks.generated.h"

UENUM(BlueprintType)
enum class EStandardTasks : uint8
{
	Home UMETA(DisplayName = "Home"),
	// Will search for nearby Bounds and will roam freely inside
	Bounds UMETA(DisplayName = "Bounds"),
	// Wil search for a nearby waypoint
	Waypoint UMETA(DisplayName = "Waypoint"),
	// Will search for nearby paths and will follow one
	Path UMETA(DisplayName = "Path"),
	//Hidden UMETA(Hidden)
};
