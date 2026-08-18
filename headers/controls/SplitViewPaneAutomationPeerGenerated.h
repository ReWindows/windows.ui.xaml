#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class SplitViewPaneAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long SetVisualState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInputIdle@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJHPEAE@Z
    virtual long WaitForInputIdle(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractionState@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowInteractionState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_InteractionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModal@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsModal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTopmost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximizable@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Maximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimizable@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Minimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualState@SplitViewPaneAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_VisualState(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SplitViewPaneAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SplitViewPaneAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SplitViewPaneAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
