#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace ctl {
class BetterAggregableCoreObjectActivationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@BetterAggregableCoreObjectActivationFactory@ctl@@QEAAJPEAUIInspectable@@PEAPEAU3@@Z
    long ActivateInstance(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@BetterAggregableCoreObjectActivationFactory@ctl@@QEAAJPEAUIInspectable@@PEAVCDependencyObject@@PEAPEAU3@@Z
    long ActivateInstance(IInspectable *, CDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstanceStatic@BetterAggregableCoreObjectActivationFactory@ctl@@SAJPEAUIInspectable@@PEAPEAU3@W4KnownTypeIndex@@_N3@Z
    static long ActivateInstanceStatic(IInspectable *, IInspectable * *, int, bool, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BetterAggregableCoreObjectActivationFactory@ctl@@QEAA@XZ
    BetterAggregableCoreObjectActivationFactory();
};
} // namespace ctl
