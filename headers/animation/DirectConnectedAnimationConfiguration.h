#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class DirectConnectedAnimationConfiguration {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDuration@DirectConnectedAnimationConfiguration@DirectUI@@UEAA?BUTimeSpan@Foundation@Windows@@XZ
    virtual WindissectOpaque GetDefaultDuration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEasingFunction@DirectConnectedAnimationConfiguration@DirectUI@@UEAAJPEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual long GetDefaultEasingFunction(::Windows::UI::Composition::ICompositionEasingFunction * *);
};
} // namespace DirectUI
