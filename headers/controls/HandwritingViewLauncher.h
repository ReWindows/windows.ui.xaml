#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class HandwritingViewLauncher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchHandwritingView@HandwritingViewLauncher@@QEAAJ_NPEA_N@Z
    long LaunchHandwritingView(bool, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandwritingViewLauncher@@QEAA@XZ
    ~HandwritingViewLauncher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHandwritingViewPopup@HandwritingViewLauncher@@AEAAJ_N0@Z
    long CreateHandwritingViewPopup(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitHandwritingView@HandwritingViewLauncher@@AEAAJ_N@Z
    long InitHandwritingView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PickInitialHostType@HandwritingViewLauncher@@AEAAJAEAW4HandwritingViewHostType@CHandwritingView@@@Z
    long PickInitialHostType(int &);
};
