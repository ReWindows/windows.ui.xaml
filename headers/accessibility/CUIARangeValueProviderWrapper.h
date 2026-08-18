#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CUIARangeValueProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIARangeValueProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIARangeValueProviderWrapper@@QEAA@PEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@@Z
    CUIARangeValueProviderWrapper(IUIAProvider *, CUIAWindow *, UIAIdentifiers *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIARangeValueProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIARangeValueProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIARangeValueProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CUIARangeValueProviderWrapper@@UEAAJN@Z
    virtual long SetValue(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueImpl@CUIARangeValueProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long SetValueImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@CUIARangeValueProviderWrapper@@UEAAJPEAH@Z
    virtual long get_IsReadOnly(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeChange@CUIARangeValueProviderWrapper@@UEAAJPEAN@Z
    virtual long get_LargeChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeChangeImpl@CUIARangeValueProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_LargeChangeImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximum@CUIARangeValueProviderWrapper@@UEAAJPEAN@Z
    virtual long get_Maximum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimum@CUIARangeValueProviderWrapper@@UEAAJPEAN@Z
    virtual long get_Minimum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallChange@CUIARangeValueProviderWrapper@@UEAAJPEAN@Z
    virtual long get_SmallChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CUIARangeValueProviderWrapper@@UEAAJPEAN@Z
    virtual long get_Value(double *);
};
