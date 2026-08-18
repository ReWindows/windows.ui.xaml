#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class XamlNativeRuntime {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAmbientValue@XamlNativeRuntime@@UEAAJAEBUXamlQualifiedObject@@AEBUXamlPropertyToken@@AEAU2@@Z
    virtual long GetAmbientValue(XamlQualifiedObject const &, XamlPropertyToken const &, XamlQualifiedObject &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeTokenForDO@XamlNativeRuntime@@SAJPEAVCDependencyObject@@AEAUXamlTypeToken@@@Z
    static long GetTypeTokenForDO(CDependencyObject *, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@XamlNativeRuntime@@UEAAJAEBUXamlQualifiedObject@@AEBUXamlPropertyToken@@AEAU2@@Z
    virtual long GetValue(XamlQualifiedObject const &, XamlPropertyToken const &, XamlQualifiedObject &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlNativeRuntime@@UEAA@XZ
    virtual ~XamlNativeRuntime();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCore@XamlNativeRuntime@@IEAAJPEAPEAVCCoreServices@@@Z
    long GetCore(CCoreServices * *);
};
