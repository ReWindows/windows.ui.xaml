#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace Jupiter::NameScoping {
class NameScopeRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNameScope@NameScopeRoot@NameScoping@Jupiter@@QEAAXPEBVCDependencyObject@@PEAVCTemplateContent@@@Z
    void EnsureNameScope(CDependencyObject const *, CTemplateContent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedObjectIfExists@NameScopeRoot@NameScoping@Jupiter@@QEAA?AV?$xref_ptr@VCDependencyObject@@@@AEBVxstring_ptr_view@@PEBVCDependencyObject@@W4NameScopeType@23@@Z
    WindissectOpaque GetNamedObjectIfExists(xstring_ptr_view const &, CDependencyObject const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNameScopeIfExists@NameScopeRoot@NameScoping@Jupiter@@QEAAXPEBVCDependencyObject@@W4NameScopeType@23@@Z
    void RemoveNameScopeIfExists(CDependencyObject const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamedObject@NameScopeRoot@NameScoping@Jupiter@@QEAAXAEBVxstring_ptr_view@@PEBVCDependencyObject@@W4NameScopeType@23@V?$weakref_ptr@VCDependencyObject@@@xref@@@Z
    void SetNamedObject(xstring_ptr_view const &, CDependencyObject const *, int, WindissectOpaque);
};
} // namespace Jupiter::NameScoping
