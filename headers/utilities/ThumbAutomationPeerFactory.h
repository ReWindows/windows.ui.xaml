#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ThumbAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@ThumbAutomationPeerFactory@DirectUI@@UEAAJPEAUIThumb@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUIThumbAutomationPeer@Peers@Automation@678@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::Primitives::IThumb *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ThumbAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ThumbAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ThumbAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ThumbAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@ThumbAutomationPeerFactory@DirectUI@@AEAAJPEAUIThumb@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUIThumbAutomationPeer@Peers@Automation@678@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::Primitives::IThumb *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer * *);
};
} // namespace DirectUI
