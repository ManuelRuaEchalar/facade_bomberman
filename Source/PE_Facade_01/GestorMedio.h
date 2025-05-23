// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConfiguracionNivel.h"
#include "GoombaEnemigo.h"
#include "GestorMedio.generated.h"

UCLASS()
class PE_FACADE_01_API AGestorMedio : public AActor, public IConfiguracionNivel
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGestorMedio();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual void EnemyLife() override;
	virtual void EnemySpeed() override;
	virtual void EnemyDamage() override;
	virtual void EnemyOleadas() override;
	virtual void Bonuses() override;

private:

	// class AEnemigo* Enemigo;
	// class ABonus* Bonus;
	// class AFactoryEnemy* Enemigo;

	float EnemyLifeMedium;
	float EnemySpeedMedium;
	float EnemyDamageMedium;
	int32 EnemyOleadasMedium;
	int32 BonusesMedium;
	UStaticMesh* MediumMesh;

};
