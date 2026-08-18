#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class HybridLocalTransformBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDManipSharedTransform@HybridLocalTransformBuilder@@UEAAXPEAUIUnknown@@@Z
    virtual void ApplyDManipSharedTransform(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputTransform@HybridLocalTransformBuilder@@QEAAXPEAPEAUIDCompositionTransform@@@Z
    void GetOutputTransform(IDCompositionTransform * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HybridLocalTransformBuilder@@UEAA@XZ
    virtual ~HybridLocalTransformBuilder();
};
