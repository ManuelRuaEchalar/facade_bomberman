// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorMedio.h"

AGestorMedio::AGestorMedio()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MediumMeshFinder(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (MediumMeshFinder.Succeeded())
	{
		MediumMesh = MediumMeshFinder.Object;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo cargar el mesh para dificultad media"));
	}
}

void AGestorMedio::BeginPlay()
{
	Super::BeginPlay();

	FVector BaseLocation = FVector(-500.0f, -20.0f, 290.0f);
	FRotator SpawnRotation = FRotator::ZeroRotator;
	for (int i = 0; i < 2; ++i)
	{
		FVector SpawnLocation = BaseLocation + FVector(i * 100.0f, 0.0f, 0.0f);
		AGoombaEnemigo* Goomba = GetWorld()->SpawnActor<AGoombaEnemigo>(AGoombaEnemigo::StaticClass(), SpawnLocation, SpawnRotation);
		if (Goomba)
		{
			Goomba->SetActorScale3D(FVector(0.8f, 0.8f, 0.8f));
			if (MediumMesh)
			{
				Goomba->SetMesh(MediumMesh);
			}
		}
	}
}

// Called every frame
void AGestorMedio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGestorMedio::EnemyLife()
{

	if (GEngine)
	{
		// Enemigo -> SetEnemyLife(EnemyLifeMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La vida del enemigo es: %f"), EnemyLifeMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la vida del enemigo"));
	}
}

void AGestorMedio::EnemySpeed()
{

	if (GEngine)
	{
		// Enemigo -> SetEnemySpeed(EnemySpeedMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("La velocidad del enemigo es: %f"), EnemySpeedMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar la velocidad del enemigo"));
	}
}

void AGestorMedio::EnemyDamage()
{
	if (GEngine)
	{
		// Enemigo -> SetEnemyDamage(EnemyDamageMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El da�o del enemigo es: %f"), EnemyDamageMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el da�o del enemigo"));
	}
}

void AGestorMedio::EnemyOleadas()
{
	if (GEngine)
	{
		// Enemigo -> SetEnemyOleadas(EnemyOleadasMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El numero de oleadas es: %d"), EnemyOleadasMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el numero de oleadas"));
	}
}

void AGestorMedio::Bonuses()
{
	if (GEngine)
	{
		// Enemigo -> SetBonuses(BonusesMedium);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El numero de bonus es: %d"), BonusesMedium));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha podido enviar el numero de bonus"));
	}
}

