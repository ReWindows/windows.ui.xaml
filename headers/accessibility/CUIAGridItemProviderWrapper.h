#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CUIAGridItemProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAGridItemProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAGridItemProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAGridItemProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAGridItemProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Column@CUIAGridItemProviderWrapper@@UEAAJPEAH@Z
    virtual long get_Column(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnSpan@CUIAGridItemProviderWrapper@@UEAAJPEAH@Z
    virtual long get_ColumnSpan(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainingGrid@CUIAGridItemProviderWrapper@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_ContainingGrid(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Row@CUIAGridItemProviderWrapper@@UEAAJPEAH@Z
    virtual long get_Row(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowSpan@CUIAGridItemProviderWrapper@@UEAAJPEAH@Z
    virtual long get_RowSpan(int *);
};
