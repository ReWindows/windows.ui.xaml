#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
namespace DirectUI {
class Glyphs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Glyphs@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColorFontPaletteIndex@Glyphs@DirectUI@@UEAAJPEAH@Z
    virtual long get_ColorFontPaletteIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Fill@Glyphs@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_Fill(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontRenderingEmSize@Glyphs@DirectUI@@UEAAJPEAN@Z
    virtual long get_FontRenderingEmSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontUri@Glyphs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_FontUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Indices@Glyphs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Indices(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsColorFontEnabled@Glyphs@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsColorFontEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginX@Glyphs@DirectUI@@UEAAJPEAN@Z
    virtual long get_OriginX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginY@Glyphs@DirectUI@@UEAAJPEAN@Z
    virtual long get_OriginY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StyleSimulations@Glyphs@DirectUI@@UEAAJPEAW4StyleSimulations@Media@Xaml@UI@Windows@@@Z
    virtual long get_StyleSimulations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnicodeString@Glyphs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UnicodeString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ColorFontPaletteIndex@Glyphs@DirectUI@@UEAAJH@Z
    virtual long put_ColorFontPaletteIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Fill@Glyphs@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_Fill(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontRenderingEmSize@Glyphs@DirectUI@@UEAAJN@Z
    virtual long put_FontRenderingEmSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontUri@Glyphs@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_FontUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Indices@Glyphs@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Indices(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsColorFontEnabled@Glyphs@DirectUI@@UEAAJE@Z
    virtual long put_IsColorFontEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OriginX@Glyphs@DirectUI@@UEAAJN@Z
    virtual long put_OriginX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OriginY@Glyphs@DirectUI@@UEAAJN@Z
    virtual long put_OriginY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StyleSimulations@Glyphs@DirectUI@@UEAAJW4StyleSimulations@Media@Xaml@UI@Windows@@@Z
    virtual long put_StyleSimulations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UnicodeString@Glyphs@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_UnicodeString(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Glyphs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Glyphs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Glyphs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Glyphs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
