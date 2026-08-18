#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class CBrushTypeUtils {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBUXRECTF_WH@@PEBVCMILMatrix@@PEAV3@@Z
    static void ConvertRelativeTransformToAbsolute(XRECTF_WH const *, CMILMatrix const *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBUXRECTF_WH@@PEAV2@@Z
    static void GetBrushTransform(CMILMatrix const *, CMILMatrix const *, XRECTF_WH const *, CMILMatrix *);
};
