#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class CODENAME_COBALT_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	

public:

	UBaseAttributeSet();

	//Attributes for Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData CurrentHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, CurrentHealth);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHealth);
	//------------------------------------------------------------------------------------- Health
	//Attributes for Mana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData CurrentMana;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, CurrentMana);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMana);
	//------------------------------------------------------------------------------------- Mana
	//Attributes for Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData CurrentStamina;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, CurrentStamina);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxStamina);
	//------------------------------------------------------------------------------------- Stamina
	// //Attribute for Armor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Armor);
	//------------------------------------------------------------------------------------- Armor
	//Attribute for Strength
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Strength;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Strength);
	//------------------------------------------------------------------------------------- Strength
	//Attribute for Agility
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Agility;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Agility);
	//------------------------------------------------------------------------------------- Agility
	//Attribute for Endurance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Endurance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Endurance);
	//------------------------------------------------------------------------------------- Endurance
	//Attribute for Intellect
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Intellect;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Intellect);
	//------------------------------------------------------------------------------------- Intellect
	//Attribute for Wisdom
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Wisdom;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Wisdom);
	//------------------------------------------------------------------------------------- Wisdom
	//Attribute for Charisma
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Charisma;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Charisma);
	//------------------------------------------------------------------------------------- Charisma
	//Attribute for Melee Attack Power
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData MeleeAttackPower;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MeleeAttackPower);
	//------------------------------------------------------------------------------------- Melee Attack Power
	//Attribute for Ranged Attack Power
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData RangedAttackPower;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, RangedAttackPower);
	//------------------------------------------------------------------------------------- Ranged Attack Power
	//Attribute for Spell Attack Power
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData SpellPower;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, SpellPower);
	//------------------------------------------------------------------------------------- Spell Power
	//Attribute for Melee Hit Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData MeleeHitChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MeleeHitChance);
	//------------------------------------------------------------------------------------- Melee Hit Chance
	//Attribute for Ranged Hit Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData RangedHitChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, RangedHitChance);
	//------------------------------------------------------------------------------------- Ranged Hit Chance
	//Attribute for Spell Hit Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData SpellHitChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, SpellHitChance);
	//------------------------------------------------------------------------------------- Spell Hit Chance
	//Attribute for Melee Crit Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData MeleeCritChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MeleeCritChance);
	//------------------------------------------------------------------------------------- Melee Crit Chance
	//Attribute for Ranged Crit Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData RangedCritChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, RangedCritChance);
	//------------------------------------------------------------------------------------- Ranged Crit Chance
	//Attribute for Spell Crit Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData SpellCritChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, SpellCritChance);
	//------------------------------------------------------------------------------------- Spell Crit Chance
	//Attribute for Armor Penetration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData ArmorPenetration;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, ArmorPenetration);
	//------------------------------------------------------------------------------------- Armor Penetration
	//Attribute for Spell Penetration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData SpellPenetration;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, SpellPenetration);
	//------------------------------------------------------------------------------------- Spell Penetration
	//Attribute for Dodge Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData DodgeChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, DodgeChance);
	//------------------------------------------------------------------------------------- Dodge Chance
	//Attribute for Parry Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData ParryChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, ParryChance);
	//------------------------------------------------------------------------------------- Parry Chance
	//Attribute for Block Chance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData BlockChance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, BlockChance);
	//------------------------------------------------------------------------------------- Block Chance
	//Attribute for Block Amount
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData BlockAmount;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, BlockAmount);
	//------------------------------------------------------------------------------------- Block Amount
	//Attribute for Haste
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Haste;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Haste);
	//------------------------------------------------------------------------------------- Haste
	//Attribute for Fire Resistance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData FireResistance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, FireResistance);
	//------------------------------------------------------------------------------------- Fire Resistance
	//Attribute for Frost Resistance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData FrostResistance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, FrostResistance);
	//------------------------------------------------------------------------------------- Frost Resistance
	//Attribute for Holy Resistance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData HolyResistance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, HolyResistance);
	//------------------------------------------------------------------------------------- Holy Resistance
	//Attribute for Shadow Resistance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData ShadowResistance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, ShadowResistance);
	//------------------------------------------------------------------------------------- Shadow Resistance
	//Attribute for Nature Resistance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData NatureResistance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, NatureResistance);
	//------------------------------------------------------------------------------------- Nature Resistance
	//Attribute for Arcane Resistance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData ArcaneResistance;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, ArcaneResistance);
	//------------------------------------------------------------------------------------- Arcane Resistance
	//Attribute for Devotion
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Devotion;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Devotion);
	//------------------------------------------------------------------------------------- Devotion
	//Attribute for Proficiency
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseAttribute")
	FGameplayAttributeData Proficiency;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Proficiency);
	//------------------------------------------------------------------------------------- Proficiency

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
};
