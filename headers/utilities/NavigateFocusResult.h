#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace Windows::UI::Xaml::Hosting {
class NavigateFocusResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NavigateFocusResult@Hosting@Xaml@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NavigateFocusResult@Hosting@Xaml@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NavigateFocusResult@Hosting@Xaml@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NavigateFocusResult@Hosting@Xaml@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NavigateFocusResult@Hosting@Xaml@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NavigateFocusResult@Hosting@Xaml@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WasFocusMoved@NavigateFocusResult@Hosting@Xaml@UI@Windows@@UEAAJPEAE@Z
    virtual long get_WasFocusMoved(unsigned char *);
};
} // namespace Windows::UI::Xaml::Hosting
