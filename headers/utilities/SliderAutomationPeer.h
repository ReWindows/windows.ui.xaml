#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class SliderAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildIsAcceptable@SliderAutomationPeer@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    virtual long ChildIsAcceptable(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@SliderAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@SliderAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickablePointCore@SliderAutomationPeer@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetClickablePointCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationCore@SliderAutomationPeer@DirectUI@@UEAAJPEAW4AutomationOrientation@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetOrientationCore(int *);
};
} // namespace DirectUI
