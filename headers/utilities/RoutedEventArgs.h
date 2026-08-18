#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class RoutedEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHandled@RoutedEventArgs@DirectUI@@QEAAJPEAI@Z
    long IsHandled(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandled@RoutedEventArgs@DirectUI@@QEAAJI@Z
    long SetHandled(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginalSourceImpl@RoutedEventArgs@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_OriginalSourceImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OriginalSourceImpl@RoutedEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_OriginalSourceImpl(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@RoutedEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
};
} // namespace DirectUI
