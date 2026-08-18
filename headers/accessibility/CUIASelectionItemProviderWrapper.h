#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CUIASelectionItemProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIASelectionItemProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@CUIASelectionItemProviderWrapper@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIASelectionItemProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIASelectionItemProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIASelectionItemProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@CUIASelectionItemProviderWrapper@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CUIASelectionItemProviderWrapper@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@CUIASelectionItemProviderWrapper@@UEAAJPEAH@Z
    virtual long get_IsSelected(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainer@CUIASelectionItemProviderWrapper@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_SelectionContainer(IRawElementProviderSimple * *);
};
