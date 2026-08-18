#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class DWriteTextRenderer {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@DWriteTextRenderer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGlyphRun@DWriteTextRenderer@@UEAAJPEAXMMW4DWRITE_MEASURING_MODE@@PEBUDWRITE_GLYPH_RUN@@PEBUDWRITE_GLYPH_RUN_DESCRIPTION@@PEAUIUnknown@@@Z
    virtual long DrawGlyphRun(void *, float, float, int, DWRITE_GLYPH_RUN const *, DWRITE_GLYPH_RUN_DESCRIPTION const *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInlineObject@DWriteTextRenderer@@UEAAJPEAXMMPEAUIDWriteInlineObject@@HHPEAUIUnknown@@@Z
    virtual long DrawInlineObject(void *, float, float, IDWriteInlineObject *, int, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawStrikethrough@DWriteTextRenderer@@UEAAJPEAXMMPEBUDWRITE_STRIKETHROUGH@@PEAUIUnknown@@@Z
    virtual long DrawStrikethrough(void *, float, float, DWRITE_STRIKETHROUGH const *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawUnderline@DWriteTextRenderer@@UEAAJPEAXMMPEBUDWRITE_UNDERLINE@@PEAUIUnknown@@@Z
    virtual long DrawUnderline(void *, float, float, DWRITE_UNDERLINE const *, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransform@DWriteTextRenderer@@UEAAJPEAXPEAUDWRITE_MATRIX@@@Z
    virtual long GetCurrentTransform(void *, DWRITE_MATRIX *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelsPerDip@DWriteTextRenderer@@UEAAJPEAXPEAM@Z
    virtual long GetPixelsPerDip(void *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPixelSnappingDisabled@DWriteTextRenderer@@UEAAJPEAXPEAH@Z
    virtual long IsPixelSnappingDisabled(void *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DWriteTextRenderer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@DWriteTextRenderer@@UEAAKXZ
    virtual unsigned long Release();
};
