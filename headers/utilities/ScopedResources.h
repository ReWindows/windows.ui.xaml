#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace Resources {
class ScopedResources {
public:
    class OverrideInfo;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateOverrideForVisualTree@ScopedResources@Resources@@YAJQEBVCDependencyObject@@AEBVxstring_ptr_view@@_NPEAPEAV3@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    long GetOrCreateOverrideForVisualTree(CDependencyObject const * const, xstring_ptr_view const &, bool, CDependencyObject * *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverrideKey@ScopedResources@Resources@@YA?AVxstring_ptr@@W4KnownPropertyIndex@@@Z
    xstring_ptr GetOverrideKey(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameFromCoreObject@ScopedResources@Resources@@YAJQEBVCDependencyObject@@PEAVxstring_ptr@@@Z
    long GetRuntimeClassNameFromCoreObject(CDependencyObject const * const, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetOrCreateOverrideForDictionary@ScopedResources@Resources@@YAJQEAVCResourceDictionary@@QEBVCDependencyObject@@QEBV3@AEBVxstring_ptr_view@@PEAPEAV4@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    long TryGetOrCreateOverrideForDictionary(CResourceDictionary * const, CDependencyObject const * const, CResourceDictionary const * const, xstring_ptr_view const &, CDependencyObject * *, WindissectOpaque *);
};
} // namespace Resources
