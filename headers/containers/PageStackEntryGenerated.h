#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class PageStackEntryGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PageStackEntryGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationTransitionInfo@PageStackEntryGenerated@DirectUI@@UEAAJPEAPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_NavigationTransitionInfo(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameter@PageStackEntryGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Parameter(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePageType@PageStackEntryGenerated@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_SourcePageType(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NavigationTransitionInfo@PageStackEntryGenerated@DirectUI@@QEAAJPEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@@Z
    long put_NavigationTransitionInfo(::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Parameter@PageStackEntryGenerated@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Parameter(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourcePageType@PageStackEntryGenerated@DirectUI@@QEAAJUTypeName@Interop@Xaml@UI@Windows@@@Z
    long put_SourcePageType(::Windows::UI::Xaml::Interop::TypeName);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PageStackEntryGenerated@DirectUI@@UEAA@XZ
    virtual ~PageStackEntryGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PageStackEntryGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PageStackEntryGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PageStackEntryGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PageStackEntryGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
