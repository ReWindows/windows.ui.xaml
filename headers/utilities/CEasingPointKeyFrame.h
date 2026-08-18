#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CEasingPointKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CEasingPointKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CEasingPointKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscrete@CEasingPointKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEasingPointKeyFrame@@MEAA@XZ
    virtual ~CEasingPointKeyFrame();
};
