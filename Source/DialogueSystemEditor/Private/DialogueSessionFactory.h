#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "DialogueSessionFactory.generated.h"

UCLASS()
class UDialogueSessionFactory : public UFactory
{
	GENERATED_BODY()

public:
	UDialogueSessionFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual FText GetDisplayName() const override;
	virtual FString GetDefaultNewAssetName() const override;
};
