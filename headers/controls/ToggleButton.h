#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class ToggleButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationToggleButtonOnToggle@ToggleButton@DirectUI@@QEAAJXZ
    long AutomationToggleButtonOnToggle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToggleImpl@ToggleButton@DirectUI@@QEAAJXZ
    long OnToggleImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ToggleButton@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ToggleButton@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChecked@ToggleButton@DirectUI@@MEAAJXZ
    virtual long OnChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@ToggleButton@DirectUI@@MEAAJXZ
    virtual long OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ToggleButton@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIndeterminate@ToggleButton@DirectUI@@MEAAJXZ
    virtual long OnIndeterminate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ToggleButton@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnchecked@ToggleButton@DirectUI@@MEAAJXZ
    virtual long OnUnchecked();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCheckedChanged@ToggleButton@DirectUI@@EEAAJXZ
    virtual long OnIsCheckedChanged();
};
} // namespace DirectUI
