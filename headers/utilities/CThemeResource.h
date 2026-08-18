#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CThemeResource {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThemeResource@@QEAA@PEAVCThemeResourceExtension@@@Z
    CThemeResource(CThemeResourceExtension *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshValue@CThemeResource@@QEAAJXZ
    long RefreshValue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CThemeResource@@QEAAIXZ
    unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastResolvedValue@CThemeResource@@QEAAJPEAVCDependencyObject@@@Z
    long SetLastResolvedValue(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeResourceBinding@CThemeResource@@QEAAJPEAVCDependencyObject@@PEBVCDependencyProperty@@PEAVCModifiedValue@@W4BaseValueSource@@@Z
    long SetThemeResourceBinding(CDependencyObject *, CDependencyProperty const *, CModifiedValue *, int);
};
