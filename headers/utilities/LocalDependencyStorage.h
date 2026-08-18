#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DependencyLocator::Internal {
class LocalDependencyStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@LocalDependencyStorage@Internal@DependencyLocator@@SAAEAV123@XZ
    static WindissectOpaque & Instance();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LocalDependencyStorage@Internal@DependencyLocator@@QEAA@XZ
    LocalDependencyStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@LocalDependencyStorage@Internal@DependencyLocator@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDestroyedCallback@LocalDependencyStorage@Internal@DependencyLocator@@UEAAXPEAUINotifyLocalDependencyStorageDestroyed@23@@Z
    virtual void SetDestroyedCallback(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalDependencyStorage@Internal@DependencyLocator@@QEAA@XZ
    ~LocalDependencyStorage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTls@LocalDependencyStorage@Internal@DependencyLocator@@AEAAXXZ
    void InitializeTls();
};
} // namespace DependencyLocator::Internal
