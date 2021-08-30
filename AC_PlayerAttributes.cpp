#include "AC_PlayerAttributes.h"

// Sets default values for this component's properties
UAC_PlayerAttributes::UAC_PlayerAttributes()
{
	PrimaryComponentTick.bCanEverTick = true;
	// ...
	//SetIsReplicatedByDefault(true);
}

// Called when the game starts
void UAC_PlayerAttributes::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UAC_PlayerAttributes::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

//Calculating how much damage the player should take
void UAC_PlayerAttributes::CalculateIncomingDamage(float Amount) {
	
}

//Adding Main Player Attributes
void UAC_PlayerAttributes::AddStrength(int32 Amount) {	//Add Strength
	Strength += Amount;
	MeleeAttackPower += Amount;
	MeleeHitChance += Amount * 0.1f;
	MeleeCriticalChance += Amount * 0.01f;
	ArmorPenetration += Amount * 0.01f;
	ParryChance += Amount / 200.0f;
	BlockChance += Amount / 200.0f;
}
void UAC_PlayerAttributes::AddAgility(int32 Amount) {	//Add Agility
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
void UAC_PlayerAttributes::AddEndurance(int32 Amount) {	//Add Endurance
	Endurance += Amount;
	CurrentHealth += Amount * 10;
	MaxHealth += Amount * 10;
	Armor += Amount * 2;
}
void UAC_PlayerAttributes::AddIntellect(int32 Amount) {	//Add Intellect
	Intellect += Amount;
	SpellPower += Amount;
	SpellHitChance += Amount * 0.1f;
	SpellCriticalChance += Amount * 0.01f;
	SpellPenetration += Amount * 0.01f;
	Proficiency += Amount;
}
void UAC_PlayerAttributes::AddWisdom(int32 Amount) {	//Add Wisdom
	Wisdom += Amount;
	SpellPower += Amount / 2;
	SpellHitChance += Amount * 0.05f;
	SpellCriticalChance += Amount * 0.01f;
	Haste += Amount / 100.0f;
}
void UAC_PlayerAttributes::AddCharisma(int32 Amount) {	//Add Charisma
	Charisma += Amount;
	Devotion += Amount * 2;
}
void UAC_PlayerAttributes::AddArmor(int32 Amount) { Armor += Amount; }	//Add Armor
void UAC_PlayerAttributes::AddAllMainStats(int32 Amount) {		//Add All Stats
	AddStrength(Amount);
	AddAgility(Amount);
	AddEndurance(Amount);
	AddIntellect(Amount);
	AddWisdom(Amount);
	AddCharisma(Amount);
}

//Subtracting Main Player Attributes
void UAC_PlayerAttributes::SubtractStrength(int32 Amount) {	//Subtract Strength
	Strength -= Amount;
	MeleeAttackPower -= Amount;
	MeleeHitChance -= Amount * 0.1f;
	MeleeCriticalChance -= Amount * 0.01f;
	ParryChance -= Amount / 200.0f;
	BlockChance -= Amount / 200.0f;
}
void UAC_PlayerAttributes::SubtractAgility(int32 Amount) {	//Subtract Agility
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
void UAC_PlayerAttributes::SubtractEndurance(int32 Amount) {	//Subtract Endurance
	Endurance -= Amount;
	CurrentHealth -= Amount * 10;
	MaxHealth -= Amount * 10;
	Armor -= Amount * 2;
}
void UAC_PlayerAttributes::SubtractIntellect(int32 Amount) {	//Subtract Intellect
	Intellect -= Amount;
	SpellPower -= Amount;
	SpellHitChance -= Amount * 0.1f;
	SpellCriticalChance -= Amount * 0.01f;
	SpellPenetration -= Amount * 0.01f;
	Proficiency -= Amount;
}
void UAC_PlayerAttributes::SubtractWisdom(int32 Amount) {	//Subtract Wisdom
	Wisdom -= Amount;
	SpellPower -= Amount / 2;
	SpellHitChance -= Amount * 0.05f;
	SpellCriticalChance -= Amount * 0.01f;
	Haste -= Amount / 100.0f;
}
void UAC_PlayerAttributes::SubtractCharisma(int32 Amount) {	//Subtract Charisma
	Charisma -= Amount;
	Devotion -= Amount * 2;
}
void UAC_PlayerAttributes::SubtractArmor(int32 Amount) { Armor -= Amount; }	//Subtract Armor
void UAC_PlayerAttributes::SubtractAllMainStats(int32 Amount) {			//Subtract All Stats
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
