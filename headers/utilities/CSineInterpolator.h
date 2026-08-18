#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CSineInterpolator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EaseInCore@CSineInterpolator@@UEAAMM@Z
    virtual float EaseInCore(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSineInterpolator@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCEasingFunction@CSineInterpolator@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual void GetWUCEasingFunction(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::ICompositionEasingFunction * *);
};
