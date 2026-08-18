#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CFlyoutBase {
public:
    class OnPlacementUpdatedSubscriber;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CFlyoutBase@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlacementUpdated@CFlyoutBase@@QEAAJW4MajorPlacementMode@1@@Z
    long OnPlacementUpdated(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFlyoutBase@@UEAA@XZ
    virtual ~CFlyoutBase();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFlyoutBase@@IEAA@PEAVCCoreServices@@@Z
    CFlyoutBase(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CFlyoutBase@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CFlyoutBase@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
};
