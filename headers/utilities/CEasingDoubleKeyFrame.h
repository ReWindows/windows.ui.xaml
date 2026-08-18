#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CEasingDoubleKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompSegments@CEasingDoubleKeyFrame@@UEAAXPEAVDCompAnimationConversionContextDC@@PEAVCKeyFrame@@PEAUIDCompositionAnimation@@H@Z
    virtual void AddDCompSegments(DCompAnimationConversionContextDC *, CKeyFrame *, IDCompositionAnimation *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCKeyFrame@CEasingDoubleKeyFrame@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAUIKeyFrameAnimation@Composition@UI@Windows@@N@Z
    virtual void AddWUCKeyFrame(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::IKeyFrameAnimation *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CEasingDoubleKeyFrame@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CEasingDoubleKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CEasingDoubleKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDiscrete@CEasingDoubleKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEasingDoubleKeyFrame@@UEAA@XZ
    virtual ~CEasingDoubleKeyFrame();
};
