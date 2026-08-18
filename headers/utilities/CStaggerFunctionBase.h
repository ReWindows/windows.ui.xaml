#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class CStaggerFunctionBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionDelayValues@CStaggerFunctionBase@@SAJPEAVCDependencyObject@@IPEAPEAVCUIElement@@PEAUXRECTF_WH@@PEAM@Z
    static long GetTransitionDelayValues(CDependencyObject *, unsigned int, CUIElement * *, XRECTF_WH *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionDelays@CStaggerFunctionBase@@UEAAJIPEAPEAVCUIElement@@PEAUXRECTF_WH@@PEAM@Z
    virtual long GetTransitionDelays(unsigned int, CUIElement * *, XRECTF_WH *, float *);
};
