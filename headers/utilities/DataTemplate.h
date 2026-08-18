#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class DataTemplate {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataTemplate@DirectUI@@QEAA@XZ
    DataTemplate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementImpl@DataTemplate@DirectUI@@QEAAJPEAUIElementFactoryGetArgs@Xaml@UI@Windows@@PEAPEAUIUIElement@456@@Z
    long GetElementImpl(::Windows::UI::Xaml::IElementFactoryGetArgs *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadContentImpl@DataTemplate@DirectUI@@QEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long LoadContentImpl(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementImpl@DataTemplate@DirectUI@@QEAAJPEAUIElementFactoryRecycleArgs@Xaml@UI@Windows@@@Z
    long RecycleElementImpl(::Windows::UI::Xaml::IElementFactoryRecycleArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataTemplate@DirectUI@@UEAA@XZ
    virtual ~DataTemplate();
};
} // namespace DirectUI
