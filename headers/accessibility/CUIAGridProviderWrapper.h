#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CUIAGridProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAGridProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAGridProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CUIAGridProviderWrapper@@UEAAJHHPEAPEAUIRawElementProviderSimple@@@Z
    virtual long GetItem(int, int, IRawElementProviderSimple * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAGridProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAGridProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnCount@CUIAGridProviderWrapper@@UEAAJPEAH@Z
    virtual long get_ColumnCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowCount@CUIAGridProviderWrapper@@UEAAJPEAH@Z
    virtual long get_RowCount(int *);
};
