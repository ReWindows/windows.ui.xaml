#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CSoftKeyboardHandlerImpl {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleOcclusionsChangedForHiding@CSoftKeyboardHandlerImpl@@AEAAJXZ
    long HandleOcclusionsChangedForHiding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleOcclusionsChangedForShowing@CSoftKeyboardHandlerImpl@@AEAAJPEAUtagRECT@@_N@Z
    long HandleOcclusionsChangedForShowing(tagRECT *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HidingImpl@CSoftKeyboardHandlerImpl@@AEAAJ_N@Z
    long HidingImpl(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowingImpl@CSoftKeyboardHandlerImpl@@AEAAJPEAUtagRECT@@_N1@Z
    long ShowingImpl(tagRECT *, bool, bool);
};
