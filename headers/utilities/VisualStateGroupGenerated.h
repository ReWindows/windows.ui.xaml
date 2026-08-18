#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class VisualStateGroupGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentStateChangedEventSourceNoRef@VisualStateGroupGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIVisualStateChangedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIVisualStateChangedEventArgs@234@@2@@Z
    long GetCurrentStateChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentStateChangingEventSourceNoRef@VisualStateGroupGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIVisualStateChangedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIVisualStateChangedEventArgs@234@@2@@Z
    long GetCurrentStateChangingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VisualStateGroupGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CurrentStateChanged@VisualStateGroupGenerated@DirectUI@@UEAAJPEAUIVisualStateChangedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CurrentStateChanged(::Windows::UI::Xaml::IVisualStateChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CurrentStateChanging@VisualStateGroupGenerated@DirectUI@@UEAAJPEAUIVisualStateChangedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CurrentStateChanging(::Windows::UI::Xaml::IVisualStateChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentState@VisualStateGroupGenerated@DirectUI@@UEAAJPEAPEAUIVisualState@Xaml@UI@Windows@@@Z
    virtual long get_CurrentState(::Windows::UI::Xaml::IVisualState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@VisualStateGroupGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_States@VisualStateGroupGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVVisualState@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_States(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Transitions@VisualStateGroupGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVVisualTransition@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Transitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CurrentStateChanged@VisualStateGroupGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CurrentStateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CurrentStateChanging@VisualStateGroupGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CurrentStateChanging(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VisualStateGroupGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VisualStateGroupGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@VisualStateGroupGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VisualStateGroupGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
