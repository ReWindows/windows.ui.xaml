#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
namespace DirectUI {
class AppBarAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AppBarAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@AppBarAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@AppBarAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Expand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AppBarAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@AppBarAutomationPeerGenerated@DirectUI@@UEAAJW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long SetVisualState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Toggle@AppBarAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Toggle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInputIdle@AppBarAutomationPeerGenerated@DirectUI@@UEAAJHPEAE@Z
    virtual long WaitForInputIdle(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@AppBarAutomationPeerGenerated@DirectUI@@UEAAJPEAW4ExpandCollapseState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ExpandCollapseState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractionState@AppBarAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowInteractionState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_InteractionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModal@AppBarAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsModal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@AppBarAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTopmost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximizable@AppBarAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Maximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimizable@AppBarAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Minimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleState@AppBarAutomationPeerGenerated@DirectUI@@UEAAJPEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ToggleState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualState@AppBarAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_VisualState(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AppBarAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AppBarAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AppBarAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AppBarAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
