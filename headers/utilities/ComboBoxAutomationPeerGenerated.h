#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class ComboBoxAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Expand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ComboBoxAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetValue(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long SetVisualState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInputIdle@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJHPEAE@Z
    virtual long WaitForInputIdle(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAW4ExpandCollapseState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ExpandCollapseState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractionState@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowInteractionState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_InteractionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModal@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsModal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTopmost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximizable@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Maximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimizable@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Minimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Value(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualState@ComboBoxAutomationPeerGenerated@DirectUI@@UEAAJPEAW4WindowVisualState@Automation@Xaml@UI@Windows@@@Z
    virtual long get_VisualState(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ComboBoxAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ComboBoxAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ComboBoxAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ComboBoxAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
