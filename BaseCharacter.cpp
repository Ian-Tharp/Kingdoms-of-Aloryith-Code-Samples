#include "BaseCharacter.h"
#include "BaseAttributeSet.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComp = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (AbilitySystemComp) {
		BaseAttributeSetComp = AbilitySystemComp->GetSet<UBaseAttributeSet>();

		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetCurrentHealthAttribute()).AddUObject(this, &ABaseCharacter::OnHealthChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetCurrentManaAttribute()).AddUObject(this, &ABaseCharacter::OnManaChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetCurrentStaminaAttribute()).AddUObject(this, &ABaseCharacter::OnStaminaChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetArmorAttribute()).AddUObject(this, &ABaseCharacter::OnArmorChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetStrengthAttribute()).AddUObject(this, &ABaseCharacter::OnStrengthChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetAgilityAttribute()).AddUObject(this, &ABaseCharacter::OnAgilityChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetEnduranceAttribute()).AddUObject(this, &ABaseCharacter::OnEnduranceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetIntellectAttribute()).AddUObject(this, &ABaseCharacter::OnIntellectChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetWisdomAttribute()).AddUObject(this, &ABaseCharacter::OnWisdomChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetCharismaAttribute()).AddUObject(this, &ABaseCharacter::OnCharismaChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetMeleeAttackPowerAttribute()).AddUObject(this, &ABaseCharacter::OnMeleeAttackPowerChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetRangedAttackPowerAttribute()).AddUObject(this, &ABaseCharacter::OnRangedAttackPowerChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSpellPowerAttribute()).AddUObject(this, &ABaseCharacter::OnSpellPowerChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetMeleeHitChanceAttribute()).AddUObject(this, &ABaseCharacter::OnMeleeHitChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetRangedHitChanceAttribute()).AddUObject(this, &ABaseCharacter::OnRangedHitChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSpellHitChanceAttribute()).AddUObject(this, &ABaseCharacter::OnSpellHitChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetMeleeCritChanceAttribute()).AddUObject(this, &ABaseCharacter::OnMeleeCritChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetRangedCritChanceAttribute()).AddUObject(this, &ABaseCharacter::OnRangedCritChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSpellCritChanceAttribute()).AddUObject(this, &ABaseCharacter::OnSpellCritChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetArmorPenetrationAttribute()).AddUObject(this, &ABaseCharacter::OnArmorPenetrationChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSpellPenetrationAttribute()).AddUObject(this, &ABaseCharacter::OnSpellPenetrationChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetDodgeChanceAttribute()).AddUObject(this, &ABaseCharacter::OnDodgeChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetParryChanceAttribute()).AddUObject(this, &ABaseCharacter::OnParryChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetBlockChanceAttribute()).AddUObject(this, &ABaseCharacter::OnBlockChanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetBlockAmountAttribute()).AddUObject(this, &ABaseCharacter::OnBlockAmountChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetHasteAttribute()).AddUObject(this, &ABaseCharacter::OnHasteChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetFireResistanceAttribute()).AddUObject(this, &ABaseCharacter::OnFireResistanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetFrostResistanceAttribute()).AddUObject(this, &ABaseCharacter::OnFrostResistanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetHolyResistanceAttribute()).AddUObject(this, &ABaseCharacter::OnHolyResistanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetShadowResistanceAttribute()).AddUObject(this, &ABaseCharacter::OnShadowResistanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetNatureResistanceAttribute()).AddUObject(this, &ABaseCharacter::OnNatureResistanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetArcaneResistanceAttribute()).AddUObject(this, &ABaseCharacter::OnArcaneResistanceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetDevotionAttribute()).AddUObject(this, &ABaseCharacter::OnDevotionChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetProficiencyAttribute()).AddUObject(this, &ABaseCharacter::OnProficiencyChangedNative);
	}

}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Retrieve an input ability an initialize in ability spec
void ABaseCharacter::InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel) {
	if (AbilitySystemComp) {
		if (HasAuthority() && AbilityToGet) {
			AbilitySystemComp->GiveAbility(FGameplayAbilitySpec(AbilityToGet, AbilityLevel, 0));
		}
		AbilitySystemComp->InitAbilityActorInfo(this, this);
	}
}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const {
	return AbilitySystemComp;
}

void ABaseCharacter::GetHealthValues(int32& CurrentHealth, int32& MaxHealth) {
	CurrentHealth = BaseAttributeSetComp->GetCurrentHealth();
	MaxHealth = BaseAttributeSetComp->GetMaxHealth();
}
void ABaseCharacter::GetManaValues(int32& CurrentMana, int32& MaxMana) {
	CurrentMana = BaseAttributeSetComp->GetCurrentMana();
	MaxMana = BaseAttributeSetComp->GetMaxMana();
}
void ABaseCharacter::GetStaminaValues(float& CurrentStamina, float& MaxStamina) {
	CurrentStamina = BaseAttributeSetComp->GetCurrentStamina();
	MaxStamina = BaseAttributeSetComp->GetMaxStamina();
}
void ABaseCharacter::GetArmorValue(int32& Armor) {
	Armor = BaseAttributeSetComp->GetArmor();
}
void ABaseCharacter::GetStrengthValue(int32& Strength) {
	Strength = BaseAttributeSetComp->GetStrength();
}
void ABaseCharacter::GetAgilityValue(int32& Agility) {
	Agility = BaseAttributeSetComp->GetAgility();
}
void ABaseCharacter::GetEnduranceValue(int32& Endurance) {
	Endurance = BaseAttributeSetComp->GetEndurance();
}
void ABaseCharacter::GetIntellectValue(int32& Intellect) {
	Intellect = BaseAttributeSetComp->GetIntellect();
}
void ABaseCharacter::GetWisdomValue(int32& Wisdom) {
	Wisdom = BaseAttributeSetComp->GetWisdom();
}
void ABaseCharacter::GetCharismaValue(int32& Charisma) {
	Charisma = BaseAttributeSetComp->GetCharisma();
}

void ABaseCharacter::GetMeleeAttackPowerValue(int32& MeleeAttackPower) {
	MeleeAttackPower = BaseAttributeSetComp->GetMeleeAttackPower();
}
void ABaseCharacter::GetRangedAttackPowerValue(int32& RangedAttackPower) {
	RangedAttackPower = BaseAttributeSetComp->GetRangedAttackPower();
}
void ABaseCharacter::GetSpellPowerValue(int32& SpellPower) {
	SpellPower = BaseAttributeSetComp->GetSpellPower();
}

void ABaseCharacter::GetMeleeHitChanceValue(float& MeleeHitChance) {
	MeleeHitChance = BaseAttributeSetComp->GetMeleeHitChance();
}
void ABaseCharacter::GetRangedHitChanceValue(float& RangedHitChance) {
	RangedHitChance = BaseAttributeSetComp->GetRangedHitChance();
}
void ABaseCharacter::GetSpellHitChanceValue(float& SpellHitChance) {
	SpellHitChance = BaseAttributeSetComp->GetSpellHitChance();
}

void ABaseCharacter::GetMeleeCritChanceValue(float& MeleeCritChance) {
	MeleeCritChance = BaseAttributeSetComp->GetMeleeCritChance();
}
void ABaseCharacter::GetRangedCritChanceValue(float& RangedCritChance) {
	RangedCritChance = BaseAttributeSetComp->GetRangedCritChance();
}
void ABaseCharacter::GetSpellCritChanceValue(float& SpellCritChance) {
	SpellCritChance = BaseAttributeSetComp->GetSpellCritChance();
}

void ABaseCharacter::GetArmorPenetrationValue(int32& ArmorPenetration) {
	ArmorPenetration = BaseAttributeSetComp->GetArmorPenetration();
}
void ABaseCharacter::GetSpellPenetrationValue(int32& SpellPenetration) {
	SpellPenetration = BaseAttributeSetComp->GetSpellPenetration();
}

void ABaseCharacter::GetDodgeChanceValue(float& DodgeChance) {
	DodgeChance = BaseAttributeSetComp->GetDodgeChance();
}
void ABaseCharacter::GetParryChanceValue(float& ParryChance) {
	ParryChance = BaseAttributeSetComp->GetParryChance();
}
void ABaseCharacter::GetBlockChanceValue(float& BlockChance) {
	BlockChance = BaseAttributeSetComp->GetBlockChance();
}
void ABaseCharacter::GetBlockAmountValue(int32& BlockAmount) {
	BlockAmount = BaseAttributeSetComp->GetBlockAmount();
}
void ABaseCharacter::GetHasteValue(float& Haste) {
	Haste = BaseAttributeSetComp->GetHaste();
}

void ABaseCharacter::GetFireResistanceValue(int32& FireResistance) {
	FireResistance = BaseAttributeSetComp->GetFireResistance();
}
void ABaseCharacter::GetFrostResistanceValue(int32& FrostResistance) {
	FrostResistance = BaseAttributeSetComp->GetFrostResistance();
}
void ABaseCharacter::GetHolyResistanceValue(int32& HolyResistance) {
	HolyResistance = BaseAttributeSetComp->GetHolyResistance();
}
void ABaseCharacter::GetShadowResistanceValue(int32& ShadowResistance) {
	ShadowResistance = BaseAttributeSetComp->GetShadowResistance();
}
void ABaseCharacter::GetNatureResistanceValue(int32& NatureResistance) {
	NatureResistance = BaseAttributeSetComp->GetNatureResistance();
}
void ABaseCharacter::GetArcaneResistanceValue(int32& ArcaneResistance) {
	ArcaneResistance = BaseAttributeSetComp->GetArcaneResistance();
}

void ABaseCharacter::GetDevotionValue(int32& Devotion) {
	Devotion = BaseAttributeSetComp->GetDevotion();
}
void ABaseCharacter::GetProficiencyValue(int32& Proficiency) {
	Proficiency = BaseAttributeSetComp->GetProficiency();
}



//Trigger Blueprint Event
void ABaseCharacter::OnHealthChangedNative(const FOnAttributeChangeData& Data) {
	OnHealthChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnManaChangedNative(const FOnAttributeChangeData& Data) {
	OnManaChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnStaminaChangedNative(const FOnAttributeChangeData& Data) {
	OnStaminaChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnArmorChangedNative(const FOnAttributeChangeData& Data) {
	OnArmorChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnStrengthChangedNative(const FOnAttributeChangeData& Data) {
	OnStrengthChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnAgilityChangedNative(const FOnAttributeChangeData& Data) {
	OnAgilityChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnEnduranceChangedNative(const FOnAttributeChangeData& Data) {
	OnEnduranceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnIntellectChangedNative(const FOnAttributeChangeData& Data) {
	OnIntellectChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnWisdomChangedNative(const FOnAttributeChangeData& Data) {
	OnWisdomChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnCharismaChangedNative(const FOnAttributeChangeData& Data) {
	OnCharismaChanged(Data.OldValue, Data.NewValue);
}

void ABaseCharacter::OnMeleeAttackPowerChangedNative(const FOnAttributeChangeData& Data) {
	OnMeleeAttackPowerChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnRangedAttackPowerChangedNative(const FOnAttributeChangeData& Data) {
	OnRangedAttackPowerChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnSpellPowerChangedNative(const FOnAttributeChangeData& Data) {
	OnSpellPowerChanged(Data.OldValue, Data.NewValue);
}

void ABaseCharacter::OnMeleeHitChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnMeleeHitChanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnRangedHitChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnRangedHitChanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnSpellHitChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnSpellHitChanceChanged(Data.OldValue, Data.NewValue);
}

void ABaseCharacter::OnMeleeCritChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnMeleeCritChanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnRangedCritChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnRangedCritChanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnSpellCritChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnSpellCritChanceChanged(Data.OldValue, Data.NewValue);
}

void ABaseCharacter::OnArmorPenetrationChangedNative(const FOnAttributeChangeData& Data) {
	OnArmorPenetrationChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnSpellPenetrationChangedNative(const FOnAttributeChangeData& Data) {
	OnSpellPenetrationChanged(Data.OldValue, Data.NewValue);
}

void ABaseCharacter::OnDodgeChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnDodgeChanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnParryChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnParryChanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnBlockChanceChangedNative(const FOnAttributeChangeData& Data) {
	OnBlockChanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnBlockAmountChangedNative(const FOnAttributeChangeData& Data) {
	OnBlockAmountChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnHasteChangedNative(const FOnAttributeChangeData& Data) {
	OnHasteChanged(Data.OldValue, Data.NewValue);
}

void ABaseCharacter::OnFireResistanceChangedNative(const FOnAttributeChangeData& Data) {
	OnFireResistanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnFrostResistanceChangedNative(const FOnAttributeChangeData& Data) {
	OnFrostResistanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnHolyResistanceChangedNative(const FOnAttributeChangeData& Data) {
	OnHolyResistanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnShadowResistanceChangedNative(const FOnAttributeChangeData & Data) {
	OnShadowResistanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnNatureResistanceChangedNative(const FOnAttributeChangeData& Data) {
	OnNatureResistanceChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnArcaneResistanceChangedNative(const FOnAttributeChangeData& Data) {
	OnArcaneResistanceChanged(Data.OldValue, Data.NewValue);
}

void ABaseCharacter::OnDevotionChangedNative(const FOnAttributeChangeData& Data) {
	OnDevotionChanged(Data.OldValue, Data.NewValue);
}
void ABaseCharacter::OnProficiencyChangedNative(const FOnAttributeChangeData& Data) {
	OnProficiencyChanged(Data.OldValue, Data.NewValue);
}
