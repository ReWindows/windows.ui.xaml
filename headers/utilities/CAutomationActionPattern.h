#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CAutomationActionPattern {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutomationActionPattern@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSpeechState@CAutomationActionPattern@@UEAAJXZ
    virtual long ClearSpeechState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAutomationActionPattern@@SAJPEAUIUIAutomationPatternInstance@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAutomationPatternInstance *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutomationActionPattern@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutomationActionPattern@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveListeningState@CAutomationActionPattern@@UEAAJPEAG@Z
    virtual long SetActiveListeningState(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisambiguationState@CAutomationActionPattern@@UEAAJPEAG@Z
    virtual long SetDisambiguationState(unsigned short *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutomationActionPattern@@AEAA@XZ
    ~CAutomationActionPattern();
};
