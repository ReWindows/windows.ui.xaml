#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class PointerRoutedEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntermediatePointsImpl@PointerRoutedEventArgs@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAVPointerPoint@Input@UI@Windows@@@Collections@Foundation@6@@Z
    long GetIntermediatePointsImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerPointTransform@PointerRoutedEventArgs@DirectUI@@AEAAJIPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIPointerPointTransform@Input@56@@Z
    long GetPointerPointTransform(unsigned int, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Input::IPointerPointTransform * *);
};
} // namespace DirectUI
