#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class XcpAllocation {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OSMemoryAllocateFailFast@XcpAllocation@@YAPEAX_K@Z
    void * OSMemoryAllocateFailFast(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OSMemoryAllocateNoFailFast@XcpAllocation@@YAPEAX_K@Z
    void * OSMemoryAllocateNoFailFast(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OSMemoryAllocateZeroMemoryFailFast@XcpAllocation@@YAPEAX_K@Z
    void * OSMemoryAllocateZeroMemoryFailFast(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OSMemoryFree@XcpAllocation@@YAXPEAX@Z
    void OSMemoryFree(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OSMemoryResize@XcpAllocation@@YAPEAXPEAX_K@Z
    void * OSMemoryResize(void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportMemoryPressureToGC@XcpAllocation@@YAX_N@Z
    void ReportMemoryPressureToGC(bool);
};
