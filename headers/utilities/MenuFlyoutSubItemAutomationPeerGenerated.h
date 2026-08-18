#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class MenuFlyoutSubItemAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@MenuFlyoutSubItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@MenuFlyoutSubItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Expand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MenuFlyoutSubItemAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@MenuFlyoutSubItemAutomationPeerGenerated@DirectUI@@UEAAJPEAW4ExpandCollapseState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ExpandCollapseState(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MenuFlyoutSubItemAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MenuFlyoutSubItemAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MenuFlyoutSubItemAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
