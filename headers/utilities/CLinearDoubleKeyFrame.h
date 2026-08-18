#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CLinearDoubleKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompSegments@CLinearDoubleKeyFrame@@UEAAXPEAVDCompAnimationConversionContextDC@@PEAVCKeyFrame@@PEAUIDCompositionAnimation@@H@Z
    virtual void AddDCompSegments(DCompAnimationConversionContextDC *, CKeyFrame *, IDCompositionAnimation *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCKeyFrame@CLinearDoubleKeyFrame@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAUIKeyFrameAnimation@Composition@UI@Windows@@N@Z
    virtual void AddWUCKeyFrame(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::IKeyFrameAnimation *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLinearDoubleKeyFrame@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CLinearDoubleKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CLinearDoubleKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscrete@CLinearDoubleKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
};
