#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDeferredStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProxy@CDeferredStorage@@QEAAJPEAVCDependencyObject@@00W4KnownPropertyIndex@@PEAVCDeferredElement@@@Z
    long AddProxy(CDependencyObject *, CDependencyObject *, CDependencyObject *, int, CDeferredElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyParentValueSet@CDeferredStorage@@QEAAJPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    long NotifyParentValueSet(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUnrealizedProxyNames@CDeferredStorage@@QEAAJPEAVCDependencyObject@@@Z
    long RegisterUnrealizedProxyNames(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveStorage@CDeferredStorage@@QEAAJPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    long RemoveStorage(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterUnrealizedProxyNames@CDeferredStorage@@QEAAJPEAVCDependencyObject@@@Z
    long UnregisterUnrealizedProxyNames(CDependencyObject *);
};
