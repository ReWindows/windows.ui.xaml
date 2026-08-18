#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CUIAWindowProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAWindowProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CUIAWindowProviderWrapper@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAWindowProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAWindowProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAWindowProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@CUIAWindowProviderWrapper@@UEAAJW4WindowVisualState@@@Z
    virtual long SetVisualState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInputIdle@CUIAWindowProviderWrapper@@UEAAJHPEAH@Z
    virtual long WaitForInputIdle(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanMaximize@CUIAWindowProviderWrapper@@UEAAJPEAH@Z
    virtual long get_CanMaximize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanMinimize@CUIAWindowProviderWrapper@@UEAAJPEAH@Z
    virtual long get_CanMinimize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModal@CUIAWindowProviderWrapper@@UEAAJPEAH@Z
    virtual long get_IsModal(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@CUIAWindowProviderWrapper@@UEAAJPEAH@Z
    virtual long get_IsTopmost(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowInteractionState@CUIAWindowProviderWrapper@@UEAAJPEAW4WindowInteractionState@@@Z
    virtual long get_WindowInteractionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowInteractionStateImpl@CUIAWindowProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_WindowInteractionStateImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowVisualState@CUIAWindowProviderWrapper@@UEAAJPEAW4WindowVisualState@@@Z
    virtual long get_WindowVisualState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowVisualStateImpl@CUIAWindowProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_WindowVisualStateImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
};
