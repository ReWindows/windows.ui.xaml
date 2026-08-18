#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class FontFallbackWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@FontFallbackWrapper@@SAJPEAUIDWriteFontFallback@@PEAPEAUIFontFallback@PALText@@@Z
    static long Create(IDWriteFontFallback *, ::PALText::IFontFallback * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FontFallbackWrapper@@QEAA@PEAUIDWriteFontFallback1@@@Z
    FontFallbackWrapper(IDWriteFontFallback1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapCharacters@FontFallbackWrapper@@UEAAJPEAUITextAnalysisSource@PALText@@IIPEAUIFontCollection@3@PEBGIIIMPEAIPEAPEAUIFontFace@3@PEAM@Z
    virtual long MapCharacters(::PALText::ITextAnalysisSource *, unsigned int, unsigned int, ::PALText::IFontCollection *, unsigned short const *, unsigned int, unsigned int, unsigned int, float, unsigned int *, ::PALText::IFontFace * *, float *);
};
