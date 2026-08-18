#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CBounceInterpolator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBounceInterpolator@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EaseInCore@CBounceInterpolator@@UEAAMM@Z
    virtual float EaseInCore(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBounceInterpolator@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCEasingFunction@CBounceInterpolator@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual void GetWUCEasingFunction(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::ICompositionEasingFunction * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClampedBounciness@CBounceInterpolator@@AEBAMXZ
    float GetClampedBounciness() const;
};
