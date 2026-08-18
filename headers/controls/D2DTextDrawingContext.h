#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 42 member(s).
class D2DTextDrawingContext {
public:
    class GlyphRunData;
    class HighlightInfo;
    class LineData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendForegroundHighlightInfo@D2DTextDrawingContext@@QEAAXIPEAUXRECTF_WH@@PEAVCSolidColorBrush@@IIAEBUXPOINTF@@@Z
    void AppendForegroundHighlightInfo(unsigned int, XRECTF_WH *, CSolidColorBrush *, unsigned int, unsigned int, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRealizations@D2DTextDrawingContext@@QEAAXXZ
    void CleanupRealizations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@D2DTextDrawingContext@@UEAAXXZ
    virtual void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearGlyphRunCaches@D2DTextDrawingContext@@QEAAXXZ
    void ClearGlyphRunCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureResources@D2DTextDrawingContext@@QEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@@Z
    long D2DEnsureResources(D2DPrecomputeParams const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DRender@D2DTextDrawingContext@@QEAAJAEBUSharedRenderParams@@AEBUD2DRenderParams@@M@Z
    long D2DRender(SharedRenderParams const &, D2DRenderParams const &, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0D2DTextDrawingContext@@QEAA@PEAVCTextCore@@@Z
    D2DTextDrawingContext(CTextCore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGlyphRun@D2DTextDrawingContext@@UEAAJAEBUXPOINTF@@MPEAUGlyphRun@PALText@@AEBV?$weakref_ptr@VCDependencyObject@@@xref@@PEBUXRECTF_RB@@@Z
    virtual long DrawGlyphRun(XPOINTF const &, float, ::PALText::GlyphRun *, WindissectOpaque const &, XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGlyphRun@D2DTextDrawingContext@@QEAAJPEAUGlyphRun@PALText@@PEBUXPOINTF@@I@Z
    long DrawGlyphRun(::PALText::GlyphRun *, XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGlyphs@D2DTextDrawingContext@@UEAAJAEBUXPOINT@@HPEBG1PEBUShapingTextProperties@PALText@@I1PEBUShapingGlyphProperties@4@PEBJ4PEBU2@IPEAUIFontFace@4@MIEPEBUScriptAnalysis@4@AEBV?$weakref_ptr@VCDependencyObject@@@xref@@PEBUXRECTF_RB@@@Z
    virtual long DrawGlyphs(XPOINT const &, int, unsigned short const *, unsigned short const *, ::PALText::ShapingTextProperties const *, unsigned int, unsigned short const *, ::PALText::ShapingGlyphProperties const *, long const *, long const *, XPOINT const *, unsigned int, ::PALText::IFontFace *, float, unsigned int, unsigned char, ::PALText::ScriptAnalysis const *, WindissectOpaque const &, XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawLine@D2DTextDrawingContext@@UEAA?AW4EnumImpl@Result@RichTextServices@@AEBUXPOINTF@@MMEAEBV?$weakref_ptr@VCDependencyObject@@@xref@@PEBUXRECTF_RB@@@Z
    virtual int DrawLine(XPOINTF const &, float, float, unsigned char, WindissectOpaque const &, XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@D2DTextDrawingContext@@QEAAJPEBUXRECTF_RB@@I@Z
    long DrawRectangle(XRECTF_RB const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@D2DTextDrawingContext@@QEAAJPEBUXRECTF_RB@@PEAVCImageBrush@@KPEAIH@Z
    long DrawRectangle(XRECTF_RB const *, CImageBrush *, unsigned long, unsigned int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawWavyLine@D2DTextDrawingContext@@QEAAJPEAUXRECTF_RB@@0KHPEAI@Z
    long DrawWavyLine(XRECTF_RB *, XRECTF_RB *, unsigned long, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRender@D2DTextDrawingContext@@QEAAJPEAVIContentRenderer@@@Z
    long HWRender(IContentRenderer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderingData@D2DTextDrawingContext@@UEBAIXZ
    virtual unsigned int HasRenderingData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRegion@D2DTextDrawingContext@@QEAAXPEBUXRECTF_RB@@@Z
    void InvalidateRegion(XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRender@D2DTextDrawingContext@@QEAAJAEBUNWRenderParams@@PEBVCMILMatrix@@MAEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    long NWRender(NWRenderParams const &, CMILMatrix const *, float, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RasterizeImageFormatGlyphRun@D2DTextDrawingContext@@SAXPEAUID2D1DeviceContext4@@AEBUDWRITE_GLYPH_RUN@@W4DWRITE_GLYPH_IMAGE_FORMATS@@IPEAUID2D1Brush@@@Z
    static void RasterizeImageFormatGlyphRun(ID2D1DeviceContext4*, DWRITE_GLYPH_RUN const &, int, unsigned int, ID2D1Brush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveAndClearGlyphRunRealizations@D2DTextDrawingContext@@QEAAXQEBUHWRenderParams@@@Z
    void SaveAndClearGlyphRunRealizations(HWRenderParams const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorFontPaletteIndex@D2DTextDrawingContext@@UEAAXI@Z
    virtual void SetColorFontPaletteIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsColorFontEnabled@D2DTextDrawingContext@@UEAAXI@Z
    virtual void SetIsColorFontEnabled(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLineInfo@D2DTextDrawingContext@@UEAAXMIMM@Z
    virtual void SetLineInfo(float, unsigned int, float, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGlyphRun@D2DTextDrawingContext@@AEAAJPEAUGlyphRun@PALText@@AEBUXPOINTF@@AEBUXRECTF_WH@@IAEBV?$weakref_ptr@VCDependencyObject@@@xref@@PEAVCBrush@@PEBUXRECTF_RB@@W4DWRITE_GLYPH_IMAGE_FORMATS@@@Z
    long AddGlyphRun(::PALText::GlyphRun *, XPOINTF const &, XRECTF_WH const &, unsigned int, WindissectOpaque const &, CBrush *, XRECTF_RB const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildLineEdgeStores@D2DTextDrawingContext@@AEAAJPEBVCMILMatrix@@@Z
    long BuildLineEdgeStores(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGlyphRun@D2DTextDrawingContext@@AEAAJPEAUGlyphRun@PALText@@IIPEAPEAU23@@Z
    long CreateGlyphRun(::PALText::GlyphRun *, unsigned int, unsigned int, ::PALText::GlyphRun * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWavyLineRealization@D2DTextDrawingContext@@AEAAJXZ
    long EnsureWavyLineRealization();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternativeForegroundBrush@D2DTextDrawingContext@@AEAAPEAVCSolidColorBrush@@AEBV?$weakref_ptr@VCDependencyObject@@@xref@@@Z
    CSolidColorBrush * GetAlternativeForegroundBrush(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphRunTransformAndBounds@D2DTextDrawingContext@@AEAAJPEAUID2D1DeviceContext@@PEBUGlyphRunData@1@PEBVCMILMatrix@@IAEAV4@AEAUXRECTF_RB@@@Z
    long GetGlyphRunTransformAndBounds(ID2D1DeviceContext *, WindissectOpaque const *, CMILMatrix const *, unsigned int, CMILMatrix &, XRECTF_RB &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalTransform@D2DTextDrawingContext@@AEAAXMMIMPEAVCMILMatrix@@@Z
    void GetLocalTransform(float, float, unsigned int, float, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWBuildGlyphRunMultiTexture@D2DTextDrawingContext@@AEAAJPEBUHWRenderParams@@PEBVCMILMatrix@@AEBUXRECTF_WH@@II@Z
    long HWBuildGlyphRunMultiTexture(HWRenderParams const *, CMILMatrix const *, XRECTF_WH const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWBuildGlyphRunSingleTexture@D2DTextDrawingContext@@AEAAJPEBUHWRenderParams@@PEBVCMILMatrix@@AEBUXRECTF_WH@@II@Z
    long HWBuildGlyphRunSingleTexture(HWRenderParams const *, CMILMatrix const *, XRECTF_WH const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWBuildGlyphRunTextures@D2DTextDrawingContext@@AEAAJPEBUHWRenderParams@@PEBVCMILMatrix@@@Z
    long HWBuildGlyphRunTextures(HWRenderParams const *, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRenderLines@D2DTextDrawingContext@@AEAAJPEAVIContentRenderer@@@Z
    long HWRenderLines(IContentRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWBuildGlyphRunTextures@D2DTextDrawingContext@@AEAAJPEBVCMILMatrix@@@Z
    long NWBuildGlyphRunTextures(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RasterizeGlyphRunToD2DOrRawBuffer@D2DTextDrawingContext@@AEAAJPEAUGlyphRunData@1@AEAVCMILMatrix@@AEBUXRECTF_WH@@2MMPEAUID2D1DeviceContext@@PEAUID2D1SolidColorBrush@@IPEAEHII_N@Z
    long RasterizeGlyphRunToD2DOrRawBuffer(WindissectOpaque *, CMILMatrix &, XRECTF_WH const &, XRECTF_WH const &, float, float, ID2D1DeviceContext *, ID2D1SolidColorBrush *, unsigned int, unsigned char *, int, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RasterizeWavyLine@D2DTextDrawingContext@@AEAAJPEBUXRECTF_RB@@KPEAPEAI@Z
    long RasterizeWavyLine(XRECTF_RB const *, unsigned long, unsigned int * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGlyphRun@D2DTextDrawingContext@@CAXPEAUGlyphRun@PALText@@@Z
    static void ReleaseGlyphRun(::PALText::GlyphRun *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateToColorGlyphRun@D2DTextDrawingContext@@AEAAJPEAUGlyphRun@PALText@@AEBUXPOINTF@@AEBUXRECTF_WH@@IAEBV?$weakref_ptr@VCDependencyObject@@@xref@@PEAVCBrush@@PEBUXRECTF_RB@@PEAI@Z
    long TranslateToColorGlyphRun(::PALText::GlyphRun *, XPOINTF const &, XRECTF_WH const &, unsigned int, WindissectOpaque const &, CBrush *, XRECTF_RB const *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1D2DTextDrawingContext@@EEAA@XZ
    virtual ~D2DTextDrawingContext();
};
