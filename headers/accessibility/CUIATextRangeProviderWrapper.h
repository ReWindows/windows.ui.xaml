#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 34 member(s).
class CUIATextRangeProviderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIATextRangeProviderWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@CUIATextRangeProviderWrapper@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CUIATextRangeProviderWrapper@@UEAAJPEAPEAUITextRangeProvider@@@Z
    virtual long Clone(ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CUIATextRangeProviderWrapper@@UEAAJPEAUITextRangeProvider@@PEAH@Z
    virtual long Compare(ITextRangeProvider *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareEndpoints@CUIATextRangeProviderWrapper@@UEAAJW4TextPatternRangeEndpoint@@PEAUITextRangeProvider@@0PEAH@Z
    virtual long CompareEndpoints(int, ITextRangeProvider *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIATextRangeProviderWrapper@@SAJPEAUIUIAProvider@@PEAVCUIAWindow@@PEAUUIAIdentifiers@@PEAPEAUIUnknown@@@Z
    static long Create(IUIAProvider *, CUIAWindow *, UIAIdentifiers *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToEnclosingUnit@CUIATextRangeProviderWrapper@@UEAAJW4TextUnit@@@Z
    virtual long ExpandToEnclosingUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAttribute@CUIATextRangeProviderWrapper@@UEAAJHUtagVARIANT@@HPEAPEAUITextRangeProvider@@@Z
    virtual long FindAttribute(int, tagVARIANT, int, ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAttributeImpl@CUIATextRangeProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long FindAttributeImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextImpl@CUIATextRangeProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long FindTextImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextW@CUIATextRangeProviderWrapper@@UEAAJPEAGHHPEAPEAUITextRangeProvider@@@Z
    virtual long FindTextW(unsigned short *, int, int, ITextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValue@CUIATextRangeProviderWrapper@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetAttributeValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueImpl@CUIATextRangeProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long GetAttributeValueImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangles@CUIATextRangeProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetBoundingRectangles(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectanglesImpl@CUIATextRangeProviderWrapper@@QEAAJIPEAVCValue@Automation@@0@Z
    long GetBoundingRectanglesImpl(unsigned int, ::Automation::CValue *, ::Automation::CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@CUIATextRangeProviderWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetChildren(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnclosingElement@CUIATextRangeProviderWrapper@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long GetEnclosingElement(IRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CUIATextRangeProviderWrapper@@UEAAJHPEAPEAG@Z
    virtual long GetText(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRelativeBoundingRectangles@CUIATextRangeProviderWrapper@@UEAAJPEAPEAUIVisualRelativeRectangleArray@@@Z
    virtual long GetVisualRelativeBoundingRectangles(IVisualRelativeRectangleArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@CUIATextRangeProviderWrapper@@UEAAJW4TextUnit@@HPEAH@Z
    virtual long Move(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByRange@CUIATextRangeProviderWrapper@@UEAAJW4TextPatternRangeEndpoint@@PEAUITextRangeProvider@@0@Z
    virtual long MoveEndpointByRange(int, ITextRangeProvider *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByUnit@CUIATextRangeProviderWrapper@@UEAAJW4TextPatternRangeEndpoint@@W4TextUnit@@HPEAH@Z
    virtual long MoveEndpointByUnit(int, int, int, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIATextRangeProviderWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIATextRangeProviderWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@CUIATextRangeProviderWrapper@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@CUIATextRangeProviderWrapper@@UEAAJH@Z
    virtual long ScrollIntoView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CUIATextRangeProviderWrapper@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@CUIATextRangeProviderWrapper@@UEAAJXZ
    virtual long ShowContextMenu();
};
