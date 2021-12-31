#include "AC_PlayerAttributes.h"

// Sets default values for this component's properties
UAC_PlayerAttributes::UAC_PlayerAttributes()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	//SetIsReplicatedByDefault(true);
}

// Called when the game starts
void UAC_PlayerAttributes::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAC_PlayerAttributes::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


//Adding Main Player Attributes
void UAC_PlayerAttributes::AddStrength(int32 Amount) {
	Strength += Amount;
	MeleeAttackPower += Amount;
	MeleeHitChance += Amount * 0.1f;
	MeleeCriticalChance += Amount * 0.01f;
	ArmorPenetration += Amount * 0.01f;
	ParryChance += Amount / 200.0f;
	BlockChance += Amount / 200.0f;
	BlockAmount += Amount;
}
void UAC_PlayerAttributes::AddAgility(int32 Amount) {
	Agility += Amount;
	MeleeAttackPower += Amount / 2;
	MeleeHitChance += Amount * 0.03f;
	MeleeCriticalChance += Amount * 0.01f;
	RangedAttackPower += Amount;
	RangedHitChance += Amount * 0.3f;
	RangedCriticalChance += Amount * 0.01f;
	DodgeChance += Amount / 200.0f;
	Haste += Amount / 250.0f;
}
void UAC_PlayerAttributes::AddEndurance(int32 Amount) {
	Endurance += Amount;
	CurrentHealth += Amount * 10;
	MaxHealth += Amount * 10;
	Armor += Amount * 2;
}
void UAC_PlayerAttributes::AddIntellect(int32 Amount) {
	Intellect += Amount;
	SpellPower += Amount;
	SpellHitChance += Amount * 0.1f;
	SpellCriticalChance += Amount * 0.01f;
	SpellPenetration += Amount * 0.01f;
	Proficiency += Amount;
}
void UAC_PlayerAttributes::AddWisdom(int32 Amount) {
	Wisdom += Amount;
	SpellPower += Amount / 2;
	SpellHitChance += Amount * 0.05f;
	SpellCriticalChance += Amount * 0.01f;
	Haste += Amount / 100.0f;
}
void UAC_PlayerAttributes::AddCharisma(int32 Amount) {
	Charisma += Amount;
	Devotion += Amount * 2;
}
void UAC_PlayerAttributes::AddArmor(int32 Amount) { Armor += Amount; }
void UAC_PlayerAttributes::AddAllMainStats(int32 Amount) {
	AddStrength(Amount);
	AddAgility(Amount);
	AddEndurance(Amount);
	AddIntellect(Amount);
	AddWisdom(Amount);
	AddCharisma(Amount);
}

//Subtracting Main Player Attributes
void UAC_PlayerAttributes::SubtractStrength(int32 Amount) {
	Strength -= Amount;
	MeleeAttackPower -= Amount;
	MeleeHitChance -= Amount * 0.1f;
	MeleeCriticalChance -= Amount * 0.01f;
	ParryChance -= Amount / 200.0f;
	BlockChance -= Amount / 200.0f;
	BlockAmount -= Amount;
}
void UAC_PlayerAttributes::SubtractAgility(int32 Amount) {
	Agility -= Amount;
	MeleeAttackPower -= Amount / 2;
	MeleeHitChance -= Amount * 0.05f;
	MeleeCriticalChance -= Amount * 0.01f;
	RangedAttackPower -= Amount;
	RangedHitChance -= Amount * 0.1f;
	RangedCriticalChance -= Amount * 0.01f;
	DodgeChance -= Amount / 200.0f;
	Haste -= Amount / 250.0f;
}
void UAC_PlayerAttributes::SubtractEndurance(int32 Amount) {
	Endurance -= Amount;
	CurrentHealth -= Amount * 10;
	MaxHealth -= Amount * 10;
	Armor -= Amount * 2;
}
void UAC_PlayerAttributes::SubtractIntellect(int32 Amount) {
	Intellect -= Amount;
	SpellPower -= Amount;
	SpellHitChance -= Amount * 0.1f;
	SpellCriticalChance -= Amount * 0.01f;
	SpellPenetration -= Amount * 0.01f;
	Proficiency -= Amount;
}
void UAC_PlayerAttributes::SubtractWisdom(int32 Amount) {
	Wisdom -= Amount;
	SpellPower -= Amount / 2;
	SpellHitChance -= Amount * 0.05f;
	SpellCriticalChance -= Amount * 0.01f;
	Haste -= Amount / 100.0f;
}
void UAC_PlayerAttributes::SubtractCharisma(int32 Amount) {
	Charisma -= Amount;
	Devotion -= Amount * 2;
}
void UAC_PlayerAttributes::SubtractArmor(int32 Amount) { Armor -= Amount; }
void UAC_PlayerAttributes::SubtractAllMainStats(int32 Amount) {
	SubtractStrength(Amount);
	SubtractAgility(Amount);
	SubtractEndurance(Amount);
	SubtractIntellect(Amount);
	SubtractWisdom(Amount);
	SubtractCharisma(Amount);
}

//Adding Combat Attributes
void UAC_PlayerAttributes::AddMeleeAttackPower(int32 Amount) { MeleeAttackPower += Amount; }
void UAC_PlayerAttributes::AddRangedAttackPower(int32 Amount) { RangedAttackPower += Amount; }
void UAC_PlayerAttributes::AddSpellPower(int32 Amount) { SpellPower += Amount; }
void UAC_PlayerAttributes::AddMeleeHitChance(float Amount) { MeleeHitChance += Amount; }
void UAC_PlayerAttributes::AddRangedHitChance(float Amount) { RangedHitChance += Amount; }
void UAC_PlayerAttributes::AddSpellHitChance(float Amount) { SpellHitChance += Amount; }
void UAC_PlayerAttributes::AddMeleeCriticalChance(float Amount) { MeleeCriticalChance += Amount; }
void UAC_PlayerAttributes::AddRangedCriticalChance(float Amount) { RangedCriticalChance += Amount; }
void UAC_PlayerAttributes::AddSpellCriticalChance(float Amount) { SpellCriticalChance += Amount; }
void UAC_PlayerAttributes::AddArmorPenetration(float Amount) { ArmorPenetration += Amount; }
void UAC_PlayerAttributes::AddSpellPenetration(float Amount) { SpellPenetration += Amount; }
void UAC_PlayerAttributes::AddDodgeChance(float Amount) { DodgeChance += Amount; }
void UAC_PlayerAttributes::AddParryChance(float Amount) { ParryChance += Amount; }
void UAC_PlayerAttributes::AddBlockChance(float Amount) { BlockChance += Amount; }
void UAC_PlayerAttributes::AddBlockAmount(float Amount) { BlockAmount += Amount; }
void UAC_PlayerAttributes::AddHaste(float Amount) { Haste += Amount; }
//Subtracting Combat Attributes
void UAC_PlayerAttributes::SubtractMeleeAttackPower(int32 Amount) { MeleeAttackPower -= Amount; }
void UAC_PlayerAttributes::SubtractRangedAttackPower(int32 Amount) { RangedAttackPower -= Amount; }
void UAC_PlayerAttributes::SubtractSpellPower(int32 Amount) { SpellPower -= Amount; }
void UAC_PlayerAttributes::SubtractMeleeHitChance(float Amount) { MeleeHitChance -= Amount; }
void UAC_PlayerAttributes::SubtractRangedHitChance(float Amount) { RangedHitChance -= Amount; }
void UAC_PlayerAttributes::SubtractSpellHitChance(float Amount) { SpellHitChance -= Amount; }
void UAC_PlayerAttributes::SubtractMeleeCriticalChance(float Amount) { MeleeCriticalChance -= Amount; }
void UAC_PlayerAttributes::SubtractRangedCriticalChance(float Amount) { RangedCriticalChance -= Amount; }
void UAC_PlayerAttributes::SubtractSpellCriticalChance(float Amount) { SpellCriticalChance -= Amount; }
void UAC_PlayerAttributes::SubtractArmorPenetration(float Amount) { ArmorPenetration -= Amount; }
void UAC_PlayerAttributes::SubtractSpellPenetration(float Amount) { SpellPenetration -= Amount; }
void UAC_PlayerAttributes::SubtractDodgeChance(float Amount) { DodgeChance -= Amount; }
void UAC_PlayerAttributes::SubtractParryChance(float Amount) { ParryChance -= Amount; }
void UAC_PlayerAttributes::SubtractBlockChance(float Amount) { BlockChance -= Amount; }
void UAC_PlayerAttributes::SubtractBlockAmount(float Amount) { BlockAmount -= Amount; }
void UAC_PlayerAttributes::SubtractHaste(float Amount) { Haste -= Amount; }
//Adding Resistances
void UAC_PlayerAttributes::AddFireResistance(int32 Amount) { FireResistance += Amount; }
void UAC_PlayerAttributes::AddFrostResistance(int32 Amount) { FrostResistance += Amount; }
void UAC_PlayerAttributes::AddHolyResistance(int32 Amount) { HolyResistance += Amount; }
void UAC_PlayerAttributes::AddShadowResistance(int32 Amount) { ShadowResistance += Amount; }
void UAC_PlayerAttributes::AddNatureResistance(int32 Amount) { NatureResistance += Amount; }
void UAC_PlayerAttributes::AddArcaneResistance(int32 Amount) { ArcaneResistance += Amount; }
//Subtracting Resistances
void UAC_PlayerAttributes::SubtractFireResistance(int32 Amount) { FireResistance -= Amount; }
void UAC_PlayerAttributes::SubtractFrostResistance(int32 Amount) { FrostResistance -= Amount; }
void UAC_PlayerAttributes::SubtractHolyResistance(int32 Amount) { HolyResistance -= Amount; }
void UAC_PlayerAttributes::SubtractShadowResistance(int32 Amount) { ShadowResistance -= Amount; }
void UAC_PlayerAttributes::SubtractNatureResistance(int32 Amount) { NatureResistance -= Amount; }
void UAC_PlayerAttributes::SubtractArcaneResistance(int32 Amount) { ArcaneResistance -= Amount; }

//Adding/Subtracting Misc Attributes
void UAC_PlayerAttributes::AddDevotion(int32 Amount) { Devotion += Amount; }
void UAC_PlayerAttributes::AddProficiency(int32 Amount) { Proficiency += Amount; }
void UAC_PlayerAttributes::SubtractDevotion(int32 Amount) { Devotion -= Amount; }
void UAC_PlayerAttributes::SubtractProficiency(int32 Amount) { Proficiency -= Amount; }

//Player Health Functions
void UAC_PlayerAttributes::AddCurrentHealth(int32 Amount) { 
	CurrentHealth += Amount; 
	if (CurrentHealth > MaxHealth) {
		int32 tempOverheal = CurrentHealth - Amount;
		CurrentHealth = MaxHealth;
	}
}
void UAC_PlayerAttributes::SubtractCurrentHealth(int32 Amount) {
	if ((CurrentHealth - Amount) >= 1) {
		CurrentHealth -= Amount;
	}
	else if ((CurrentHealth - Amount) <= 0) {
		int32 tempOverkill = CurrentHealth - Amount;
		CurrentHealth = 0;
		//Player death
		/*if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Player has died!"));
		*/
	}
}
void UAC_PlayerAttributes::AddMaximumHealth(int32 Amount) {
	CurrentHealth += Amount;
	MaxHealth += Amount;
}

void UAC_PlayerAttributes::SubtractMaximumHealth(int32 Amount) {
	if (CurrentHealth - Amount >= 1) {
		CurrentHealth -= Amount;
		MaxHealth -= Amount;
	}
	else {
		//Do something here
	}
}

//-------------------------------------------------------------------------------------------------------------------
//Hit Chance Functions
bool UAC_PlayerAttributes::DetermineSuccessful_MeleeHit() {
	tempChance = rand() % 100 + 1;
	if (tempChance > MeleeHitChance) {
		//If random number is greater than the hit chance, return false, the player misses the attack
		return false;
	}
	else {
		return true;
	}
}
bool UAC_PlayerAttributes::DetermineSuccessful_RangedHit() {
	tempChance = rand() % 100 + 1;
	if (tempChance > RangedHitChance) {
		//If random number is greater than the hit chance, return false, the player misses the attack
		return false;
	}
	else {
		return true;
	}
}
bool UAC_PlayerAttributes::DetermineSuccessful_SpellHit() {
	tempChance = rand() % 100 + 1;
	if (tempChance > SpellHitChance) {
		//If random number is greater than the hit chance, return false, the player misses the attack
		return false;
	}
	else {
		return true;
	}
}
bool UAC_PlayerAttributes::DetermineParry() {
	tempChance = rand() % 100 + 1;
	if (tempChance < ParryChance) {
		//If random number is less than the parry chance (due to the low number nature), return true for successful parry on attack
		return true;
	}
	else {
		return false;
	}
}
bool UAC_PlayerAttributes::DetermineDodge() {
	tempChance = rand() % 100 + 1;
	if (tempChance < DodgeChance) {
		//If random number is less than the dodge chance (due to the low number nature), return true for successful dodge
		return true;
	}
	else {
		return false;
	}
}
bool UAC_PlayerAttributes::DetermineBlock() {
	tempChance = rand() % 100 + 1;
	if (tempChance < BlockChance) {
		//If random number is less than the block chance (due to the low number nature), return true for successful block
		return true;
	}
	else {
		return false;
	}
}

//-------------------------------------------------------------------------------------------------------------------
//Take Melee Damage
int32 UAC_PlayerAttributes::TakeIncomingMeleeDamage(int32 Amount) {
	if (DetermineParry() == true) {
		return 0;
	}
	if (DetermineDodge() == true) {
		return 0;
	}
	if (DetermineBlock() == true) {
		float tempAmount = Amount;
		float tempArmorCalculation = (Armor / 10) * 0.5f;
		tempAmount = tempAmount - tempArmorCalculation;
		tempAmount = tempAmount - BlockAmount;
		tempAmount = ceil(tempAmount);
		if (tempAmount >= 0) {
			SubtractCurrentHealth(tempAmount);
		}
		else {
			SubtractCurrentHealth(0);
		}
		return tempAmount;
	}
	else {
		float tempAmount = Amount;
		float tempArmorCalculation = (Armor / 10) * 0.5f;
		tempAmount = tempAmount - tempArmorCalculation;
		tempAmount = ceil(tempAmount);
		if (tempAmount > 1) {
			SubtractCurrentHealth(tempAmount);
		}
		else {
			SubtractCurrentHealth(1);
		}
		return tempAmount;
	}
}

//Take Ranged Damage
int32 UAC_PlayerAttributes::TakeIncomingRangedDamage(int32 Amount) {
	if (DetermineDodge() == true) {
		return 0;
	}
	else {
		float tempAmount = Amount;
		float tempArmorCalculation = (Armor / 10) * 0.5f;
		tempAmount = tempAmount - tempArmorCalculation;
		tempAmount = ceil(tempAmount);
		if (tempAmount > 1) {
			SubtractCurrentHealth(tempAmount);
		}
		else {
			SubtractCurrentHealth(1);
		}
		return tempAmount;
	}
}

//Take Spell Damage
int32 UAC_PlayerAttributes::TakeIncomingSpellDamage(int32 Amount, int MagicType) {
	if (DetermineDodge() == true) {
		return 0;
	}
	else {
		float tempAmount = Amount;
		float tempArmorCalculation = (Armor / 100) * 0.5f;
		tempAmount = tempAmount - tempArmorCalculation;
		switch (MagicType) {
		//Fire Damage
		case 1:
			tempAmount = tempAmount - FireResistance;
			if (tempAmount > 1) {
				SubtractCurrentHealth(tempAmount);
			}
			else {
				SubtractCurrentHealth(1);
			}
			return tempAmount;
			break;
		//Frost Damage
		case 2:
			tempAmount = tempAmount - FrostResistance;
			if (tempAmount > 1) {
				SubtractCurrentHealth(tempAmount);
			}
			else {
				SubtractCurrentHealth(1);
			}
			return tempAmount;
			break;
		//Holy Damage
		case 3:
			tempAmount = tempAmount - HolyResistance;
			if (tempAmount > 1) {
				SubtractCurrentHealth(tempAmount);
			}
			else {
				SubtractCurrentHealth(1);
			}
			return tempAmount;
			break;
		//Shadow Damage
		case 4:
			tempAmount = tempAmount - ShadowResistance;
			if (tempAmount > 1) {
				SubtractCurrentHealth(tempAmount);
			}
			else {
				SubtractCurrentHealth(1);
			}
			return tempAmount;
			break;
		//Nature Damage
		case 5:
			tempAmount = tempAmount - NatureResistance;
			if (tempAmount > 1) {
				SubtractCurrentHealth(tempAmount);
			}
			else {
				SubtractCurrentHealth(1);
			}
			return tempAmount;
			break;
		//Arcane Damage
		case 6:
			tempAmount = tempAmount - ArcaneResistance;
			if (tempAmount > 1) {
				SubtractCurrentHealth(tempAmount);
			}
			else {
				SubtractCurrentHealth(1);
			}
			return tempAmount;
			break;
		//Other Spell Damage (non resistant)
		default:
			if (tempAmount > 1) {
				SubtractCurrentHealth(tempAmount);
			}
			else {
				SubtractCurrentHealth(1);
			}
			return tempAmount;
			break;
		}
	}
}
