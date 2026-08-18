#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class WebViewAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@WebViewAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangleCore@WebViewAutomationPeer@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetBoundingRectangleCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@WebViewAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
};
} // namespace DirectUI
