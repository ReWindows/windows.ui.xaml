#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ComboBoxItemDataAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelectionImpl@ComboBoxItemDataAutomationPeer@DirectUI@@UEAAJXZ
    virtual long AddToSelectionImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ComboBoxItemDataAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ComboBoxItemDataAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realize@ComboBoxItemDataAutomationPeer@DirectUI@@UEAAJXZ
    virtual long Realize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelectionImpl@ComboBoxItemDataAutomationPeer@DirectUI@@UEAAJXZ
    virtual long RemoveFromSelectionImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectImpl@ComboBoxItemDataAutomationPeer@DirectUI@@UEAAJXZ
    virtual long SelectImpl();
};
} // namespace DirectUI
