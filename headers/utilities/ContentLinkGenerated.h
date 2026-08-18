#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class ContentLinkGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Focus@ContentLinkGenerated@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    long Focus(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGotFocusEventSourceNoRef@ContentLinkGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetGotFocusEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInvokedEventSourceNoRef@ContentLinkGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVContentLink@Documents@Xaml@UI@Windows@@PEAVContentLinkInvokedEventArgs@2345@@Foundation@Windows@@UIContentLink@Documents@Xaml@UI@3@UIContentLinkInvokedEventArgs@5673@@2@@Z
    long GetInvokedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLostFocusEventSourceNoRef@ContentLinkGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetLostFocusEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ContentLinkGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GotFocus@ContentLinkGenerated@DirectUI@@QEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long add_GotFocus(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Invoked@ContentLinkGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVContentLink@Documents@Xaml@UI@Windows@@PEAVContentLinkInvokedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_Invoked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LostFocus@ContentLinkGenerated@DirectUI@@QEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long add_LostFocus(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Info@ContentLinkGenerated@DirectUI@@QEAAJPEAPEAUIContentLinkInfo@Text@UI@Windows@@@Z
    long get_Info(::Windows::UI::Text::IContentLinkInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GotFocus@ContentLinkGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_GotFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Invoked@ContentLinkGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_Invoked(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LostFocus@ContentLinkGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_LostFocus(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContentLinkGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContentLinkGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContentLinkGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContentLinkGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
