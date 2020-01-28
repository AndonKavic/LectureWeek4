// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Test.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LECTUREWEEK4_API UTest : public UActorComponent
{
	GENERATED_BODY()
	//DECLARE_LOG_CATEGORY_EXTERN(PlayerError, Log, All);

public:	
	// Sets default values for this component's properties
	UPROPERTY(EditAnywhere)
	int32 health;
	UPROPERTY(EditAnywhere)
	int32 score;
	UTest();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
