#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class DragOperationDeferral {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteImpl@DragOperationDeferral@DirectUI@@QEAAJXZ
    long CompleteImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DragOperationDeferral@DirectUI@@QEAAJPEAUIDragOperationDeferralTarget@2@@Z
    long Initialize(::DirectUI::IDragOperationDeferralTarget *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragOperationDeferral@DirectUI@@UEAA@XZ
    virtual ~DragOperationDeferral();
};
} // namespace DirectUI
