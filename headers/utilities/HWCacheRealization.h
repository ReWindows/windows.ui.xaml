#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class HWCacheRealization {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLostRealizationTexture@HWCacheRealization@@UEAAIXZ
    virtual unsigned int HasLostRealizationTexture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsUpdate@HWCacheRealization@@UEAAIPEBVCMILMatrix@@I@Z
    virtual unsigned int NeedsUpdate(CMILMatrix const *, unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCacheRealization@@EEAA@XZ
    virtual ~HWCacheRealization();
};
