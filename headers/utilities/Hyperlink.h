#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class Hyperlink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusImpl@Hyperlink@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    long FocusImpl(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@Hyperlink@DirectUI@@QEAAJXZ
    long OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@Hyperlink@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI
