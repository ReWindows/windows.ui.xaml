#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CHandwritingControlView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHandwritingControlView@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CHandwritingControlView@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHandwritingControlView@@QEAAJPEAVCHandwritingView@@@Z
    long Initialize(CHandwritingView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CHandwritingControlView@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CHandwritingControlView@@QEAAJXZ
    long Uninitialize();
};
