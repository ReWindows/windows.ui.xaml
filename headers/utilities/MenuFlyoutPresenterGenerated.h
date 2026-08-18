#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class MenuFlyoutPresenterGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenu@MenuFlyoutPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long CloseSubMenu();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MenuFlyoutPresenterGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Owner@MenuFlyoutPresenterGenerated@DirectUI@@UEAAJPEAPEAUISubMenuOwner@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Owner(::Windows::UI::Xaml::Controls::ISubMenuOwner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OwningMenu@MenuFlyoutPresenterGenerated@DirectUI@@UEAAJPEAPEAUIMenu@Controls@Xaml@UI@Windows@@@Z
    virtual long get_OwningMenu(::Windows::UI::Xaml::Controls::IMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SubPresenter@MenuFlyoutPresenterGenerated@DirectUI@@UEAAJPEAPEAUIMenuPresenter@Controls@Xaml@UI@Windows@@@Z
    virtual long get_SubPresenter(::Windows::UI::Xaml::Controls::IMenuPresenter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateSettings@MenuFlyoutPresenterGenerated@DirectUI@@UEAAJPEAPEAUIMenuFlyoutPresenterTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TemplateSettings(::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Owner@MenuFlyoutPresenterGenerated@DirectUI@@UEAAJPEAUISubMenuOwner@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Owner(::Windows::UI::Xaml::Controls::ISubMenuOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OwningMenu@MenuFlyoutPresenterGenerated@DirectUI@@UEAAJPEAUIMenu@Controls@Xaml@UI@Windows@@@Z
    virtual long put_OwningMenu(::Windows::UI::Xaml::Controls::IMenu *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SubPresenter@MenuFlyoutPresenterGenerated@DirectUI@@UEAAJPEAUIMenuPresenter@Controls@Xaml@UI@Windows@@@Z
    virtual long put_SubPresenter(::Windows::UI::Xaml::Controls::IMenuPresenter *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MenuFlyoutPresenterGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MenuFlyoutPresenterGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MenuFlyoutPresenterGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MenuFlyoutPresenterGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
