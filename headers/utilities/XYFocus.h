#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace Focus {
class XYFocus {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextFocusableElement@XYFocus@Focus@@QEAAPEAVCDependencyObject@@W4FocusNavigationDirection@DirectUI@@PEAV3@1PEAVVisualTree@@_NAEAUXYFocusOptions@2@@Z
    CDependencyObject * GetNextFocusableElement(int, CDependencyObject *, CDependencyObject *, VisualTree *, bool, ::Focus::XYFocusOptions &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManifolds@XYFocus@Focus@@QEAAXW4FocusNavigationDirection@DirectUI@@AEBUXRECTF_RB@@QEAVCDependencyObject@@_N@Z
    void UpdateManifolds(int, XRECTF_RB const &, CDependencyObject * const, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheHitTrace@XYFocus@Focus@@CAXW4FocusNavigationDirection@DirectUI@@@Z
    static void CacheHitTrace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExploredListHash@XYFocus@Focus@@CA_KW4FocusNavigationDirection@DirectUI@@PEAVCDependencyObject@@1AEBUXYFocusOptions@2@@Z
    static uint64_t ExploredListHash(int, CDependencyObject *, CDependencyObject *, ::Focus::XYFocusOptions const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusWalkTraceBegin@XYFocus@Focus@@CAXW4FocusNavigationDirection@DirectUI@@@Z
    static void FocusWalkTraceBegin(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveScrollerForScrollInput@XYFocus@Focus@@CAQEBVCDependencyObject@@W4FocusNavigationDirection@DirectUI@@QEAV3@@Z
    static CDependencyObject const * const GetActiveScrollerForScrollInput(int, CDependencyObject * const);
};
} // namespace Focus
