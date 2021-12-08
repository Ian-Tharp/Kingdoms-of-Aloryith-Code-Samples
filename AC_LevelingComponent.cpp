// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_LevelingComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UAC_LevelingComponent::UAC_LevelingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UAC_LevelingComponent::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentLevel = 1;

	//Calculate Experience Table
	int32 tempExp;
	int32 j;
	for (int32 i = 1; i < 50; i++) {
		j = (i * 100) + 50;
		if (i >= 30) {
			j += 1000;
		}
		tempExp = ExperienceTable[i - 1];
		ExperienceTable[i] = tempExp + j;
	}
	ExperienceTable[50] = 0;

	//Set initial max exp needed to level up to 100
	ExperienceTable[0] = CurrentMaxExp;
	BufferExp = 0;

	CalculatePercentage();
	
}

// Called every frame
void UAC_LevelingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CalculatePercentage();
	CurrentExp = BufferExp;
	if (CurrentExp >= CurrentMaxExp) {
		LevelUp();
	}
}

void UAC_LevelingComponent::LevelUp() {
	int32 RemainingExp;
	if (CurrentLevel >= MaxLevel) {
		CurrentExp = CurrentMaxExp;
		BufferExp = CurrentExp;
		CurrentLevel = MaxLevel;
	}
	else {
		++CurrentLevel;
		RemainingExp = BufferExp - CurrentMaxExp;
		CalculateMaxExp();
		CurrentExp = 0;
		BufferExp = 0;
		AddExp(RemainingExp);
	}
}

void UAC_LevelingComponent::AddExp(float Amount) { BufferExp += Amount; }
void UAC_LevelingComponent::CalculateMaxExp() { CurrentMaxExp = ExperienceTable[CurrentLevel - 1]; }
void UAC_LevelingComponent::CalculatePercentage() { CurrentPercentage = CurrentExp / MaxExp; }
