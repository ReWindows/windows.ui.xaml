#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
class CTileBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDecodeRectForStretch@CTileBrush@@UEAAJPEAUXRECTF_WH@@@Z
    virtual long AdjustDecodeRectForStretch(XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CTileBrush@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeDeviceToSource@CTileBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAV2@@Z
    virtual long ComputeDeviceToSource(CMILMatrix const *, XRECTF_WH const *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeStretchMatrix@CTileBrush@@SAJPEBUXRECTF_WH@@0W4AlignmentX@DirectUI@@W4AlignmentY@4@W4Stretch@4@PEAVCMILMatrix@@@Z
    static long ComputeStretchMatrix(XRECTF_WH const *, XRECTF_WH const *, int, int, int, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CTileBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAPEAUIBrushSpan@@@Z
    virtual long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureDeviceIndependentResources@CTileBrush@@UEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@PEBUXRECTF_RB@@PEAUAcceleratedBrushParams@@@Z
    virtual long D2DEnsureDeviceIndependentResources(D2DPrecomputeParams const &, CMILMatrix const *, XRECTF_RB const *, AcceleratedBrushParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CTileBrush@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareSurface@CTileBrush@@UEAAPEAVHWTexture@@XZ
    virtual HWTexture * GetHardwareSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareSurface@CTileBrush@@UEAAPEAUIPALSurface@@XZ
    virtual IPALSurface * GetSoftwareSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@CTileBrush@@UEAAPEAUIPALSurface@@XZ
    virtual IPALSurface * GetSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTiledSurfaceNoRef@CTileBrush@@UEAAPEAVCTiledSurface@@XZ
    virtual CTiledSurface * GetTiledSurfaceNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTileBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasClipRect@CTileBrush@@UEAA_NXZ
    virtual bool HasClipRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestBrushClipInLocalSpace@CTileBrush@@UEAAJPEBUXRECTF_WH@@AEBUXPOINTF@@PEAI@Z
    virtual long HitTestBrushClipInLocalSpace(XRECTF_WH const *, XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestBrushClipInLocalSpace@CTileBrush@@UEAAJPEBUXRECTF_WH@@AEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestBrushClipInLocalSpace(XRECTF_WH const *, HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CTileBrush@@UEAAJXZ
    virtual long InitInstance();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsOpaque@CTileBrush@@UEAAHXZ
    virtual int IsOpaque();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTiledSurface@CTileBrush@@UEAAIXZ
    virtual unsigned int IsTiledSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CTileBrush@@UEAAJPEAPEAXPEAHPEAI2@Z
    virtual long Lock(void * *, int *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadSoftwareSurfaceIfReleased@CTileBrush@@UEAAJXZ
    virtual long ReloadSoftwareSurfaceIfReleased();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRGBSurface@CTileBrush@@QEAAXPEAUIPALSurface@@@Z
    void SetRGBSurface(IPALSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnLock@CTileBrush@@UEAAIXZ
    virtual unsigned int UnLock();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTileBrush@@IEAA@PEAVCCoreServices@@@Z
    CTileBrush(CCoreServices *);
};
