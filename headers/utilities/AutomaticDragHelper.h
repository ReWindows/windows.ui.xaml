#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class AutomaticDragHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDirectManipulationDraggingStarted@AutomaticDragHelper@DirectUI@@QEAAJXZ
    long HandleDirectManipulationDraggingStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHoldingEventArgs@AutomaticDragHelper@DirectUI@@QEAAJPEAUIHoldingRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long HandleHoldingEventArgs(::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerCaptureLostEventArgs@AutomaticDragHelper@DirectUI@@QEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long HandlePointerCaptureLostEventArgs(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerMovedEventArgs@AutomaticDragHelper@DirectUI@@QEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long HandlePointerMovedEventArgs(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerPressedEventArgs@AutomaticDragHelper@DirectUI@@QEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long HandlePointerPressedEventArgs(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerReleasedEventArgs@AutomaticDragHelper@DirectUI@@QEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long HandlePointerReleasedEventArgs(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDetectingDrag@AutomaticDragHelper@DirectUI@@QEAAJXZ
    long StartDetectingDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDetectingDrag@AutomaticDragHelper@DirectUI@@QEAAJXZ
    long StopDetectingDrag();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutomaticDragHelper@DirectUI@@QEAA@XZ
    ~AutomaticDragHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOutsideDragRectangle@AutomaticDragHelper@DirectUI@@AEBA_NUPoint@Foundation@Windows@@0@Z
    bool IsOutsideDragRectangle(WindissectOpaque, WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDragPointerEvents@AutomaticDragHelper@DirectUI@@AEAAJXZ
    long RegisterDragPointerEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCheckingForMouseDrag@AutomaticDragHelper@DirectUI@@AEAAJPEAUIPointer@Input@Xaml@UI@Windows@@@Z
    long StopCheckingForMouseDrag(::Windows::UI::Xaml::Input::IPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterEvents@AutomaticDragHelper@DirectUI@@AEAAJXZ
    long UnregisterEvents();
};
} // namespace DirectUI
