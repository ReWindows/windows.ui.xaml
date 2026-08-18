#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CExponentialInterpolator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CExponentialInterpolator@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EaseInCore@CExponentialInterpolator@@UEAAMM@Z
    virtual float EaseInCore(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CExponentialInterpolator@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCEasingFunction@CExponentialInterpolator@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual void GetWUCEasingFunction(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::ICompositionEasingFunction * *);
};
