// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_PlayerAttributes.h"
#include "Main_PlayerCharacter.h"
#include "AC_LevelingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CODENAME_COBALT_API UAC_LevelingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_LevelingComponent();

	//Variables
	UPROPERTY(BlueprintReadWrite, meta = (ClampMin = 1), meta = (ClampMax = 50))
	int32 CurrentLevel = 1;

	UPROPERTY(BlueprintReadOnly, meta = (ClampMin = 0), meta = (ClampMax = 50))
	int32 MaxLevel = 50;

	UPROPERTY(BlueprintReadOnly, meta = (ClampMin = 0))
	float CurrentExp = 0;

	UPROPERTY(BlueprintReadOnly, meta = (ClampMin = 0))
	float CurrentMaxExp = 100;

	UPROPERTY(BlueprintReadOnly, meta = (ClampMin = 0))
	float MaxExp;

	UPROPERTY(BlueprintReadOnly)
	float CurrentPercentage;

	UPROPERTY(BlueprintReadOnly)
	float BufferExp;

	float ExperienceTable[50];

	UFUNCTION(BlueprintCallable)
	void LevelUp();
	
	UFUNCTION(BlueprintCallable)
	void AddExp(float Amount);

	void CalculateMaxExp();
	void CalculatePercentage();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
