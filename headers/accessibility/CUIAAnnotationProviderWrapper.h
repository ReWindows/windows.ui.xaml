#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CUIAAnnotationProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAAnnotationProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAAnnotationProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAAnnotationProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAAnnotationProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnnotationTypeId@CUIAAnnotationProviderWrapper@@UEAAJPEAH@Z
    virtual long get_AnnotationTypeId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnnotationTypeName@CUIAAnnotationProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_AnnotationTypeName(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Author@CUIAAnnotationProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_Author(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DateTime@CUIAAnnotationProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_DateTime(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@CUIAAnnotationProviderWrapper@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_Target(IRawElementProviderSimple * *);
};
