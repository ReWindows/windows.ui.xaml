#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CColorBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScanlineGrayAlpha@CColorBuffer@@QEAAJPEAUIBrushSpan@@IIIHIPEAUGrayAlpha@@@Z
    long AddScanlineGrayAlpha(IBrushSpan *, unsigned int, unsigned int, unsigned int, int, unsigned int, GrayAlpha *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CColorBuffer@@QEAA@XZ
    CColorBuffer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CColorBuffer@@QEAA@XZ
    ~CColorBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneBrushStack@CColorBuffer@@IEAAJPEAUCColorBufferBrushSpan@@PEAPEAU2@@Z
    long CloneBrushStack(CColorBufferBrushSpan *, CColorBufferBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEntry@CColorBuffer@@IEAAXPEAUCColorBufferEntry@@H@Z
    void InsertEntry(CColorBufferEntry *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewBrushSpan@CColorBuffer@@IEAAPEAUCColorBufferBrushSpan@@XZ
    CColorBufferBrushSpan * NewBrushSpan();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushBrushSpan@CColorBuffer@@IEAAJPEAUCColorBufferEntry@@PEAUIBrushSpan@@I@Z
    long PushBrushSpan(CColorBufferEntry *, IBrushSpan *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushBrushSpanLayer@CColorBuffer@@IEAAJPEAUCColorBufferEntry@@0PEAUIBrushSpan@@I@Z
    long PushBrushSpanLayer(CColorBufferEntry *, CColorBufferEntry *, IBrushSpan *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushBrushSpanList@CColorBuffer@@IEAAJPEAUCColorBufferEntry@@0@Z
    long PushBrushSpanList(CColorBufferEntry *, CColorBufferEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RasterizeBrushSpanStack@CColorBuffer@@IEAAJIHUArgbPixel@@PEAUCColorBufferBrushSpan@@HHIPEAI@Z
    long RasterizeBrushSpanStack(unsigned int, int, ArgbPixel, CColorBufferBrushSpan *, int, int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipEqualBrushSegments@CColorBuffer@@IEAAPEAUCColorBufferEntry@@PEAU2@H@Z
    CColorBufferEntry * SkipEqualBrushSegments(CColorBufferEntry *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddScanlineColorBitmap@CColorBuffer@@CAJPEAXIHIPEAUArgbPixel@@@Z
    static long _AddScanlineColorBitmap(void *, unsigned int, int, unsigned int, ArgbPixel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddScanlineDataBrush@CColorBuffer@@CAJPEAXPEAUIBrushSpan@@IPEAUCCoverageInterval@@@Z
    static long _AddScanlineDataBrush(void *, IBrushSpan *, unsigned int, CCoverageInterval *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddScanlineDataColor@CColorBuffer@@CAXPEAXIIPEAUCCoverageInterval@@@Z
    static void _AddScanlineDataColor(void *, unsigned int, unsigned int, CCoverageInterval *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddScanlineDataLayer@CColorBuffer@@CAJPEAXIPEAVCLayer@@IPEAUCCoverageInterval@@@Z
    static long _AddScanlineDataLayer(void *, unsigned int, CLayer *, unsigned int, CCoverageInterval *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddScanlineGrayAlphaBrush@CColorBuffer@@CAJPEAXPEAUIBrushSpan@@IHIPEAUGrayAlpha@@@Z
    static long _AddScanlineGrayAlphaBrush(void *, IBrushSpan *, unsigned int, int, unsigned int, GrayAlpha *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddScanlineGrayAlphaColor@CColorBuffer@@CAJPEAXUArgbPixel@@IHIPEAUGrayAlpha@@@Z
    static long _AddScanlineGrayAlphaColor(void *, ArgbPixel, unsigned int, int, unsigned int, GrayAlpha *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CColorBuffer@@CAJPEAXHUArgbPixel@@@Z
    static long _Init(void *, int, ArgbPixel);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Rasterize@CColorBuffer@@CAJPEAXIHHHIPEAI@Z
    static long _Rasterize(void *, unsigned int, int, int, int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Reset@CColorBuffer@@CAXPEAX@Z
    static void _Reset(void *);
};
