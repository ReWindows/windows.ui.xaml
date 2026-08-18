#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CSplitViewPaneAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSplitViewPaneAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSplitViewPaneAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CSplitViewPaneAutomationPeer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
};
