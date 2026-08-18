#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace AccessKeys {
class AKModeContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateAccessKeyMode@AKModeContainer@AccessKeys@@QEAAJQEBUInputMessage@@PEA_N@Z
    long EvaluateAccessKeyMode(InputMessage const * const, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsActive@AKModeContainer@AccessKeys@@QEAAJ_N@Z
    long SetIsActive(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateAccessKeyMode@AKModeContainer@AccessKeys@@AEAAJ_NW4MessageMap@@W4VirtualKey@System@Windows@@00PEA_N@Z
    long EvaluateAccessKeyMode(bool, int, int, bool, bool, bool *);
};
} // namespace AccessKeys
