#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
class CManagedTextRangeProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@CManagedTextRangeProvider@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CManagedTextRangeProvider@@UEAAJPEAPEAUIUIATextRangeProvider@@@Z
    virtual long Clone(IUIATextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CManagedTextRangeProvider@@UEAAJPEAUIUIATextRangeProvider@@PEAI@Z
    virtual long Compare(IUIATextRangeProvider *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareEndpoints@CManagedTextRangeProvider@@UEAAJW4TextPatternRangeEndpoint@UIAXcp@@PEAUIUIATextRangeProvider@@0PEAH@Z
    virtual long CompareEndpoints(int, IUIATextRangeProvider *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToEnclosingUnit@CManagedTextRangeProvider@@UEAAJW4TextUnit@UIAXcp@@@Z
    virtual long ExpandToEnclosingUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAttribute@CManagedTextRangeProvider@@UEAAJHVCValue@@IPEAPEAUIUIATextRangeProvider@@@Z
    virtual long FindAttribute(int, CValue, unsigned int, IUIATextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindText@CManagedTextRangeProvider@@UEAAJAEBVxstring_ptr@@IIPEAPEAUIUIATextRangeProvider@@@Z
    virtual long FindText(xstring_ptr const &, unsigned int, unsigned int, IUIATextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValue@CManagedTextRangeProvider@@UEAAJHPEAVCValue@@@Z
    virtual long GetAttributeValue(int, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeer@CManagedTextRangeProvider@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangles@CManagedTextRangeProvider@@UEAAJPEAIPEAPEAN@Z
    virtual long GetBoundingRectangles(unsigned int *, double * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@CManagedTextRangeProvider@@UEAAJPEAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual long GetChildren(int *, CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnclosingElement@CManagedTextRangeProvider@@UEAAJPEAPEAVCAutomationPeer@@@Z
    virtual long GetEnclosingElement(CAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedTextRangeProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedTextRangeProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CManagedTextRangeProvider@@UEAAJHPEAVxstring_ptr@@@Z
    virtual long GetText(int, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextRangeProviderObject@CManagedTextRangeProvider@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetTextRangeProviderObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAProvider@CManagedTextRangeProvider@@UEAAPEAUIUIAProvider@@XZ
    virtual IUIAProvider * GetUIAProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsITextRangeProvider2@CManagedTextRangeProvider@@UEAAJPEAH@Z
    virtual long IsITextRangeProvider2(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@CManagedTextRangeProvider@@UEAAJW4TextUnit@UIAXcp@@HPEAH@Z
    virtual long Move(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByRange@CManagedTextRangeProvider@@UEAAJW4TextPatternRangeEndpoint@UIAXcp@@PEAUIUIATextRangeProvider@@0@Z
    virtual long MoveEndpointByRange(int, IUIATextRangeProvider *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByUnit@CManagedTextRangeProvider@@UEAAJW4TextPatternRangeEndpoint@UIAXcp@@W4TextUnit@3@HPEAH@Z
    virtual long MoveEndpointByUnit(int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@CManagedTextRangeProvider@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@CManagedTextRangeProvider@@UEAAJI@Z
    virtual long ScrollIntoView(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CManagedTextRangeProvider@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@CManagedTextRangeProvider@@UEAAJXZ
    virtual long ShowContextMenu();
};
