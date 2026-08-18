#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CUIATableProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIATableProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIATableProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaders@CUIATableProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetColumnHeaders(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaders@CUIATableProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRowHeaders(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIATableProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIATableProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowOrColumnMajor@CUIATableProviderWrapper@@UEAAJPEAW4RowOrColumnMajor@@@Z
    virtual long get_RowOrColumnMajor(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowOrColumnMajorImpl@CUIATableProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_RowOrColumnMajorImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
};
