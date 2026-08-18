#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class ManipulationDeltaRoutedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CumulativeImpl@ManipulationDeltaRoutedEventArgs@DirectUI@@QEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    long get_CumulativeImpl(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeltaImpl@ManipulationDeltaRoutedEventArgs@DirectUI@@QEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    long get_DeltaImpl(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VelocitiesImpl@ManipulationDeltaRoutedEventArgs@DirectUI@@QEAAJPEAUManipulationVelocities@Input@UI@Windows@@@Z
    long get_VelocitiesImpl(::Windows::UI::Input::ManipulationVelocities *);
};
} // namespace DirectUI
