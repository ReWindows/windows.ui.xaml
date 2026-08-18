#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI::Components::Moco {
class CalendarLayoutStrategyImpl {
public:
    class IndexCorrectionTable;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CalendarLayoutStrategyImpl@Moco@Components@DirectUI@@QEAA@XZ
    CalendarLayoutStrategyImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateElementBounds@CalendarLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HUEstimationReference@6789@1URect@Foundation@9@PEAURect@Foundation@9@@Z
    long EstimateElementBounds(int, int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateElementIndex@CalendarLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@UEstimationReference@6789@1URect@Foundation@9@PEAURect@Foundation@9@PEAH@Z
    long EstimateElementIndex(int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationAction@CalendarLayoutStrategyImpl@Moco@Components@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HW4KeyNavigationAction@6789@URect@Foundation@9@PEAW456789@PEAH@Z
    long GetTargetIndexFromNavigationAction(int, int, int, WindissectOpaque, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueFillingUpSpace@CalendarLayoutStrategyImpl@Moco@Components@DirectUI@@QEAA_NW4ElementType@Controls@Xaml@UI@Windows@@HULayoutReference@6789@URect@Foundation@9@@Z
    bool ShouldContinueFillingUpSpace(int, int, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMaxStackingLine@CalendarLayoutStrategyImpl@Moco@Components@DirectUI@@AEBAHXZ
    int DetermineMaxStackingLine() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemBounds@CalendarLayoutStrategyImpl@Moco@Components@DirectUI@@AEAA?AURect@Foundation@Windows@@H@Z
    WindissectOpaque GetItemBounds(int);
};
} // namespace DirectUI::Components::Moco
