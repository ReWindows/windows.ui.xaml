#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class ThicknessFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromLengths@ThicknessFactory@DirectUI@@UEAAJNNNNPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long FromLengths(double, double, double, double, ::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromUniformLength@ThicknessFactory@DirectUI@@UEAAJNPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long FromUniformLength(double, ::Windows::UI::Xaml::Thickness *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ThicknessFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ThicknessFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ThicknessFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
