#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace Diagnostics {
class RuntimeCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureItems@RuntimeCollection@Diagnostics@@UEAAXXZ
    virtual void EnsureItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryClear@RuntimeCollection@Diagnostics@@UEAA_NXZ
    virtual bool TryClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveAt@RuntimeCollection@Diagnostics@@UEAA_N_K@Z
    virtual bool TryRemoveAt(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RuntimeCollection@Diagnostics@@UEAA@XZ
    virtual ~RuntimeCollection();
};
} // namespace Diagnostics
