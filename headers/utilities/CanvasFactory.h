#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class CanvasFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CanvasFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUICanvas@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::ICanvas * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLeft@CanvasFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAN@Z
    virtual long GetLeft(::Windows::UI::Xaml::IUIElement *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTop@CanvasFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAN@Z
    virtual long GetTop(::Windows::UI::Xaml::IUIElement *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZIndex@CanvasFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAH@Z
    virtual long GetZIndex(::Windows::UI::Xaml::IUIElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLeft@CanvasFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@N@Z
    virtual long SetLeft(::Windows::UI::Xaml::IUIElement *, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTop@CanvasFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@N@Z
    virtual long SetTop(::Windows::UI::Xaml::IUIElement *, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZIndex@CanvasFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@H@Z
    virtual long SetZIndex(::Windows::UI::Xaml::IUIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LeftProperty@CanvasFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_LeftProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopProperty@CanvasFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TopProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZIndexProperty@CanvasFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ZIndexProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CanvasFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CanvasFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CanvasFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CanvasFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
