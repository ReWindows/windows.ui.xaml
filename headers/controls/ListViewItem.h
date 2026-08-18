#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class ListViewItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragItemsCountDisplay@ListViewItem@DirectUI@@UEAAJI@Z
    virtual long SetDragItemsCountDisplay(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ListViewItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@ListViewItem@DirectUI@@MEAAJXZ
    virtual long PrepareState();
};
} // namespace DirectUI
