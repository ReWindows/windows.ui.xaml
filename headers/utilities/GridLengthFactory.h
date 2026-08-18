#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class GridLengthFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@GridLengthFactory@DirectUI@@UEAAJUGridLength@Xaml@UI@Windows@@0PEAE@Z
    virtual long Equals(::Windows::UI::Xaml::GridLength, ::Windows::UI::Xaml::GridLength, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromPixels@GridLengthFactory@DirectUI@@UEAAJNPEAUGridLength@Xaml@UI@Windows@@@Z
    virtual long FromPixels(double, ::Windows::UI::Xaml::GridLength *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromValueAndType@GridLengthFactory@DirectUI@@UEAAJNW4GridUnitType@Xaml@UI@Windows@@PEAUGridLength@456@@Z
    virtual long FromValueAndType(double, int, ::Windows::UI::Xaml::GridLength *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsAbsolute@GridLengthFactory@DirectUI@@UEAAJUGridLength@Xaml@UI@Windows@@PEAE@Z
    virtual long GetIsAbsolute(::Windows::UI::Xaml::GridLength, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsAuto@GridLengthFactory@DirectUI@@UEAAJUGridLength@Xaml@UI@Windows@@PEAE@Z
    virtual long GetIsAuto(::Windows::UI::Xaml::GridLength, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsStar@GridLengthFactory@DirectUI@@UEAAJUGridLength@Xaml@UI@Windows@@PEAE@Z
    virtual long GetIsStar(::Windows::UI::Xaml::GridLength, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Auto@GridLengthFactory@DirectUI@@UEAAJPEAUGridLength@Xaml@UI@Windows@@@Z
    virtual long get_Auto(::Windows::UI::Xaml::GridLength *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GridLengthFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GridLengthFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GridLengthFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
