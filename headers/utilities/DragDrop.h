#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class DragDrop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfCustomVisualShouldBeCleared@DragDrop@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long CheckIfCustomVisualShouldBeCleared(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDragDrop@DragDrop@DirectUI@@QEAAJXZ
    long CleanupDragDrop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDragOperation@DragDrop@DirectUI@@QEAAJPEAPEAUICoreDragOperation@Core@1DataTransfer@ApplicationModel@Windows@@@Z
    long CreateDragOperation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragCancel@DragDrop@DirectUI@@QEAAJE@Z
    long DragCancel(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragMove@DragDrop@DirectUI@@QEAAJUPoint@Foundation@Windows@@PEAU345@E@Z
    long DragMove(WindissectOpaque, WindissectOpaque *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragStart@DragDrop@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDataPackage@DataTransfer@ApplicationModel@6@PEAVDragDropVisual@2@UPoint@Foundation@6@HE@Z
    long DragStart(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::ApplicationModel::DataTransfer::IDataPackage *, DragDropVisual *, WindissectOpaque, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@DragDrop@DirectUI@@QEAAJE@Z
    long Drop(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HidePrimaryDraggedItem@DragDrop@DirectUI@@QEAAJXZ
    long HidePrimaryDraggedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateDragEventArgs@DragDrop@DirectUI@@SAJPEAVCDragEventArgs@@@Z
    static long PopulateDragEventArgs(CDragEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragDrop@DirectUI@@QEAA@XZ
    ~DragDrop();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUserDragPosition@DragDrop@DirectUI@@AEAAJUPoint@Foundation@Windows@@@Z
    long UpdateUserDragPosition(WindissectOpaque);
};
} // namespace DirectUI
