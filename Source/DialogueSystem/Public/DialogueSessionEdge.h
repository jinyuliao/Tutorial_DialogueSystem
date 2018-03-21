#pragma once

#include "CoreMinimal.h"
#include "GenericGraphEdge.h"
#include "DialogueSessionEdge.generated.h"


UCLASS(Blueprintable)
class UDialogueSessionEdge: public UGenericGraphEdge
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DialogueSession")
	FText Selection;
};
