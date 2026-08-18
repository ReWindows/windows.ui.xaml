#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class FontWeightsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Black@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_Black(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bold@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_Bold(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtraBlack@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_ExtraBlack(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtraBold@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_ExtraBold(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtraLight@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_ExtraLight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Light@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_Light(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Medium@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_Medium(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Normal@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_Normal(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SemiBold@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_SemiBold(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SemiLight@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_SemiLight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Thin@FontWeightsFactory@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_Thin(::Windows::UI::Text::FontWeight *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FontWeightsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FontWeightsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FontWeightsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
