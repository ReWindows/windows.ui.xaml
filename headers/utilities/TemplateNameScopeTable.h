#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace Jupiter::NameScoping {
class TemplateNameScopeTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterName@TemplateNameScopeTable@NameScoping@Jupiter@@UEAAXAEBVxstring_ptr_view@@@Z
    virtual void UnregisterName(xstring_ptr_view const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TemplateNameScopeTable@NameScoping@Jupiter@@UEAA@XZ
    virtual ~TemplateNameScopeTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNameImpl@TemplateNameScopeTable@NameScoping@Jupiter@@EEAAXAEBVxstring_ptr_view@@$$QEAVNameScopeTableEntry@23@@Z
    virtual void RegisterNameImpl(xstring_ptr_view const &, ::Jupiter::NameScoping::NameScopeTableEntry &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetElementImpl@TemplateNameScopeTable@NameScoping@Jupiter@@EEAA?AV?$xref_ptr@VCDependencyObject@@@@AEBVxstring_ptr_view@@PEA_N@Z
    virtual WindissectOpaque TryGetElementImpl(xstring_ptr_view const &, bool *);
};
} // namespace Jupiter::NameScoping
