#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class Flyout {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresenter@Flyout@DirectUI@@MEAAJPEAPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    virtual long CreatePresenter(::Windows::UI::Xaml::Controls::IControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessKeyboardAcceleratorsImpl@Flyout@DirectUI@@MEAAJPEAUIProcessKeyboardAcceleratorEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnProcessKeyboardAcceleratorsImpl(::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Flyout@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
};
} // namespace DirectUI
