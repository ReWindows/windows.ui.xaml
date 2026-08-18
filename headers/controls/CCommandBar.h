#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CCommandBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCommandBar@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCommandBar@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CCommandBar@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CCommandBar@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CCommandBar@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
};
