#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CSplineDoubleKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompSegments@CSplineDoubleKeyFrame@@UEAAXPEAVDCompAnimationConversionContextDC@@PEAVCKeyFrame@@PEAUIDCompositionAnimation@@H@Z
    virtual void AddDCompSegments(DCompAnimationConversionContextDC *, CKeyFrame *, IDCompositionAnimation *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCKeyFrame@CSplineDoubleKeyFrame@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAUIKeyFrameAnimation@Composition@UI@Windows@@N@Z
    virtual void AddWUCKeyFrame(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::IKeyFrameAnimation *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSplineDoubleKeyFrame@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CSplineDoubleKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSplineDoubleKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscrete@CSplineDoubleKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplineDoubleKeyFrame@@UEAA@XZ
    virtual ~CSplineDoubleKeyFrame();
};
