#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class ListViewItemAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ListViewItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusCore@ListViewItemAutomationPeer@DirectUI@@UEAAJXZ
    virtual long SetFocusCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemovableItemAutomationPeer@ListViewItemAutomationPeer@DirectUI@@QEAAJPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long SetRemovableItemAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewItemAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~ListViewItemAutomationPeer();
};
} // namespace DirectUI
