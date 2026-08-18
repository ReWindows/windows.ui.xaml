#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CUIATextEditProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIATextEditProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIATextEditProviderWrapper@@QEAA@PEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@@Z
    CUIATextEditProviderWrapper(IUIAProvider *, CUIAWindow *, UIAIdentifiers *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIATextEditProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveComposition@CUIATextEditProviderWrapper@@UEAAJPEAPEAUITextRangeProvider@@@Z
    virtual long GetActiveComposition(ITextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConversionTarget@CUIATextEditProviderWrapper@@UEAAJPEAPEAUITextRangeProvider@@@Z
    virtual long GetConversionTarget(ITextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CUIATextEditProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSelection(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRanges@CUIATextEditProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetVisibleRanges(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIATextEditProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromChild@CUIATextEditProviderWrapper@@UEAAJPEAUIRawElementProviderSimple@@PEAPEAUITextRangeProvider@@@Z
    virtual long RangeFromChild(IRawElementProviderSimple *, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromPoint@CUIATextEditProviderWrapper@@UEAAJUUiaPoint@@PEAPEAUITextRangeProvider@@@Z
    virtual long RangeFromPoint(UiaPoint, ITextRangeProvider * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIATextEditProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentRange@CUIATextEditProviderWrapper@@UEAAJPEAPEAUITextRangeProvider@@@Z
    virtual long get_DocumentRange(ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedTextSelection@CUIATextEditProviderWrapper@@UEAAJPEAW4SupportedTextSelection@@@Z
    virtual long get_SupportedTextSelection(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIATextEditProviderWrapper@@UEAA@XZ
    virtual ~CUIATextEditProviderWrapper();
};
