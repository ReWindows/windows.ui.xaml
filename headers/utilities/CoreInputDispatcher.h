#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CoreInputDispatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CoreInputDispatcher@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreIndependentInputSourceAsync@CoreInputDispatcher@@SAJPEAVCCoreServices@@PEAUIUnknown@@1@Z
    static long SetCoreIndependentInputSourceAsync(CCoreServices *, IUnknown *, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreInputDispatcher@@UEAA@XZ
    virtual ~CoreInputDispatcher();
};
