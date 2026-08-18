#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class HWRenderParamsBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScaleTransform@HWRenderParamsBase@@UEBA?AVCMILMatrix@@PEAVCUIElement@@@Z
    virtual CMILMatrix GetRasterizationScaleTransform(CUIElement *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWRenderParamsBase@@QEAA@AEBU0@@Z
    HWRenderParamsBase(HWRenderParamsBase const &);
};
