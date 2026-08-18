#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CTileIterator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advance@CTileIterator@@QEAAXXZ
    void Advance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentAAMask@CTileIterator@@QEAAIXZ
    unsigned int GetCurrentAAMask();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTextureNoRef@CTileIterator@@QEAAPEAVHWTexture@@XZ
    HWTexture * GetCurrentTextureNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMoreTiles@CTileIterator@@QEAAIXZ
    unsigned int HasMoreTiles();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTiled@CTileIterator@@QEAAXPEAVCTiledSurface@@PEBVCMILMatrix@@@Z
    void SetTiled(CTiledSurface *, CMILMatrix const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTileIterator@@QEAA@XZ
    ~CTileIterator();
};
