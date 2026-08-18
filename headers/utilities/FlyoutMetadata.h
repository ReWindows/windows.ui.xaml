#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class FlyoutMetadata {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenFlyout@FlyoutMetadata@DirectUI@@QEAAJPEAPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@PEAPEAUIFrameworkElement@678@@Z
    long GetOpenFlyout(::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase * *, ::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlyoutMetadata@DirectUI@@UEAA@XZ
    virtual ~FlyoutMetadata();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStagedFlyout@FlyoutMetadata@DirectUI@@AEAAJPEAPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@PEAPEAUIFrameworkElement@678@@Z
    long GetStagedFlyout(::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase * *, ::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpenFlyout@FlyoutMetadata@DirectUI@@AEAAXPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@678@@Z
    void SetOpenFlyout(::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase *, ::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStagedFlyout@FlyoutMetadata@DirectUI@@AEAAXPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@678@@Z
    void SetStagedFlyout(::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase *, ::Windows::UI::Xaml::IFrameworkElement *);
};
} // namespace DirectUI
