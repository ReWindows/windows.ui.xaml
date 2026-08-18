#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ButtonGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ButtonGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flyout@ButtonGenerated@DirectUI@@UEAAJPEAPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Flyout(::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flyout@ButtonGenerated@DirectUI@@UEAAJPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Flyout(::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ButtonGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ButtonGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ButtonGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ButtonGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
