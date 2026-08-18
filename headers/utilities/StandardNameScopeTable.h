#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace Jupiter::NameScoping {
class StandardNameScopeTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterName@StandardNameScopeTable@NameScoping@Jupiter@@UEAAXAEBVxstring_ptr_view@@@Z
    virtual void UnregisterName(xstring_ptr_view const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StandardNameScopeTable@NameScoping@Jupiter@@UEAA@XZ
    virtual ~StandardNameScopeTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNameImpl@StandardNameScopeTable@NameScoping@Jupiter@@EEAAXAEBVxstring_ptr_view@@$$QEAVNameScopeTableEntry@23@@Z
    virtual void RegisterNameImpl(xstring_ptr_view const &, ::Jupiter::NameScoping::NameScopeTableEntry &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetElementImpl@StandardNameScopeTable@NameScoping@Jupiter@@EEAA?AV?$xref_ptr@VCDependencyObject@@@@AEBVxstring_ptr_view@@PEA_N@Z
    virtual WindissectOpaque TryGetElementImpl(xstring_ptr_view const &, bool *);
};
} // namespace Jupiter::NameScoping
