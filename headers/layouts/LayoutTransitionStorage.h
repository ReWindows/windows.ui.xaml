#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class LayoutTransitionStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupBrushRepresentations@LayoutTransitionStorage@@QEAAJPEAVCUIElement@@@Z
    long CleanupBrushRepresentations(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupStoryboard@LayoutTransitionStorage@@QEAAJPEAVCStoryboard@@@Z
    long CleanupStoryboard(CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStoryboards@LayoutTransitionStorage@@QEAAJXZ
    long ClearStoryboards();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryBrush@LayoutTransitionStorage@@QEAAPEAVCLayoutTransitionElement@@XZ
    CLayoutTransitionElement * GetPrimaryBrush();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LayoutTransitionStorage@@QEAA@XZ
    LayoutTransitionStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBrushRepresentation@LayoutTransitionStorage@@QEAAJPEAVCUIElement@@PEAVCLayoutTransitionElement@@W4TransitionParent@DirectUI@@@Z
    long RegisterBrushRepresentation(CUIElement *, CLayoutTransitionElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterElementForTransitions@LayoutTransitionStorage@@QEAAXPEAVCUIElement@@AEAV?$xvector@PEAVCTransition@@@@W4TransitionTrigger@DirectUI@@@Z
    void RegisterElementForTransitions(CUIElement *, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterStoryboard@LayoutTransitionStorage@@QEAAJPEAVCStoryboard@@@Z
    long RegisterStoryboard(CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterBrushRepresentation@LayoutTransitionStorage@@QEAAJPEAVCUIElement@@PEAVCLayoutTransitionElement@@I@Z
    long UnregisterBrushRepresentation(CUIElement *, CLayoutTransitionElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterElementForTransitions@LayoutTransitionStorage@@QEAAXPEAVCUIElement@@@Z
    void UnregisterElementForTransitions(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBrushes@LayoutTransitionStorage@@QEAAJUXRECTF_WH@@@Z
    long UpdateBrushes(XRECTF_WH);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutTransitionStorage@@QEAA@XZ
    ~LayoutTransitionStorage();
};
