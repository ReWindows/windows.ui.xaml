#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class ColorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromArgb@ColorFactory@DirectUI@@UEAAJEEEEPEAUColor@UI@Windows@@@Z
    virtual long FromArgb(unsigned char, unsigned char, unsigned char, unsigned char, ::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToDisplayName@ColorFactory@DirectUI@@UEAAJUColor@UI@Windows@@PEAPEAUHSTRING__@@@Z
    virtual long ToDisplayName(::Windows::UI::Color, HSTRING__* *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ColorFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ColorFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ColorFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
