#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CLinearPointKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CLinearPointKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CLinearPointKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscrete@CLinearPointKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
};
