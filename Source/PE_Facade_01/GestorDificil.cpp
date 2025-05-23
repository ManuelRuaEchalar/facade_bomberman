// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorDificil.h"

AGestorDificil::AGestorDificil()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> HardMeshFinder(TEXT("StaticMesh'/Game/StarterContent/Goomba.Goomba'"));
	if (HardMeshFinder.Succeeded())
	{
		HardMesh = HardMeshFinder.Object;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo cargar el mesh para dificultad difícil"));
	}
}

void AGestorDificil::BeginPlay()
{
	Super::BeginPlay();

	FVector BaseLocation = FVector(-500.0f, -20.0f, 290.0f);
	FRotator SpawnRotation = FRotator::ZeroRotator;
	for (int i = 0; i < 3; ++i)
	{
		FVector SpawnLocation = BaseLocation + FVector(i * 200.0f, 0.0f, 0.0f);
		AGoombaEnemigo* Goomba = GetWorld()->SpawnActor<AGoombaEnemigo>(AGoombaEnemigo::StaticClass(), SpawnLocation, SpawnRotation);
		if (Goomba)
		{
			Goomba->SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
			if (HardMesh)
			{
				Goomba->SetMesh(HardMesh);
			}
		}
	}
}

// Called every frame
void AGestorDificil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorDificil::EnemyLife()
{

	if (GEngine)
	{
		//Enemigo -> SetEnemyLife(EnemyLifeExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La vida del enemigo es: %f"), EnemyLifeExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la vida del enemigo"));
	}

}

void AGestorDificil::EnemySpeed()
{
	if (GEngine)
	{
		// Enemigo -> SetEnemySpeed(EnemySpeedExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La velocidad del enemigo es: %f"), EnemySpeedExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la velocidad del enemigo"));
	}
}

void AGestorDificil::EnemyDamage()
{

	if (GEngine)
	{
		// Enemigo -> SetEnemyDamage(EnemyDamageExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El da�o del enemigo es: %f"), EnemyDamageExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el da�o del enemigo"));
	}
}

void AGestorDificil::EnemyOleadas()
{
	if (GEngine)
	{
		// EnemigoFactory -> SetEnemyOleadas(EnemyOleadasExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El numero de oleadas del enemigo es: %d"), EnemyOleadasExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el numero de oleadas del enemigo"));
	}
}

void AGestorDificil::Bonuses()
{
	if (GEngine)
	{
		// Bonus -> SetBonus(BonusesExtreme);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El numero de bonus del enemigo es: %d"), BonusesExtreme));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el numero de bonus del enemigo"));
	}
}

