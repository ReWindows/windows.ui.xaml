#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class InitOnce {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDeinitialization@InitOnce@DirectUI@@MEAAXXZ
    virtual void PerformDeinitialization();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitOnceCallback@InitOnce@DirectUI@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitOnceCallback(_RTL_RUN_ONCE *, void *, void * *);
};
} // namespace DirectUI
