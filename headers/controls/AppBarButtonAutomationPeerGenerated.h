#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class AppBarButtonAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@AppBarButtonAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@AppBarButtonAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Expand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AppBarButtonAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@AppBarButtonAutomationPeerGenerated@DirectUI@@UEAAJPEAW4ExpandCollapseState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ExpandCollapseState(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AppBarButtonAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AppBarButtonAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AppBarButtonAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AppBarButtonAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
