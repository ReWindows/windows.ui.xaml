#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class GridViewItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragItemsCountDisplay@GridViewItem@DirectUI@@UEAAJI@Z
    virtual long SetDragItemsCountDisplay(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@GridViewItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@GridViewItem@DirectUI@@MEAAJXZ
    virtual long PrepareState();
};
} // namespace DirectUI
