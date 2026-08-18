#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace RuntimeProfiler {
class CDynamicProfiler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDynamicProfiler@CDynamicProfiler@RuntimeProfiler@@SAPEAV12@W4ProfileGroup@2@@Z
    static WindissectOpaque * CreateDynamicProfiler(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCounterBuffer@CDynamicProfiler@RuntimeProfiler@@UEAAPEAJXZ
    virtual long * GetCounterBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterType@CDynamicProfiler@RuntimeProfiler@@UEAAXW4StableXbfTypeIndex@Parser@@PECJ@Z
    virtual void RegisterType(int, long volatile *);
};
} // namespace RuntimeProfiler
