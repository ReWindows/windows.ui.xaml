#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class LazilyInitializedCriticalSection {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeinitializeValue@LazilyInitializedCriticalSection@DirectUI@@MEAAXPEAU_RTL_CRITICAL_SECTION@@@Z
    virtual void DeinitializeValue(_RTL_CRITICAL_SECTION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeValue@LazilyInitializedCriticalSection@DirectUI@@MEAAJPEAU_RTL_CRITICAL_SECTION@@@Z
    virtual long InitializeValue(_RTL_CRITICAL_SECTION *);
};
} // namespace DirectUI
