#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class XamlProperty {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@XamlProperty@@QEAAJAEBUXamlQualifiedObject@@AEAU2@@Z
    long GetValue(XamlQualifiedObject const &, XamlQualifiedObject &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirective@XamlProperty@@UEBA_NXZ
    virtual bool IsDirective() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImplicit@XamlProperty@@UEBA_NXZ
    virtual bool IsImplicit() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullName@XamlProperty@@QEAAJPEAVxstring_ptr@@@Z
    long get_FullName(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@XamlProperty@@QEAAJPEAVxstring_ptr@@@Z
    long get_Name(xstring_ptr *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlProperty@@UEAA@XZ
    virtual ~XamlProperty();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolPropertyBit@XamlProperty@@IEAAJW4BoolPropertyBits@@AEAI@Z
    long GetBoolPropertyBit(int, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveBoolPropertyBits@XamlProperty@@IEAAJAEBV?$XamlBitSet@W4BoolPropertyBits@@@@@Z
    long RetrieveBoolPropertyBits(WindissectOpaque const &);
};
