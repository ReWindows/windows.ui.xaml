#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class DManipDataWinRT {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOverallContentPropertySet@DManipDataWinRT@@QEAAJPEAUICompositor@Composition@UI@Windows@@@Z
    long EnsureOverallContentPropertySet(::Windows::UI::Composition::ICompositor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSharedManipulationTransform@DManipDataWinRT@@UEAA_N_N@Z
    virtual bool HasSharedManipulationTransform(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipContent@DManipDataWinRT@@UEAAJPEAUIObject@@@Z
    virtual long SetClipContent(IObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOffsets@DManipDataWinRT@@UEAAJMM@Z
    virtual long SetContentOffsets(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedClipTransform@DManipDataWinRT@@UEAAJPEAUIDCompositionTransform@@PEAUICompositor@Composition@UI@Windows@@@Z
    virtual long SetSharedClipTransform(IDCompositionTransform *, ::Windows::UI::Composition::ICompositor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedContentTransforms@DManipDataWinRT@@UEAAJPEAUIDCompositionTransform@@0PEAUICompositor@Composition@UI@Windows@@@Z
    virtual long SetSharedContentTransforms(IDCompositionTransform *, IDCompositionTransform *, ::Windows::UI::Composition::ICompositor *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DManipDataWinRT@@UEAA@XZ
    virtual ~DManipDataWinRT();
};
