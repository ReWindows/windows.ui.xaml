#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CBandVectorBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupUnrasterizedPaths@CBandVectorBuffer@@QEAAXXZ
    void CleanupUnrasterizedPaths();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteRendering@CBandVectorBuffer@@QEAAJPEAVCRasterizerEdgeStore@@@Z
    long CompleteRendering(CRasterizerEdgeStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RasterizeBand@CBandVectorBuffer@@QEAAJIUArgbPixel@@W4PixelFormat@@IIHHPEAEII2IIIPEAUXRECT_WH@@@Z
    long RasterizeBand(unsigned int, ArgbPixel, int, unsigned int, unsigned int, int, int, unsigned char *, unsigned int, unsigned int, unsigned char *, unsigned int, unsigned int, unsigned int, XRECT_WH *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBandVectorBuffer@@QEAA@XZ
    ~CBandVectorBuffer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceScanline@CBandVectorBuffer@@AEAAJPEAHPEAI@Z
    long AdvanceScanline(int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocActiveLayerData@CBandVectorBuffer@@AEAAJHPEAPEAUCActiveLayerData@@@Z
    long AllocActiveLayerData(int, CActiveLayerData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawVirtualLayer@CBandVectorBuffer@@CAJIPEAVCColorBuffer@@PEAVCLayer@@@Z
    static long DrawVirtualLayer(unsigned int, CColorBuffer *, CLayer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePendingPaths@CBandVectorBuffer@@AEAAXXZ
    void ReleasePendingPaths();
};
