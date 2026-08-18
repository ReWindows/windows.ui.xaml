#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CUIAVirtualizedItemProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAVirtualizedItemProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAVirtualizedItemProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAVirtualizedItemProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realize@CUIAVirtualizedItemProviderWrapper@@UEAAJXZ
    virtual long Realize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAVirtualizedItemProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
};
