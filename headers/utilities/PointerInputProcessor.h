#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace ContentRootInput {
class PointerInputProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIslandMouseCaptureReleased@PointerInputProcessor@ContentRootInput@@QEAA_NXZ
    bool EnsureIslandMouseCaptureReleased();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoReplayPointerEnabled@PointerInputProcessor@ContentRootInput@@SA_NXZ
    static bool IsAutoReplayPointerEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputTypeTreatedLikeTouch@PointerInputProcessor@ContentRootInput@@QEAA_NW4XPointerInputType@@@Z
    bool IsInputTypeTreatedLikeTouch(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PointerInputProcessor@ContentRootInput@@QEAA@AEAVCInputManager@@@Z
    PointerInputProcessor(CInputManager &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PointerInputProcessor@ContentRootInput@@QEAA@AEBV01@@Z
    PointerInputProcessor(::ContentRootInput::PointerInputProcessor const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerEnterLeave@PointerInputProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@0IPEAVCPointerEventArgs@@HIIIIPEA_N@Z
    long ProcessPointerEnterLeave(CDependencyObject *, CDependencyObject *, unsigned int, CPointerEventArgs *, int, unsigned int, unsigned int, unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerInput@PointerInputProcessor@ContentRootInput@@QEAAJPEAUInputMessage@@PEAH@Z
    long ProcessPointerInput(InputMessage *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerLeave@PointerInputProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@IPEAVCPointerEventArgs@@II0I@Z
    long ProcessPointerLeave(CDependencyObject *, unsigned int, CPointerEventArgs *, unsigned int, unsigned int, CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRightTappedEventFromContextMenu@PointerInputProcessor@ContentRootInput@@QEAAJPEA_N@Z
    long RaiseRightTappedEventFromContextMenu(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllPointerCaptures@PointerInputProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@@Z
    long ReleaseAllPointerCaptures(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePointerCapture@PointerInputProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@PEAVCPointer@@@Z
    long ReleasePointerCapture(CDependencyObject *, CPointer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerCapture@PointerInputProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@PEAVCPointer@@PEAI@Z
    long SetPointerCapture(CDependencyObject *, CPointer *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerKeyModifiers@PointerInputProcessor@ContentRootInput@@SAJIPEAVCPointerEventArgs@@@Z
    static long SetPointerKeyModifiers(unsigned int, CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPrimaryPointerLastPosition@PointerInputProcessor@ContentRootInput@@QEAAJPEAUXPOINTF@@PEA_N@Z
    long TryGetPrimaryPointerLastPosition(XPOINTF *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PointerInputProcessor@ContentRootInput@@QEAA@XZ
    ~PointerInputProcessor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerCaptureEnterLeave@PointerInputProcessor@ContentRootInput@@AEAAJPEAVCDependencyObject@@00IPEAVCPointerEventArgs@@@Z
    long ProcessPointerCaptureEnterLeave(CDependencyObject *, CDependencyObject *, CDependencyObject *, unsigned int, CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldEventAlwaysPassThroughPopupLightDismissLayer@PointerInputProcessor@ContentRootInput@@AEAA_NW4MessageMap@@PEAUPointerInfo@@@Z
    bool ShouldEventAlwaysPassThroughPopupLightDismissLayer(int, PointerInfo *);
};
} // namespace ContentRootInput
