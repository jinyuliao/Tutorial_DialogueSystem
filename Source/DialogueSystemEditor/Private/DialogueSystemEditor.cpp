#include "DialogueSystemEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
 
IMPLEMENT_GAME_MODULE(FDialogueSystemEditorModule, DialogueSystemEditor);

DEFINE_LOG_CATEGORY(DialogueSystemEditor)
 
#define LOCTEXT_NAMESPACE "DialogueSystemEditor"
 
void FDialogueSystemEditorModule::StartupModule()
{
}
 
void FDialogueSystemEditorModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
