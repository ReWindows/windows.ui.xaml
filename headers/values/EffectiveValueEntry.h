#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class EffectiveValueEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearExpressionValue@EffectiveValueEntry@DirectUI@@QEAAXXZ
    void ClearExpressionValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseValue@EffectiveValueEntry@DirectUI@@QEBA?AV?$ComPtr@UIInspectable@@@ctl@@XZ
    WindissectOpaque GetBaseValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveValue@EffectiveValueEntry@DirectUI@@QEBA?AV?$ComPtr@UIInspectable@@@ctl@@XZ
    WindissectOpaque GetEffectiveValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalValue@EffectiveValueEntry@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long GetLocalValue(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalk@EffectiveValueEntry@DirectUI@@UEAA_NW4EReferenceTrackerWalkType@2@_N@Z
    virtual bool ReferenceTrackerWalk(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaseValue@EffectiveValueEntry@DirectUI@@QEAAJPEAUIInspectable@@W4BaseValueSource@@@Z
    long SetBaseValue(IInspectable *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpressionValue@EffectiveValueEntry@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long SetExpressionValue(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EffectiveValueEntry@DirectUI@@QEAA@XZ
    ~EffectiveValueEntry();
};
} // namespace DirectUI
