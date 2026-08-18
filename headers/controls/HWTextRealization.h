#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class HWTextRealization {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceOffsetX@HWTextRealization@@UEBAMXZ
    virtual float GetSurfaceOffsetX() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceOffsetY@HWTextRealization@@UEBAMXZ
    virtual float GetSurfaceOffsetY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLostRealizationTexture@HWTextRealization@@UEAAIXZ
    virtual unsigned int HasLostRealizationTexture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsUpdate@HWTextRealization@@UEAAIPEBVCMILMatrix@@I@Z
    virtual unsigned int NeedsUpdate(CMILMatrix const *, unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWTextRealization@@EEAA@XZ
    virtual ~HWTextRealization();
};
