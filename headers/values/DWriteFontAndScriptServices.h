#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class DWriteFontAndScriptServices {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNumberSubstitutionList@DWriteFontAndScriptServices@@QEAAXXZ
    void ClearNumberSubstitutionList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DWriteFontAndScriptServices@@SAJPEAPEAV1@@Z
    static long Create(DWriteFontAndScriptServices * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomFontCollection@DWriteFontAndScriptServices@@UEAAJPEAUIPALResource@@PEAPEAUIFontCollection@PALText@@@Z
    virtual long CreateCustomFontCollection(IPALResource *, ::PALText::IFontCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomFontFace@DWriteFontAndScriptServices@@UEAAJPEAUIPALResource@@IW4Enum@FontSimulations@PALText@@PEAPEAUIFontFace@5@@Z
    virtual long CreateCustomFontFace(IPALResource *, unsigned int, int, ::PALText::IFontFace * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontFallbackBuilder@DWriteFontAndScriptServices@@UEAAJPEAPEAUIFontFallbackBuilder@PALText@@@Z
    virtual long CreateFontFallbackBuilder(::PALText::IFontFallbackBuilder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGlyphAnalyzer@DWriteFontAndScriptServices@@UEAAJPEAPEAUIGlyphAnalyzer@PALText@@@Z
    virtual long CreateGlyphAnalyzer(::PALText::IGlyphAnalyzer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScriptAnalyzer@DWriteFontAndScriptServices@@UEAAJPEAPEAUIScriptAnalyzer@PALText@@@Z
    virtual long CreateScriptAnalyzer(::PALText::IScriptAnalyzer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextAnalyzer@DWriteFontAndScriptServices@@UEAAJPEAPEAUITextAnalyzer@PALText@@@Z
    virtual long CreateTextAnalyzer(::PALText::ITextAnalyzer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DWriteStretchToFontAxisWidth@DWriteFontAndScriptServices@@SAMW4DWRITE_FONT_STRETCH@@@Z
    static float DWriteStretchToFontAxisWidth(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DWriteStyleToFontAxisSlant@DWriteFontAndScriptServices@@SAMW4DWRITE_FONT_STYLE@@@Z
    static float DWriteStyleToFontAxisSlant(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDWriteTextFormat@DWriteFontAndScriptServices@@QEAAJPEAPEAUIDWriteTextFormat@@_N@Z
    long GetDefaultDWriteTextFormat(IDWriteTextFormat * *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberSubstitution@DWriteFontAndScriptServices@@QEAAJAEBVxstring_ptr@@PEAPEAUNumberSubstitutionData@@PEAPEAUIDWriteNumberSubstitution@@@Z
    long GetNumberSubstitution(xstring_ptr const &, NumberSubstitutionData * *, IDWriteNumberSubstitution * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemFontCollection@DWriteFontAndScriptServices@@UEAAJPEAPEAUIFontCollection@PALText@@@Z
    virtual long GetSystemFontCollection(::PALText::IFontCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemFontFallback@DWriteFontAndScriptServices@@UEAAJPEAPEAUIFontFallback@PALText@@@Z
    virtual long GetSystemFontFallback(::PALText::IFontFallback * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFontNameValid@DWriteFontAndScriptServices@@QEAAJAEBVxstring_ptr@@PEAH@Z
    long IsFontNameValid(xstring_ptr const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseTypographicFontModel@DWriteFontAndScriptServices@@QEAA_NXZ
    bool ShouldUseTypographicFontModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSystemFontCollection@DWriteFontAndScriptServices@@EEAAJ_NPEAPEAUIFontCollection@PALText@@@Z
    virtual long CreateSystemFontCollection(bool, ::PALText::IFontCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSystemFontCollection@DWriteFontAndScriptServices@@AEAAJXZ
    long EnsureSystemFontCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DWriteFontAndScriptServices@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DWriteFontAndScriptServices@@EEAA@XZ
    virtual ~DWriteFontAndScriptServices();
};
