#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CUIADragProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIADragProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIADragProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGrabbedItems@CUIADragProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetGrabbedItems(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIADragProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIADragProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffect@CUIADragProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_DropEffect(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffects@CUIADragProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long get_DropEffects(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGrabbed@CUIADragProviderWrapper@@UEAAJPEAH@Z
    virtual long get_IsGrabbed(int *);
};
