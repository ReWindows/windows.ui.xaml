#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class BorderBackgroundPart {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@BorderBackgroundPart@@UEAAPEAVCBrush@@XZ
    virtual CBrush * GetBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushBounds@BorderBackgroundPart@@UEAAJAEAUXRECTF_WH@@@Z
    virtual long GetBrushBounds(XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedHwTexture@BorderBackgroundPart@@UEAAPEAVHWTexture@@PEAVHWShapeRealization@@@Z
    virtual HWTexture * GetCachedHwTexture(HWShapeRealization *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedHwTexture@BorderBackgroundPart@@UEAAXPEAVHWShapeRealization@@PEAVHWTexture@@@Z
    virtual void SetCachedHwTexture(HWShapeRealization *, HWTexture *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseCollapsedNineGrid@BorderBackgroundPart@@UEAA_NXZ
    virtual bool ShouldUseCollapsedNineGrid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseNineGrid@BorderBackgroundPart@@UEAA_NXZ
    virtual bool ShouldUseNineGrid();
};
