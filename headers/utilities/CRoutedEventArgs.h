#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CRoutedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsRoutedEventArgs@CRoutedEventArgs@@UEAAPEAV1@XZ
    virtual CRoutedEventArgs * AsRoutedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CRoutedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameworkPeer@CRoutedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetFrameworkPeer(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PegManagedPeerForRoutedEventArgs@CRoutedEventArgs@@QEAAJXZ
    long PegManagedPeerForRoutedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@CRoutedEventArgs@@QEAAJPEAVCDependencyObject@@@Z
    long put_Source(CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRoutedEventArgs@@UEAA@XZ
    virtual ~CRoutedEventArgs();
};
