#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class XamlUICommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecuteImpl@XamlUICommand@DirectUI@@QEAAJPEAUIInspectable@@PEAE@Z
    long CanExecuteImpl(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteImpl@XamlUICommand@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long ExecuteImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCanExecuteChangedImpl@XamlUICommand@DirectUI@@QEAAJXZ
    long NotifyCanExecuteChangedImpl();
};
} // namespace DirectUI
