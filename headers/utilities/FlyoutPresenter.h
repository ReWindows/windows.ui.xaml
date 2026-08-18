#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class FlyoutPresenter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerName@FlyoutPresenter@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetOwnerName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flyout@FlyoutPresenter@DirectUI@@QEAAJPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@@Z
    long put_Flyout(::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlyoutPresenter@DirectUI@@UEAA@XZ
    virtual ~FlyoutPresenter();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@FlyoutPresenter@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@FlyoutPresenter@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@FlyoutPresenter@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI
