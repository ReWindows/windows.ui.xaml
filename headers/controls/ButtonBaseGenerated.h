#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class ButtonBaseGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickEventSourceNoRef@ButtonBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetClickEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ButtonBaseGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Click@ButtonBaseGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Click(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClickMode@ButtonBaseGenerated@DirectUI@@UEAAJPEAW4ClickMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ClickMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Command@ButtonBaseGenerated@DirectUI@@UEAAJPEAPEAUICommand@Input@Xaml@UI@Windows@@@Z
    virtual long get_Command(::Windows::UI::Xaml::Input::ICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandParameter@ButtonBaseGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_CommandParameter(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPointerOver@ButtonBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsPointerOver(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPressed@ButtonBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ClickMode@ButtonBaseGenerated@DirectUI@@UEAAJW4ClickMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ClickMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Command@ButtonBaseGenerated@DirectUI@@UEAAJPEAUICommand@Input@Xaml@UI@Windows@@@Z
    virtual long put_Command(::Windows::UI::Xaml::Input::ICommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CommandParameter@ButtonBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_CommandParameter(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPointerOver@ButtonBaseGenerated@DirectUI@@QEAAJE@Z
    long put_IsPointerOver(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPressed@ButtonBaseGenerated@DirectUI@@QEAAJE@Z
    long put_IsPressed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Click@ButtonBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Click(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ButtonBaseGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ButtonBaseGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ButtonBaseGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ButtonBaseGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ButtonBaseGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ButtonBaseGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
