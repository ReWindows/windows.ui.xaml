#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CInteractionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyInteractionEngine@CInteractionManager@@QEAAXPEAVCUIElement@@@Z
    void DestroyInteractionEngine(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyInteractionIdlingEngine@CInteractionManager@@QEAAXXZ
    void DestroyInteractionIdlingEngine();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionEngine@CInteractionManager@@QEAAJPEAVCUIElement@@0_NPEAPEAVElementGestureTracker@@@Z
    long GetInteractionEngine(CUIElement *, CUIElement *, bool, ElementGestureTracker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInteraction@CInteractionManager@@QEAAXPEAVCUIElement@@_N@Z
    void StopInteraction(CUIElement *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionManager@@QEAA@XZ
    ~CInteractionManager();
};
