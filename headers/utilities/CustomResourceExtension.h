#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CustomResourceExtension {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CustomResourceExtension@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideValueByPropertyIndex@CustomResourceExtension@@QEBAJW4KnownPropertyIndex@@AEAVCValue@@@Z
    long ProvideValueByPropertyIndex(int, CValue &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomResourceExtension@@UEAA@XZ
    virtual ~CustomResourceExtension();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CustomResourceExtension@@AEAA@PEAVCCoreServices@@@Z
    CustomResourceExtension(CCoreServices *);
};
