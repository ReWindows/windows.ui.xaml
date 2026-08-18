#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class PageStackEntryFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PageStackEntryFactory@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@567@PEAPEAUIPageStackEntry@Navigation@567@@Z
    virtual long CreateInstance(::Windows::UI::Xaml::Interop::TypeName, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, ::Windows::UI::Xaml::Navigation::IPageStackEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePageTypeProperty@PageStackEntryFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SourcePageTypeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PageStackEntryFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PageStackEntryFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PageStackEntryFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PageStackEntryFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@PageStackEntryFactory@DirectUI@@AEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@567@PEAPEAUIPageStackEntry@Navigation@567@@Z
    long CreateInstanceImpl(::Windows::UI::Xaml::Interop::TypeName, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, ::Windows::UI::Xaml::Navigation::IPageStackEntry * *);
};
} // namespace DirectUI
