#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ListViewBaseItemAutomationPeerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGrabbedItems@ListViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetGrabbedItems(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffect@ListViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DropEffect(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffects@ListViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUHSTRING__@@@Z
    virtual long get_DropEffects(unsigned int *, HSTRING__* * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsGrabbed@ListViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsGrabbed(unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ListViewBaseItemAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ListViewBaseItemAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
