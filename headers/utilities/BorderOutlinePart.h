#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class BorderOutlinePart {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@BorderOutlinePart@@UEAAPEAVCBrush@@XZ
    virtual CBrush * GetBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushBounds@BorderOutlinePart@@UEAAJAEAUXRECTF_WH@@@Z
    virtual long GetBrushBounds(XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedHwTexture@BorderOutlinePart@@UEAAPEAVHWTexture@@PEAVHWShapeRealization@@@Z
    virtual HWTexture * GetCachedHwTexture(HWShapeRealization *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedHwTexture@BorderOutlinePart@@UEAAXPEAVHWShapeRealization@@PEAVHWTexture@@@Z
    virtual void SetCachedHwTexture(HWShapeRealization *, HWTexture *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseCollapsedNineGrid@BorderOutlinePart@@UEAA_NXZ
    virtual bool ShouldUseCollapsedNineGrid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseHollowNineGrid@BorderOutlinePart@@UEBA_NXZ
    virtual bool ShouldUseHollowNineGrid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseNineGrid@BorderOutlinePart@@UEAA_NXZ
    virtual bool ShouldUseNineGrid();
};
