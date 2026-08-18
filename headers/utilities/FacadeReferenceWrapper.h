#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class FacadeReferenceWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FacadeReferenceWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FacadeReferenceWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FacadeReferenceWrapper@@UEAAKXZ
    virtual unsigned long Release();
};
