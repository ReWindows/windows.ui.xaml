#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 39 member(s).
namespace DirectUI {
class CandidateList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CandidateList@DirectUI@@SAJPEAUIBorder@Controls@Xaml@UI@Windows@@PEAPEAV12@@Z
    static long CreateInstance(::Windows::UI::Xaml::Controls::IBorder *, CandidateList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontSizesOfCurrentInputLanguage@CandidateList@DirectUI@@QEAAJPEAN0@Z
    long GetFontSizesOfCurrentInputLanguage(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageFirstCandidate@CandidateList@DirectUI@@QEAAJHPEAPEAUIIMECandidateItem@Controls@Xaml@UI@Windows@@@Z
    long GetPageFirstCandidate(int, ::Windows::UI::Xaml::Controls::IIMECandidateItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageFirstCandidateIndex@CandidateList@DirectUI@@QEAAJHPEAH@Z
    long GetPageFirstCandidateIndex(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeCandidatesChanged@CandidateList@DirectUI@@QEAAJ_N@Z
    long OnImeCandidatesChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeHideWindow@CandidateList@DirectUI@@QEAAJXZ
    long OnImeHideWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeSelectionChanged@CandidateList@DirectUI@@QEAAJ_NPEA_N@Z
    long OnImeSelectionChanged(bool, bool *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CandidateList@DirectUI@@IEAA@XZ
    CandidateList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPageCollection@CandidateList@DirectUI@@IEAAJXZ
    long ClearPageCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNextPage@CandidateList@DirectUI@@IEAAJIPEAPEAVIMECandidatePage@2@@Z
    long CreateNextPage(unsigned int, ::DirectUI::IMECandidatePage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DistributeCandidatesEvenlyOnPage@CandidateList@DirectUI@@IEAAJNPEAV?$ObservableTrackerCollection@PEAUIInspectable@@@2@PEAVIMECandidateItem@2@@Z
    long DistributeCandidatesEvenlyOnPage(double, WindissectOpaque *, ::DirectUI::IMECandidateItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCandidateItemDataTemplateElement@CandidateList@DirectUI@@IEAAJXZ
    long EnsureCandidateItemDataTemplateElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContainerAutomationProperties@CandidateList@DirectUI@@IEAAJXZ
    long EnsureContainerAutomationProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRealizedCandidatePage@CandidateList@DirectUI@@IEAAJI@Z
    long EnsureRealizedCandidatePage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScrollViewerListView@CandidateList@DirectUI@@IEAAJXZ
    long EnsureScrollViewerListView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNamedChild@CandidateList@DirectUI@@IEAAJPEBGPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long FindNamedChild(unsigned short const *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateUserControl@CandidateList@DirectUI@@IEAAJPEAPEAUIUserControl@Controls@Xaml@UI@Windows@@@Z
    long GenerateUserControl(::Windows::UI::Xaml::Controls::IUserControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatePage@CandidateList@DirectUI@@IEAAJHPEAPEAUIIMECandidatePage@Controls@Xaml@UI@Windows@@@Z
    long GetCandidatePage(int, ::Windows::UI::Xaml::Controls::IIMECandidatePage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageForItem@CandidateList@DirectUI@@IEAAJHPEAI@Z
    long GetPageForItem(int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUICurrentViewPage@CandidateList@DirectUI@@IEAAJPEAI@Z
    long GetUICurrentViewPage(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUISelectedCandidate@CandidateList@DirectUI@@IEAAHXZ
    int GetUISelectedCandidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CandidateList@DirectUI@@IEAAJPEAUIBorder@Controls@Xaml@UI@Windows@@@Z
    long Init(::Windows::UI::Xaml::Controls::IBorder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidatePageContainerAutomationProperties@CandidateList@DirectUI@@IEAAJI@Z
    long InvalidatePageContainerAutomationProperties(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureCandidateFirstCharacter@CandidateList@DirectUI@@IEAAJPEAVIMECandidateItem@2@PEAUSize@Foundation@Windows@@@Z
    long MeasureCandidateFirstCharacter(::DirectUI::IMECandidateItem *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureIMECandidateItem@CandidateList@DirectUI@@IEAAJPEAVIMECandidateItem@2@PEAUSize@Foundation@Windows@@@Z
    long MeasureIMECandidateItem(::DirectUI::IMECandidateItem *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemClick@CandidateList@DirectUI@@IEAAJPEAUIInspectable@@PEAUIItemClickEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnItemClick(IInspectable *, ::Windows::UI::Xaml::Controls::IItemClickEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNextPageButtonClick@CandidateList@DirectUI@@IEAAJXZ
    long OnNextPageButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewChanged@CandidateList@DirectUI@@IEAAJPEAUIInspectable@@PEAUIScrollViewerViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnScrollViewChanged(IInspectable *, ::Windows::UI::Xaml::Controls::IScrollViewerViewChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepaginateCurrentCandidates@CandidateList@DirectUI@@IEAAJXZ
    long RepaginateCurrentCandidates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectIMECandidateForMeasure@CandidateList@DirectUI@@IEAAJPEAVIMECandidateItem@2@@Z
    long SelectIMECandidateForMeasure(::DirectUI::IMECandidateItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIMECurrentPage@CandidateList@DirectUI@@IEAAJH@Z
    long SetIMECurrentPage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPageShortcutVisibility@CandidateList@DirectUI@@IEAAJIE@Z
    long SetPageShortcutVisibility(unsigned int, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUICurrentViewPage@CandidateList@DirectUI@@IEAAJIEE@Z
    long SetUICurrentViewPage(unsigned int, unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUISelectedCandidate@CandidateList@DirectUI@@IEAAJHE@Z
    long SetUISelectedCandidate(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePagingButtonVisibility@CandidateList@DirectUI@@IEAAJXZ
    long UpdatePagingButtonVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePagingButtonVisibilityFromPointerEvent@CandidateList@DirectUI@@IEAAJEPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long UpdatePagingButtonVisibilityFromPointerEvent(unsigned char, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CandidateList@DirectUI@@MEAA@XZ
    virtual ~CandidateList();
};
} // namespace DirectUI
