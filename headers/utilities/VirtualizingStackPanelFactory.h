#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class VirtualizingStackPanelFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsVirtualizing@VirtualizingStackPanelFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long GetIsVirtualizing(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizationMode@VirtualizingStackPanelFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAW4VirtualizationMode@Controls@456@@Z
    virtual long GetVirtualizationMode(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsVirtualizing@VirtualizingStackPanelFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@E@Z
    virtual long SetIsVirtualizing(::Windows::UI::Xaml::IDependencyObject *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizationMode@VirtualizingStackPanelFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4VirtualizationMode@Controls@456@@Z
    virtual long SetVirtualizationMode(::Windows::UI::Xaml::IDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreScrollSnapPointsRegularProperty@VirtualizingStackPanelFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AreScrollSnapPointsRegularProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVirtualizingProperty@VirtualizingStackPanelFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsVirtualizingProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrientationProperty@VirtualizingStackPanelFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_OrientationProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VirtualizationModeProperty@VirtualizingStackPanelFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_VirtualizationModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VirtualizingStackPanelFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VirtualizingStackPanelFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VirtualizingStackPanelFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VirtualizingStackPanelFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
