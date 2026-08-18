#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class WrappingLayoutStrategy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateElementBoundsImpl@WrappingLayoutStrategy@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HUEstimationReference@4567@1URect@Foundation@7@PEAU9Foundation@7@@Z
    long EstimateElementBoundsImpl(int, int, ::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WrappingLayoutStrategy@DirectUI@@UEAA@XZ
    virtual ~WrappingLayoutStrategy();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WrappingLayoutStrategy@DirectUI@@IEAA@XZ
    WrappingLayoutStrategy();
};
} // namespace DirectUI
