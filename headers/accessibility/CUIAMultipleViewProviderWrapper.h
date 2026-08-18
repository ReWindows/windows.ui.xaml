#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CUIAMultipleViewProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAMultipleViewProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAMultipleViewProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedViews@CUIAMultipleViewProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSupportedViews(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewName@CUIAMultipleViewProviderWrapper@@UEAAJHPEAPEAG@Z
    virtual long GetViewName(int, unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAMultipleViewProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAMultipleViewProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentView@CUIAMultipleViewProviderWrapper@@UEAAJH@Z
    virtual long SetCurrentView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentView@CUIAMultipleViewProviderWrapper@@UEAAJPEAH@Z
    virtual long get_CurrentView(int *);
};
