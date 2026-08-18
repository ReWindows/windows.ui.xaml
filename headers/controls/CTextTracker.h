#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CTextTracker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTextTracker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CTextTracker@@UEAAJPEAUTRACKER_PROPERTIES@ITextTracker@@@Z
    virtual long GetProperties(::ITextTracker::TRACKER_PROPERTIES *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CTextTracker@@UEAAJPEAVRichEditEvent@@@Z
    virtual long OnEvent(RichEditEvent *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTextTracker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTextTracker@@UEAAKXZ
    virtual unsigned long Release();
};
