#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class ContentLinkAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceleratorKeyCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAcceleratorKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessKeyCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAccessKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationIdCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAutomationIdCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangleCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetBoundingRectangleCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickablePointCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetClickablePointCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHelpTextCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetHelpTextCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemStatusCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetItemStatusCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemTypeCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetItemTypeCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLabeledByCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetLabeledByCore(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiveSettingCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAW4AutomationLiveSetting@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetLiveSettingCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ContentLinkAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@ContentLinkAutomationPeer@DirectUI@@QEAAJXZ
    long InvokeImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentElementCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsContentElementCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlElementCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsControlElementCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsEnabledCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyboardFocusableCore@ContentLinkAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsKeyboardFocusableCore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Owner@ContentLinkAutomationPeer@DirectUI@@QEAAJPEAPEAUIContentLink@Documents@Xaml@UI@Windows@@@Z
    long get_Owner(::Windows::UI::Xaml::Documents::IContentLink * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentLinkAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~ContentLinkAutomationPeer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerAsContentLink@ContentLinkAutomationPeer@DirectUI@@AEAAPEAVContentLink@2@V?$ComPtr@UIContentLink@Documents@Xaml@UI@Windows@@@ctl@@@Z
    ::DirectUI::ContentLink * GetOwnerAsContentLink(WindissectOpaque);
};
} // namespace DirectUI
