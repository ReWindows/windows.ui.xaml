#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CMenuFlyoutSubItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMenuFlyoutSubItem@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMenuFlyoutSubItem@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CMenuFlyoutSubItem@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CMenuFlyoutSubItem@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CMenuFlyoutSubItem@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
};
