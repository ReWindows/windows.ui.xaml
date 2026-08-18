#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace RuntimeFeatureBehavior {
class RuntimeEnabledFeatureDetector {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeatureValue@RuntimeEnabledFeatureDetector@RuntimeFeatureBehavior@@QEAAHW4RuntimeEnabledFeature@2@_N@Z
    int GetFeatureValue(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFeatureEnabled@RuntimeEnabledFeatureDetector@RuntimeFeatureBehavior@@QEAA_NW4RuntimeEnabledFeature@2@_N@Z
    bool IsFeatureEnabled(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFeatureOverride@RuntimeEnabledFeatureDetector@RuntimeFeatureBehavior@@QEAAXW4RuntimeEnabledFeature@2@_NPEA_N@Z
    void SetFeatureOverride(int, bool, bool *);
};
} // namespace RuntimeFeatureBehavior
