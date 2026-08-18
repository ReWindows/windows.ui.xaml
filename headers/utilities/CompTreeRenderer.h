#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CompTreeRenderer {
public:
    class SharedSurfaceData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSharedSurfaceCache@CompTreeRenderer@@QEAAJXZ
    long ClearSharedSurfaceCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawToD2DBitmap@CompTreeRenderer@@QEAAJPEAVHWCompTreeNode@@PEAUID2D1Bitmap1@@PEAUXRECTF_WH@@@Z
    long DrawToD2DBitmap(HWCompTreeNode *, ID2D1Bitmap1*, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawToSharedSurface@CompTreeRenderer@@UEAAJPEAVHWCompTreeNode@@PEBUXRECT_WH@@PEAXUXPOINT@@@Z
    virtual long DrawToSharedSurface(HWCompTreeNode *, XRECT_WH const *, void *, XPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawToSurface@CompTreeRenderer@@UEAAJPEAVHWCompTreeNode@@PEAVDCompSurface@@PEBUXRECT_WH@@I@Z
    virtual long DrawToSurface(HWCompTreeNode *, DCompSurface *, XRECT_WH const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DContext@CompTreeRenderer@@QEAAJXZ
    long EnsureD2DContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSharedSurface@CompTreeRenderer@@UEAAJPEAX@Z
    virtual long ReleaseSharedSurface(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentCompositeMode@CompTreeRenderer@@QEAAXW4DCOMPOSITION_COMPOSITE_MODE@@@Z
    void SetCurrentCompositeMode(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawCompTreeNode@CompTreeRenderer@@AEAAJPEBVCompTreeRenderState@@PEAVHWCompTreeNodeDComp@@@Z
    long DrawCompTreeNode(CompTreeRenderState const *, HWCompTreeNodeDComp *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawCustomRendererCompNode@CompTreeRenderer@@AEAAJPEBVCompTreeRenderState@@PEAVHWCompNode@@@Z
    long DrawCustomRendererCompNode(CompTreeRenderState const *, HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRecursive@CompTreeRenderer@@AEAAJPEBVCompTreeRenderState@@PEAVHWCompNode@@@Z
    long DrawRecursive(CompTreeRenderState const *, HWCompNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawToSurfaceWithScratch@CompTreeRenderer@@AEAAJPEAVHWCompTreeNode@@PEAVDCompSurface@@PEBUXRECT_WH@@@Z
    long DrawToSurfaceWithScratch(HWCompTreeNode *, DCompSurface *, XRECT_WH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawToSurfaceWithoutScratch@CompTreeRenderer@@AEAAJPEAVHWCompTreeNode@@PEAVDCompSurface@@PEBUXRECT_WH@@@Z
    long DrawToSurfaceWithoutScratch(HWCompTreeNode *, DCompSurface *, XRECT_WH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedSurface@CompTreeRenderer@@AEAAJPEAXPEAUSharedSurfaceData@1@@Z
    long OpenSharedSurface(void *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompTreeRenderer@@EEAA@XZ
    virtual ~CompTreeRenderer();
};
