#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class HyperlinkGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Focus@HyperlinkGenerated@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    long Focus(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickEventSourceNoRef@HyperlinkGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@U?$ITypedEventHandler@PEAVHyperlink@Documents@Xaml@UI@Windows@@PEAVHyperlinkClickEventArgs@2345@@Foundation@Windows@@UIHyperlink@Documents@Xaml@UI@3@UIHyperlinkClickEventArgs@5673@@2@@Z
    long GetClickEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGotFocusEventSourceNoRef@HyperlinkGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetGotFocusEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLostFocusEventSourceNoRef@HyperlinkGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetLostFocusEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HyperlinkGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Click@HyperlinkGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVHyperlink@Documents@Xaml@UI@Windows@@PEAVHyperlinkClickEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Click(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GotFocus@HyperlinkGenerated@DirectUI@@QEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long add_GotFocus(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LostFocus@HyperlinkGenerated@DirectUI@@QEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long add_LostFocus(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigateUri@HyperlinkGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_NavigateUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NavigateUri@HyperlinkGenerated@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_NavigateUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Click@HyperlinkGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Click(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GotFocus@HyperlinkGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_GotFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LostFocus@HyperlinkGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_LostFocus(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HyperlinkGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HyperlinkGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@HyperlinkGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HyperlinkGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
