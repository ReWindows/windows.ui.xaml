#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManagedSeeitSayitProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSpeechState@CManagedSeeitSayitProvider@@UEAAJXZ
    virtual long ClearSpeechState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedSeeitSayitProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedSeeitSayitProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveListeningState@CManagedSeeitSayitProvider@@UEAAJAEBVxstring_ptr@@@Z
    virtual long SetActiveListeningState(xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisambiguationState@CManagedSeeitSayitProvider@@UEAAJAEBVxstring_ptr@@@Z
    virtual long SetDisambiguationState(xstring_ptr const &);
};
