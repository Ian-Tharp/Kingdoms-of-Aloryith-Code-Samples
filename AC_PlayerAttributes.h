#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_PlayerAttributes.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CODENAME_COBALT_API UAC_PlayerAttributes : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this component's properties
	UAC_PlayerAttributes();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Main Attribute Stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 0))
		int32 CurrentHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 0))
		int32 MaxHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 0))
		int32 CurrentResource = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 0))
		int32 MaxResource = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 1))
		int32 Strength = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 1))
		int32 Agility = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 1))
		int32 Endurance = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 1))
		int32 Intellect = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 1))
		int32 Wisdom = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 1))
		int32 Charisma = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Stats", meta = (ClampMin = 0))
		int32 Armor = 1;
	
	//Combat and Calculation Stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		int32 MeleeAttackPower = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		int32 RangedAttackPower = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		int32 SpellPower = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float MeleeHitChance = 75.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float RangedHitChance = 75.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float SpellHitChance = 75.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float MeleeCriticalChance = 8.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float RangedCriticalChance = 8.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float SpellCriticalChance = 8.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float ArmorPenetration = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float SpellPenetration = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float DodgeChance = 7.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float ParryChance = 7.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float BlockChance = 7.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		int BlockAmount = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Stats", meta = (ClampMin = 0))
		float Haste = 0.0f;
	//Resistances
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resistances")
		int32 FireResistance = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resistances")
		int32 FrostResistance = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resistances")
		int32 HolyResistance = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resistances")
		int32 ShadowResistance = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resistances")
		int32 NatureResistance = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resistances")
		int32 ArcaneResistance = 0;
	//Miscellaneous Attribute Stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Misc Stats", meta = (ClampMin = 0))
		int32 Devotion = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Misc Stats", meta = (ClampMin = 0))
		int32 Proficiency = 0;


	//Functions to Add/Subtract Amounts to Main Attributes
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void AddStrength(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void AddAgility(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void AddEndurance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void AddIntellect(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void AddWisdom(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void AddCharisma(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void AddArmor(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void AddAllMainStats(int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void SubtractStrength(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void SubtractAgility(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void SubtractEndurance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void SubtractIntellect(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void SubtractWisdom(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void SubtractCharisma(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void SubtractArmor(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Main Stats")
		void SubtractAllMainStats(int32 Amount);

	//Functions to Add/Subtract Amounts to Combat Attribute Stats
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddMeleeAttackPower(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddRangedAttackPower(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddSpellPower(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddMeleeHitChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddRangedHitChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddSpellHitChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddMeleeCriticalChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddRangedCriticalChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddSpellCriticalChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddArmorPenetration(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddSpellPenetration(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddDodgeChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddParryChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddBlockChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddBlockAmount(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddHaste(float Amount);

	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractMeleeAttackPower(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractRangedAttackPower(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractSpellPower(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractMeleeHitChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractRangedHitChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractSpellHitChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractMeleeCriticalChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractRangedCriticalChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractSpellCriticalChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractArmorPenetration(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractSpellPenetration(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractDodgeChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractParryChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractBlockChance(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractBlockAmount(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractHaste(float Amount);

	//Functions to Add/Subtract to Resistances
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddFireResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddFrostResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddHolyResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddShadowResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddNatureResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void AddArcaneResistance(int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractFireResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractFrostResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractHolyResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractShadowResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractNatureResistance(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void SubtractArcaneResistance(int32 Amount);

	//Functions to Add/Subtract to Misc Stats
	UFUNCTION(BlueprintCallable, Category = "Misc Stats")
		void AddDevotion(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Misc Stats")
		void AddProficiency(int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Misc Stats")
		void SubtractDevotion(int32 Amount);
	UFUNCTION(BlueprintCallable, Category = "Misc Stats")
		void SubtractProficiency(int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Combat Stats")
		void CalculateIncomingDamage(float Amount);	
};
