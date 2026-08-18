#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class GridView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransitionContext@GridView@DirectUI@@UEAAJHPEAW4ThemeTransitionContext@2@@Z
    virtual long GetCurrentTransitionContext(int, int *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItemOverride@GridView@DirectUI@@MEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderForGroupOverrideImpl@GridView@DirectUI@@MEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetHeaderForGroupOverrideImpl(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainerOverride@GridView@DirectUI@@MEAAJPEAUIInspectable@@PEAE@Z
    virtual long IsItemItsOwnContainerOverride(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@GridView@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI
