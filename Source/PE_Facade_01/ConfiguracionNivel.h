// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ConfiguracionNivel.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UConfiguracionNivel : public UInterface
{
	GENERATED_BODY()
};


class PE_FACADE_01_API IConfiguracionNivel
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void EnemyLife() = 0;
	virtual void EnemySpeed() = 0;
	virtual void EnemyDamage() = 0;
	virtual void EnemyOleadas() = 0;
	virtual void Bonuses() = 0;

};
