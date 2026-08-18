#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class CTiledSurface {
public:
    class Tile;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTile@CTiledSurface@@QEAAJUXPOINT@@_KIUXSIZE@@@Z
    long AddTile(XPOINT, uint64_t, unsigned int, XSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlignToTiles@CTiledSurface@@SAXPEAUXRECT_WH@@PEBU2@@Z
    static void AlignToTiles(XRECT_WH *, XRECT_WH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlignToTiles@CTiledSurface@@SAXPEAUXRECT_RB@@PEBU2@@Z
    static void AlignToTiles(XRECT_RB *, XRECT_RB const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTiledSurface@@QEAA@HHI@Z
    CTiledSurface(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTile@CTiledSurface@@QEAAJPEAUTile@1@@Z
    long ClearTile(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHardwareResources@CTiledSurface@@QEAAJPEAVHWTextureManager@@W4PixelFormat@@@Z
    long EnsureHardwareResources(HWTextureManager *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeTile@CTiledSurface@@QEAAXPEAUTile@1@@Z
    void FreeTile(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CTiledSurface@@QEAA?AW4PixelFormat@@XZ
    int GetPixelFormat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTile@CTiledSurface@@QEAAPEAUTile@1@AEBUXPOINT@@@Z
    WindissectOpaque * GetTile(XPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileRects@CTiledSurface@@QEAAJPEAPEAUXRECT_WH@@PEAI@Z
    long GetTileRects(XRECT_WH * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSurfaceLost@CTiledSurface@@QEAAIXZ
    unsigned int IsSurfaceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsToBeTiled@CTiledSurface@@SAIUXSIZE@@I@Z
    static unsigned int NeedsToBeTiled(XSIZE, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CTiledSurface@@QEAAJHHPEAUIPALRegion@@@Z
    long Resize(int, int, IPALRegion *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSurfaceFromSoftware@CTiledSurface@@QEAAJPEAVHWTextureManager@@PEAUIPALSurface@@@Z
    long UpdateSurfaceFromSoftware(HWTextureManager *, IPALSurface *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTiledSurface@@MEAA@XZ
    virtual ~CTiledSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTileTexture@CTiledSurface@@AEAAJPEAVHWTextureManager@@W4PixelFormat@@PEAUTile@1@@Z
    long EnsureTileTexture(HWTextureManager *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTiles@CTiledSurface@@AEAAJXZ
    long EnsureTiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTileFromSoftware@CTiledSurface@@AEAAJPEAVHWTextureManager@@PEAUTile@1@PEAUIPALSurface@@AEBUXPOINT@@@Z
    long UpdateTileFromSoftware(HWTextureManager *, WindissectOpaque *, IPALSurface *, XPOINT const &);
};
