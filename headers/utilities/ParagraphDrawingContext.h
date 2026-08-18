#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class ParagraphDrawingContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendForegroundHighlightInfo@ParagraphDrawingContext@@UEAAXIPEBUXRECTF_WH@@PEAVCSolidColorBrush@@IAEBUXPOINTF@@PEAI@Z
    virtual void AppendForegroundHighlightInfo(unsigned int, XRECTF_WH const *, CSolidColorBrush *, unsigned int, XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRealizations@ParagraphDrawingContext@@UEAAXXZ
    virtual void CleanupRealizations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearForegroundHighlightInfo@ParagraphDrawingContext@@UEAAXXZ
    virtual void ClearForegroundHighlightInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureResources@ParagraphDrawingContext@@UEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@@Z
    virtual long D2DEnsureResources(D2DPrecomputeParams const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DRenderContent@ParagraphDrawingContext@@UEAAJAEBUSharedRenderParams@@AEBUD2DRenderParams@@M@Z
    virtual long D2DRenderContent(SharedRenderParams const &, D2DRenderParams const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRenderContent@ParagraphDrawingContext@@UEAAJPEAVIContentRenderer@@@Z
    virtual long HWRenderContent(IContentRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRenderCache@ParagraphDrawingContext@@UEAAXXZ
    virtual void InvalidateRenderCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderContent@ParagraphDrawingContext@@UEAAJAEBUNWRenderParams@@PEBVCMILMatrix@@MAEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderContent(NWRenderParams const &, CMILMatrix const *, float, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackPlateConfiguration@ParagraphDrawingContext@@UEAAX_N0@Z
    virtual void SetBackPlateConfiguration(bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlEnabled@ParagraphDrawingContext@@UEAAX_N@Z
    virtual void SetControlEnabled(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParagraphDrawingContext@@UEAA@XZ
    virtual ~ParagraphDrawingContext();
};
