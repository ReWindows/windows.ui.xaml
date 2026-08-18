#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class BringIntoViewOptions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffsetImpl@BringIntoViewOptions@DirectUI@@QEAAJPEAN@Z
    long get_HorizontalOffsetImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffsetImpl@BringIntoViewOptions@DirectUI@@QEAAJPEAN@Z
    long get_VerticalOffsetImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffsetImpl@BringIntoViewOptions@DirectUI@@QEAAJN@Z
    long put_HorizontalOffsetImpl(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalOffsetImpl@BringIntoViewOptions@DirectUI@@QEAAJN@Z
    long put_VerticalOffsetImpl(double);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClampedAlignmentRatio@BringIntoViewOptions@DirectUI@@IEAAX_NN@Z
    void SetClampedAlignmentRatio(bool, double);
};
} // namespace DirectUI
