#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CDeferredMapping {
public:
    class DeferredInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapElementToDeclaringScope@CDeferredMapping@@SAXPEAVCCoreServices@@PEAVCDependencyObject@@1@Z
    static void MapElementToDeclaringScope(CCoreServices *, CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDestroyed@CDeferredMapping@@SAJPEAVCDependencyObject@@@Z
    static long NotifyDestroyed(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLeave@CDeferredMapping@@SAJPEAVCDependencyObject@@0_N@Z
    static long NotifyLeave(CDependencyObject *, CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyParentValueSet@CDeferredMapping@@SAJPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    static long NotifyParentValueSet(CDependencyObject *, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScopeDeferredStorage@CDeferredMapping@@CAPEAVCDeferredStorage@@PEAVCCoreServices@@PEAVCDependencyObject@@@Z
    static CDeferredStorage * GetScopeDeferredStorage(CCoreServices *, CDependencyObject *);
};
