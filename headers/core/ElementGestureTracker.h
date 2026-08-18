#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class ElementGestureTracker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ElementGestureTracker@@QEAAXXZ
    void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementGestureTracker@@QEAA@PEAVCUIElement@@_N111W4ManipulationModes@DirectUI@@@Z
    ElementGestureTracker(CUIElement *, bool, bool, bool, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdle@ElementGestureTracker@@QEAA_NXZ
    bool IsIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInertiaInteraction@ElementGestureTracker@@QEAAXXZ
    void ProcessInertiaInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerMessage@ElementGestureTracker@@QEAAJAEBUInputMessage@@QEAUIPointerPointStatics@Input@UI@Windows@@@Z
    long ProcessPointerMessage(InputMessage const &, ::Windows::UI::Input::IPointerPointStatics * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ElementGestureTracker@@QEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAndReinitialize@ElementGestureTracker@@QEAAJPEAVCUIElement@@_N111W4ManipulationModes@DirectUI@@@Z
    long ResetAndReinitialize(CUIElement *, bool, bool, bool, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConfiguration@ElementGestureTracker@@QEAAJ_N000W4ManipulationModes@DirectUI@@UXPOINTF@@M@Z
    long SetConfiguration(bool, bool, bool, bool, int, XPOINTF, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ElementGestureTracker@@QEAAX_N@Z
    void Stop(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformClientToScreen@ElementGestureTracker@@QEAAXPEAUtagPOINT@@@Z
    void TransformClientToScreen(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformScreenToClient@ElementGestureTracker@@QEAAXPEAUtagPOINT@@@Z
    void TransformScreenToClient(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePeg@ElementGestureTracker@@QEAAX_N@Z
    void UpdatePeg(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementGestureTracker@@QEAA@XZ
    ~ElementGestureTracker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInteractionEngine@ElementGestureTracker@@AEAAJXZ
    long InitializeInteractionEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerInformation@ElementGestureTracker@@AEAAJAEBUInputMessage@@QEAUIPointerPointStatics@Input@UI@Windows@@@Z
    long ProcessPointerInformation(InputMessage const &, ::Windows::UI::Input::IPointerPointStatics * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseTie@ElementGestureTracker@@CA_NPEAVCUIElement@@@Z
    static bool ShouldUseTie(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDecrementPointerInteractionContexts@ElementGestureTracker@@AEAAXXZ
    void TryDecrementPointerInteractionContexts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSettings@ElementGestureTracker@@AEAAJ_N000W4ManipulationModes@DirectUI@@@Z
    long UpdateSettings(bool, bool, bool, bool, int);
};
