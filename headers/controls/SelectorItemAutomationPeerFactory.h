#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SelectorItemAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItem@SelectorItemAutomationPeerFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUISelectorAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUISelectorItemAutomationPeer@56789@@Z
    virtual long CreateInstanceWithParentAndItem(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SelectorItemAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SelectorItemAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SelectorItemAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SelectorItemAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItemImpl@SelectorItemAutomationPeerFactory@DirectUI@@AEAAJPEAUIInspectable@@PEAUISelectorAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUISelectorItemAutomationPeer@56789@@Z
    long CreateInstanceWithParentAndItemImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer * *);
};
} // namespace DirectUI
