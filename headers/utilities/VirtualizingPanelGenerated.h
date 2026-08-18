#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class VirtualizingPanelGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInternalChild@VirtualizingPanelGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long AddInternalChild(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringIndexIntoView@VirtualizingPanelGenerated@DirectUI@@UEAAJH@Z
    virtual long BringIndexIntoView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInternalChild@VirtualizingPanelGenerated@DirectUI@@UEAAJHPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long InsertInternalChild(int, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClearChildren@VirtualizingPanelGenerated@DirectUI@@UEAAJXZ
    virtual long OnClearChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClearChildrenProtected@VirtualizingPanelGenerated@DirectUI@@QEAAJXZ
    long OnClearChildrenProtected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@VirtualizingPanelGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long OnItemsChanged(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedProtected@VirtualizingPanelGenerated@DirectUI@@QEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsChangedProtected(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInternalChildRange@VirtualizingPanelGenerated@DirectUI@@UEAAJHH@Z
    virtual long RemoveInternalChildRange(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemContainerGenerator@VirtualizingPanelGenerated@DirectUI@@UEAAJPEAPEAUIItemContainerGenerator@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ItemContainerGenerator(::Windows::UI::Xaml::Controls::IItemContainerGenerator * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VirtualizingPanelGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VirtualizingPanelGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
