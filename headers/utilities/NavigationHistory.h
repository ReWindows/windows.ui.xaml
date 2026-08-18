#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
namespace DirectUI {
class NavigationHistory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitNavigation@NavigationHistory@DirectUI@@QEAAJXZ
    long CommitNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitSetNavigationState@NavigationHistory@DirectUI@@QEAAJPEAVNavigationCache@2@@Z
    long CommitSetNavigationState(::DirectUI::NavigationCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@NavigationHistory@DirectUI@@SAJPEAUIFrame@Controls@Xaml@UI@Windows@@PEAPEAV12@@Z
    static long Create(::Windows::UI::Xaml::Controls::IFrame *, NavigationHistory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackStack@NavigationHistory@DirectUI@@QEAAJPEAPEAU?$IVector@PEAVPageStackEntry@Navigation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long GetBackStack(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationState@NavigationHistory@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetNavigationState(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateNew@NavigationHistory@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    long NavigateNew(HSTRING__*, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateNext@NavigationHistory@DirectUI@@QEAAJXZ
    long NavigateNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigatePrevious@NavigationHistory@DirectUI@@QEAAJXZ
    long NavigatePrevious();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPageStackChanged@NavigationHistory@DirectUI@@QEAAJEW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long OnPageStackChanged(unsigned char, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPageStackChanging@NavigationHistory@DirectUI@@QEAAJEW4CollectionChange@Collections@Foundation@Windows@@IPEAVPageStackEntry@2@@Z
    long OnPageStackChanging(unsigned char, int, unsigned int, ::DirectUI::PageStackEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPageStackEntries@NavigationHistory@DirectUI@@QEAAJE@Z
    long ResetPageStackEntries(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationState@NavigationHistory@DirectUI@@QEAAJPEAUHSTRING__@@E@Z
    long SetNavigationState(HSTRING__*, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCanChangePageStack@NavigationHistory@DirectUI@@QEAAJXZ
    long ValidateCanChangePageStack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCanInsertEntry@NavigationHistory@DirectUI@@QEAAJPEAVPageStackEntry@2@@Z
    long ValidateCanInsertEntry(::DirectUI::PageStackEntry *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationHistory@DirectUI@@IEAA@XZ
    NavigationHistory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationHistory@DirectUI@@MEAA@XZ
    virtual ~NavigationHistory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNavigationHistory@NavigationHistory@DirectUI@@AEAAJXZ
    long ClearNavigationHistory();
};
} // namespace DirectUI
