#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
namespace DirectUI {
class ListBox {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ListBox@DirectUI@@UEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAllImpl@ListBox@DirectUI@@QEAAJXZ
    long SelectAllImpl();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItemOverride@ListBox@DirectUI@@MEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ListBox@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainerOverride@ListBox@DirectUI@@MEAAJPEAUIInspectable@@PEAE@Z
    virtual long IsItemItsOwnContainerOverride(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ListBox@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ListBox@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ListBox@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@ListBox@DirectUI@@MEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long OnItemsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ListBox@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ListBox@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ListBox@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@ListBox@DirectUI@@MEAAJHHPEAUIInspectable@@0EW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long OnSelectionChanged(int, int, IInspectable *, IInspectable *, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectorItemClicked@ListBox@DirectUI@@MEAAJPEAVSelectorItem@2@PEAE@Z
    virtual long OnSelectorItemClicked(::DirectUI::SelectorItem *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@ListBox@DirectUI@@MEAAJPEAE@Z
    virtual long get_CanSelectMultiple(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListBox@DirectUI@@MEAA@XZ
    virtual ~ListBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@ListBox@DirectUI@@AEAAJEE@Z
    long FocusChanged(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleItemSelection@ListBox@DirectUI@@AEAAJPEAVListBoxItem@2@E@Z
    long HandleItemSelection(ListBoxItem *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeRangeSelection@ListBox@DirectUI@@AEAAJIE@Z
    long MakeRangeSelection(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeRangeSelection@ListBox@DirectUI@@AEAAJPEAVListBoxItem@2@E@Z
    long MakeRangeSelection(ListBoxItem *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSingleSelection@ListBox@DirectUI@@AEAAJPEAVListBoxItem@2@W4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    long MakeSingleSelection(ListBoxItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSingleSelection@ListBox@DirectUI@@EEAAJIEPEAUIInspectable@@W4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long MakeSingleSelection(unsigned int, unsigned char, IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeToggleSelection@ListBox@DirectUI@@AEAAJPEAVListBoxItem@2@@Z
    long MakeToggleSelection(ListBoxItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSelectionActiveChanged@ListBox@DirectUI@@AEAAJXZ
    long OnIsSelectionActiveChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ListBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionModeChanged@ListBox@DirectUI@@AEAAJW4SelectionMode@Controls@Xaml@UI@Windows@@@Z
    long OnSelectionModeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAllItems@ListBox@DirectUI@@AEAAJXZ
    long SelectAllItems();
};
} // namespace DirectUI
