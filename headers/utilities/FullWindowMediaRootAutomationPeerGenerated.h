#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class FullWindowMediaRootAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long SetVisualState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInputIdle@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJHPEAE@Z
    virtual long WaitForInputIdle(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractionState@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowInteractionState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_InteractionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModal@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsModal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTopmost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximizable@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Maximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimizable@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Minimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualState@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_VisualState(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FullWindowMediaRootAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
