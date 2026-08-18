#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace Diagnostics {
class RuntimeDictionaryKey {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RuntimeDictionaryKey@Diagnostics@@QEAA@AEBURuntimeDictionaryKeyData@1@@Z
    RuntimeDictionaryKey(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RuntimeDictionaryKey@Diagnostics@@QEAA@XZ
    ~RuntimeDictionaryKey();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKey@RuntimeDictionaryKey@Diagnostics@@AEBA?AVxstring_ptr@@XZ
    xstring_ptr GetKey() const;
};
} // namespace Diagnostics
