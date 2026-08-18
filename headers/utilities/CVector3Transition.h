#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CVector3Transition {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVector3Transition@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCAnimationNoRef@CVector3Transition@@QEAAPEAUICompositionAnimationBase@Composition@UI@Windows@@PEAVDCompTreeHost@@AEBVHStringReference@Wrappers@WRL@Microsoft@@AEBUVector3@Numerics@Foundation@5@@Z
    ::Windows::UI::Composition::ICompositionAnimationBase * GetWUCAnimationNoRef(DCompTreeHost *, ::Microsoft::WRL::Wrappers::HStringReference const &, WindissectOpaque &);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVector3Transition@@MEAA@XZ
    virtual ~CVector3Transition();
};
