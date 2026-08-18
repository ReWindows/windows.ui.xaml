#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class DManipDataBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformGroup@DManipDataBase@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionTransform@@11PEAPEAU3@@Z
    static long CreateTransformGroup(IDCompositionDesktopDevicePartner *, IDCompositionTransform *, IDCompositionTransform *, IDCompositionTransform *, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseManipulationData@DManipDataBase@@QEAAJXZ
    long ReleaseManipulationData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipContent@DManipDataBase@@UEAAJPEAUIObject@@@Z
    virtual long SetClipContent(IObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationContent@DManipDataBase@@QEAAJPEAUIObject@@W4XDMContentType@@@Z
    long SetManipulationContent(IObject *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DManipDataBase@@UEAA@XZ
    virtual ~DManipDataBase();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOffsetsHelper@DManipDataBase@@IEAAJMMPEA_N@Z
    long SetContentOffsetsHelper(float, float, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedContentTransformsHelper@DManipDataBase@@IEAAJPEAUIDCompositionTransform@@0PEA_N1@Z
    long SetSharedContentTransformsHelper(IDCompositionTransform *, IDCompositionTransform *, bool *, bool *);
};
