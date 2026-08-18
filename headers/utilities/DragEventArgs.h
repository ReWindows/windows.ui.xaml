#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class DragEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferralImpl@DragEventArgs@DirectUI@@QEAAJPEAPEAUIDragOperationDeferral@Xaml@UI@Windows@@@Z
    long GetDeferralImpl(::Windows::UI::Xaml::IDragOperationDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDeferred@DragEventArgs@DirectUI@@SAJPEAVCDragEventArgs@@PEA_N@Z
    static long GetIsDeferred(CDragEventArgs *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataImpl@DragEventArgs@DirectUI@@QEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    long get_DataImpl(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragUIOverrideImpl@DragEventArgs@DirectUI@@QEAAJPEAPEAUIDragUIOverride@Xaml@UI@Windows@@@Z
    long get_DragUIOverrideImpl(::Windows::UI::Xaml::IDragUIOverride * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragEventArgs@DirectUI@@UEAA@XZ
    virtual ~DragEventArgs();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinRtDragInfo@DragEventArgs@DirectUI@@AEAAJPEAPEAUICoreDragInfo@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    long GetWinRtDragInfo(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * *);
};
} // namespace DirectUI
