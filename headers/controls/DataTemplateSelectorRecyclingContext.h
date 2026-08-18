#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI::ItemsControl {
class DataTemplateSelectorRecyclingContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompatible@DataTemplateSelectorRecyclingContext@ItemsControl@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    long IsCompatible(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForItemRecycling@DataTemplateSelectorRecyclingContext@ItemsControl@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long PrepareForItemRecycling(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataTemplateSelectorRecyclingContext@ItemsControl@DirectUI@@QEAA@XZ
    ~DataTemplateSelectorRecyclingContext();
};
} // namespace DirectUI::ItemsControl
