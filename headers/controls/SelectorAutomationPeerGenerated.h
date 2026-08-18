#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class SelectorAutomationPeerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@SelectorAutomationPeerGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetSelection(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SelectorAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@SelectorAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanSelectMultiple(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionRequired@SelectorAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelectionRequired(unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SelectorAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SelectorAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SelectorAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SelectorAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
