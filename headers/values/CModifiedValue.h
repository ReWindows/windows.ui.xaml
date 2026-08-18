#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CModifiedValue {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedValue@CModifiedValue@@QEAAJPEAVCValue@@@Z
    long GetAnimatedValue(CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseValue@CModifiedValue@@QEAAJPEAVCValue@@@Z
    long GetBaseValue(CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveValue@CModifiedValue@@QEAAJPEAVCValue@@@Z
    long GetEffectiveValue(CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalk@CModifiedValue@@QEAAXW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    void ReferenceTrackerWalk(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExpectedReference@CModifiedValue@@QEAAXXZ
    void RemoveExpectedReference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaseValue@CModifiedValue@@QEAAJAEBVCValue@@W4BaseValueSource@@@Z
    long SetBaseValue(CValue const &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CModifiedValue@@QEAA@XZ
    ~CModifiedValue();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBaseValue@CModifiedValue@@AEAAJXZ
    long ClearBaseValue();
};
