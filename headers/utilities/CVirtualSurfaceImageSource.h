#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
class CVirtualSurfaceImageSource {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVirtualSurfaceImageSource@@QEAA@PEAVCCoreServices@@@Z
    CVirtualSurfaceImageSource(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheCommonAncestorVisibleRect@CVirtualSurfaceImageSource@@SAJPEAV1@0PEBUXRECTF_RB@@@Z
    static long CacheCommonAncestorVisibleRect(CVirtualSurfaceImageSource *, CVirtualSurfaceImageSource *, XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBounds@CVirtualSurfaceImageSource@@QEAAJPEBUXRECTF_RB@@@Z
    long CalculateBounds(XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeTile@CVirtualSurfaceImageSource@@QEAAJPEAUTile@CTiledSurface@@@Z
    long FreeTile(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstParentUIElement@CVirtualSurfaceImageSource@@QEAAPEAVCUIElement@@XZ
    CUIElement * GetFirstParentUIElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVirtualSurfaceImageSource@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdateRectCount@CVirtualSurfaceImageSource@@QEAAJPEAK@Z
    long GetUpdateRectCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdateRects@CVirtualSurfaceImageSource@@QEAAJPEAUXRECT_WH@@K@Z
    long GetUpdateRects(XRECT_WH *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVirtualSurfaceImageSource@@QEAAJHHI@Z
    long Initialize(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CVirtualSurfaceImageSource@@QEAAJUXRECT_WH@@@Z
    long Invalidate(XRECT_WH);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInLiveTree@CVirtualSurfaceImageSource@@QEAA_NXZ
    bool IsInLiveTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRender@CVirtualSurfaceImageSource@@QEAAJPEBUXRECTF_RB@@PEAI@Z
    long PreRender(XRECTF_RB const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CVirtualSurfaceImageSource@@QEAAJHH@Z
    long Resize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimTiles@CVirtualSurfaceImageSource@@QEAAJXZ
    long TrimTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimTilesIfPossible@CVirtualSurfaceImageSource@@QEAAJXZ
    long TrimTilesIfPossible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStandbyLists@CVirtualSurfaceImageSource@@QEAAJPEAUVirtualSurfaceImageSourceStandbyLists@@@Z
    long UpdateStandbyLists(VirtualSurfaceImageSourceStandbyLists *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVirtualSurfaceImageSource@@UEAA@XZ
    virtual ~CVirtualSurfaceImageSource();
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsVirtual@CVirtualSurfaceImageSource@@MEAAIXZ
    virtual unsigned int IsVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreUpdateVirtual@CVirtualSurfaceImageSource@@MEAAJPEBV?$xvector@UXRECT_WH@@@@@Z
    virtual long PreUpdateVirtual(WindissectOpaque const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateNeededUpdates@CVirtualSurfaceImageSource@@AEAAJXZ
    long CalculateNeededUpdates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCallbacks@CVirtualSurfaceImageSource@@AEAAJXZ
    long RaiseCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTickForUpdatesNeeded@CVirtualSurfaceImageSource@@AEAAJXZ
    long RequestTickForUpdatesNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileInsideDesiredBounds@CVirtualSurfaceImageSource@@AEAAIPEBUTile@CTiledSurface@@@Z
    unsigned int TileInsideDesiredBounds(WindissectOpaque const *);
};
