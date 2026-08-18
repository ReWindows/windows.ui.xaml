#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace xref::details {
class control_block {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStrong_nz@control_block@details@xref@@QEAA_NXZ
    bool AddStrong_nz();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWeak@control_block@details@xref@@QEAAIXZ
    unsigned int ReleaseWeak();
    // Category: Method | Source: PDB Internal
    // Symbol: ?expired@control_block@details@xref@@QEBA_NXZ
    bool expired() const;
};
} // namespace xref::details
