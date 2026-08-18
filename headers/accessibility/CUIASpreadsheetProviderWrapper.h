#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CUIASpreadsheetProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIASpreadsheetProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIASpreadsheetProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemByName@CUIASpreadsheetProviderWrapper@@UEAAJPEBGPEAPEAUIRawElementProviderSimple@@@Z
    virtual long GetItemByName(unsigned short const *, IRawElementProviderSimple * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIASpreadsheetProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIASpreadsheetProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
};
