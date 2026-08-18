#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace Windows::UI::Xaml::Hosting {
class NavigationGotFocusEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NavigationGotFocusEventArgs@Hosting@Xaml@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NavigationGotFocusEventArgs@Hosting@Xaml@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NavigationGotFocusEventArgs@Hosting@Xaml@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NavigationGotFocusEventArgs@Hosting@Xaml@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NavigationGotFocusEventArgs@Hosting@Xaml@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NavigationGotFocusEventArgs@Hosting@Xaml@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Xaml::Hosting
