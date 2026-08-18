#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCKeyFrame@CKeyFrame@@UEAAXPEAVDCompAnimationConversionContextWUC@@PEAUIKeyFrameAnimation@Composition@UI@Windows@@N@Z
    virtual void AddWUCKeyFrame(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::IKeyFrameAnimation *, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNormalizedKeyTime@CKeyFrame@@QEBAMPEAVDCompAnimationConversionContextWUC@@N@Z
    float GetNormalizedKeyTime(DCompAnimationConversionContextWUC *, double) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyFrame@@UEAA@XZ
    virtual ~CKeyFrame();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyFrame@@IEAA@PEAVCCoreServices@@@Z
    CKeyFrame(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CKeyFrame@@MEAAJXZ
    virtual long InitInstance();
};
