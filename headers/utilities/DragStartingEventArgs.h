#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DragStartingEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragStartingEventArgs@DirectUI@@QEAA@XZ
    DragStartingEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferralImpl@DragStartingEventArgs@DirectUI@@QEAAJPEAPEAUIDragOperationDeferral@Xaml@UI@Windows@@@Z
    long GetDeferralImpl(::Windows::UI::Xaml::IDragOperationDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionImpl@DragStartingEventArgs@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUPoint@Foundation@6@@Z
    long GetPositionImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRaiseEvent@DragStartingEventArgs@DirectUI@@QEAAJPEAV?$CRoutedEventSource@U?$ITypedEventHandler@PEAVUIElement@Xaml@UI@Windows@@PEAVDragStartingEventArgs@234@@Foundation@Windows@@UIUIElement@Xaml@UI@3@UIDragStartingEventArgs@563@@2@PEAUIUIElement@Xaml@UI@Windows@@AEBV?$TrackerPtrVector@U?$ITypedEventHandler@PEAVUIElement@Xaml@UI@Windows@@PEAVDragStartingEventArgs@234@@Foundation@Windows@@@2@AEBVbit_vector@containers@@@Z
    long StartRaiseEvent(WindissectOpaque *, ::Windows::UI::Xaml::IUIElement *, WindissectOpaque const &, ::containers::bit_vector const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragUIImpl@DragStartingEventArgs@DirectUI@@QEAAJPEAPEAUIDragUI@Xaml@UI@Windows@@@Z
    long get_DragUIImpl(::Windows::UI::Xaml::IDragUI * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragStartingEventArgs@DirectUI@@UEAA@XZ
    virtual ~DragStartingEventArgs();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeRaiseEvent@DragStartingEventArgs@DirectUI@@AEAAJXZ
    long ResumeRaiseEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOperationVisual@DragStartingEventArgs@DirectUI@@AEAAJXZ
    long SetOperationVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOrUpdateOperation@DragStartingEventArgs@DirectUI@@AEAAJXZ
    long StartOrUpdateOperation();
};
} // namespace DirectUI
