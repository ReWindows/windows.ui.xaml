#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace Jupiter {
class Animation {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateDynamicTimelineGenerationOptionToChildren@Animation@Jupiter@@YAXPEAVCStoryboard@@W4DynamicTimelineGenerationMode@@@Z
    void PropagateDynamicTimelineGenerationOptionToChildren(CStoryboard *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGenerateDynamicChildrenStoryboardsForChildren@Animation@Jupiter@@YAJPEAVCStoryboard@@PEA_N@Z
    long TryGenerateDynamicChildrenStoryboardsForChildren(CStoryboard *, bool *);
};
} // namespace Jupiter
