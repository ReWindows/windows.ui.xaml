#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace Windows::Foundation {
class Numerics {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z
    bool invert(WindissectOpaque &, WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z
    WindissectOpaque make_float4x4_from_axis_angle(WindissectOpaque &, float);
};
} // namespace Windows::Foundation
