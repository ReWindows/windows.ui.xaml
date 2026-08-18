#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CScalarTransition {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CScalarTransition@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCAnimationNoRef@CScalarTransition@@QEAAPEAUICompositionAnimationBase@Composition@UI@Windows@@PEAVDCompTreeHost@@AEBVHStringReference@Wrappers@WRL@Microsoft@@M@Z
    ::Windows::UI::Composition::ICompositionAnimationBase * GetWUCAnimationNoRef(DCompTreeHost *, ::Microsoft::WRL::Wrappers::HStringReference const &, float);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScalarTransition@@MEAA@XZ
    virtual ~CScalarTransition();
};
