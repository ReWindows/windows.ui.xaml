#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace Instrumentation {
class XamlTraceSession {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppId@XamlTraceSession@Instrumentation@@QEAAPEBGXZ
    unsigned short const * GetAppId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionId@XamlTraceSession@Instrumentation@@QEAAPEBGXZ
    unsigned short const * GetSessionId();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlTraceSession@Instrumentation@@QEAA@XZ
    ~XamlTraceSession();
};
} // namespace Instrumentation
