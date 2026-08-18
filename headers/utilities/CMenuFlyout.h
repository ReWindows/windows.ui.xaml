#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CMenuFlyout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMenuFlyout@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMenuFlyout@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyboardAcceleratorFlyoutItemEnter@CMenuFlyout@@SAJPEAVCDependencyObject@@0W4KnownPropertyIndex@@UEnterParams@@@Z
    static long KeyboardAcceleratorFlyoutItemEnter(CDependencyObject *, CDependencyObject *, int, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyboardAcceleratorFlyoutItemLeave@CMenuFlyout@@SAJPEAVCDependencyObject@@0W4KnownPropertyIndex@@ULeaveParams@@@Z
    static long KeyboardAcceleratorFlyoutItemLeave(CDependencyObject *, CDependencyObject *, int, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CMenuFlyout@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMenuFlyout@@IEAA@PEAVCCoreServices@@@Z
    CMenuFlyout(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CMenuFlyout@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CMenuFlyout@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
};
