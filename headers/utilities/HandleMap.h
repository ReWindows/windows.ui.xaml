#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class HandleMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertyToMap@HandleMap@@QEAAX_K0HW4BaseValueSource@@H@Z
    void AddPropertyToMap(uint64_t, uint64_t, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHandle@HandleMap@@SAJPEAUIInspectable@@PEA_K@Z
    static long CreateHandle(IInspectable *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@HandleMap@@SA_KPEAUIInspectable@@@Z
    static uint64_t GetHandle(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@HandleMap@@SAJPEAVCDependencyObject@@PEA_K@Z
    static long GetHandle(CDependencyObject *, uint64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HandleMap@@QEAA@XZ
    HandleMap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasElement@HandleMap@@QEBA_N_K@Z
    bool HasElement(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseElement@HandleMap@@QEAAX_K@Z
    void ReleaseElement(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseProperties@HandleMap@@QEAAX_K@Z
    void ReleaseProperties(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandleMap@@QEAA@XZ
    ~HandleMap();
};
