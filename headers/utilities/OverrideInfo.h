#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace Resources::ScopedResources {
class OverrideInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@OverrideInfo@ScopedResources@Resources@@QEAAXW4KnownPropertyIndex@@AEBVxstring_ptr@@@Z
    void Add(int, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Count@OverrideInfo@ScopedResources@Resources@@QEBA_KXZ
    uint64_t Count() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OverrideInfo@ScopedResources@Resources@@QEAA@AEBV012@@Z
    OverrideInfo(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OverrideInfo@ScopedResources@Resources@@QEAA@XZ
    ~OverrideInfo();
};
} // namespace Resources::ScopedResources
