#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class DefaultStyles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImmersiveResource@DefaultStyles@DirectUI@@QEAAJPEAVCResourceDictionary@@AEBVxstring_ptr_view@@PEAI@Z
    long EnsureImmersiveResource(CResourceDictionary *, xstring_ptr_view const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultStyleByKey@DefaultStyles@DirectUI@@QEAAJPEAVDependencyObject@2@PEAPEAVStyle@2@@Z
    long GetDefaultStyleByKey(::DirectUI::DependencyObject *, ::DirectUI::Style * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGenericXamlFilePath@DefaultStyles@DirectUI@@QEAAJPEAUIXamlUIPresenterHost@Hosting@Xaml@UI@Windows@@PEAPEAG@Z
    long GetGenericXamlFilePath(::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyleVersionIdentifier@DefaultStyles@DirectUI@@SAXPEAVxstring_ptr@@@Z
    static void GetStyleVersionIdentifier(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshImmersiveColors@DefaultStyles@DirectUI@@QEAAJXZ
    long RefreshImmersiveColors();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultStyleByTypeInfo@DefaultStyles@DirectUI@@AEAAJPEBVCClassInfo@@PEAPEAVStyle@2@@Z
    long GetDefaultStyleByTypeInfo(CClassInfo const *, ::DirectUI::Style * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultStyleByTypeName@DefaultStyles@DirectUI@@AEAAJAEBVxstring_ptr@@0PEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAVStyle@2@@Z
    long GetDefaultStyleByTypeName(xstring_ptr const &, xstring_ptr const &, WindissectOpaque *, ::DirectUI::Style * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveStyle@DefaultStyles@DirectUI@@AEAAJAEBVxstring_ptr@@PEAVResourceDictionary@2@PEAPEAVStyle@2@@Z
    long ResolveStyle(xstring_ptr const &, ::DirectUI::ResourceDictionary *, ::DirectUI::Style * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTypeName@DefaultStyles@DirectUI@@AEAAJPEAUIInspectable@@PEAVxstring_ptr@@1PEAPEBVCClassInfo@@@Z
    long ResolveTypeName(IInspectable *, xstring_ptr *, xstring_ptr *, CClassInfo const * *);
};
} // namespace DirectUI
