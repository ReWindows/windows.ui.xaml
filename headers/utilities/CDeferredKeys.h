#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CDeferredKeys {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ensure@CDeferredKeys@@QEAAJXZ
    long Ensure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAll@CDeferredKeys@@QEAAJXZ
    long EnsureAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CDeferredKeys@@QEBA_NXZ
    bool IsEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CDeferredKeys@@QEAAJAEBVxstring_ptr_view@@PEAI@Z
    long Load(xstring_ptr_view const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayNonDeferredContent@CDeferredKeys@@QEAAJPEAVObjectWriter@@@Z
    long PlayNonDeferredContent(ObjectWriter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeferredKeys@@QEAA@XZ
    ~CDeferredKeys();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayXaml@CDeferredKeys@@AEAAJI@Z
    long PlayXaml(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectReferencesFromStack@CDeferredKeys@@AEAAJXZ
    long RemoveObjectReferencesFromStack();
};
