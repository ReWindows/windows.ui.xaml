#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class ComboBoxItemAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ComboBoxItemAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangleCore@ComboBoxItemAutomationPeer@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetBoundingRectangleCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@ComboBoxItemAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ComboBoxItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOffscreenCore@ComboBoxItemAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsOffscreenCore(unsigned char *);
};
} // namespace DirectUI
