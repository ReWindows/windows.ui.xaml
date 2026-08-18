#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ScrollBarAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildIsAcceptable@ScrollBarAutomationPeer@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    virtual long ChildIsAcceptable(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ScrollBarAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ScrollBarAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickablePointCore@ScrollBarAutomationPeer@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetClickablePointCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@ScrollBarAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationCore@ScrollBarAutomationPeer@DirectUI@@UEAAJPEAW4AutomationOrientation@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetOrientationCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentElementCore@ScrollBarAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsContentElementCore(unsigned char *);
};
} // namespace DirectUI
