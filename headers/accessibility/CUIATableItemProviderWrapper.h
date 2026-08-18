#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CUIATableItemProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIATableItemProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIATableItemProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaderItems@CUIATableItemProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetColumnHeaderItems(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaderItems@CUIATableItemProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRowHeaderItems(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIATableItemProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIATableItemProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
};
