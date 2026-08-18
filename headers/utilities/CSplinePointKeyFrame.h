#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CSplinePointKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSplinePointKeyFrame@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CSplinePointKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSplinePointKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscrete@CSplinePointKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplinePointKeyFrame@@MEAA@XZ
    virtual ~CSplinePointKeyFrame();
};
