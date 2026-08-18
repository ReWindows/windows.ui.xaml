#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class NavigationEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationEventArgs@DirectUI@@QEAA@XZ
    NavigationEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@NavigationEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Content(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationMode@NavigationEventArgs@DirectUI@@UEAAJPEAW4NavigationMode@Navigation@Xaml@UI@Windows@@@Z
    virtual long get_NavigationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationTransitionInfo@NavigationEventArgs@DirectUI@@UEAAJPEAPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_NavigationTransitionInfo(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameter@NavigationEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Parameter(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePageType@NavigationEventArgs@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_SourcePageType(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@NavigationEventArgs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Content@NavigationEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Content(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NavigationTransitionInfo@NavigationEventArgs@DirectUI@@QEAAJPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    long put_NavigationTransitionInfo(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Parameter@NavigationEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Parameter(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourcePageType@NavigationEventArgs@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@@Z
    long put_SourcePageType(::Windows::UI::Xaml::Interop::TypeName);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Uri@NavigationEventArgs@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_Uri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationEventArgs@DirectUI@@UEAA@XZ
    virtual ~NavigationEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NavigationEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NavigationEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@NavigationEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NavigationEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
