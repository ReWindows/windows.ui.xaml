#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class DManipDataDComp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOverallContentTransform@DManipDataDComp@@QEAAJPEAUIPALDirectManipulationService@@PEAUIDCompositionDesktopDevicePartner@@@Z
    long EnsureOverallContentTransform(IPALDirectManipulationService *, IDCompositionDesktopDevicePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSharedManipulationTransform@DManipDataDComp@@UEAA_N_N@Z
    virtual bool HasSharedManipulationTransform(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOffsets@DManipDataDComp@@UEAAJMM@Z
    virtual long SetContentOffsets(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedClipTransform@DManipDataDComp@@UEAAJPEAUIDCompositionTransform@@PEAUICompositor@Composition@UI@Windows@@@Z
    virtual long SetSharedClipTransform(IDCompositionTransform *, ::Windows::UI::Composition::ICompositor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedContentTransforms@DManipDataDComp@@UEAAJPEAUIDCompositionTransform@@0PEAUICompositor@Composition@UI@Windows@@@Z
    virtual long SetSharedContentTransforms(IDCompositionTransform *, IDCompositionTransform *, ::Windows::UI::Composition::ICompositor *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DManipDataDComp@@UEAA@XZ
    virtual ~DManipDataDComp();
};
