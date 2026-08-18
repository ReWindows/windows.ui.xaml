#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CUIACustomNavigationProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIACustomNavigationProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIACustomNavigationProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CUIACustomNavigationProviderWrapper@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderSimple@@@Z
    virtual long Navigate(int, IRawElementProviderSimple * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIACustomNavigationProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIACustomNavigationProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
};
