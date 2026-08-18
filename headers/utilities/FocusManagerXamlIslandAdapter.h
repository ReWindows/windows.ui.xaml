#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace ContentRootAdapters {
class FocusManagerXamlIslandAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDepartFocus@FocusManagerXamlIslandAdapter@ContentRootAdapters@@UEBA_NW4FocusNavigationDirection@DirectUI@@@Z
    virtual bool ShouldDepartFocus(int) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeFocus@FocusManagerXamlIslandAdapter@ContentRootAdapters@@MEBA_NW4SyncMode@FocusAdapter@2@PEAUHWND__@@@Z
    virtual bool SynchronizeFocus(int, HWND__*) const;
};
} // namespace ContentRootAdapters
