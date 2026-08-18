#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace XAML::PLM {
class SuspendingEventArgsWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wrap@SuspendingEventArgsWrapper@PLM@XAML@@SAJPEAUISuspendingEventArgs@ApplicationModel@Windows@@PEAVPLMHandler@23@PEAPEAU456@@Z
    static long Wrap(::Windows::ApplicationModel::ISuspendingEventArgs *, ::XAML::PLM::PLMHandler *, ::Windows::ApplicationModel::ISuspendingEventArgs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuspendingOperation@SuspendingEventArgsWrapper@PLM@XAML@@UEAAJPEAPEAUISuspendingOperation@ApplicationModel@Windows@@@Z
    virtual long get_SuspendingOperation(::Windows::ApplicationModel::ISuspendingOperation * *);
};
} // namespace XAML::PLM
