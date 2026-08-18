#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CManagedTextEditProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveComposition@CManagedTextEditProvider@@UEAAJPEAPEAUIUIATextRangeProvider@@@Z
    virtual long GetActiveComposition(IUIATextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConversionTarget@CManagedTextEditProvider@@UEAAJPEAPEAUIUIATextRangeProvider@@@Z
    virtual long GetConversionTarget(IUIATextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedTextEditProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedTextEditProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
};
