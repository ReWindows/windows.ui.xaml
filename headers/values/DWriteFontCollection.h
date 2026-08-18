#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class DWriteFontCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DWriteFontCollection@@SAJPEAUIDWriteFontCollection2@@PEAPEAUIFontCollection@PALText@@@Z
    static long Create(IDWriteFontCollection2*, ::PALText::IFontCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTypographicCollection@DWriteFontCollection@@SAHPEAUIFontCollection@PALText@@@Z
    static int IsTypographicCollection(::PALText::IFontCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupPhysicalFontFamily@DWriteFontCollection@@UEAAJPEBGPEAPEAUIFontFamily@PALText@@@Z
    virtual long LookupPhysicalFontFamily(unsigned short const *, ::PALText::IFontFamily * *);
};
