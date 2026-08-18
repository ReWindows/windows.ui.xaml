#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class ContainerDrawingContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendForegroundHighlightInfo@ContainerDrawingContext@@UEAAXIPEBUXRECTF_WH@@PEAVCSolidColorBrush@@IAEBUXPOINTF@@PEAI@Z
    virtual void AppendForegroundHighlightInfo(unsigned int, XRECTF_WH const *, CSolidColorBrush *, unsigned int, XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRealizations@ContainerDrawingContext@@UEAAXXZ
    virtual void CleanupRealizations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearForegroundHighlightInfo@ContainerDrawingContext@@UEAAXXZ
    virtual void ClearForegroundHighlightInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureResources@ContainerDrawingContext@@UEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@@Z
    virtual long D2DEnsureResources(D2DPrecomputeParams const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DRenderContent@ContainerDrawingContext@@UEAAJAEBUSharedRenderParams@@AEBUD2DRenderParams@@M@Z
    virtual long D2DRenderContent(SharedRenderParams const &, D2DRenderParams const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRenderContent@ContainerDrawingContext@@UEAAJPEAVIContentRenderer@@@Z
    virtual long HWRenderContent(IContentRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRenderCache@ContainerDrawingContext@@UEAAXXZ
    virtual void InvalidateRenderCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderContent@ContainerDrawingContext@@UEAAJAEBUNWRenderParams@@PEBVCMILMatrix@@MAEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderContent(NWRenderParams const &, CMILMatrix const *, float, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackPlateConfiguration@ContainerDrawingContext@@UEAAX_N0@Z
    virtual void SetBackPlateConfiguration(bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlEnabled@ContainerDrawingContext@@UEAAX_N@Z
    virtual void SetControlEnabled(bool);
};
