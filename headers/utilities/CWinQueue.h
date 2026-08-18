#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CWinQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CWinQueue@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@CWinQueue@@UEAAJPEAPEAXI@Z
    virtual long Get(void * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@CWinQueue@@UEAAPEAXXZ
    virtual void * GetHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWinQueue@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@CWinQueue@@UEAAXPEAX@Z
    virtual void Post(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CWinQueue@@UEAAJPEAX@Z
    virtual long Remove(void *);
};
