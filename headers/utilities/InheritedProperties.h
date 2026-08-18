#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class InheritedProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyNonLocallySetProperties@InheritedProperties@@QEAAJPEBV1@@Z
    long CopyNonLocallySetProperties(InheritedProperties const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopy@InheritedProperties@@SAJPEAVCDependencyObject@@PEAV1@PEAPEAV1@@Z
    static long CreateCopy(CDependencyObject *, InheritedProperties *, InheritedProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefault@InheritedProperties@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long CreateDefault(CCoreServices *, InheritedProperties * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrespondingInheritedProperty@InheritedProperties@@SAPEBVCDependencyProperty@@PEAVCDependencyObject@@PEBV2@@Z
    static CDependencyProperty const * GetCorrespondingInheritedProperty(CDependencyObject *, CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue@InheritedProperties@@SAJW4KnownPropertyIndex@@PEAVCValue@@@Z
    static long GetDefaultValue(int, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyFlag@InheritedProperties@@QEAAXPEBVCDependencyProperty@@W4InheritedPropertyFlag@@_N@Z
    void SetPropertyFlag(CDependencyProperty const *, int, bool);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InheritedProperties@@AEAA@XZ
    InheritedProperties();
};
