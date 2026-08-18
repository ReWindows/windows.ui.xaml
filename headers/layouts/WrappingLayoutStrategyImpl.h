#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
namespace DirectUI::Components::Moco {
class WrappingLayoutStrategyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateIndexFromPoint@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJ_NUPoint@Foundation@Windows@@UEstimationReference@Controls@Xaml@UI@7@URect@67@PEAW4IndexSearchHint@9Xaml@UI@7@PEAW4ElementType@9Xaml@UI@7@PEAH@Z
    long EstimateIndexFromPoint(bool, WindissectOpaque, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementTransitionsBounds@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HURect@Foundation@9@PEAURect@Foundation@9@@Z
    long GetElementTransitionsBounds(int, int, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsPerPage@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@QEBANURect@Foundation@Windows@@@Z
    double GetItemsPerPage(WindissectOpaque) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPoints@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAA_NPEAM00@Z
    bool GetRegularSnapPoints(float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationAction@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HW4KeyNavigationAction@6789@URect@Foundation@9@HPEAW456789@PEAH@Z
    long GetTargetIndexFromNavigationAction(int, int, int, WindissectOpaque, int, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndexLayoutBoundary@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HURect@Foundation@9@PEA_N222@Z
    long IsIndexLayoutBoundary(int, int, WindissectOpaque, bool *, bool *, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueFillingUpSpace@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAA_NW4ElementType@Controls@Xaml@UI@Windows@@HULayoutReference@6789@URect@Foundation@9@@Z
    bool ShouldContinueFillingUpSpace(int, int, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMaxStackingLine@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAHAEBURect@Foundation@Windows@@@Z
    int DetermineMaxStackingLine(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGroupCache@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJH@Z
    long EnsureGroupCache(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateContainerLocation@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@AEAURect@Foundation@9@@Z
    long EstimateContainerLocation(int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateGroupIndexFromWindow@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@PEAURect@Foundation@9@AEAH@Z
    long EstimateGroupIndexFromWindow(::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateGroupedExtent@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@AEAUSize@Foundation@9@@Z
    long EstimateGroupedExtent(::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateHeaderLocation@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@AEAURect@Foundation@9@@Z
    long EstimateHeaderLocation(int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateItemIndexFromWindow@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@PEAURect@Foundation@9@AEAH@Z
    long EstimateItemIndexFromWindow(::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateNonGroupedExtent@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJUEstimationReference@Controls@Xaml@UI@Windows@@URect@Foundation@9@AEAUSize@Foundation@9@@Z
    long EstimateNonGroupedExtent(::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerBounds@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAA?AURect@Foundation@Windows@@HHUSize@67@ULayoutReference@Controls@Xaml@UI@7@U567@@Z
    WindissectOpaque GetContainerBounds(int, int, WindissectOpaque, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDistanceBetweenGroups@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBA?BMXZ
    float GetDistanceBetweenGroups() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderBounds@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAA?AURect@Foundation@Windows@@HUSize@67@ULayoutReference@Controls@Xaml@UI@7@U567@@Z
    WindissectOpaque GetHeaderBounds(int, WindissectOpaque, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemStackingPosition@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAMH@Z
    float GetItemStackingPosition(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetItemIndexInNextLineWithGrouping@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHHHAEAH@Z
    long GetTargetItemIndexInNextLineWithGrouping(int, int, int, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizedExtentOfItems@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAMHH@Z
    float GetVirtualizedExtentOfItems(int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizedGroupExtent@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAMHHM@Z
    float GetVirtualizedGroupExtent(int, int, float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemHeightPropertySet@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBA_NXZ
    bool IsItemHeightPropertySet() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemSizePropertySet@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBA_NXZ
    bool IsItemSizePropertySet() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemWidthPropertySet@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBA_NXZ
    bool IsItemWidthPropertySet() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTargetHeaderIndexWithItemNavigation@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHHHHAEAH@Z
    long TryGetTargetHeaderIndexWithItemNavigation(int, int, int, int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTargetItemIndexWithHeaderNavigation@WrappingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHHHHHAEAH@Z
    long TryGetTargetItemIndexWithHeaderNavigation(int, int, int, int, int, int &);
};
} // namespace DirectUI::Components::Moco
