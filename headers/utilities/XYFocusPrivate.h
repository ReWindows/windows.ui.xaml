#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace Focus {
class XYFocusPrivate {
public:
    class ProximityStrategy;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePrimaryAxisDistance@XYFocusPrivate@Focus@@YANW4FocusNavigationDirection@DirectUI@@AEBUXRECTF_RB@@1@Z
    double CalculatePrimaryAxisDistance(int, XRECTF_RB const &, XRECTF_RB const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSecondaryAxisDistance@XYFocusPrivate@Focus@@YANW4FocusNavigationDirection@DirectUI@@AEBUXRECTF_RB@@1@Z
    double CalculateSecondaryAxisDistance(int, XRECTF_RB const &, XRECTF_RB const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsForRanking@XYFocusPrivate@Focus@@YA?AUXRECTF_RB@@PEAVCDependencyObject@@_N@Z
    XRECTF_RB GetBoundsForRanking(CDependencyObject *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectionOverride@XYFocusPrivate@Focus@@YAPEAVCDependencyObject@@PEAV3@0W4FocusNavigationDirection@DirectUI@@_N@Z
    CDependencyObject * GetDirectionOverride(CDependencyObject *, CDependencyObject *, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrategy@XYFocusPrivate@Focus@@YA?AW4XYFocusNavigationStrategy@DirectUI@@PEAVCDependencyObject@@W4FocusNavigationDirection@4@W4XYFocusNavigationStrategyOverride@4@@Z
    int GetStrategy(CDependencyObject *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXYFocusNavigationStrategyPropertyIndex@XYFocusPrivate@Focus@@YA?AW4KnownPropertyIndex@@QEAVCDependencyObject@@W4FocusNavigationDirection@DirectUI@@@Z
    int GetXYFocusNavigationStrategyPropertyIndex(CDependencyObject * const, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXYFocusPropertyIndex@XYFocusPrivate@Focus@@YA?AW4KnownPropertyIndex@@QEAVCDependencyObject@@W4FocusNavigationDirection@DirectUI@@@Z
    int GetXYFocusPropertyIndex(CDependencyObject * const, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCandidateChildOfAncestorScroller@XYFocusPrivate@Focus@@YA_NPEAVCDependencyObject@@PEBV3@@Z
    bool IsCandidateChildOfAncestorScroller(CDependencyObject *, CDependencyObject const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCandidateParticipatingInScroll@XYFocusPrivate@Focus@@YA_NQEAVCDependencyObject@@QEBV3@@Z
    bool IsCandidateParticipatingInScroll(CDependencyObject * const, CDependencyObject const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectionalRegion@XYFocusPrivate@Focus@@YA_NPEAVCDependencyObject@@@Z
    bool IsDirectionalRegion(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccluded@XYFocusPrivate@Focus@@YA_NPEAVCDependencyObject@@AEBUXRECTF_RB@@@Z
    bool IsOccluded(CDependencyObject *, XRECTF_RB const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidFocusSubtree@XYFocusPrivate@Focus@@YA_NQEAVCDependencyObject@@_N@Z
    bool IsValidFocusSubtree(CDependencyObject * const, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryXYFocusBubble@XYFocusPrivate@Focus@@YAPEAVCDependencyObject@@PEAV3@00W4FocusNavigationDirection@DirectUI@@@Z
    CDependencyObject * TryXYFocusBubble(CDependencyObject *, CDependencyObject *, CDependencyObject *, int);
};
} // namespace Focus
