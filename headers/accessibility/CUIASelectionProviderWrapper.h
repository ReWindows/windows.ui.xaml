#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CUIASelectionProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIASelectionProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIASelectionProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CUIASelectionProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSelection(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIASelectionProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIASelectionProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@CUIASelectionProviderWrapper@@UEAAJPEAH@Z
    virtual long get_CanSelectMultiple(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionRequired@CUIASelectionProviderWrapper@@UEAAJPEAH@Z
    virtual long get_IsSelectionRequired(int *);
};
