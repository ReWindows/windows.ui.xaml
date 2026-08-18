#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 94 member(s).
namespace DirectUI {
class Selector {
public:
    class InitializingData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationPeerAddToSelection@Selector@DirectUI@@QEAAJIPEAUIInspectable@@@Z
    long AutomationPeerAddToSelection(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationPeerIsSelected@Selector@DirectUI@@QEAAJPEAUIInspectable@@PEAE@Z
    long AutomationPeerIsSelected(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationPeerRemoveFromSelection@Selector@DirectUI@@QEAAJIPEAUIInspectable@@@Z
    long AutomationPeerRemoveFromSelection(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginInitImpl@Selector@DirectUI@@QEAAJXZ
    long BeginInitImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndInitImpl@Selector@DirectUI@@QEAAJPEAVXamlServiceProviderContext@@@Z
    long EndInitImpl(XamlServiceProviderContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementOverride@Selector@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetFirstFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsHostOrientations@Selector@DirectUI@@QEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@0@Z
    long GetItemsHostOrientations(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementOverride@Selector@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLastFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndexSelected@Selector@DirectUI@@QEAAJHPEA_N@Z
    long IsIndexSelected(int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Selector@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginChange@Selector@DirectUI@@IEAAJPEAPEAVSelectionChanger@2@@Z
    long BeginChange(::DirectUI::SelectionChanger * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScrollIntoView@Selector@DirectUI@@MEAAJAEAE@Z
    virtual long CanScrollIntoView(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItemOverride@Selector@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ClearContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelection@Selector@DirectUI@@IEAAJXZ
    long ClearSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeselectRangeInternal@Selector@DirectUI@@IEAAJHI@Z
    long DeselectRangeInternal(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementScrollViewerScrollInDirection@Selector@DirectUI@@IEAAJW4VirtualKey@System@Windows@@E@Z
    long ElementScrollViewerScrollInDirection(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndChange@Selector@DirectUI@@IEAAJPEAVSelectionChanger@2@EW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    long EndChange(::DirectUI::SelectionChanger *, unsigned char, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSourceAsSelectionInfo@Selector@DirectUI@@IEAAJPEAPEAUISelectionInfo@Data@Xaml@UI@Windows@@@Z
    long GetDataSourceAsSelectionInfo(::Windows::UI::Xaml::Data::ISelectionInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelOrientations@Selector@DirectUI@@IEAAJPEAUIPanel@Controls@Xaml@UI@Windows@@PEAW4Orientation@4567@1@Z
    long GetPanelOrientations(::Windows::UI::Xaml::Controls::IPanel *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNavigationKey@Selector@DirectUI@@IEAAJW4VirtualKey@System@Windows@@EAEAH@Z
    long HandleNavigationKey(int, unsigned char, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasItems@Selector@DirectUI@@IEAAJAEAE@Z
    long HasItems(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Selector@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSingleSelectionMode@Selector@DirectUI@@MEAAJPEAI@Z
    virtual long IsInSingleSelectionMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectableHelper@Selector@DirectUI@@KAJPEAUIInspectable@@AEAE@Z
    static long IsSelectableHelper(IInspectable *, unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionPatternApplicable@Selector@DirectUI@@MEAAJPEA_N@Z
    virtual long IsSelectionPatternApplicable(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionReentrancyAllowed@Selector@DirectUI@@IEAAEXZ
    unsigned char IsSelectionReentrancyAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFocused@Selector@DirectUI@@MEAAJPEAVSelectorItem@2@@Z
    virtual long ItemFocused(SelectorItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemUnfocused@Selector@DirectUI@@MEAAJPEAVSelectorItem@2@@Z
    virtual long ItemUnfocused(SelectorItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSingleSelection@Selector@DirectUI@@MEAAJIEPEAUIInspectable@@W4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long MakeSingleSelection(unsigned int, unsigned char, IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfSourceChanged@Selector@DirectUI@@MEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    virtual long NotifyOfSourceChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusEngaged@Selector@DirectUI@@IEAAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIFocusEngagedEventArgs@4567@@Z
    long OnFocusEngaged(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::Controls::IFocusEngagedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@Selector@DirectUI@@MEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long OnItemsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceChanged@Selector@DirectUI@@MEAAJPEAUIInspectable@@@Z
    virtual long OnItemsSourceChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@Selector@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Selector@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@Selector@DirectUI@@MEAAJHHPEAUIInspectable@@0EW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long OnSelectionChanged(int, int, IInspectable *, IInspectable *, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@Selector@DirectUI@@MEAAJPEAUISelectionChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long OnSelectionChanged(::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectorItemClicked@Selector@DirectUI@@MEAAJPEAVSelectorItem@2@PEAE@Z
    virtual long OnSelectorItemClicked(SelectorItem *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverride@Selector@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@Selector@DirectUI@@IEAAJIEEEEEEW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@NI@Z
    long ScrollIntoView(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, int, double, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewInternal@Selector@DirectUI@@IEAAJPEAUIInspectable@@EEEW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@NE@Z
    long ScrollIntoViewInternal(IInspectable *, unsigned char, unsigned char, unsigned char, int, double, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRectToViewport@Selector@DirectUI@@IEAAJURect@Foundation@Windows@@0EW4ScrollIntoViewAlignment@Controls@Xaml@UI@5@NPEAUIItemsPresenter@7895@@Z
    long ScrollRectToViewport(WindissectOpaque, WindissectOpaque, unsigned char, int, double, ::Windows::UI::Xaml::Controls::IItemsPresenter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAllInternal@Selector@DirectUI@@IEAAJXZ
    long SelectAllInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectJustThisItem@Selector@DirectUI@@IEAAJHHPEAVSelectionChanger@2@PEAUIInspectable@@PEAE@Z
    long SelectJustThisItem(int, int, ::DirectUI::SelectionChanger *, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectNext@Selector@DirectUI@@IEAAJAEAH@Z
    long SelectNext(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectOneItemInternal@Selector@DirectUI@@IEAAJHPEAUIInspectable@@E@Z
    long SelectOneItemInternal(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectPrev@Selector@DirectUI@@IEAAJAEAH@Z
    long SelectPrev(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectRangeInternal@Selector@DirectUI@@IEAAJHIE@Z
    long SelectRangeInternal(int, unsigned int, unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Selector@DirectUI@@IEAA@XZ
    Selector();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedItem@Selector@DirectUI@@MEAAJHEEW4FocusState@Xaml@UI@Windows@@EW4FocusNavigationDirection@Input@456@@Z
    virtual long SetFocusedItem(int, unsigned char, unsigned char, int, unsigned char, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedItem@Selector@DirectUI@@MEAAJHEEW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long SetFocusedItem(int, unsigned char, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPlaceholderIfVirtualized@Selector@DirectUI@@IEAAJPEAVSelectorItem@2@@Z
    long ShowPlaceholderIfVirtualized(SelectorItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPlaceholderIfVirtualized@Selector@DirectUI@@IEAAJI@Z
    long ShowPlaceholderIfVirtualized(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCVSynchronizationState@Selector@DirectUI@@IEAAJXZ
    long UpdateCVSynchronizationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibleAndCachedItemsSelectionAndVisualState@Selector@DirectUI@@IEAAJ_N@Z
    long UpdateVisibleAndCachedItemsSelectionAndVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@Selector@DirectUI@@MEAAJPEAE@Z
    virtual long get_CanSelectMultiple(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedItemsInternal@Selector@DirectUI@@IEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long get_SelectedItemsInternal(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Selector@DirectUI@@MEAA@XZ
    virtual ~Selector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceSelectedValueToNull@Selector@DirectUI@@AEAAJXZ
    long CoerceSelectedValueToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFromMonitoredCVCore@Selector@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long DisconnectFromMonitoredCVCore(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindIndexOfItemWithValue@Selector@DirectUI@@AEAAJPEAUIInspectable@@AEAHPEAPEAU3@@Z
    long FindIndexOfItemWithValue(IInspectable *, int &, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstItemOnCurrentPage@Selector@DirectUI@@AEAAJAEAHE@Z
    long GetFirstItemOnCurrentPage(int &, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedValue@Selector@DirectUI@@AEAAJPEAUIInspectable@@PEAPEAU3@@Z
    long GetSelectedValue(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDataSourceClearSelection@Selector@DirectUI@@AEAAJXZ
    long InvokeDataSourceClearSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDataSourceRangeSelection@Selector@DirectUI@@AEAAJ_NHI@Z
    long InvokeDataSourceRangeSelection(bool, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSelectionChanged@Selector@DirectUI@@AEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@0@Z
    long InvokeSelectionChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnCurrentPage@Selector@DirectUI@@AEAAJHEEPEAURect@Foundation@Windows@@0AEAE@Z
    long IsOnCurrentPage(int, unsigned char, unsigned char, WindissectOpaque *, WindissectOpaque *, unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnCurrentPage@Selector@DirectUI@@AEAAJPEAVFrameworkElement@2@EPEAURect@Foundation@Windows@@1AEAE@Z
    long IsOnCurrentPage(::DirectUI::FrameworkElement *, unsigned char, WindissectOpaque *, WindissectOpaque *, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorCV@Selector@DirectUI@@AEAAJPEAUICollectionView@Data@Xaml@UI@Windows@@@Z
    long MonitorCV(::Windows::UI::Xaml::Data::ICollectionView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateByPage@Selector@DirectUI@@AEAAJEAEAH@Z
    long NavigateByPage(unsigned char, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListItemSelected@Selector@DirectUI@@AEAAJPEAVSelectorItem@2@E@Z
    long NotifyListItemSelected(SelectorItem *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentChanged@Selector@DirectUI@@AEAAJXZ
    long OnCurrentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSynchronizedWithCurrentItemChanged@Selector@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnIsSynchronizedWithCurrentItemChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsHostChanged@Selector@DirectUI@@AEAAJXZ
    long OnItemsHostChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedIndexChanged@Selector@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnSelectedIndexChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemChanged@Selector@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnSelectedItemChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemsCollectionChanged@Selector@DirectUI@@AEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long OnSelectedItemsCollectionChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedValueChanged@Selector@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnSelectedValueChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedValuePathChanged@Selector@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnSelectedValuePathChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsSelectedChangedAutomationEvent@Selector@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@E@Z
    long RaiseIsSelectedChangedAutomationEvent(::Windows::UI::Xaml::IDependencyObject *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChanged@Selector@DirectUI@@AEAAJPEAUISelectionChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long RaiseSelectionChanged(::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportOldSelectedIndexAs@Selector@DirectUI@@AEAAJH@Z
    long ReportOldSelectedIndexAs(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAllSelectedSelectorItems@Selector@DirectUI@@AEAAJPEAVSelectionChanger@2@@Z
    long SelectAllSelectedSelectorItems(::DirectUI::SelectionChanger *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectIndex@Selector@DirectUI@@EEAAJI@Z
    virtual long SelectIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItemHelper@Selector@DirectUI@@AEAAJAEAHH@Z
    long SelectItemHelper(int &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectJustThisItemInternal@Selector@DirectUI@@AEAAJHHPEAUIInspectable@@EPEAEW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    long SelectJustThisItemInternal(int, int, IInspectable *, unsigned char, unsigned char *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemIsSelected@Selector@DirectUI@@AEAAJIE@Z
    long SetItemIsSelected(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnselectIndex@Selector@DirectUI@@EEAAJI@Z
    virtual long UnselectIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentItemInCollectionView@Selector@DirectUI@@AEAAJPEAUIInspectable@@PEAI@Z
    long UpdateCurrentItemInCollectionView(IInspectable *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsSynchronized@Selector@DirectUI@@AEAAJXZ
    long UpdateIsSynchronized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePublicSelectionProperties@Selector@DirectUI@@AEAAJHHPEAUIInspectable@@0EW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    long UpdatePublicSelectionProperties(int, int, IInspectable *, IInspectable *, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePublicSelectionPropertiesAfterDataSourceSelectionInfo@Selector@DirectUI@@AEAAJXZ
    long UpdatePublicSelectionPropertiesAfterDataSourceSelectionInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedItems@Selector@DirectUI@@AEAAJXZ
    long UpdateSelectedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedRanges@Selector@DirectUI@@AEAAJXZ
    long UpdateSelectedRanges();
};
} // namespace DirectUI
