#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class ToolTipServiceFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacement@ToolTipServiceFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAW4PlacementMode@Primitives@Controls@456@@Z
    virtual long GetPlacement(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacementTarget@ToolTipServiceFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIUIElement@456@@Z
    virtual long GetPlacementTarget(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@ToolTipServiceFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetToolTip(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlacement@ToolTipServiceFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4PlacementMode@Primitives@Controls@456@@Z
    virtual long SetPlacement(::Windows::UI::Xaml::IDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlacementTarget@ToolTipServiceFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIUIElement@456@@Z
    virtual long SetPlacementTarget(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolTip@ToolTipServiceFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long SetToolTip(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacementProperty@ToolTipServiceFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_PlacementProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacementTargetProperty@ToolTipServiceFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_PlacementTargetProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToolTipProperty@ToolTipServiceFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ToolTipProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ToolTipServiceFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ToolTipServiceFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ToolTipServiceFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ToolTipServiceFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
