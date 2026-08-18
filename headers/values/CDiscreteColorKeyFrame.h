#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CDiscreteColorKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompSegments@CDiscreteColorKeyFrame@@UEAAXPEAVDCompAnimationConversionContextDC@@PEAVCKeyFrame@@PEAUIDCompositionAnimation@@H@Z
    virtual void AddDCompSegments(DCompAnimationConversionContextDC *, CKeyFrame *, IDCompositionAnimation *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCKeyFrame@CDiscreteColorKeyFrame@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAUIKeyFrameAnimation@Composition@UI@Windows@@N@Z
    virtual void AddWUCKeyFrame(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::IKeyFrameAnimation *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDiscreteColorKeyFrame@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CDiscreteColorKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDiscreteColorKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDiscrete@CDiscreteColorKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
};
