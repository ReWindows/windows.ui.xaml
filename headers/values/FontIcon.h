#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
namespace DirectUI {
class FontIcon {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FontIcon@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontFamily@FontIcon@DirectUI@@UEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long get_FontFamily(::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontSize@FontIcon@DirectUI@@UEAAJPEAN@Z
    virtual long get_FontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontStyle@FontIcon@DirectUI@@UEAAJPEAW4FontStyle@Text@UI@Windows@@@Z
    virtual long get_FontStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontWeight@FontIcon@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_FontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Glyph@FontIcon@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Glyph(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTextScaleFactorEnabled@FontIcon@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTextScaleFactorEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MirroredWhenRightToLeft@FontIcon@DirectUI@@UEAAJPEAE@Z
    virtual long get_MirroredWhenRightToLeft(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontFamily@FontIcon@DirectUI@@UEAAJPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long put_FontFamily(::Windows::UI::Xaml::Media::IFontFamily *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontSize@FontIcon@DirectUI@@UEAAJN@Z
    virtual long put_FontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontStyle@FontIcon@DirectUI@@UEAAJW4FontStyle@Text@UI@Windows@@@Z
    virtual long put_FontStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontWeight@FontIcon@DirectUI@@UEAAJUFontWeight@Text@UI@Windows@@@Z
    virtual long put_FontWeight(::Windows::UI::Text::FontWeight);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Glyph@FontIcon@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Glyph(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTextScaleFactorEnabled@FontIcon@DirectUI@@UEAAJE@Z
    virtual long put_IsTextScaleFactorEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MirroredWhenRightToLeft@FontIcon@DirectUI@@UEAAJE@Z
    virtual long put_MirroredWhenRightToLeft(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FontIcon@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FontIcon@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FontIcon@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FontIcon@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
