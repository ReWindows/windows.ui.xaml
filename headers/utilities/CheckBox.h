#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class CheckBox {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CheckBox@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@CheckBox@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CheckBox@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CheckBox@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDownInternal@CheckBox@DirectUI@@MEAAJW4VirtualKey@System@Windows@@PEAE@Z
    virtual long OnKeyDownInternal(int, unsigned char *);
};
} // namespace DirectUI
