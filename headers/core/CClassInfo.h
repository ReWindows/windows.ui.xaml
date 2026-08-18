#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CClassInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProperty@CClassInfo@@QEBAPEBVCDependencyProperty@@XZ
    CDependencyProperty const * GetContentProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstEnterProperty@CClassInfo@@QEBAPEBVCEnterDependencyProperty@@XZ
    CEnterDependencyProperty const * GetFirstEnterProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstObjectProperty@CClassInfo@@QEBAPEBVCObjectDependencyProperty@@XZ
    CObjectDependencyProperty const * GetFirstObjectProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstProperty@CClassInfo@@QEBAPEBVCPropertyBase@@XZ
    CPropertyBase const * GetFirstProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstRenderProperty@CClassInfo@@QEBAPEBVCRenderDependencyProperty@@XZ
    CRenderDependencyProperty const * GetFirstRenderProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullName@CClassInfo@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr GetFullName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGuid@CClassInfo@@QEBAAEBU_GUID@@XZ
    _GUID const & GetGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CClassInfo@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr GetName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamespace@CClassInfo@@QEBAPEBVCNamespaceInfo@@XZ
    CNamespaceInfo const * GetNamespace() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnum@CClassInfo@@QEBA_NXZ
    bool IsEnum() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNumericType@CClassInfo@@QEBA_NXZ
    bool IsNumericType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunClassConstructorIfNecessary@CClassInfo@@QEAAJXZ
    long RunClassConstructorIfNecessary();
};
