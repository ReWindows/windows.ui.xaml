#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CManagedTextChildProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedTextChildProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedTextChildProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextContainer@CManagedTextChildProvider@@UEAAJPEAPEAVCAutomationPeer@@@Z
    virtual long get_TextContainer(CAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextRange@CManagedTextChildProvider@@UEAAJPEAPEAUIUIATextRangeProvider@@@Z
    virtual long get_TextRange(IUIATextRangeProvider * *);
};
