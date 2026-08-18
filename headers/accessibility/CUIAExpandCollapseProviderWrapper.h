#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CUIAExpandCollapseProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAExpandCollapseProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@CUIAExpandCollapseProviderWrapper@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAExpandCollapseProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@CUIAExpandCollapseProviderWrapper@@UEAAJXZ
    virtual long Expand();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAExpandCollapseProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAExpandCollapseProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@CUIAExpandCollapseProviderWrapper@@UEAAJPEAW4ExpandCollapseState@@@Z
    virtual long get_ExpandCollapseState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseStateImpl@CUIAExpandCollapseProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_ExpandCollapseStateImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
};
