#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class RadioButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToggle@RadioButton@DirectUI@@UEAAJXZ
    virtual long OnToggle();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@RadioButton@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFrameworkPeerCore@RadioButton@DirectUI@@MEAAJXZ
    virtual long DisconnectFrameworkPeerCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RadioButton@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChecked@RadioButton@DirectUI@@MEAAJXZ
    virtual long OnChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RadioButton@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@RadioButton@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@RadioButton@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusNextElementInGroup@RadioButton@DirectUI@@AEAAJ_NPEA_N@Z
    long FocusNextElementInGroup(bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupName@RadioButton@DirectUI@@AEAAJPEA_NPEAVxstring_ptr@@@Z
    long GetGroupName(bool *, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentForGroup@RadioButton@DirectUI@@AEAAJ_NPEAV12@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long GetParentForGroup(bool, RadioButton *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupNamePropertyChanged@RadioButton@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnGroupNamePropertyChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@RadioButton@DirectUI@@CAJPEAUHSTRING__@@PEAV12@@Z
    static long Register(HSTRING__*, RadioButton *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@RadioButton@DirectUI@@CAJPEAUHSTRING__@@PEAV12@@Z
    static long Unregister(HSTRING__*, RadioButton *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSafe@RadioButton@DirectUI@@CAJPEAV12@@Z
    static long UnregisterSafe(RadioButton *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRadioButtonGroup@RadioButton@DirectUI@@AEAAJXZ
    long UpdateRadioButtonGroup();
};
} // namespace DirectUI
