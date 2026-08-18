#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class CornerRadiusFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromRadii@CornerRadiusFactory@DirectUI@@UEAAJNNNNPEAUCornerRadius@Xaml@UI@Windows@@@Z
    virtual long FromRadii(double, double, double, double, ::Windows::UI::Xaml::CornerRadius *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromUniformRadius@CornerRadiusFactory@DirectUI@@UEAAJNPEAUCornerRadius@Xaml@UI@Windows@@@Z
    virtual long FromUniformRadius(double, ::Windows::UI::Xaml::CornerRadius *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CornerRadiusFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CornerRadiusFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CornerRadiusFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
