// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"
#include "LightSwitchCodeOnly.generated.h"

UCLASS()
class FPSPROJECT_API ALightSwitchCodeOnly : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitchCodeOnly();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Point Light Component
	UPROPERTY(VisibleAnywhere, Category = "Switch Components")
	UPointLightComponent* PointLight1;

	// Sphere Component
	UPROPERTY(VisibleAnywhere, Category = "Switch Components")
	USphereComponent* Sphere1;

	// Called when something enters sphere component
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//called when something leaves sphere component
	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	// Toggles Light Component's visibility
	UFUNCTION()
	void ToggleLight();

	// Desired Intensity for light
	UPROPERTY(VisibleAnywhere, Category = "Switch Variables")
	float DesiredIntensity;

};
