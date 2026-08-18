#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class AutoSuggestBoxAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@AutoSuggestBoxAutomationPeerFactory@DirectUI@@UEAAJPEAUIAutoSuggestBox@Controls@Xaml@UI@Windows@@PEAPEAUIAutoSuggestBoxAutomationPeer@Peers@Automation@567@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::IAutoSuggestBox *, ::Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AutoSuggestBoxAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AutoSuggestBoxAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AutoSuggestBoxAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AutoSuggestBoxAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@AutoSuggestBoxAutomationPeerFactory@DirectUI@@AEAAJPEAUIAutoSuggestBox@Controls@Xaml@UI@Windows@@PEAPEAUIAutoSuggestBoxAutomationPeer@Peers@Automation@567@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::IAutoSuggestBox *, ::Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer * *);
};
} // namespace DirectUI
