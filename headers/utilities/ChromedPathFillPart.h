#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class ChromedPathFillPart {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@ChromedPathFillPart@@UEAAPEAVCBrush@@XZ
    virtual CBrush * GetBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushBounds@ChromedPathFillPart@@UEAAJAEAUXRECTF_WH@@@Z
    virtual long GetBrushBounds(XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedHwTexture@ChromedPathFillPart@@UEAAPEAVHWTexture@@PEAVHWShapeRealization@@@Z
    virtual HWTexture * GetCachedHwTexture(HWShapeRealization *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedHwTexture@ChromedPathFillPart@@UEAAXPEAVHWShapeRealization@@PEAVHWTexture@@@Z
    virtual void SetCachedHwTexture(HWShapeRealization *, HWTexture *);
};
