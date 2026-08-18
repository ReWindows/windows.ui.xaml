#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CManagedTextProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeer@CManagedTextProvider@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaretRange@CManagedTextProvider@@UEAAJPEAHPEAPEAUIUIATextRangeProvider@@@Z
    virtual long GetCaretRange(int *, IUIATextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedTextProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedTextProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CManagedTextProvider@@UEAAJPEAIPEAPEAPEAUIUIATextRangeProvider@@@Z
    virtual long GetSelection(unsigned int *, IUIATextRangeProvider * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRanges@CManagedTextProvider@@UEAAJPEAIPEAPEAPEAUIUIATextRangeProvider@@@Z
    virtual long GetVisibleRanges(unsigned int *, IUIATextRangeProvider * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsITextProvider2@CManagedTextProvider@@UEAAJPEAH@Z
    virtual long IsITextProvider2(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromAnnotation@CManagedTextProvider@@UEAAJPEAVCAutomationPeer@@PEAPEAUIUIATextRangeProvider@@@Z
    virtual long RangeFromAnnotation(CAutomationPeer *, IUIATextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromChild@CManagedTextProvider@@UEAAJPEAVCAutomationPeer@@PEAPEAUIUIATextRangeProvider@@@Z
    virtual long RangeFromChild(CAutomationPeer *, IUIATextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromPoint@CManagedTextProvider@@UEAAJPEAUXPOINTF@@PEAPEAUIUIATextRangeProvider@@@Z
    virtual long RangeFromPoint(XPOINTF *, IUIATextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentRange@CManagedTextProvider@@UEAAJPEAPEAUIUIATextRangeProvider@@@Z
    virtual long get_DocumentRange(IUIATextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedTextSelection@CManagedTextProvider@@UEAAJPEAW4SupportedTextSelection@UIAXcp@@@Z
    virtual long get_SupportedTextSelection(int *);
};
