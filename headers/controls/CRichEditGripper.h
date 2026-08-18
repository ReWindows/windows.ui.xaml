#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CRichEditGripper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRichEditGripper@@SAJPEAPEAV1@PEAVCREATEPARAMETERS@@@Z
    static long Create(CRichEditGripper * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGripperScreenRect@CRichEditGripper@@QEAA?AUXRECT_WH@@XZ
    XRECT_WH GetGripperScreenRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CRichEditGripper@@QEAAJXZ
    long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHitTargetDoubleTapped@CRichEditGripper@@QEAAJPEAVCEventArgs@@@Z
    long OnHitTargetDoubleTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHitTargetRightTapped@CRichEditGripper@@QEAAJPEAVCEventArgs@@@Z
    long OnHitTargetRightTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulation@CRichEditGripper@@QEAAJ_N0HHH@Z
    long OnManipulation(bool, bool, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CRichEditGripper@@QEAAJI@Z
    long Show(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCenterWorldCoordinate@CRichEditGripper@@QEAAJAEBUXPOINTF@@M@Z
    long UpdateCenterWorldCoordinate(XPOINTF const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThemeColor@CRichEditGripper@@QEAAJXZ
    long UpdateThemeColor();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRichEditGripper@@UEAA@XZ
    virtual ~CRichEditGripper();
};
