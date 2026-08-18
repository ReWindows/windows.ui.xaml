#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CElasticInterpolator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CElasticInterpolator@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EaseInCore@CElasticInterpolator@@UEAAMM@Z
    virtual float EaseInCore(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CElasticInterpolator@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCEasingFunction@CElasticInterpolator@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual void GetWUCEasingFunction(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::ICompositionEasingFunction * *);
};
