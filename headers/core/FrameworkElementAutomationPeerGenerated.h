#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class FrameworkElementAutomationPeerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeersForChildrenOfElement@FrameworkElementAutomationPeerGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long GetAutomationPeersForChildrenOfElement(::Windows::UI::Xaml::IUIElement *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FrameworkElementAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FrameworkElementAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FrameworkElementAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FrameworkElementAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FrameworkElementAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
