#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CDiscretePointKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CDiscretePointKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDiscretePointKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDiscrete@CDiscretePointKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
};
