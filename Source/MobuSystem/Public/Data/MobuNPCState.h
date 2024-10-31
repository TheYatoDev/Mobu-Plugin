// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MobuNPCState.generated.h"

UENUM(BlueprintType)
enum class EMobuNPCState : uint8
{
	// NPC is travelling to a location
	Travel UMETA(DisplayName = "Travel"),
	// NPC is performing a station activity
	Station UMETA(DisplayName = "Station"),
	// NPC is being interrupted from the routine
	Interrupt UMETA(DisplayName = "Interrupt"),
	// NPC will roam inside the POI
	RoamPOI UMETA(DisplayName = "Roam POI"),
	// Find a nearby bounds and roam inside it
	Bounds UMETA(DisplayName = "Bounds"),
	// Find a new waypoint and go to itt
	Waypoint UMETA(DisplayName = "Waypoint"),
	// Find a nearby path and follow it
	Path UMETA(DisplayName = "Path")
	//Hidden UMETA(Hidden) //Idk if this is needed
};
