#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class DebugSettings {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DebugSettings@DirectUI@@QEAA@XZ
    DebugSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherQueueForThreadId@DebugSettings@DirectUI@@QEAA?AV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@K@Z
    WindissectOpaque GetDispatcherQueueForThreadId(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadDeinitialized@DebugSettings@DirectUI@@QEAAXXZ
    void OnThreadDeinitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadInitialized@DebugSettings@DirectUI@@QEAAXXZ
    void OnThreadInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableFrameRateCounterImpl@DebugSettings@DirectUI@@QEAAJPEAE@Z
    long get_EnableFrameRateCounterImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableRedrawRegionsImpl@DebugSettings@DirectUI@@QEAAJPEAE@Z
    long get_EnableRedrawRegionsImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOverdrawHeatMapEnabledImpl@DebugSettings@DirectUI@@QEAAJPEAE@Z
    long get_IsOverdrawHeatMapEnabledImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTextPerformanceVisualizationEnabledImpl@DebugSettings@DirectUI@@QEAAJPEAE@Z
    long get_IsTextPerformanceVisualizationEnabledImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableRedrawRegionsImpl@DebugSettings@DirectUI@@QEAAJE@Z
    long put_EnableRedrawRegionsImpl(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DebugSettings@DirectUI@@UEAA@XZ
    virtual ~DebugSettings();
};
} // namespace DirectUI
