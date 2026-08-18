#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CBringIntoViewRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CBringIntoViewRequestedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBringIntoViewRequestedEventArgs@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffset@CBringIntoViewRequestedEventArgs@@QEAAJN@Z
    long put_HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetElement@CBringIntoViewRequestedEventArgs@@QEAAJPEAVCUIElement@@@Z
    long put_TargetElement(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalOffset@CBringIntoViewRequestedEventArgs@@QEAAJN@Z
    long put_VerticalOffset(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBringIntoViewRequestedEventArgs@@UEAA@XZ
    virtual ~CBringIntoViewRequestedEventArgs();
};
