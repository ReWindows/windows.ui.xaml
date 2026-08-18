#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI::Components::Moco {
class StackingLayoutStrategyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateIndexFromPoint@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJ_NUPoint@Foundation@Windows@@UEstimationReference@Controls@Xaml@UI@7@URect@67@PEAW4IndexSearchHint@9Xaml@UI@7@PEAW4ElementType@9Xaml@UI@7@PEAH@Z
    long EstimateIndexFromPoint(bool, WindissectOpaque, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementArrangeBounds@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAA?AURect@Foundation@Windows@@W4ElementType@Controls@Xaml@UI@7@HU567@1USize@67@@Z
    WindissectOpaque GetElementArrangeBounds(int, int, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationAction@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HW4KeyNavigationAction@6789@URect@Foundation@9@PEAW456789@PEAH@Z
    long GetTargetIndexFromNavigationAction(int, int, int, WindissectOpaque, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndexLayoutBoundary@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HURect@Foundation@9@PEA_N222@Z
    long IsIndexLayoutBoundary(int, int, WindissectOpaque, bool *, bool *, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueFillingUpSpace@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAA_NW4ElementType@Controls@Xaml@UI@Windows@@HULayoutReference@6789@URect@Foundation@9@@Z
    bool ShouldContinueFillingUpSpace(int, int, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StackingLayoutStrategyImpl@Moco@Components@DirectUI@@QEAA@XZ
    ~StackingLayoutStrategyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateContainerLocation@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@AEAURect@Foundation@9@@Z
    long EstimateContainerLocation(int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateGroupIndexFromWindow@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@PEAURect@Foundation@9@AEAH@Z
    long EstimateGroupIndexFromWindow(::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateGroupedExtent@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@AEAUSize@Foundation@9@@Z
    long EstimateGroupedExtent(::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateHeaderLocation@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@AEAURect@Foundation@9@@Z
    long EstimateHeaderLocation(int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateItemIndexFromWindow@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@9@PEAURect@Foundation@9@AEAH@Z
    long EstimateItemIndexFromWindow(::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateNonGroupedExtent@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJUEstimationReference@Controls@Xaml@UI@Windows@@URect@Foundation@9@AEAUSize@Foundation@9@@Z
    long EstimateNonGroupedExtent(::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAverageContainerSize@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAMXZ
    float GetAverageContainerSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAverageHeaderSize@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAMXZ
    float GetAverageHeaderSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAverageVirtualizedExtentOfItems@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAMM@Z
    float GetAverageVirtualizedExtentOfItems(float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerBounds@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAA?AURect@Foundation@Windows@@HHUSize@67@ULayoutReference@Controls@Xaml@UI@7@U567@@Z
    WindissectOpaque GetContainerBounds(int, int, WindissectOpaque, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDistanceBetweenGroups@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBA?BMXZ
    float GetDistanceBetweenGroups() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderBounds@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAA?AURect@Foundation@Windows@@HUSize@67@ULayoutReference@Controls@Xaml@UI@7@U567@@Z
    WindissectOpaque GetHeaderBounds(int, WindissectOpaque, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizedGroupExtent@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAMMM@Z
    float GetVirtualizedGroupExtent(float, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSize@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAXH_NM@Z
    void RegisterSize(int, bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTargetHeaderIndexWithItemNavigation@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHHHAEAH@Z
    long TryGetTargetHeaderIndexWithItemNavigation(int, int, int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTargetItemIndexWithHeaderNavigation@StackingLayoutStrategyImpl@Moco@Components@DirectUI@@AEAAJHHHAEAH@Z
    long TryGetTargetItemIndexWithHeaderNavigation(int, int, int, int &);
};
} // namespace DirectUI::Components::Moco
