#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class ShapeStrokePart {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@ShapeStrokePart@@UEAAPEAVCBrush@@XZ
    virtual CBrush * GetBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushBounds@ShapeStrokePart@@UEAAJAEAUXRECTF_WH@@@Z
    virtual long GetBrushBounds(XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedHwTexture@ShapeStrokePart@@UEAAPEAVHWTexture@@PEAVHWShapeRealization@@@Z
    virtual HWTexture * GetCachedHwTexture(HWShapeRealization *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedHwTexture@ShapeStrokePart@@UEAAXPEAVHWShapeRealization@@PEAVHWTexture@@@Z
    virtual void SetCachedHwTexture(HWShapeRealization *, HWTexture *);
};
