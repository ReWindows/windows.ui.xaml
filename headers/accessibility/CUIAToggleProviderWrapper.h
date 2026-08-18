#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CUIAToggleProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAToggleProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAToggleProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAToggleProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAToggleProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Toggle@CUIAToggleProviderWrapper@@UEAAJXZ
    virtual long Toggle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleState@CUIAToggleProviderWrapper@@UEAAJPEAW4ToggleState@@@Z
    virtual long get_ToggleState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleStateImpl@CUIAToggleProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_ToggleStateImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
};
