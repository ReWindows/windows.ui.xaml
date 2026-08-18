#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class QualifierContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowChanged@QualifierContext@@QEAAJII@Z
    long OnWindowChanged(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterChangedCallback@QualifierContext@@QEAAJPEAUIQualifierContextCallback@@W4QualifierFlags@@@Z
    long RegisterChangedCallback(IQualifierContextCallback *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QualifierContext@@QEAA@XZ
    ~QualifierContext();
};
