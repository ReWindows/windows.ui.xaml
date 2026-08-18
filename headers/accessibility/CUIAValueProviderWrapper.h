#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CUIAValueProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAValueProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIAValueProviderWrapper@@QEAA@PEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@@Z
    CUIAValueProviderWrapper(IUIAProvider *, CUIAWindow *, UIAIdentifiers *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAValueProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAValueProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAValueProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CUIAValueProviderWrapper@@UEAAJPEBG@Z
    virtual long SetValue(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@CUIAValueProviderWrapper@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CUIAValueProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_Value(unsigned short * *);
};
