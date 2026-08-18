#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CLinearColorKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompSegments@CLinearColorKeyFrame@@UEAAXPEAVDCompAnimationConversionContextDC@@PEAVCKeyFrame@@PEAUIDCompositionAnimation@@H@Z
    virtual void AddDCompSegments(DCompAnimationConversionContextDC *, CKeyFrame *, IDCompositionAnimation *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCKeyFrame@CLinearColorKeyFrame@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAUIKeyFrameAnimation@Composition@UI@Windows@@N@Z
    virtual void AddWUCKeyFrame(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::IKeyFrameAnimation *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLinearColorKeyFrame@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CLinearColorKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CLinearColorKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscrete@CLinearColorKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
};
