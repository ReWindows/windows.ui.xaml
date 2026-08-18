#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class XamlNamespace {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsXamlXmlNamespace@XamlNamespace@@UEAAPEAVXamlXmlNamespace@@XZ
    virtual XamlXmlNamespace * AsXamlXmlNamespace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeExtensionName@XamlNamespace@@QEAAJAEBVxstring_ptr@@PEAV2@@Z
    long GetTypeExtensionName(xstring_ptr const &, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConditional@XamlNamespace@@QEBA_NXZ
    bool IsConditional() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@XamlNamespace@@UEBAIAEBV1@@Z
    virtual unsigned int IsEqual(XamlNamespace const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetNamespace@XamlNamespace@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr get_TargetNamespace() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlNamespace@@UEAA@XZ
    virtual ~XamlNamespace();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlNamespace@@IEAA@Vxstring_ptr@@@Z
    XamlNamespace(xstring_ptr);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlNamespace@@IEAA@_KVxstring_ptr@@@Z
    XamlNamespace(uint64_t, xstring_ptr);
};
