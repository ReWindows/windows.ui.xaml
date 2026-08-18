#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CoreWindowRootScale {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyScaleProtected@CoreWindowRootScale@@MEAAJ_N@Z
    virtual long ApplyScaleProtected(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemScale@CoreWindowRootScale@@MEAAMXZ
    virtual float GetSystemScale();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReverseTransform@CoreWindowRootScale@@AEAAJPEAVCValue@@@Z
    long CreateReverseTransform(CValue *);
};
