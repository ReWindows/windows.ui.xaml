#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CUIAStylesProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAStylesProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAStylesProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAStylesProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAStylesProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedProperties@CUIAStylesProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_ExtendedProperties(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillColor@CUIAStylesProviderWrapper@@UEAAJPEAH@Z
    virtual long get_FillColor(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillPatternColor@CUIAStylesProviderWrapper@@UEAAJPEAH@Z
    virtual long get_FillPatternColor(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillPatternStyle@CUIAStylesProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_FillPatternStyle(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Shape@CUIAStylesProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_Shape(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StyleId@CUIAStylesProviderWrapper@@UEAAJPEAH@Z
    virtual long get_StyleId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StyleName@CUIAStylesProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_StyleName(unsigned short * *);
};
