#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class FocusProperties {
public:
    class DefaultFocusChildrenIterable;
    class DefaultFocusChildrenIterator;
    class FocusChildrenIteratorWrapper;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusChildrenInTabOrderIterator@FocusProperties@@YA?AVFocusChildrenIteratorWrapper@1@QEAVCDependencyObject@@@Z
    WindissectOpaque GetFocusChildrenInTabOrderIterator(CDependencyObject * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScrollable@FocusProperties@@YAXQEAVCDependencyObject@@QEA_N1@Z
    void IsScrollable(CDependencyObject * const, bool * const, bool * const);
};
