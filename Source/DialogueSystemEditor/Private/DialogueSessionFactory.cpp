#include "DialogueSessionFactory.h"
#include "DialogueSession.h"

#define LOCTEXT_NAMESPACE "DialogueSessionFactory"

UDialogueSessionFactory::UDialogueSessionFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UDialogueSession::StaticClass();
}

UObject* UDialogueSessionFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UObject>(InParent, Class, Name, Flags | RF_Transactional);
}

FText UDialogueSessionFactory::GetDisplayName() const
{
	return LOCTEXT("FactoryName", "Dialogue Session");
}

FString UDialogueSessionFactory::GetDefaultNewAssetName() const
{
	return "DialogueSession";
}

#undef LOCTEXT_NAMESPACE 
