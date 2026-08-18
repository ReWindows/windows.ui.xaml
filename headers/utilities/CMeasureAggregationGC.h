#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace Instrumentation {
class CMeasureAggregationGC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@CMeasureAggregationGC@Instrumentation@@QEAAX_J0@Z
    void AddData(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTelemetry@CMeasureAggregationGC@Instrumentation@@QEAAXXZ
    void LogTelemetry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPeriod@CMeasureAggregationGC@Instrumentation@@QEAAX_J0@Z
    void SetPeriod(int64_t, int64_t);
};
} // namespace Instrumentation
