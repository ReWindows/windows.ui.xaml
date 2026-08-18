#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class VisualStateManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@VisualStateManagerFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIVisualStateManager@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::IVisualStateManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomVisualStateManager@VisualStateManagerFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAUIVisualStateManager@456@@Z
    virtual long GetCustomVisualStateManager(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IVisualStateManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomVisualStateManagerStatic@VisualStateManagerFactory@DirectUI@@SAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAUIVisualStateManager@456@@Z
    static long GetCustomVisualStateManagerStatic(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IVisualStateManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateGroups@VisualStateManagerFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAVVisualStateGroup@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long GetVisualStateGroups(::Windows::UI::Xaml::IFrameworkElement *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateGroupsStatic@VisualStateManagerFactory@DirectUI@@SAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAVVisualStateGroup@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    static long GetVisualStateGroupsStatic(::Windows::UI::Xaml::IFrameworkElement *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToState@VisualStateManagerFactory@DirectUI@@UEAAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUHSTRING__@@EPEAE@Z
    virtual long GoToState(::Windows::UI::Xaml::Controls::IControl *, HSTRING__*, unsigned char, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomVisualStateManager@VisualStateManagerFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAUIVisualStateManager@456@@Z
    virtual long SetCustomVisualStateManager(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IVisualStateManager *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualStateGroups@VisualStateManagerFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAU?$IVector@PEAVVisualStateGroup@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long SetVisualStateGroups(::Windows::UI::Xaml::IFrameworkElement *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CustomVisualStateManagerProperty@VisualStateManagerFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CustomVisualStateManagerProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VisualStateManagerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VisualStateManagerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VisualStateManagerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VisualStateManagerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
