#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class OptimizedStyle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FaultInOwnedSetters@OptimizedStyle@@QEBAJAEBV?$xref_ptr@VCSetterBaseCollection@@@@@Z
    long FaultInOwnedSetters(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMutableSetterValueChanged@OptimizedStyle@@QEAAJQEAVCSetter@@@Z
    long NotifyMutableSetterValueChanged(CSetter * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seal@OptimizedStyle@@QEAAJXZ
    long Seal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToMutableSetters@OptimizedStyle@@QEBAXXZ
    void SubscribeToMutableSetters() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromMutableSetters@OptimizedStyle@@QEBAXXZ
    void UnsubscribeFromMutableSetters() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OptimizedStyle@@QEAA@XZ
    ~OptimizedStyle();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPeerRefIfNecessary@OptimizedStyle@@AEBAJPEAVCDependencyObject@@PEA_N@Z
    long AddPeerRefIfNecessary(CDependencyObject *, bool *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSetterInfo@OptimizedStyle@@AEAAJW4KnownPropertyIndex@@$$QEAVCValue@@@Z
    long AddSetterInfo(int, CValue &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OptimizedStyle@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptimizeSetterCollection@OptimizedStyle@@AEAAJPEAVCSetterBaseCollection@@_N@Z
    long OptimizeSetterCollection(CSetterBaseCollection *, bool);
};
