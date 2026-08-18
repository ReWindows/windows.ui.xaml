#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace Focus {
class FocusMovement {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FocusMovement@Focus@@QEAA@PEAVCDependencyObject@@AEBV01@@Z
    FocusMovement(CDependencyObject *, ::Focus::FocusMovement const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FocusMovement@Focus@@QEAA@PEAVCDependencyObject@@W4FocusNavigationDirection@DirectUI@@W4FocusState@4@@Z
    FocusMovement(CDependencyObject *, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FocusMovement@Focus@@QEAA@AEAUXYFocusOptions@1@W4FocusNavigationDirection@DirectUI@@PEAVCDependencyObject@@@Z
    FocusMovement(::Focus::XYFocusOptions &, int, CDependencyObject *);
};
} // namespace Focus
