#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class MenuFlyoutSubItemGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelCloseSubMenu@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJXZ
    virtual long CancelCloseSubMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePeerSubMenus@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJXZ
    virtual long ClosePeerSubMenus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenu@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJXZ
    virtual long CloseSubMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenuTree@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJXZ
    virtual long CloseSubMenuTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayCloseSubMenu@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJXZ
    virtual long DelayCloseSubMenu();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MenuFlyoutSubItemGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSubMenu@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long OpenSubMenu(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionSubMenu@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long PositionSubMenu(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSubMenu@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJXZ
    virtual long PrepareSubMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomationPeerExpandCollapse@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJE@Z
    virtual long RaiseAutomationPeerExpandCollapse(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubMenuDirection@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJE@Z
    virtual long SetSubMenuDirection(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSubMenuOpen@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSubMenuOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSubMenuPositionedAbsolutely@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSubMenuPositionedAbsolutely(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVMenuFlyoutItemBase@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Items(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentOwner@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJPEAPEAUISubMenuOwner@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ParentOwner(::Windows::UI::Xaml::Controls::ISubMenuOwner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ParentOwner@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJPEAUISubMenuOwner@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ParentOwner(::Windows::UI::Xaml::Controls::ISubMenuOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Text@MenuFlyoutSubItemGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Text(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MenuFlyoutSubItemGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MenuFlyoutSubItemGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MenuFlyoutSubItemGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MenuFlyoutSubItemGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
