#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class TimelineTimer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@TimelineTimer@DirectUI@@QEAAJXZ
    long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimerCallback@TimelineTimer@DirectUI@@QEAAJXZ
    long TimerCallback();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TimelineTimer@DirectUI@@UEAA@XZ
    virtual ~TimelineTimer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimerWindow@TimelineTimer@DirectUI@@AEAAJXZ
    long CreateTimerWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTimerWindowClass@TimelineTimer@DirectUI@@AEAAJXZ
    long EnsureTimerWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimerWindowProc@TimelineTimer@DirectUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t TimerWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
};
} // namespace DirectUI
