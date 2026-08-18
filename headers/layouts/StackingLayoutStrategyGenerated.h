#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class StackingLayoutStrategyGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginMeasure@StackingLayoutStrategyGenerated@DirectUI@@UEAAJXZ
    virtual long BeginMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndMeasure@StackingLayoutStrategyGenerated@DirectUI@@UEAAJXZ
    virtual long EndMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateElementBounds@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HUEstimationReference@4567@1URect@Foundation@7@PEAU9Foundation@7@@Z
    virtual long EstimateElementBounds(int, int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateElementIndex@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@UEstimationReference@4567@1URect@Foundation@7@PEAU9Foundation@7@PEAH@Z
    virtual long EstimateElementIndex(int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateIndexFromPoint@StackingLayoutStrategyGenerated@DirectUI@@UEAAJEUPoint@Foundation@Windows@@UEstimationReference@Controls@Xaml@UI@5@URect@45@PEAW4IndexSearchHint@7895@PEAW4ElementType@7895@PEAH@Z
    virtual long EstimateIndexFromPoint(unsigned char, WindissectOpaque, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimatePanelExtent@StackingLayoutStrategyGenerated@DirectUI@@UEAAJUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@7@PEAUSize@97@@Z
    virtual long EstimatePanelExtent(::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementArrangeBounds@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HURect@Foundation@7@1USize@97@PEAU897@@Z
    virtual long GetElementArrangeBounds(int, int, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementBounds@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HUSize@Foundation@7@ULayoutReference@4567@URect@97@PEAURect@97@@Z
    virtual long GetElementBounds(int, int, WindissectOpaque, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementMeasureSize@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HURect@Foundation@7@PEAUSize@97@@Z
    virtual long GetElementMeasureSize(int, int, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementTransitionsBounds@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HURect@Foundation@7@PEAU897@@Z
    virtual long GetElementTransitionsBounds(int, int, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWrappingStrategy@StackingLayoutStrategyGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long GetIsWrappingStrategy(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionOfFirstElement@StackingLayoutStrategyGenerated@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetPositionOfFirstElement(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPoints@StackingLayoutStrategyGenerated@DirectUI@@UEAAJPEAM00PEAE@Z
    virtual long GetRegularSnapPoints(float *, float *, float *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationAction@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HW4KeyNavigationAction@4567@URect@Foundation@7@HPEAW434567@PEAH@Z
    virtual long GetTargetIndexFromNavigationAction(int, int, int, WindissectOpaque, int, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizationDirection@StackingLayoutStrategyGenerated@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long GetVirtualizationDirection(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasIrregularSnapPoints@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@PEAE@Z
    virtual long HasIrregularSnapPoints(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSnapPointOnElement@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HPEAE@Z
    virtual long HasSnapPointOnElement(int, int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndexLayoutBoundary@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HURect@Foundation@7@PEAE222@Z
    virtual long IsIndexLayoutBoundary(int, int, WindissectOpaque, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutDataInfoProvider@StackingLayoutStrategyGenerated@DirectUI@@UEAAJPEAUILayoutDataInfoProvider@Controls@Xaml@UI@Windows@@@Z
    virtual long SetLayoutDataInfoProvider(::Windows::UI::Xaml::Controls::ILayoutDataInfoProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueFillingUpSpace@StackingLayoutStrategyGenerated@DirectUI@@UEAAJW4ElementType@Controls@Xaml@UI@Windows@@HULayoutReference@4567@URect@Foundation@7@PEAE@Z
    virtual long ShouldContinueFillingUpSpace(int, int, ::Windows::UI::Xaml::Controls::LayoutReference, WindissectOpaque, unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@StackingLayoutStrategyGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
