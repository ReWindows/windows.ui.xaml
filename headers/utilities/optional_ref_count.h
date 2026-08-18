#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace xref::details {
class optional_ref_count {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@optional_ref_count@details@xref@@QEAAIXZ
    unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadSafeAddRef@optional_ref_count@details@xref@@QEAAIXZ
    unsigned int ThreadSafeAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadSafeRelease@optional_ref_count@details@xref@@QEAAIXZ
    unsigned int ThreadSafeRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ensure_control_block@optional_ref_count@details@xref@@QEAAPEAVcontrol_block@23@XZ
    WindissectOpaque * ensure_control_block();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1optional_ref_count@details@xref@@QEAA@XZ
    ~optional_ref_count();
};
} // namespace xref::details
