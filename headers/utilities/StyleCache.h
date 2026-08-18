#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class StyleCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@StyleCache@DirectUI@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameworkStyles@StyleCache@DirectUI@@QEAAJPEAPEAVResourceDictionary@2@@Z
    long GetFrameworkStyles(::DirectUI::ResourceDictionary * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyles@StyleCache@DirectUI@@QEAAJPEBG0PEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAVResourceDictionary@2@@Z
    long GetStyles(unsigned short const *, unsigned short const *, WindissectOpaque *, ::DirectUI::ResourceDictionary * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGenericXamlFilePathAvailableFromHosting@StyleCache@DirectUI@@QEBAIXZ
    unsigned int IsGenericXamlFilePathAvailableFromHosting() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGenericXamlFilePathAvailableFromMUX@StyleCache@DirectUI@@QEBA_NXZ
    bool IsGenericXamlFilePathAvailableFromMUX() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromFile@StyleCache@DirectUI@@SAJPEBGPEAPEAUIInspectable@@@Z
    static long LoadFromFile(unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStylesFromResource@StyleCache@DirectUI@@QEAAJAEBVxstring_ptr_view@@0PEAPEAVResourceDictionary@2@@Z
    long LoadStylesFromResource(xstring_ptr_view const &, xstring_ptr_view const &, ::DirectUI::ResourceDictionary * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadThemeResources@StyleCache@DirectUI@@QEAAJXZ
    long LoadThemeResources();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StyleCache@DirectUI@@QEAA@XZ
    StyleCache();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StyleCache@DirectUI@@QEAA@XZ
    ~StyleCache();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppStyles@StyleCache@DirectUI@@AEAAJPEAPEAVResourceDictionary@2@@Z
    long GetAppStyles(::DirectUI::ResourceDictionary * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStylesFromBuffer@StyleCache@DirectUI@@AEAAJAEBUXamlBuffer@Parser@@AEBVxstring_ptr_view@@1PEAPEAVResourceDictionary@2@@Z
    long LoadStylesFromBuffer(WindissectOpaque const &, xstring_ptr_view const &, xstring_ptr_view const &, ::DirectUI::ResourceDictionary * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStylesFromFile@StyleCache@DirectUI@@AEAAJPEBGPEAPEAVResourceDictionary@2@@Z
    long LoadStylesFromFile(unsigned short const *, ::DirectUI::ResourceDictionary * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStylesFromResourceUri@StyleCache@DirectUI@@AEAAJAEBVxstring_ptr@@PEAPEAVResourceDictionary@2@PEAI@Z
    long LoadStylesFromResourceUri(xstring_ptr const &, ::DirectUI::ResourceDictionary * *, unsigned int *);
};
} // namespace DirectUI
