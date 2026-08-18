#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class ComboBoxLightDismiss {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationClick@ComboBoxLightDismiss@DirectUI@@QEAAJXZ
    long AutomationClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Owner@ComboBoxLightDismiss@DirectUI@@QEAAJPEAUIComboBox@Controls@Xaml@UI@Windows@@@Z
    long put_Owner(::Windows::UI::Xaml::Controls::IComboBox *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComboBoxLightDismiss@DirectUI@@UEAA@XZ
    virtual ~ComboBoxLightDismiss();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ComboBoxLightDismiss@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI
