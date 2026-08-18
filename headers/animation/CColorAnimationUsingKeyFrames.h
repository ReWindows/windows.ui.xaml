#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CColorAnimationUsingKeyFrames {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColorAnimationUsingKeyFrames@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CColorAnimationUsingKeyFrames@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimations@CColorAnimationUsingKeyFrames@@MEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimations(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimation@CColorAnimationUsingKeyFrames@@MEAAXPEAVDCompAnimationConversionContextWUC@@MM@Z
    virtual void MakeWUCAnimation(DCompAnimationConversionContextWUC *, float, float);
};
