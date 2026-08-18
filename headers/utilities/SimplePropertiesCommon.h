#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class SimplePropertiesCommon {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToDouble@SimplePropertiesCommon@@YAJAEBVCValue@@AEAN@Z
    long ConvertToDouble(CValue const &, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToInt32@SimplePropertiesCommon@@YAJAEBVCValue@@AEAH@Z
    long ConvertToInt32(CValue const &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToMatrix3x2@SimplePropertiesCommon@@YAJAEBVCValue@@AEAUMatrix3x2@Numerics@Foundation@Windows@@@Z
    long ConvertToMatrix3x2(CValue const &, WindissectOpaque&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToMatrix4x4@SimplePropertiesCommon@@YAJAEBVCValue@@AEAUMatrix4x4@Numerics@Foundation@Windows@@@Z
    long ConvertToMatrix4x4(CValue const &, WindissectOpaque&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToTimeSpan@SimplePropertiesCommon@@YAJAEBVCValue@@AEAUTimeSpan@Foundation@Windows@@@Z
    long ConvertToTimeSpan(CValue const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVector2@SimplePropertiesCommon@@YAJAEBVCValue@@AEAUVector2@Numerics@Foundation@Windows@@@Z
    long ConvertToVector2(CValue const &, WindissectOpaque&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVector3@SimplePropertiesCommon@@YAJAEBVCValue@@AEAUVector3@Numerics@Foundation@Windows@@@Z
    long ConvertToVector3(CValue const &, WindissectOpaque&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVector3TransitionComponents@SimplePropertiesCommon@@YAJAEBVCValue@@AEAW4Vector3TransitionComponents@Xaml@UI@Windows@@@Z
    long ConvertToVector3TransitionComponents(CValue const &, int &);
};
