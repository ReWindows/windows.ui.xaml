#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CKeyFrameCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompSegments@CKeyFrameCollection@@QEAAXPEAVDCompAnimationConversionContextDC@@PEAUIDCompositionAnimation@@H@Z
    void AddDCompSegments(DCompAnimationConversionContextDC *, IDCompositionAnimation *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWUCKeyFrames@CKeyFrameCollection@@QEAAXPEAVDCompAnimationConversionContextWUC@@PEAUIKeyFrameAnimation@Composition@UI@Windows@@N@Z
    void AddWUCKeyFrames(DCompAnimationConversionContextWUC *, ::Windows::UI::Composition::IKeyFrameAnimation *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeKeyFrames@CKeyFrameCollection@@UEAAJM@Z
    virtual long InitializeKeyFrames(float);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldEnsureNameResolution@CKeyFrameCollection@@UEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyFrameCollection@@IEAA@PEAVCCoreServices@@@Z
    CKeyFrameCollection(CCoreServices *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateInvalidKeyFrameError@CKeyFrameCollection@@AEAAXXZ
    void OriginateInvalidKeyFrameError();
};
