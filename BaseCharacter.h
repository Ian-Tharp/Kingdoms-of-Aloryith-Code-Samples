#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "BaseCharacter.generated.h"

class UBaseAttributeSet;

UCLASS()
class CODENAME_COBALT_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BaseCharacter")
	UAbilitySystemComponent* AbilitySystemComp;

	UFUNCTION(BlueprintCallable, Category = "BaseCharacter")
	void InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel);

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BaseCharacter")
	const class UBaseAttributeSet* BaseAttributeSetComp;

	//Attribute Gets
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetHealthValues(int32& CurrentHealth, int32& MaxHealth);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetManaValues(int32& CurrentMana, int32& MaxMana);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetStaminaValues(float& CurrentStamina, float& MaxStamina);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetArmorValue(int32& Armor);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetStrengthValue(int32& Strength);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetAgilityValue(int32& Agility);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetEnduranceValue(int32& Endurance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetIntellectValue(int32& Intellect);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetWisdomValue(int32& Wisdom);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetCharismaValue(int32& Charisma);
	//-------------------------------------------------------------------
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetMeleeAttackPowerValue(int32& MeleeAttackPower);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetRangedAttackPowerValue(int32& RangedAttackPower);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetSpellPowerValue(int32& SpellPower);

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetMeleeHitChanceValue(float& MeleeHitChance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetRangedHitChanceValue(float& RangedHitChance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetSpellHitChanceValue(float& SpellHitChance);

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetMeleeCritChanceValue(float& MeleeCritChance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetRangedCritChanceValue(float& RangedCritChance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetSpellCritChanceValue(float& SpellCritChance);

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetArmorPenetrationValue(int32& ArmorPenetration);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetSpellPenetrationValue(int32& SpellPenetration);

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetDodgeChanceValue(float& DodgeChance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetParryChanceValue(float& ParryChance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetBlockChanceValue(float& BlockChance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetBlockAmountValue(int32& BlockAmount);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetHasteValue(float& Haste);

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetFireResistanceValue(int32& FireResistance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetFrostResistanceValue(int32& FrostResistance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetHolyResistanceValue(int32& HolyResistance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetShadowResistanceValue(int32& ShadowResistance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetNatureResistanceValue(int32& NatureResistance);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetArcaneResistanceValue(int32& ArcaneResistance);

	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetDevotionValue(int32& Devotion);
	UFUNCTION(BlueprintPure, Category = "BaseCharacter")
	void GetProficiencyValue(int32& Proficiency);


	//Native Functions
	void OnHealthChangedNative(const FOnAttributeChangeData& Data);
	void OnManaChangedNative(const FOnAttributeChangeData& Data);
	void OnStaminaChangedNative(const FOnAttributeChangeData& Data);
	void OnArmorChangedNative(const FOnAttributeChangeData& Data);
	void OnStrengthChangedNative(const FOnAttributeChangeData& Data);
	void OnAgilityChangedNative(const FOnAttributeChangeData& Data);
	void OnEnduranceChangedNative(const FOnAttributeChangeData& Data);
	void OnIntellectChangedNative(const FOnAttributeChangeData& Data);
	void OnWisdomChangedNative(const FOnAttributeChangeData& Data);
	void OnCharismaChangedNative(const FOnAttributeChangeData& Data);
	void OnMeleeAttackPowerChangedNative(const FOnAttributeChangeData& Data);
	void OnRangedAttackPowerChangedNative(const FOnAttributeChangeData& Data);
	void OnSpellPowerChangedNative(const FOnAttributeChangeData& Data);
	void OnMeleeHitChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnRangedHitChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnSpellHitChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnMeleeCritChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnRangedCritChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnSpellCritChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnArmorPenetrationChangedNative(const FOnAttributeChangeData& Data);
	void OnSpellPenetrationChangedNative(const FOnAttributeChangeData& Data);
	void OnDodgeChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnParryChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnBlockChanceChangedNative(const FOnAttributeChangeData& Data);
	void OnBlockAmountChangedNative(const FOnAttributeChangeData& Data);
	void OnHasteChangedNative(const FOnAttributeChangeData& Data);
	void OnFireResistanceChangedNative(const FOnAttributeChangeData& Data);
	void OnFrostResistanceChangedNative(const FOnAttributeChangeData& Data);
	void OnHolyResistanceChangedNative(const FOnAttributeChangeData& Data);
	void OnShadowResistanceChangedNative(const FOnAttributeChangeData& Data);
	void OnNatureResistanceChangedNative(const FOnAttributeChangeData& Data);
	void OnArcaneResistanceChangedNative(const FOnAttributeChangeData& Data);
	void OnDevotionChangedNative(const FOnAttributeChangeData& Data);
	void OnProficiencyChangedNative(const FOnAttributeChangeData& Data);



	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnHealthChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnManaChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnStaminaChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnArmorChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnStrengthChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnAgilityChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnEnduranceChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnIntellectChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnWisdomChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnCharismaChanged(int32 OldValue, int32 NewValue);


	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnMeleeAttackPowerChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnRangedAttackPowerChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnSpellPowerChanged(int32 OldValue, int32 NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnMeleeHitChanceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnRangedHitChanceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnSpellHitChanceChanged(float OldValue, float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnMeleeCritChanceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnRangedCritChanceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnSpellCritChanceChanged(float OldValue, float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnArmorPenetrationChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnSpellPenetrationChanged(int32 OldValue, int32 NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnDodgeChanceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnParryChanceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnBlockChanceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnBlockAmountChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnHasteChanged(float OldValue, float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnFireResistanceChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnFrostResistanceChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnHolyResistanceChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnShadowResistanceChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnNatureResistanceChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnArcaneResistanceChanged(int32 OldValue, int32 NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnDevotionChanged(int32 OldValue, int32 NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "BaseCharacter")
	void OnProficiencyChanged(int32 OldValue, int32 NewValue);

};
