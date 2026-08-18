#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class NavigatingCancelEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigatingCancelEventArgs@DirectUI@@QEAA@XZ
    NavigatingCancelEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@NavigatingCancelEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationMode@NavigatingCancelEventArgs@DirectUI@@UEAAJPEAW4NavigationMode@Navigation@Xaml@UI@Windows@@@Z
    virtual long get_NavigationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationTransitionInfo@NavigatingCancelEventArgs@DirectUI@@UEAAJPEAPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_NavigationTransitionInfo(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameter@NavigatingCancelEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Parameter(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePageType@NavigatingCancelEventArgs@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_SourcePageType(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@NavigatingCancelEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NavigationTransitionInfo@NavigatingCancelEventArgs@DirectUI@@QEAAJPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    long put_NavigationTransitionInfo(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Parameter@NavigatingCancelEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Parameter(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourcePageType@NavigatingCancelEventArgs@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@@Z
    long put_SourcePageType(::Windows::UI::Xaml::Interop::TypeName);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigatingCancelEventArgs@DirectUI@@UEAA@XZ
    virtual ~NavigatingCancelEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NavigatingCancelEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NavigatingCancelEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@NavigatingCancelEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NavigatingCancelEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
