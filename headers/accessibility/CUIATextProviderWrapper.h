#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CUIATextProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIATextProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIATextProviderWrapper@@QEAA@PEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@@Z
    CUIATextProviderWrapper(IUIAProvider *, CUIAWindow *, UIAIdentifiers *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIATextProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaretRange@CUIATextProviderWrapper@@UEAAJPEAHPEAPEAUITextRangeProvider@@@Z
    virtual long GetCaretRange(int *, ITextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CUIATextProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetSelection(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRanges@CUIATextProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetVisibleRanges(tagSAFEARRAY * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIATextProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromAnnotation@CUIATextProviderWrapper@@UEAAJPEAUIRawElementProviderSimple@@PEAPEAUITextRangeProvider@@@Z
    virtual long RangeFromAnnotation(IRawElementProviderSimple *, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromChild@CUIATextProviderWrapper@@UEAAJPEAUIRawElementProviderSimple@@PEAPEAUITextRangeProvider@@@Z
    virtual long RangeFromChild(IRawElementProviderSimple *, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromPoint@CUIATextProviderWrapper@@UEAAJUUiaPoint@@PEAPEAUITextRangeProvider@@@Z
    virtual long RangeFromPoint(UiaPoint, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromPointImpl@CUIATextProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long RangeFromPointImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIATextProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentRange@CUIATextProviderWrapper@@UEAAJPEAPEAUITextRangeProvider@@@Z
    virtual long get_DocumentRange(ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedTextSelection@CUIATextProviderWrapper@@UEAAJPEAW4SupportedTextSelection@@@Z
    virtual long get_SupportedTextSelection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedTextSelectionImpl@CUIATextProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long get_SupportedTextSelectionImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
};
