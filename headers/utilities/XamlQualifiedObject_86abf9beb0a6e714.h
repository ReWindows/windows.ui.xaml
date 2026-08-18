#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class XamlQualifiedObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachValue@XamlQualifiedObject@@QEAAJ$$QEAVCValue@@@Z
    long AttachValue(CValue &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachValue@XamlQualifiedObject@@QEAAJAEBUXamlTypeToken@@$$QEAVCValue@@@Z
    long AttachValue(XamlTypeToken const &, CValue &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@XamlQualifiedObject@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertForManaged@XamlQualifiedObject@@QEBAJAEAU1@@Z
    long ConvertForManaged(XamlQualifiedObject &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCopyAsString@XamlQualifiedObject@@QEBAJPEAVxstring_ptr@@@Z
    long GetCopyAsString(xstring_ptr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@XamlQualifiedObject@@QEBA_NXZ
    bool IsEmpty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@XamlQualifiedObject@@QEAAJAEBUXamlTypeToken@@AEBVCValue@@@Z
    long SetValue(XamlTypeToken const &, CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@XamlQualifiedObject@@QEAAJAEBVCValue@@@Z
    long SetValue(CValue const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlQualifiedObject@@QEAA@$$QEAU0@@Z
    XamlQualifiedObject(XamlQualifiedObject &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlQualifiedObject@@QEAA@XZ
    ~XamlQualifiedObject();
};
