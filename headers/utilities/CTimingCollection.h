#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CTimingCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CTimingCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CTimingCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CTimingCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CTimingCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCanBeModified@CTimingCollection@@AEAAJXZ
    long CheckCanBeModified();
};
