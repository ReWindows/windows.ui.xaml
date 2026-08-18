#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
namespace DirectUI {
class SelectorGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginInit@SelectorGenerated@DirectUI@@UEAAJXZ
    virtual long BeginInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndInit@SelectorGenerated@DirectUI@@UEAAJPEAVXamlServiceProviderContext@@@Z
    virtual long EndInit(XamlServiceProviderContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionChangedEventSourceNoRef@SelectorGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UISelectionChangedEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UISelectionChangedEventArgs@2345@@2@@Z
    long GetSelectionChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SelectionChanged@SelectorGenerated@DirectUI@@UEAAJPEAUISelectionChangedEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SelectionChanged(::Windows::UI::Xaml::Controls::ISelectionChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSynchronizedWithCurrentItem@SelectorGenerated@DirectUI@@UEAAJPEAPEAU?$IReference@_N@Foundation@Windows@@@Z
    virtual long get_IsSynchronizedWithCurrentItem(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedIndex@SelectorGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_SelectedIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedItem@SelectorGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_SelectedItem(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedValue@SelectorGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_SelectedValue(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedValuePath@SelectorGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SelectedValuePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSynchronizedWithCurrentItem@SelectorGenerated@DirectUI@@UEAAJPEAU?$IReference@_N@Foundation@Windows@@@Z
    virtual long put_IsSynchronizedWithCurrentItem(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedIndex@SelectorGenerated@DirectUI@@UEAAJH@Z
    virtual long put_SelectedIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedItem@SelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_SelectedItem(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedValue@SelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_SelectedValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedValuePath@SelectorGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_SelectedValuePath(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SelectionChanged@SelectorGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SelectionChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SelectorGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@SelectorGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@SelectorGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SelectorGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
