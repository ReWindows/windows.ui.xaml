#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class TextBoxAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@TextBoxAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@TextBoxAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescribedByCoreImpl@TextBoxAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IIterable@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetDescribedByCoreImpl(WindissectOpaque * *);
};
} // namespace DirectUI
