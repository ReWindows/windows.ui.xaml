#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class OffsetMemento {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@OffsetMemento@DirectUI@@QEAAEPEAV12@@Z
    unsigned char Equals(OffsetMemento *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOffset@OffsetMemento@DirectUI@@QEAANXZ
    double get_CurrentOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Delta@OffsetMemento@DirectUI@@QEAANXZ
    double get_Delta();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestedOffset@OffsetMemento@DirectUI@@QEAANXZ
    double get_RequestedOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnusedDelta@OffsetMemento@DirectUI@@QEAANXZ
    double get_UnusedDelta();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CurrentOffset@OffsetMemento@DirectUI@@QEAAJN@Z
    long put_CurrentOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Delta@OffsetMemento@DirectUI@@QEAAJN@Z
    long put_Delta(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequestedOffset@OffsetMemento@DirectUI@@QEAAJN@Z
    long put_RequestedOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UnusedDelta@OffsetMemento@DirectUI@@QEAAJN@Z
    long put_UnusedDelta(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OffsetMemento@DirectUI@@QEAA@XZ
    ~OffsetMemento();
};
} // namespace DirectUI
