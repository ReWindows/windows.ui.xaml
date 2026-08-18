#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CUIAItemContainerProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAItemContainerProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAItemContainerProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemByProperty@CUIAItemContainerProviderWrapper@@UEAAJPEAUIRawElementProviderSimple@@HUtagVARIANT@@PEAPEAU2@@Z
    virtual long FindItemByProperty(IRawElementProviderSimple *, int, tagVARIANT, IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemByPropertyImpl@CUIAItemContainerProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long FindItemByPropertyImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAItemContainerProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAItemContainerProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
};
