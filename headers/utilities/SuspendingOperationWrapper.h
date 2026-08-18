#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace XAML::PLM {
class SuspendingOperationWrapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@SuspendingOperationWrapper@PLM@XAML@@UEAAJPEAPEAUISuspendingDeferral@ApplicationModel@Windows@@@Z
    virtual long GetDeferral(::Windows::ApplicationModel::ISuspendingDeferral * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wrap@SuspendingOperationWrapper@PLM@XAML@@SAJPEAUISuspendingOperation@ApplicationModel@Windows@@PEAVPLMHandler@23@PEAPEAU456@@Z
    static long Wrap(::Windows::ApplicationModel::ISuspendingOperation *, ::XAML::PLM::PLMHandler *, ::Windows::ApplicationModel::ISuspendingOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Deadline@SuspendingOperationWrapper@PLM@XAML@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_Deadline(WindissectOpaque *);
};
} // namespace XAML::PLM
