#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class XamlManagedRuntime {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAmbientValue@XamlManagedRuntime@@UEAAJAEBUXamlQualifiedObject@@AEBUXamlPropertyToken@@AEAU2@@Z
    virtual long GetAmbientValue(XamlQualifiedObject const &, XamlPropertyToken const &, XamlQualifiedObject &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@XamlManagedRuntime@@UEAAJAEBUXamlQualifiedObject@@AEBUXamlPropertyToken@@AEAU2@@Z
    virtual long GetValue(XamlQualifiedObject const &, XamlPropertyToken const &, XamlQualifiedObject &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlManagedRuntime@@UEAA@XZ
    virtual ~XamlManagedRuntime();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCore@XamlManagedRuntime@@IEAAJPEAPEAVCCoreServices@@@Z
    long GetCore(CCoreServices * *);
};
