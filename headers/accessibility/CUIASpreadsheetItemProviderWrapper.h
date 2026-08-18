#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CUIASpreadsheetItemProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIASpreadsheetItemProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIASpreadsheetItemProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnnotationObjects@CUIASpreadsheetItemProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetAnnotationObjects(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnnotationTypes@CUIASpreadsheetItemProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetAnnotationTypes(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIASpreadsheetItemProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIASpreadsheetItemProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Formula@CUIASpreadsheetItemProviderWrapper@@UEAAJPEAPEAG@Z
    virtual long get_Formula(unsigned short * *);
};
