#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace Resources {
class ResourceResolver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCurrentDictionary@ResourceResolver@Resources@@SA?AV?$xref_ptr@VCResourceDictionary@@@@PEAVCResourceDictionary@@AEBVxstring_ptr@@_N@Z
    static WindissectOpaque FindCurrentDictionary(CResourceDictionary *, xstring_ptr const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCurrentDictionaryFromOwner@ResourceResolver@Resources@@SA?AV?$xref_ptr@VCResourceDictionary@@@@PEAVCResourceDictionary@@AEBVxstring_ptr@@_N@Z
    static WindissectOpaque FindCurrentDictionaryFromOwner(CResourceDictionary *, xstring_ptr const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveImplicitStyleKey@ResourceResolver@Resources@@SA?AV?$xref_ptr@VCStyle@@@@PEAVCDependencyObject@@AEBVxstring_ptr@@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    static WindissectOpaque ResolveImplicitStyleKey(CDependencyObject *, xstring_ptr const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveResourceRuntime@ResourceResolver@Resources@@SA?BUResolvedResource@2@PEAVCDependencyObject@@PEAVCResourceDictionary@@AEBVxstring_ptr@@W4ResourceType@@@Z
    static ::Resources::ResolvedResource ResolveResourceRuntime(CDependencyObject *, CResourceDictionary *, xstring_ptr const &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStyleContext@ResourceResolver@Resources@@CAXPEAVCStyle@@PEAVCResourceDictionary@@_N@Z
    static void AddStyleContext(CStyle *, CResourceDictionary *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FallbackGetKeyForResourceResolutionNoRef@ResourceResolver@Resources@@CAJPEAVCCoreServices@@AEBVxstring_ptr_view@@W4LookupScope@2@PEAPEAVCDependencyObject@@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    static long FallbackGetKeyForResourceResolutionNoRef(CCoreServices *, xstring_ptr_view const &, int, CDependencyObject * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindResolvedValueNoRefImpl@ResourceResolver@Resources@@CAPEAVCDependencyObject@@PEAV3@AEBVxstring_ptr@@_NPEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    static CDependencyObject * FindResolvedValueNoRefImpl(CDependencyObject *, xstring_ptr const &, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindResolvedValueNoRefLegacyImpl@ResourceResolver@Resources@@CAPEAVCDependencyObject@@PEAV3@AEBVxstring_ptr@@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    static CDependencyObject * FindResolvedValueNoRefLegacyImpl(CDependencyObject *, xstring_ptr const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAmbientValuesRuntime@ResourceResolver@Resources@@CAXPEAVCDependencyObject@@AEAU?$stack_vector@V?$xref_ptr@VCDependencyObject@@@@$07@Jupiter@@@Z
    static void GetAmbientValuesRuntime(CDependencyObject *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDictionaryForThemeReference@ResourceResolver@Resources@@CA?AV?$xref_ptr@VCResourceDictionary@@@@PEAVCCoreServices@@PEAVCResourceDictionary@@1@Z
    static WindissectOpaque GetDictionaryForThemeReference(CCoreServices *, CResourceDictionary *, CResourceDictionary *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplate@ResourceResolver@Resources@@CA_NPEBVCDependencyObject@@@Z
    static bool IsTemplate(CDependencyObject const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveImplicitStyleKeyImpl@ResourceResolver@Resources@@CA?AV?$xref_ptr@VCStyle@@@@PEAVCDependencyObject@@AEBVxstring_ptr@@_NPEAW4ImplicitStyleProvider@@PEAV?$weakref_ptr@VCUIElement@@@xref@@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    static WindissectOpaque ResolveImplicitStyleKeyImpl(CDependencyObject *, xstring_ptr const &, bool, int *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryResolveResourceFromCachedParserContext@ResourceResolver@Resources@@CA?BUResolvedResource@2@PEAVCDependencyObject@@AEBVxstring_ptr@@W4ResourceType@@PEA_N@Z
    static ::Resources::ResolvedResource TryResolveResourceFromCachedParserContext(CDependencyObject *, xstring_ptr const &, int, bool *);
};
} // namespace Resources
