#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class ShapeFillPart {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@ShapeFillPart@@UEAAPEAVCBrush@@XZ
    virtual CBrush * GetBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushBounds@ShapeFillPart@@UEAAJAEAUXRECTF_WH@@@Z
    virtual long GetBrushBounds(XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedHwTexture@ShapeFillPart@@UEAAPEAVHWTexture@@PEAVHWShapeRealization@@@Z
    virtual HWTexture * GetCachedHwTexture(HWShapeRealization *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedHwTexture@ShapeFillPart@@UEAAXPEAVHWShapeRealization@@PEAVHWTexture@@@Z
    virtual void SetCachedHwTexture(HWShapeRealization *, HWTexture *);
};
