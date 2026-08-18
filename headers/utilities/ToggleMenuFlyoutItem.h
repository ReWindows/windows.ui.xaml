#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class ToggleMenuFlyoutItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasToggle@ToggleMenuFlyoutItem@DirectUI@@UEBA_NXZ
    virtual bool HasToggle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@ToggleMenuFlyoutItem@DirectUI@@UEAAJXZ
    virtual long Invoke();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ToggleMenuFlyoutItem@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ToggleMenuFlyoutItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ToggleMenuFlyoutItem@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
};
} // namespace DirectUI
