#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CAggMediaControlEvents {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@CAggMediaControlEvents@@UEAAXW4MTCTelemetryType@@AEBTMTCTelemetryData@@@Z
    virtual void AddData(int, MTCTelemetryData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CAggMediaControlEvents@@UEAAXXZ
    virtual void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTelemetry@CAggMediaControlEvents@@UEAAXXZ
    virtual void LogTelemetry();
};
