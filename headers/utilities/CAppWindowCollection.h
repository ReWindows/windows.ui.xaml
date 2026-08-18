#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CAppWindowCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAppWindow@CAppWindowCollection@@QEAAPEAVCAppWindow@@PEAUIAppWindow@WindowManagement@UI@Windows@@@Z
    CAppWindow * AddAppWindow(::Windows::UI::WindowManagement::IAppWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindow@CAppWindowCollection@@QEAAPEAVCAppWindow@@H@Z
    CAppWindow * GetAppWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessLayoutCompleted@CAppWindowCollection@@QEAAJXZ
    long ProcessLayoutCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueForLayoutCompleted@CAppWindowCollection@@QEAAXPEAUIAppWindow@WindowManagement@UI@Windows@@@Z
    void QueueForLayoutCompleted(::Windows::UI::WindowManagement::IAppWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompSyncObject@CAppWindowCollection@@QEAAXXZ
    void ReleaseDCompSyncObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAppWindow@CAppWindowCollection@@QEAAXH@Z
    void RemoveAppWindow(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppWindowCollection@@QEAA@XZ
    ~CAppWindowCollection();
};
