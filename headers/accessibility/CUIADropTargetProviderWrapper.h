#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CUIADropTargetProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIADropTargetProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIADropTargetProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIADropTargetProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIADropTargetProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropTargetEffect@CUIADropTargetProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_DropTargetEffect(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropTargetEffects@CUIADropTargetProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long get_DropTargetEffects(tagSAFEARRAY * *);
};
