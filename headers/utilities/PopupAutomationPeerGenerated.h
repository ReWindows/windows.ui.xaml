#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class PopupAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@PopupAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PopupAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@PopupAutomationPeerGenerated@DirectUI@@UEAAJW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long SetVisualState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInputIdle@PopupAutomationPeerGenerated@DirectUI@@UEAAJHPEAE@Z
    virtual long WaitForInputIdle(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractionState@PopupAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowInteractionState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_InteractionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModal@PopupAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsModal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@PopupAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTopmost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximizable@PopupAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Maximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimizable@PopupAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Minimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualState@PopupAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_VisualState(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PopupAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PopupAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PopupAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
