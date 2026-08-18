#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CUIASeeitSayitProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIASeeitSayitProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSpeechState@CUIASeeitSayitProviderWrapper@@UEAAJXZ
    virtual long ClearSpeechState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIASeeitSayitProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIASeeitSayitProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIASeeitSayitProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveListeningState@CUIASeeitSayitProviderWrapper@@UEAAJPEAG@Z
    virtual long SetActiveListeningState(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisambiguationState@CUIASeeitSayitProviderWrapper@@UEAAJPEAG@Z
    virtual long SetDisambiguationState(unsigned short *);
};
