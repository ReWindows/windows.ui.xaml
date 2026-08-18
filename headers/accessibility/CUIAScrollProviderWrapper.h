#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CUIAScrollProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAScrollProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIAScrollProviderWrapper@@QEAA@PEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@@Z
    CUIAScrollProviderWrapper(IUIAProvider *, CUIAWindow *, UIAIdentifiers *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAScrollProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAScrollProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAScrollProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@CUIAScrollProviderWrapper@@UEAAJW4ScrollAmount@@0@Z
    virtual long Scroll(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPercent@CUIAScrollProviderWrapper@@UEAAJNN@Z
    virtual long SetScrollPercent(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPercentImpl@CUIAScrollProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long SetScrollPercentImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollPercent@CUIAScrollProviderWrapper@@UEAAJPEAN@Z
    virtual long get_HorizontalScrollPercent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollPercentImpl@CUIAScrollProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_HorizontalScrollPercentImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalViewSize@CUIAScrollProviderWrapper@@UEAAJPEAN@Z
    virtual long get_HorizontalViewSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontallyScrollable@CUIAScrollProviderWrapper@@UEAAJPEAH@Z
    virtual long get_HorizontallyScrollable(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollPercent@CUIAScrollProviderWrapper@@UEAAJPEAN@Z
    virtual long get_VerticalScrollPercent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollPercentImpl@CUIAScrollProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_VerticalScrollPercentImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalViewSize@CUIAScrollProviderWrapper@@UEAAJPEAN@Z
    virtual long get_VerticalViewSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticallyScrollable@CUIAScrollProviderWrapper@@UEAAJPEAH@Z
    virtual long get_VerticallyScrollable(int *);
};
