#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace ContentRootInput {
class ActivationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFocusInput@ActivationManager@ContentRootInput@@QEAAJPEAUInputMessage@@PEAH@Z
    long ProcessFocusInput(InputMessage *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessWindowActivation@ActivationManager@ContentRootInput@@QEAAJ_N0PEAH@Z
    long ProcessWindowActivation(bool, bool, int *);
};
} // namespace ContentRootInput
