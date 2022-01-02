#include "BaseAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

UBaseAttributeSet::UBaseAttributeSet() {

}

void UBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) {
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute()) {
		SetCurrentHealth(FMath::Clamp(GetCurrentHealth(), 0.0f, GetMaxHealth()));
	}
	if (Data.EvaluatedData.Attribute == GetCurrentManaAttribute()) {
		SetCurrentMana(FMath::Clamp(GetCurrentMana(), 0.0f, GetMaxMana()));
	}
	if (Data.EvaluatedData.Attribute == GetCurrentStaminaAttribute()) {
		SetCurrentStamina(FMath::Clamp(GetCurrentStamina(), 0.0f, GetMaxStamina()));
	}
	if (Data.EvaluatedData.Attribute == GetArmorAttribute()) {
		SetArmor(GetArmor());
	}
	if (Data.EvaluatedData.Attribute == GetStrengthAttribute()) {
		SetStrength(GetStrength());
	}
	if (Data.EvaluatedData.Attribute == GetAgilityAttribute()) {
		SetAgility(GetAgility());
	}
	if (Data.EvaluatedData.Attribute == GetEnduranceAttribute()) {
		SetEndurance(GetEndurance());
	}
	if (Data.EvaluatedData.Attribute == GetIntellectAttribute()) {
		SetIntellect(GetIntellect());
	}
	if (Data.EvaluatedData.Attribute == GetWisdomAttribute()) {
		SetWisdom(GetWisdom());
	}
	if (Data.EvaluatedData.Attribute == GetCharismaAttribute()) {
		SetCharisma(GetCharisma());
	}

	if (Data.EvaluatedData.Attribute == GetMeleeAttackPowerAttribute()) {
		SetMeleeAttackPower(GetMeleeAttackPower());
	}
	if (Data.EvaluatedData.Attribute == GetRangedAttackPowerAttribute()) {
		SetRangedAttackPower(GetRangedAttackPower());
	}
	if (Data.EvaluatedData.Attribute == GetSpellPowerAttribute()) {
		SetSpellPower(GetSpellPower());
	}

	if (Data.EvaluatedData.Attribute == GetMeleeHitChanceAttribute()) {
		SetMeleeHitChance(GetMeleeHitChance());
	}
	if (Data.EvaluatedData.Attribute == GetRangedHitChanceAttribute()) {
		SetRangedHitChance(GetRangedHitChance());
	}
	if (Data.EvaluatedData.Attribute == GetSpellHitChanceAttribute()) {
		SetSpellHitChance(GetSpellHitChance());
	}

	if (Data.EvaluatedData.Attribute == GetMeleeCritChanceAttribute()) {
		SetMeleeCritChance(GetMeleeCritChance());
	}
	if (Data.EvaluatedData.Attribute == GetRangedCritChanceAttribute()) {
		SetRangedCritChance(GetRangedCritChance());
	}
	if (Data.EvaluatedData.Attribute == GetSpellCritChanceAttribute()) {
		SetSpellCritChance(GetSpellCritChance());
	}

	if (Data.EvaluatedData.Attribute == GetArmorPenetrationAttribute()) {
		SetArmorPenetration(GetArmorPenetration());
	}
	if (Data.EvaluatedData.Attribute == GetSpellPenetrationAttribute()) {
		SetSpellPenetration(GetSpellPenetration());
	}

	if (Data.EvaluatedData.Attribute == GetDodgeChanceAttribute()) {
		SetDodgeChance(GetDodgeChance());
	}
	if (Data.EvaluatedData.Attribute == GetParryChanceAttribute()) {
		SetParryChance(GetParryChance());
	}
	if (Data.EvaluatedData.Attribute == GetBlockChanceAttribute()) {
		SetBlockChance(GetBlockChance());
	}
	if (Data.EvaluatedData.Attribute == GetBlockAmountAttribute()) {
		SetBlockAmount(GetBlockAmount());
	}
	if (Data.EvaluatedData.Attribute == GetHasteAttribute()) {
		SetHaste(GetHaste());
	}

	if (Data.EvaluatedData.Attribute == GetFireResistanceAttribute()) {
		SetFireResistance(GetFireResistance());
	}
	if (Data.EvaluatedData.Attribute == GetFrostResistanceAttribute()) {
		SetFrostResistance(GetFrostResistance());
	}
	if (Data.EvaluatedData.Attribute == GetHolyResistanceAttribute()) {
		SetHolyResistance(GetHolyResistance());
	}
	if (Data.EvaluatedData.Attribute == GetShadowResistanceAttribute()) {
		SetShadowResistance(GetShadowResistance());
	}
	if (Data.EvaluatedData.Attribute == GetNatureResistanceAttribute()) {
		SetNatureResistance(GetNatureResistance());
	}
	if (Data.EvaluatedData.Attribute == GetArcaneResistanceAttribute()) {
		SetArcaneResistance(GetArcaneResistance());
	}

	if (Data.EvaluatedData.Attribute == GetDevotionAttribute()) {
		SetDevotion(GetDevotion());
	}
	if (Data.EvaluatedData.Attribute == GetProficiencyAttribute()) {
		SetProficiency(GetProficiency());
	}


}
