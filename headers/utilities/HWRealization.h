#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class HWRealization {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceOffsetX@HWRealization@@UEBAMXZ
    virtual float GetSurfaceOffsetX() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceOffsetY@HWRealization@@UEBAMXZ
    virtual float GetSurfaceOffsetY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLostRealizationTexture@HWRealization@@UEAAIXZ
    virtual unsigned int HasLostRealizationTexture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSubPixelOffsets@HWRealization@@QEBA_NXZ
    bool HasSubPixelOffsets() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsUpdate@HWRealization@@UEAAIPEBVCMILMatrix@@I@Z
    virtual unsigned int NeedsUpdate(CMILMatrix const *, unsigned int);
};
