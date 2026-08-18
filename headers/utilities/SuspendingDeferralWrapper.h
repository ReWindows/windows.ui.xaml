#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace XAML::PLM {
class SuspendingDeferralWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@SuspendingDeferralWrapper@PLM@XAML@@UEAAJXZ
    virtual long Complete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wrap@SuspendingDeferralWrapper@PLM@XAML@@SAJPEAUISuspendingDeferral@ApplicationModel@Windows@@PEAVPLMHandler@23@PEAPEAU456@@Z
    static long Wrap(::Windows::ApplicationModel::ISuspendingDeferral *, ::XAML::PLM::PLMHandler *, ::Windows::ApplicationModel::ISuspendingDeferral * *);
};
} // namespace XAML::PLM
