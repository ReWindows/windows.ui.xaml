#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace Jupiter::VisualStateManager {
class DeferredNameScopeEntry {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeferredNameScopeEntry@VisualStateManager@Jupiter@@QEAA@V?$weakref_ptr@VCVisualStateGroupCollection@@@xref@@@Z
    DeferredNameScopeEntry(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetOrCreateElement@DeferredNameScopeEntry@VisualStateManager@Jupiter@@UEAA?AV?$xref_ptr@VCDependencyObject@@@@PEA_N@Z
    virtual WindissectOpaque TryGetOrCreateElement(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferredNameScopeEntry@VisualStateManager@Jupiter@@UEAA@XZ
    virtual ~DeferredNameScopeEntry();
};
} // namespace Jupiter::VisualStateManager
