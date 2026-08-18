#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class DispatcherImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DispatcherImpl@DirectUI@@QEAA@XZ
    DispatcherImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispatcherThread@DispatcherImpl@DirectUI@@UEAAIXZ
    virtual unsigned int OnDispatcherThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunAsync@DispatcherImpl@DirectUI@@UEAAJV?$ComPtr@VICallback@DirectUI@@@ctl@@I@Z
    virtual long RunAsync(WindissectOpaque, unsigned int);
};
} // namespace DirectUI
