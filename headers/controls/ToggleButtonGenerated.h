#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class ToggleButtonGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCheckedEventSourceNoRef@ToggleButtonGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetCheckedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndeterminateEventSourceNoRef@ToggleButtonGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetIndeterminateEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ToggleButtonGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUncheckedEventSourceNoRef@ToggleButtonGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetUncheckedEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToggle@ToggleButtonGenerated@DirectUI@@UEAAJXZ
    virtual long OnToggle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToggleProtected@ToggleButtonGenerated@DirectUI@@QEAAJXZ
    long OnToggleProtected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Checked@ToggleButtonGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Checked(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Indeterminate@ToggleButtonGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Indeterminate(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Unchecked@ToggleButtonGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Unchecked(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsChecked@ToggleButtonGenerated@DirectUI@@UEAAJPEAPEAU?$IReference@_N@Foundation@Windows@@@Z
    virtual long get_IsChecked(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsThreeState@ToggleButtonGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsThreeState(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsChecked@ToggleButtonGenerated@DirectUI@@UEAAJPEAU?$IReference@_N@Foundation@Windows@@@Z
    virtual long put_IsChecked(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsThreeState@ToggleButtonGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsThreeState(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Checked@ToggleButtonGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Checked(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Indeterminate@ToggleButtonGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Indeterminate(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Unchecked@ToggleButtonGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Unchecked(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ToggleButtonGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ToggleButtonGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ToggleButtonGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ToggleButtonGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ToggleButtonGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ToggleButtonGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
