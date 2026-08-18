#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class MenuFlyoutItemGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickEventSourceNoRef@MenuFlyoutItemGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetClickEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MenuFlyoutItemGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuFlyoutItemGenerated@DirectUI@@QEAA@XZ
    MenuFlyoutItemGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Click@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Click(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Command@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAPEAUICommand@Input@Xaml@UI@Windows@@@Z
    virtual long get_Command(::Windows::UI::Xaml::Input::ICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandParameter@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CommandParameter(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardAcceleratorTextOverride@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_KeyboardAcceleratorTextOverride(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateSettings@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAPEAUIMenuFlyoutItemTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TemplateSettings(::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Command@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAUICommand@Input@Xaml@UI@Windows@@@Z
    virtual long put_Command(::Windows::UI::Xaml::Input::ICommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CommandParameter@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_CommandParameter(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyboardAcceleratorTextOverride@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_KeyboardAcceleratorTextOverride(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Text@MenuFlyoutItemGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Text(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Click@MenuFlyoutItemGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Click(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MenuFlyoutItemGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@MenuFlyoutItemGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@MenuFlyoutItemGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MenuFlyoutItemGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MenuFlyoutItemGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MenuFlyoutItemGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
