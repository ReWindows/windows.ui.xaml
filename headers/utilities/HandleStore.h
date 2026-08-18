#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace XamlDiagnosticsShared {
class HandleStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElement@HandleStore@XamlDiagnosticsShared@@QEAAXPEAUIInspectable@@@Z
    void AddElement(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElement@HandleStore@XamlDiagnosticsShared@@QEAAX_K@Z
    void AddElement(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProperty@HandleStore@XamlDiagnosticsShared@@QEAAX_K0H@Z
    void AddProperty(uint64_t, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHandle@HandleStore@XamlDiagnosticsShared@@SAJPEAUIInspectable@@PEA_K@Z
    static long CreateHandle(IInspectable *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElementOrProperty@HandleStore@XamlDiagnosticsShared@@QEAAJ_KPEAPEAUIInspectable@@@Z
    long FindElementOrProperty(uint64_t, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasElement@HandleStore@XamlDiagnosticsShared@@QEAA_NPEAUIInspectable@@@Z
    bool HasElement(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseElement@HandleStore@XamlDiagnosticsShared@@QEAAJ_K@Z
    long ReleaseElement(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandleStore@XamlDiagnosticsShared@@QEAA@XZ
    ~HandleStore();
};
} // namespace XamlDiagnosticsShared
