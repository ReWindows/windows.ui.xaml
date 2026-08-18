#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DependencyLocator::Internal {
class ExternalDependencyStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroyed@ExternalDependencyStorage@Internal@DependencyLocator@@UEAAXPEAUILocalDependencyStorage@23@@Z
    virtual void Destroyed(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalStorageFromModule@ExternalDependencyStorage@Internal@DependencyLocator@@QEAAPEAUILocalDependencyStorage@23@PEBGP6AXQEAUHINSTANCE__@@0@Z_N@Z
    WindissectOpaque * GetLocalStorageFromModule(unsigned short const *, void ( *)(HINSTANCE__* const, unsigned short const *), bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@ExternalDependencyStorage@Internal@DependencyLocator@@SA?AV?$ProtectedResource@VExternalDependencyStorage@Internal@DependencyLocator@@@23@XZ
    static WindissectOpaque Instance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ExternalDependencyStorage@Internal@DependencyLocator@@QEAAXXZ
    void Reset();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExternalDependencyStorage@Internal@DependencyLocator@@AEAA@XZ
    ~ExternalDependencyStorage();
};
} // namespace DependencyLocator::Internal
