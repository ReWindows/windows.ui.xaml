#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace RichTextServices {
class TextRunProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualsForShaping@TextRunProperties@RichTextServices@@QEBAIPEBV12@@Z
    unsigned int EqualsForShaping(WindissectOpaque const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextRunProperties@RichTextServices@@QEAA@PEAVCFontTypeface@@M_N1HV?$weakref_ptr@VCDependencyObject@@@xref@@Vxstring_ptr@@3PEBVInheritedProperties@@@Z
    TextRunProperties(CFontTypeface *, float, bool, bool, int, WindissectOpaque, xstring_ptr, xstring_ptr, InheritedProperties const *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextRunProperties@RichTextServices@@MEAA@XZ
    virtual ~TextRunProperties();
};
} // namespace RichTextServices
