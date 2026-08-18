#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class GeneratorPositionFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromIndexAndOffset@GeneratorPositionFactory@DirectUI@@UEAAJHHPEAUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long FromIndexAndOffset(int, int, ::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GeneratorPositionFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GeneratorPositionFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GeneratorPositionFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
