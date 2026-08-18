#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CPropertyBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeclaringType@CPropertyBase@@QEBAPEBVCClassInfo@@XZ
    CClassInfo const * GetDeclaringType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CPropertyBase@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr GetName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextProperty@CPropertyBase@@QEBAPEBV1@XZ
    CPropertyBase const * GetNextProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyType@CPropertyBase@@QEBAPEBVCClassInfo@@XZ
    CClassInfo const * GetPropertyType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetType@CPropertyBase@@QEBAPEBVCClassInfo@@XZ
    CClassInfo const * GetTargetType() const;
};
