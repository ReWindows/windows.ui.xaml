#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class PageStackEntryTrackerCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@PageStackEntryTrackerCollection@DirectUI@@UEAAJPEAUIPageStackEntry@Navigation@Xaml@UI@Windows@@@Z
    virtual long Append(::Windows::UI::Xaml::Navigation::IPageStackEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendInternal@PageStackEntryTrackerCollection@DirectUI@@QEAAJPEAUIPageStackEntry@Navigation@Xaml@UI@Windows@@@Z
    long AppendInternal(::Windows::UI::Xaml::Navigation::IPageStackEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@PageStackEntryTrackerCollection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInternal@PageStackEntryTrackerCollection@DirectUI@@QEAAJXZ
    long ClearInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtEnd@PageStackEntryTrackerCollection@DirectUI@@QEAAJPEAPEAUIPageStackEntry@Navigation@Xaml@UI@Windows@@@Z
    long GetAtEnd(::Windows::UI::Xaml::Navigation::IPageStackEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PageStackEntryTrackerCollection@DirectUI@@QEAAJPEAVNavigationHistory@2@E@Z
    long Init(::DirectUI::NavigationHistory *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@PageStackEntryTrackerCollection@DirectUI@@UEAAJIPEAUIPageStackEntry@Navigation@Xaml@UI@Windows@@@Z
    virtual long InsertAt(unsigned int, ::Windows::UI::Xaml::Navigation::IPageStackEntry *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PageStackEntryTrackerCollection@DirectUI@@QEAA@XZ
    PageStackEntryTrackerCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@PageStackEntryTrackerCollection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@PageStackEntryTrackerCollection@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEndInternal@PageStackEntryTrackerCollection@DirectUI@@QEAAJXZ
    long RemoveAtEndInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@PageStackEntryTrackerCollection@DirectUI@@UEAAJIPEAUIPageStackEntry@Navigation@Xaml@UI@Windows@@@Z
    virtual long SetAt(unsigned int, ::Windows::UI::Xaml::Navigation::IPageStackEntry *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PageStackEntryTrackerCollection@DirectUI@@UEAA@XZ
    virtual ~PageStackEntryTrackerCollection();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationHistory@PageStackEntryTrackerCollection@DirectUI@@AEAAJPEAPEAVNavigationHistory@2@@Z
    long GetNavigationHistory(::DirectUI::NavigationHistory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVectorChanged@PageStackEntryTrackerCollection@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long OnVectorChanged(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVectorChanging@PageStackEntryTrackerCollection@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@IPEAUIPageStackEntry@Navigation@Xaml@UI@6@@Z
    long OnVectorChanging(int, unsigned int, ::Windows::UI::Xaml::Navigation::IPageStackEntry *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationHistory@PageStackEntryTrackerCollection@DirectUI@@AEAAJPEAVNavigationHistory@2@@Z
    long SetNavigationHistory(::DirectUI::NavigationHistory *);
};
} // namespace DirectUI
