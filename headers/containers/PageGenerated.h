#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class PageGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PageGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedFrom@PageGenerated@DirectUI@@UEAAJPEAUINavigationEventArgs@Navigation@Xaml@UI@Windows@@@Z
    virtual long OnNavigatedFrom(::Windows::UI::Xaml::Navigation::INavigationEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedFromProtected@PageGenerated@DirectUI@@QEAAJPEAUINavigationEventArgs@Navigation@Xaml@UI@Windows@@@Z
    long OnNavigatedFromProtected(::Windows::UI::Xaml::Navigation::INavigationEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedTo@PageGenerated@DirectUI@@UEAAJPEAUINavigationEventArgs@Navigation@Xaml@UI@Windows@@@Z
    virtual long OnNavigatedTo(::Windows::UI::Xaml::Navigation::INavigationEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedToProtected@PageGenerated@DirectUI@@QEAAJPEAUINavigationEventArgs@Navigation@Xaml@UI@Windows@@@Z
    long OnNavigatedToProtected(::Windows::UI::Xaml::Navigation::INavigationEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatingFrom@PageGenerated@DirectUI@@UEAAJPEAUINavigatingCancelEventArgs@Navigation@Xaml@UI@Windows@@@Z
    virtual long OnNavigatingFrom(::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatingFromProtected@PageGenerated@DirectUI@@QEAAJPEAUINavigatingCancelEventArgs@Navigation@Xaml@UI@Windows@@@Z
    long OnNavigatingFromProtected(::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BottomAppBar@PageGenerated@DirectUI@@UEAAJPEAPEAUIAppBar@Controls@Xaml@UI@Windows@@@Z
    virtual long get_BottomAppBar(::Windows::UI::Xaml::Controls::IAppBar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Frame@PageGenerated@DirectUI@@UEAAJPEAPEAUIFrame@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Frame(::Windows::UI::Xaml::Controls::IFrame * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationCacheMode@PageGenerated@DirectUI@@UEAAJPEAW4NavigationCacheMode@Navigation@Xaml@UI@Windows@@@Z
    virtual long get_NavigationCacheMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopAppBar@PageGenerated@DirectUI@@UEAAJPEAPEAUIAppBar@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TopAppBar(::Windows::UI::Xaml::Controls::IAppBar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BottomAppBar@PageGenerated@DirectUI@@UEAAJPEAUIAppBar@Controls@Xaml@UI@Windows@@@Z
    virtual long put_BottomAppBar(::Windows::UI::Xaml::Controls::IAppBar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NavigationCacheMode@PageGenerated@DirectUI@@UEAAJW4NavigationCacheMode@Navigation@Xaml@UI@Windows@@@Z
    virtual long put_NavigationCacheMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TopAppBar@PageGenerated@DirectUI@@UEAAJPEAUIAppBar@Controls@Xaml@UI@Windows@@@Z
    virtual long put_TopAppBar(::Windows::UI::Xaml::Controls::IAppBar *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PageGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PageGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PageGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PageGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
