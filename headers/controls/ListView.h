#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class ListView {
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItemOverride@ListView@DirectUI@@MEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderForGroupOverrideImpl@ListView@DirectUI@@MEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetHeaderForGroupOverrideImpl(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainerOverride@ListView@DirectUI@@MEAAJPEAUIInspectable@@PEAE@Z
    virtual long IsItemItsOwnContainerOverride(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ListView@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI
