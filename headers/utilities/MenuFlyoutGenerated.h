#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class MenuFlyoutGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@MenuFlyoutGenerated@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MenuFlyoutGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAt@MenuFlyoutGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@UPoint@Foundation@6@@Z
    virtual long ShowAt(::Windows::UI::Xaml::IUIElement *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@MenuFlyoutGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVMenuFlyoutItemBase@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Items(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuFlyoutPresenterStyle@MenuFlyoutGenerated@DirectUI@@UEAAJPEAPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long get_MenuFlyoutPresenterStyle(::Windows::UI::Xaml::IStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentMenu@MenuFlyoutGenerated@DirectUI@@UEAAJPEAPEAUIMenu@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ParentMenu(::Windows::UI::Xaml::Controls::IMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MenuFlyoutPresenterStyle@MenuFlyoutGenerated@DirectUI@@UEAAJPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long put_MenuFlyoutPresenterStyle(::Windows::UI::Xaml::IStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ParentMenu@MenuFlyoutGenerated@DirectUI@@UEAAJPEAUIMenu@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ParentMenu(::Windows::UI::Xaml::Controls::IMenu *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MenuFlyoutGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MenuFlyoutGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MenuFlyoutGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MenuFlyoutGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
