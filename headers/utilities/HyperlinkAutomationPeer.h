#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class HyperlinkAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceleratorKeyCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAcceleratorKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessKeyCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAccessKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationIdCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAutomationIdCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangleCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetBoundingRectangleCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickablePointCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetClickablePointCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpTextCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetHelpTextCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemStatusCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetItemStatusCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemTypeCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetItemTypeCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabeledByCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetLabeledByCore(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiveSettingCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAW4AutomationLiveSetting@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetLiveSettingCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@HyperlinkAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@HyperlinkAutomationPeer@DirectUI@@QEAAJXZ
    long InvokeImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentElementCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsContentElementCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlElementCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsControlElementCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsEnabledCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableCore@HyperlinkAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableCore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Owner@HyperlinkAutomationPeer@DirectUI@@QEAAJPEAPEAUIHyperlink@Documents@Xaml@UI@Windows@@@Z
    long get_Owner(::Windows::UI::Xaml::Documents::IHyperlink * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HyperlinkAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~HyperlinkAutomationPeer();
};
} // namespace DirectUI
