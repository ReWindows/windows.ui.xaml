#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class FontFallbackBuilderWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMapping@FontFallbackBuilderWrapper@@UEAAJPEBUUNICODE_RANGE@PALText@@IPEAPEBGIPEAUIFontCollection@3@PEBG3M@Z
    virtual long AddMapping(::PALText::UNICODE_RANGE const *, unsigned int, unsigned short const * *, unsigned int, ::PALText::IFontCollection *, unsigned short const *, unsigned short const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMappings@FontFallbackBuilderWrapper@@UEAAJPEAUIFontFallback@PALText@@@Z
    virtual long AddMappings(::PALText::IFontFallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontFallback@FontFallbackBuilderWrapper@@UEAAJPEAPEAUIFontFallback@PALText@@@Z
    virtual long CreateFontFallback(::PALText::IFontFallback * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FontFallbackBuilderWrapper@@UEAA@XZ
    virtual ~FontFallbackBuilderWrapper();
};
