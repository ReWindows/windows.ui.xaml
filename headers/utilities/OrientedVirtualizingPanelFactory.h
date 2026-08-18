#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class OrientedVirtualizingPanelFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsContainerGeneratedForInsertStatic@OrientedVirtualizingPanelFactory@DirectUI@@SAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    static long GetIsContainerGeneratedForInsertStatic(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsContainerGeneratedForInsertStatic@OrientedVirtualizingPanelFactory@DirectUI@@SAJPEAUIUIElement@Xaml@UI@Windows@@E@Z
    static long SetIsContainerGeneratedForInsertStatic(::Windows::UI::Xaml::IUIElement *, unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@OrientedVirtualizingPanelFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@OrientedVirtualizingPanelFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@OrientedVirtualizingPanelFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@OrientedVirtualizingPanelFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
