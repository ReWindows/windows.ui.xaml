#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class VisualStateGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentStateChanged@VisualStateGroup@DirectUI@@QEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAUIVisualState@456@1PEAUIControl@Controls@456@@Z
    long RaiseCurrentStateChanged(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::Controls::IControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentStateChanging@VisualStateGroup@DirectUI@@QEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAUIVisualState@456@1PEAUIControl@Controls@456@@Z
    long RaiseCurrentStateChanging(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::Controls::IControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentStateImpl@VisualStateGroup@DirectUI@@QEAAJPEAPEAUIVisualState@Xaml@UI@Windows@@@Z
    long get_CurrentStateImpl(::Windows::UI::Xaml::IVisualState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NameImpl@VisualStateGroup@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_NameImpl(HSTRING__* *);
};
} // namespace DirectUI
