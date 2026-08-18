#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CSeeitSayitPatternHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSeeitSayitPatternHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClientWrapper@CSeeitSayitPatternHandler@@UEAAJPEAUIUIAutomationPatternInstance@@PEAPEAUIUnknown@@@Z
    virtual long CreateClientWrapper(IUIAutomationPatternInstance *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@CSeeitSayitPatternHandler@@UEAAJPEAUIUnknown@@IPEBUUIAutomationParameter@@I@Z
    virtual long Dispatch(IUnknown *, unsigned int, UIAutomationParameter const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSeeitSayitPatternHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSeeitSayitPatternHandler@@UEAAKXZ
    virtual unsigned long Release();
};
