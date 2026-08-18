#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class TextBlockAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSpeechState@TextBlockAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long ClearSpeechState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TextBlockAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveListeningState@TextBlockAutomationPeerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetActiveListeningState(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisambiguationState@TextBlockAutomationPeerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetDisambiguationState(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextBlockAutomationPeerGenerated@DirectUI@@UEAA@XZ
    virtual ~TextBlockAutomationPeerGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextBlockAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextBlockAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TextBlockAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextBlockAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
