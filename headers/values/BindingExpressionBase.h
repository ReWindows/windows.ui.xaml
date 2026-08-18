#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class BindingExpressionBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChanged@BindingExpressionBase@DirectUI@@UEAAXW4Theme@Theming@@_NAEA_N@Z
    virtual void NotifyThemeChanged(int, bool, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BindingExpressionBase@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
