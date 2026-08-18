#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDoubleAnimationUsingKeyFrames {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDoubleAnimationUsingKeyFrames@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDoubleAnimationUsingKeyFrames@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimations@CDoubleAnimationUsingKeyFrames@@MEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimations(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimation@CDoubleAnimationUsingKeyFrames@@MEAAXPEAVDCompAnimationConversionContextWUC@@MM@Z
    virtual void MakeWUCAnimation(DCompAnimationConversionContextWUC *, float, float);
};
