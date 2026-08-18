#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class VisualStateSetterHelper {
public:
    class ResolvedVisualStateSetter;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateSetterVisualState@VisualStateSetterHelper@@YAPEAVCVisualState@@PEAVCSetter@@@Z
    CVisualState * GetVisualStateSetterVisualState(CSetter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformAnimatedValueOperation@VisualStateSetterHelper@@YAJW4SetterOperation@1@V?$xref_ptr@VCDependencyObject@@@@PEBVCDependencyProperty@@VCValue@@1_N@Z
    long PerformAnimatedValueOperation(int, WindissectOpaque, CDependencyProperty const *, CValue, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformSetterOperationIfStateActive@VisualStateSetterHelper@@YAXPEAVCVisualState@@PEAVCSetter@@W4SetterOperation@1@@Z
    void PerformSetterOperationIfStateActive(CVisualState *, CSetter *, int);
};
