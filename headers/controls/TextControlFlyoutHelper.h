#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class TextControlFlyoutHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProofingFlyout@TextControlFlyoutHelper@DirectUI@@YAJPEAVCFlyoutBase@@PEAVCFrameworkElement@@@Z
    long AddProofingFlyout(CFlyoutBase *, CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllFlyoutsForOwner@TextControlFlyoutHelper@DirectUI@@YAJPEAVCUIElement@@@Z
    long DismissAllFlyoutsForOwner(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAt@TextControlFlyoutHelper@DirectUI@@YAJPEAVCFlyoutBase@@PEAVCFrameworkElement@@UPoint@Foundation@Windows@@URect@67@W4FlyoutShowMode@Primitives@Controls@Xaml@UI@7@@Z
    long ShowAt(CFlyoutBase *, CFrameworkElement *, WindissectOpaque, WindissectOpaque, int);
};
} // namespace DirectUI
